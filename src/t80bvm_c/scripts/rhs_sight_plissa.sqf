/*
1g46 simulation for t80u/t90 tanks

a: reyhard
*/

if(isNull (uiNamespace getVariable ["RHS_1g42_Ctrl",displayNull]))then
{
	uiNameSpace setVariable ["RHS_1g42_Ctrl",_this select 0];

	_this spawn
	{
		private["_v","_t"];
		disableSerialization;
		_c = uiNamespace getVariable "RHS_1G42_Ctrl";

		rhs_key_opn_cmp_GLB=(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]);
		rhs_key_rng_up_GLB=(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]);
		rhs_key_rng_dwn_GLB=(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]);
		rhs_key_lase_tgt_GLB=(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]);
		rhs_key_dmp_lead_GLB=(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]);
		rhs_key_nxt_rnd_GLB=(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]);
		rhs_key_mode_chng_GLB=(profileNamespace getVariable ["rhs_key_mode_chng","SwimDown"]);

		_p=call rhs_fnc_findPlayer;
		_v = vehicle _p;

		_hide = true;
		_hide2 = true;
		_hideAll=true;
		_view = true;
		_change=true;
		_load=true;
		private _lockPos = [0,0,0];

		_k=0;
		_t=0;
		//range settings
		rhs_1v528_r100 = _v getVariable ["rhs_1v528_r100",0];
		rhs_1v528_r1000 =_v getVariable ["rhs_1v528_r1000",-1];
		//angle sensor
		rhs_1v528_dk =true;
		rhs_laserReady = true;
		rhs_trackActive = false;
		//next ammo
		rhs_loadType=_v getVariable ["rhs_loadType",1];
		//auto loader mode - default sequential loading on
		_rhs_loadMode=_v getVariable ["rhs_loadMode",1];


		//emergency sight
		_g = _c displayCtrl 1;
		//gun ready light
		_l = _c displayCtrl 2;
		//current ammo text
		_a = (_c displayCtrl 3);
		//range finder text
		_r = (_c displayCtrl 4);
		//ti sight
		_ti1 = (_c displayCtrl 5);
		//ti ssu wkl
		_ti2 = (_c displayCtrl 6);
		//ti osn
		_ti3 = (_c displayCtrl 7);
		//ti gun ready text
		_ti4 = (_c displayCtrl 8);
		//ti ammo
		_ti5 = (_c displayCtrl 9);
		//ti distance
		_ti6 = (_c displayCtrl 10);
		//ti auto target text
		_ti7 = (_c displayCtrl 21);
		//ti auto target status
		_ti8 = (_c displayCtrl 22);
		//current zoom
		_z = (_c displayCtrl 180);
		//range finder value
		_s = (_c displayCtrl 151);
		//curent mode
		_mode = (_c displayCtrl 154);
		//loader switch
		_loaderSwitch = (_c displayCtrl 312);
		//loader mode switch
		_loaderModeSwitch = (_c displayCtrl 313);


		//default is 1
		if(_rhs_loadMode isEqualTo 0)then
		{
			_loaderModeSwitch ctrlSetModel "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_off.p3d";
		};
		_v1=[[0,1],([74,25,47,0] select rhs_loadType)] call BIS_fnc_rotateVector2D;
		_loaderSwitch ctrlSetModelDirAndUp [[0,-1,0],[_v1 select 0, 0, _v1 select 1]];

		_texture="rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";

		_sMode1="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow.paa";
		_sMode2="rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_narrow_ready.paa";
		_sModeC=_sMode2;

		//different precalculated controls positions
		_gP1=[-8.35 *   (0.01875 *    Safezoneh),-11.11*   (0.025 *    SafezoneH),70 *   (0.01875 * SafezoneH),70.0 *   (0.025 * SafezoneH)];
		_gP2=[9.15 *   (0.01875 *    Safezoneh),4.5*   (0.025 *    SafezoneH),35 *   (0.01875 * SafezoneH),35.0 *   (0.025 * SafezoneH)];
		_lP=[15.14 *   (0.01875 *    Safezoneh),30.14*   (0.025 *    SafezoneH),1.6 *   (0.01875 * SafezoneH),1.0 *   (0.025 * SafezoneH)];


		_tiTextures=
		[
			_ti1,
			_ti2,
			_ti3,
			_ti4,
			_ti5,
			_ti6,
			_ti7,
			_ti8
		];
		_sightColor=
		[
			[_g,[1,1,1,1]],
			[_l,[1,1,1,1]],
			[_a,[1,0,0,1]],
			[_r,[1,0,0,1]]
		];
		{_x  ctrlSetTextColor [0.5,1,1,0];_x  ctrlSetBackgroundColor [0,0,0,0];}foreach _tiTextures;

		//fire on the move callculations
		_fireMove = _v addEventHandler ["fired",{_this call rhs_fnc_fireOnMove}];

		//blocking manual reload for player
		inGameUISetEventHandler ["Action", "(_this + ['RHS_1G42_Ctrl',1]) call rhs_fnc_autoloader_ui_eh;"];

		_mags = [_v] call rhs_fnc_ammoIndexing;

		while{not(isNull _g)}do
		{
			_lockPos = AGLtoASL (positionCameraToWorld [0,0,4210]);
			sleep 0.01;

			_currentMode=ctrlText _mode;
			//view change
			//TI MODE
			if(currentVisionMode _p== 2)then{

				//hide controls
				if(_hide)then{
					{(_x select 0) ctrlSetTextColor [0,0,0,0]}foreach _sightColor;
					_ti1 ctrlSetTextColor [1,1,1,0.8];
					if(_currentMode == "PERISCOPE")then{
						{_x ctrlSetTextColor [0,0,0,0];_x ctrlSetBackgroundColor [0,0,0,0];_x  ctrlSetBackgroundColor [0,0,0,0];}foreach [_ti3,_ti4,_ti5,_ti6,_ti7,_ti8];
						_ti2 ctrlSetTextColor [1,1,1,1];_ti2 ctrlSetBackgroundColor [0,0,0,1];
					}else{
						{_x  ctrlSetTextColor [1,1,1,1];_x ctrlSetBackgroundColor [0,0,0,1]}foreach [_ti3,_ti4,_ti5,_ti6,_ti7,_ti8];
						_ti2 ctrlSetTextColor [1,1,1,0];_ti2 ctrlSetBackgroundColor [1,1,1,0];
					};
					_hide=false;
					_hideAll=false;
				};
				//syncing ammo text
				_ti5 ctrlSetText (ctrlText _a);


				//handling of different view modes
				if(_hide2 AND {(_currentMode isEqualTo "TI1")})then
				{
					//hide controls
					{_x ctrlSetTextColor [0,0,0,0];_x ctrlSetBackgroundColor [0,0,0,0];_x  ctrlSetBackgroundColor [0,0,0,0];}foreach [_ti3,_ti4,_ti5,_ti6,_ti7,_ti8];
					_ti2 ctrlSetTextColor [1,1,1,1];_ti2 ctrlSetBackgroundColor [0,0,0,1];
					_ti1 ctrlSetText "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
					_hide2=false;
				}else{
					if(_currentMode isEqualTo "TI2" AND {not(_hide2)})then
					{
						//unhide controls
						{_x  ctrlSetTextColor [1,1,1,1];_x ctrlSetBackgroundColor [0,0,0,1]}foreach [_ti3,_ti4,_ti5,_ti6,_ti7,_ti8];
						_ti2 ctrlSetTextColor [1,1,1,0];_ti2 ctrlSetBackgroundColor [1,1,1,0];
						_ti1 ctrlSetText _sModeC;
						_hide2=true;
						_change=true;
						_ti1 ctrlSetPosition _gP2;
						_ti1 ctrlCommit 0;
					}else{
						if(_change AND {_currentMode  isEqualTo "TI3"})then{
							_ti1  ctrlSetPosition _gP1;
							_ti1  ctrlCommit 0;
							_change=false;
							_hide2=false;
						};
					};
					if(_currentMode  isEqualTo "AUTOTRACK")then{
						if( !(_v getVariable ["rhs_tracking",false]) && !(rhs_trackActive))then
						{
							_v lockCameraTo [_lockPos,[0]];
							sleep 0.01;
							_v lockCameraTo [objNull,[0]];
							_ti8 ctrlSetText "ГОТ";rhs_trackActive=true
						};
					}else{_ti8 ctrlSetText "ВЫКЛ";rhs_trackActive=false};
				};


				//ti lasing target
				//you cannot lase target in non auto mode. see balistic computer
				if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
				{
					_t=parseNumber ctrlText _s;
					if(_t > 250)then
					{
						sleep 0.5;
						[_v,_t,"RHS_1G42_Ctrl"] call rhs_fnc_sight_1g42_setElev;
						[_v,"RHS_1G42_Ctrl"] spawn rhs_fnc_autoTrack;
						_ti6 ctrlSetText (ctrlText _s);
					}else{
						playSound ["RHS_Error",TRUE];
						{_x ctrlSetText "----"}foreach [_r,_ti6];
					};
					// Call laser target function
					[_v, _t] call RHS_fnc_laserTarget;

					rhs_laserReady=false;

					[] spawn
					{
						sleep 3.5;
						rhs_laserReady = true;
					};
				};

			}else{
				//periscope mode
				if(_currentMode  isEqualTo "PERISCOPE")then
				{
					if(_hideAll)then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor [0.5,1,1,0]}foreach _sightColor;
						{_x  ctrlSetTextColor [1,1,1,0];_x  ctrlSetBackgroundColor [0,0,0,0];}foreach _tiTextures;
						_hideAll=false;
						_hide=true;
					};
				}else{
				//day light mode

					//lasing target
					//you cannot lase target in non auto mode. see balistic computer
					if(inputAction rhs_key_lase_tgt_GLB > 0 AND {rhs_1v528_r1000==-1} AND {rhs_laserReady})then
					{
						_t=parseNumber ctrlText _s;
						if(_t > 200 && _t < 5000)then
						{
							sleep 0.5;
							[_v,_t,"RHS_1G42_Ctrl"] call rhs_fnc_sight_1g42_setElev;
							_ti6 ctrlSetText (ctrlText _s);
						}else{
							playSound ["RHS_Error",TRUE];
							{_x ctrlSetText "----"}foreach [_r,_ti6];
						};

						// Call laser target function
						[_v, _t] call RHS_fnc_laserTarget;

						rhs_laserReady=false;

						[] spawn
						{
							sleep 3.5;
							rhs_laserReady = true;
						};
					};

					//ammo change

					if(not(_hideAll))then
					{
						//unhide controls
						{(_x select 0) ctrlSetTextColor (_x select 1)}foreach _sightColor;
						{_x  ctrlSetTextColor [0.5,1,1,0];_x  ctrlSetBackgroundColor [0,0,0,0];}foreach _tiTextures;
						_hide=true;
						_hide2=true;
						_hideAll=true;
					};
				};
			};

			//ready light & autoloader
			if(((_v animationPhase "reload_handler" != 0) OR (_v animationPhase "reload_handler_magazine" != 0) OR (_v doorPhase "recoil_source" !=0) ) AND {_load})then
			{
				_ti4 ctrlSetPosition [0,0,0,0];
				_ti4  ctrlCommit 0;
				_sModeC=_sMode1;
				if((_currentMode  != "TI1"))then{_ti1 ctrlSetText _sMode1};
				_l ctrlSetText "";
				_load=false;
				//autoloader
				[rhs_loadType,_v,_mags,_rhs_loadMode] spawn rhs_fnc_autoloader;
			}else{
				if(not(_load) AND {(_v animationPhase "reload_handler" == 0) AND (_v animationPhase "reload_handler_magazine" == 0) AND (_v doorPhase "recoil_source" ==0)} AND {(currentWeapon _v) == (_mags select 0)} )then
				{
					_ti4 ctrlSetPosition _lP;
					_ti4 ctrlCommit 0;
					_l ctrlSetText _texture;
					_sModeC=_sMode2;
					if((_currentMode  != "TI1"))then{_ti1 ctrlSetText _sMode2};
					_load=true;
				//hint "bla2";
				};
			};

			//autoloader mode switch
			_rhs_loadMode=[_loaderModeSwitch,_rhs_loadMode] call rhs_fnc_autoloaderSwitch;

			//autoloader ammo switch
			[_loaderSwitch,1] call rhs_fnc_ammoSwitch;

			//launch balistic computer
			["RHS_1G42_Ctrl",_v] call rhs_fnc_openBallisticMenu;
		};
		_v animate["lead",0];
		uiNameSpace setVariable ["RHS_1g42_Ctrl",displayNull];
		inGameUISetEventHandler ["Action", ""];
		_V removeEventHandler ["fired",_fireMove];
		//saving settings, useful when changing between seats
		{
			_v setVariable [_x select 0,_x select 1];
		}foreach [
			["rhs_1v528_r100",rhs_1v528_r100],
			["rhs_1v528_r1000",rhs_1v528_r1000],
			["rhs_loadType",rhs_loadType],
			["rhs_loadMode",_rhs_loadMode]
		];
	};
};