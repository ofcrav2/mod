serverinfo = ["79.137.98.57","2402","ofcra"];
onEachFrame{
    onEachFrame    {
        ctrlActivate (findDisplay 0 displayCtrl 105);
        onEachFrame{
            ctrlActivate (findDisplay 8 displayCtrl 166);
            onEachFrame{
                private _ctrlServerAddress = findDisplay 19 displayCtrl 2300;
                _ctrlServerAddress controlsGroupCtrl 101 ctrlSetText (serverinfo select 0);
                _ctrlServerAddress controlsGroupCtrl 102 ctrlSetText (serverinfo select 1);
                ctrlActivate (_ctrlServerAddress controlsGroupCtrl 1);
                onEachFrame{
                    findDisplay 8 displayCtrl 102 lbData 0 call{
                        if (diag_tickTime > (diag_tickTime + 30)) then{
							diag_log 'RCTS Timeout (no server)';
                            onEachFrame {};
                        };
                        if (_this isEqualTo ((serverinfo select 0) + ":" + (serverinfo select 1))) then{
                            findDisplay 8 displayCtrl 102 lbSetCurSel 0;
                            onEachFrame{
                                ctrlActivate (findDisplay 8 displayCtrl 105);
                                onEachFrame{
                                    if (diag_tickTime > (diag_tickTime + 30)) then{
                                        diag_log 'RCTS Timeout (cannot join)';
                                        onEachFrame {};
                                    };
                                    if (!isNull findDisplay 64) then{
                                        private _ctrlPassword = findDisplay 64 displayCtrl 101;
                                        _ctrlPassword ctrlSetTextColor [0,0,0,0];
                                        _ctrlPassword ctrlSetText (serverinfo select 2);
                                        ctrlActivate (findDisplay 64 displayCtrl 1);
                                    };
                                    if (getClientStateNumber >= 3) then{
                                        diag_log "RCTS Success";
                                        onEachFrame {};
                                    };
                                };
                            };
                        };
                    };
                };
            };
        };
    };
};