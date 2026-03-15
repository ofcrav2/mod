        class UserActions
		{
			class trunk_open
			{
				displayName="Use HMG";
				position="trunk_action";
				radius=4;
				onlyForplayer=0;
				shortcut="turnOut";
				condition="this animationPhase 'hatchcommander'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
				statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,0],true]] remoteExecCall ['lockTurret'];this animate ['optic_box',0]";
			};
			class trunk_close: trunk_open
			{
				displayName="Leave HMG";
				shortcut="turnIn";
				condition="vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,1] == (call rhsusf_fnc_findPlayer)";
				statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret'];this animate ['optic_box',1]";
			};
			class Deploy_shovel
			{
				displayName="Deploy shovel";
				position="pos driver";
				radius=15;
				onlyForplayer=0;
				condition="this doorPhase 'deploy_shovel' == 0";
				statement="this animateDoor ['deploy_shovel', 1]";
				shortcut="user12";
			};
			class retract_shovel : Deploy_shovel
			{
				displayName="retract shovel";
				condition="this doorPhase 'deploy_shovel' == 1";
				statement="this animateDoor ['deploy_shovel', 0]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call t80bvm_fnc_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80u_turret_F'] call rhs_fnc_turretBlow";
				engine="[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
				getOut="_this call t80bvm_fnc_hatch;_this call rhs_fnc_hatchAbandon";
			};
		};