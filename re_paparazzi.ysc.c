#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	struct<6> Local_75 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	var uLocal_97 = 15;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	struct<18> Local_131[4];
	struct<18> Local_204[8];
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	bool bLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	char* sLocal_371 = NULL;
	char[] cLocal_372[8] = 0;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	int iLocal_375[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_385 = 0;
	int iLocal_386[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_395[16];
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	int iLocal_560[3] = { 0, 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	float fLocal_569 = 0f;
	float fLocal_570 = 0f;
	int iLocal_571[2] = { 0, 0 };
	float fLocal_574 = 0f;
	vector3 vLocal_575 = { 0f, 0f, 0f };
	vector3 vLocal_578 = { 0f, 0f, 0f };
	vector3 vLocal_581 = { 0f, 0f, 0f };
	vector3 vLocal_584 = { 0f, 0f, 0f };
	vector3 vLocal_587 = { 0f, 0f, 0f };
	vector3 vLocal_590 = { 0f, 0f, 0f };
	vector3 vLocal_593 = { 0f, 0f, 0f };
	vector3 vLocal_596[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_609[4] = { 0f, 0f, 0f, 0f };
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	char* sLocal_626[3] = { NULL, NULL, NULL };
	int iLocal_630 = 0;
	char* sLocal_631 = NULL;
	vector3 vLocal_632 = { 0f, 0f, 0f };
	vector3 vLocal_635 = { 0f, 0f, 0f };
	float fLocal_638 = 0f;
	vector3 vLocal_639 = { 0f, 0f, 0f };
	vector3 vLocal_642 = { 0f, 0f, 0f };
	float fLocal_645 = 0f;
	vector3 vLocal_646 = { 0f, 0f, 0f };
	vector3 vLocal_649 = { 0f, 0f, 0f };
	float fLocal_652 = 0f;
	vector3 vLocal_653 = { 0f, 0f, 0f };
	vector3 vLocal_656 = { 0f, 0f, 0f };
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	float fLocal_661 = 0f;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	bool bLocal_664 = 0;
	float fLocal_665 = 0f;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	bool bLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	vLocal_53 = { 226.6825f, 681.0297f, 188.4987f };
	vLocal_56 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_59 = 32.0905f;
	StringCopy(&Local_75, "", 24);
	vLocal_87 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_90 = 283.0367f;
	vLocal_92 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_95 = -18.4743f;
	cLocal_372 = "REPAPAU";
	sLocal_373 = "random@escape_paparazzi@standing@";
	sLocal_374 = "random@escape_paparazzi@incar@";
	iLocal_565 = 4000;
	fLocal_569 = 0f;
	fLocal_570 = 0f;
	fLocal_574 = 0f;
	vLocal_575 = { 272.6356f, 155.5618f, 103.3306f };
	vLocal_578 = { 247.5795f, 88.7094f, 92.9859f };
	vLocal_581 = { 259.0348f, 114.0369f, 98.9984f };
	vLocal_584 = { 255.4971f, 116.8744f, 99.8162f };
	vLocal_587 = { 266.8217f, 139.7698f, 103.2269f };
	vLocal_590 = { 270.0174f, 139.1181f, 103.2195f };
	vLocal_593 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_631 = "left_";
	vLocal_632 = { 261.9341f, 126.2429f, 95.15405f };
	vLocal_635 = { 270.6759f, 152.4763f, 109.2356f };
	fLocal_638 = 16f;
	vLocal_639 = { 261.9341f, 126.2429f, 107.6541f };
	vLocal_642 = { 248.354f, 87.01792f, 92.389f };
	fLocal_645 = 16f;
	vLocal_646 = { 256.6779f, 126.573f, 99.54784f };
	vLocal_649 = { 266.4471f, 123.412f, 105.6728f };
	fLocal_652 = 5.75f;
	vLocal_653 = { 260.242f, 127.423f, 101.65f };
	vLocal_656 = { 0f, 0f, -20f };
	vLocal_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_281();
	}
	func_280(&uLocal_97, 3);
	if (!Global_3)
	{
		if (func_238(vLocal_50, -1, 0, 0, 0))
		{
			func_235(-1);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	iLocal_365 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), 0, 1, 1, 1);
	iLocal_366 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), 0, 1, 1, 1);
	iLocal_367 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), 0, 1, 1, 1);
	if (Global_3)
	{
		MISC::CLEAR_AREA(246.1673f, 92.1704f, 93.8361f, 6f, 1, 0, 0, false);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_232(&uLocal_97);
		if (!func_231())
		{
			if (func_230())
			{
				func_281();
			}
		}
		RECORDING::_0x208784099002BC30("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_131[iVar0 /*18*/], 0))
			{
				Local_131[iVar0 /*18*/].f_8 = { ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
			{
				Local_204[iVar0 /*18*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vLocal_60 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			vLocal_63 = { ENTITY::GET_ENTITY_COORDS(iLocal_86, true) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && !ENTITY::IS_ENTITY_DEAD(iLocal_91, 0))
		{
			vLocal_66 = { ENTITY::GET_ENTITY_COORDS(iLocal_91, true) };
		}
		if (!func_231())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_369)
				{
					case 0:
						if (func_221())
						{
							func_214();
							iLocal_369++;
						}
						else if (func_202())
						{
							func_281();
						}
						break;
					
					case 1:
						if ((func_201() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
						{
							if (!Global_3 && !bLocal_70)
							{
								func_200();
								func_281();
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.0074f, 192.4805f, 58.08817f, 228.8291f, 50.88667f, 111.6104f, 82.75f, 0, true, 0))
						{
							func_191(1);
							iLocal_360 = func_190(iLocal_86, 0, 145);
							func_189("MAG_2_ESCAPE_PAP_GET_CAR");
							func_188(0);
						}
						break;
				}
			}
			else
			{
				func_281();
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_47)
			{
				case 0:
					func_185();
					break;
				
				case 1:
					func_182();
					break;
				
				case 2:
					func_160();
					break;
				
				case 3:
					func_148();
					break;
				
				case 4:
					func_111();
					break;
				
				case 10:
					func_281();
					break;
				
				case 5:
					func_110();
					break;
				
				case 6:
					func_107(sLocal_371);
					break;
				
				case 7:
					func_106();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_105())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
						{
							PED::DELETE_PED(&iLocal_86);
						}
						func_81();
					}
					break;
				
				case 11:
					func_77();
					break;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_63, 210f, 210f, 210f, false, true, 0))
			{
				func_200();
				func_281();
			}
			if (((iLocal_47 != 5 && iLocal_47 != 6) && iLocal_47 != 10) && iLocal_47 != 7)
			{
				if (!Global_3 && !bLocal_70)
				{
					if (func_74(iLocal_86, 1, 1) || func_73())
					{
						if (iLocal_47 > 0)
						{
							func_188(5);
						}
						else
						{
							func_200();
							func_188(10);
						}
					}
					if (((iLocal_47 != 5 && iLocal_47 != 10) && iLocal_47 != 0) && iLocal_47 != 7)
					{
						if (func_69())
						{
							func_188(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_47 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (iLocal_74 || func_24() != 0))
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.6443f, 123.7193f, 97.59898f, 262.4353f, 116.8746f, 107.4762f, 32.25f, 0, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_564) > 5000) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar1 /*18*/], true), vLocal_60) < (30.5f * 30.5f) && SYSTEM::VDIST2(vLocal_63, vLocal_60) > (22.5f * 22.5f))
					{
						if (func_231())
						{
							if (Local_395[4 /*10*/] != Local_204[iVar1 /*18*/])
							{
								func_23(&Local_395, 4);
								func_22(&Local_395, 4, Local_204[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_663)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_564 = MISC::GET_GAME_TIMER();
									iLocal_663 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&vVar2, "REPAP_AZAA_0", 24);
							StringIntConCat(&vVar2, MISC::GET_RANDOM_INT_IN_RANGE(1, 13), 24);
							func_3(Local_204[iVar1 /*18*/], &vVar2, "PAPARAZZO", 24);
							iLocal_564 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_47 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x85F
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/]) < Local_204[iVar0 /*18*/].f_17)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_386[iVar0] = (iLocal_386[iVar0] + (Local_204[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/])));
					iLocal_82 = (iLocal_82 + (Local_204[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/])));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_204[iVar0 /*18*/]);
					if (iLocal_386[iVar0] > iLocal_385)
					{
						iLocal_385 = iLocal_386[iVar0];
					}
				}
			}
			Local_204[iVar0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_204[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x988
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)//Position - 0x9A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB93
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBE1
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_18();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_16();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_20();
	}
	return 0;
}

void func_7()//Position - 0xEB1
{
	if (!func_8())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_8()//Position - 0xEE8
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)//Position - 0xF4E
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, int iParam1)//Position - 0xF5E
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_11()//Position - 0xF79
{
	return -1;
}

void func_12()//Position - 0xF82
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_13()//Position - 0xFB2
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_14()//Position - 0x1047
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x106E
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()//Position - 0x1107
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_24();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

bool func_17(int iParam0)//Position - 0x11A9
{
	return Global_41396 == iParam0;
}

void func_18()//Position - 0x11B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)//Position - 0x120D
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1373500.f_1048, iParam0);
}

void func_20()//Position - 0x1248
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x129F
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_22(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x12F5
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_23(var uParam0, int iParam1)//Position - 0x1390
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()//Position - 0x13AD
{
	func_25();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_25()//Position - 0x13C6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_28(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_27(PLAYER::PLAYER_PED_ID());
			if (func_26(iVar0) && (!func_17(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_26(int iParam0)//Position - 0x14C3
{
	return iParam0 < 3;
}

int func_27(int iParam0)//Position - 0x14CF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)//Position - 0x150C
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)//Position - 0x1531
{
	return Global_1798[iParam0 /*29*/];
}

int func_30()//Position - 0x1540
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()//Position - 0x15C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_49)
	{
		case 0:
			iLocal_616 = 0;
			STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("cavalcade2"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			STREAMING::REQUEST_ANIM_DICT(sLocal_373);
			STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cavalcade2"))) && STREAMING::HAS_MODEL_LOADED(joaat("vader"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_373)) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims"))
			{
				vLocal_596[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				vLocal_596[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				vLocal_596[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				vLocal_596[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_609[0] = -111.1625f;
				fLocal_609[1] = 68.857f;
				fLocal_609[2] = -108.2056f;
				fLocal_609[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					func_68(iVar0);
					func_66(func_67(iVar0));
					func_66(func_65(iVar0));
					iVar0++;
				}
				iLocal_614 = 0;
				func_64(func_67(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_64(func_65(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_64(func_65(2), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_64(func_65(3), vLocal_596[1 /*3*/], fLocal_609[1]);
				func_63(0, vLocal_596[0 /*3*/], fLocal_609[0], 1);
				func_63(1, vLocal_596[1 /*3*/], fLocal_609[1], 0);
				ENTITY::SET_ENTITY_COORDS(func_62(0, 1), 265.408f, 151.2875f, 103.5673f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_62(0, 1), 217.1033f);
				ENTITY::SET_ENTITY_COORDS(func_62(2, 1), 245.9477f, 72.661f, 89.1067f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_62(2, 1), 38.6283f);
				ENTITY::SET_ENTITY_COORDS(func_62(3, 1), 244.1872f, 73.3336f, 89.0917f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(func_62(3, 1), 272.9875f);
				TASK::TASK_PLAY_ANIM(func_62(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_62(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_62(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_62(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(func_62(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			func_60(func_65(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_60(func_67(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_60(func_65(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_60(func_65(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_60(func_65(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[2 /*18*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_204[2 /*18*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_204[2 /*18*/].f_2, true, 0);
				}
			}
			switch (iLocal_616)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_62(1, 0)))
					{
						TASK::CLEAR_PED_TASKS(func_62(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_62(1, 1)))
					{
						TASK::CLEAR_PED_TASKS(func_62(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[2 /*18*/]))
					{
						func_63(2, vLocal_596[2 /*3*/], fLocal_609[2], 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[2 /*18*/], 0))
						{
							func_64(func_67(2), ENTITY::GET_ENTITY_COORDS(Local_131[2 /*18*/], true), 0f);
							PED::SET_PED_INTO_VEHICLE(func_62(2, 0), Local_131[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_131[3 /*18*/]))
					{
						func_63(3, vLocal_596[3 /*3*/], fLocal_609[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_62(2, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_62(2, 1), vLocal_581, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!PED::IS_PED_INJURED(func_62(3, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_62(3, 1), vLocal_584, 2f, -1, 1048576000, 0, 1193033728);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_62(3, 0)))
					{
						func_64(func_67(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_70)
					{
						if (!PED::IS_PED_INJURED(func_62(1, 0)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_62(1, 0), vLocal_587, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_62(1, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_62(1, 1), vLocal_590, 2f, 20000, 1048576000, 0, 1193033728);
						}
						if (!PED::IS_PED_INJURED(func_62(0, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_62(0, 1), vLocal_593, 2f, 20000, 1048576000, 0, 1193033728);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_204[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_131)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_131[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0);
						}
						iVar1++;
					}
					iLocal_616++;
					break;
				
				case 1:
					func_55();
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[0 /*18*/], 0) && !PED::IS_PED_INJURED(func_62(0, 0))) && !PED::IS_PED_INJURED(func_62(0, 1)))
					{
						if (!iLocal_571[1])
						{
							iLocal_571[1] = 1;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_62(0, 0), Local_131[0 /*18*/], vLocal_575, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[2 /*18*/], 0) && !PED::IS_PED_INJURED(func_62(2, 0))) && !PED::IS_PED_INJURED(func_62(2, 1)))
					{
						if (!iLocal_571[0])
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_62(2, 0), Local_131[2 /*18*/], vLocal_578, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_571[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
					{
						func_52(iLocal_86, 6);
						if (Global_3 || bLocal_70)
						{
							if (!PED::IS_PED_INJURED(func_62(1, 0)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_62(1, 0), vLocal_587, Global_22, false, true, 0))
								{
									func_51(iLocal_86, func_67(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_62(1, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_62(1, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_51(iLocal_86, func_65(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_62(0, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_62(0, 1), vLocal_590, Global_22, false, true, 0))
								{
									func_51(iLocal_86, func_65(0));
								}
							}
						}
						else
						{
							func_52(iLocal_86, func_67(1));
							func_52(iLocal_86, func_65(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_52(iLocal_86, func_67(1));
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_91, true), vLocal_87) < 9f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_62(2, 1), vLocal_581, Global_22, false, true, 0))
						{
							func_51(iLocal_86, func_65(2));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_62(3, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_51(iLocal_86, func_65(3));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_62(0, 1), vLocal_584, Global_22, false, true, 0))
						{
							func_51(iLocal_86, func_65(0));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_619, 3))
						{
							TASK::CLEAR_PED_TASKS(Local_204[func_65(3) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 3);
						}
						if (!MISC::IS_BIT_SET(iLocal_619, 2))
						{
							TASK::CLEAR_PED_TASKS(Local_204[func_65(2) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 2);
						}
						if (!MISC::IS_BIT_SET(iLocal_619, 0))
						{
							TASK::CLEAR_PED_TASKS(Local_204[func_65(0) /*18*/]);
							MISC::SET_BIT(&iLocal_619, 0);
						}
						if (Global_3 || bLocal_70)
						{
							func_51(iLocal_86, func_65(3));
						}
						else
						{
							func_52(iLocal_86, func_65(3));
						}
						func_52(iLocal_86, func_65(2));
						func_52(iLocal_86, func_65(0));
					}
					break;
			}
			func_50();
			break;
		
		case 3:
			func_55();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_91) < 1f)
				{
					fLocal_574 = (fLocal_574 + MISC::GET_FRAME_TIME());
				}
				else if (fLocal_574 > 0f)
				{
					fLocal_574 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]) && iLocal_47 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_614 || !ENTITY::DOES_ENTITY_EXIST(Local_131[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_131[1 /*18*/]))) && (MISC::GET_GAME_TIMER() - iLocal_615) > 500)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_87) > 400f)
						{
							if (SYSTEM::VDIST2(vLocal_60, vLocal_87) < 62500f || (MISC::GET_GAME_TIMER() - iLocal_370) < 30000)
							{
								func_46(Local_131[iVar0 /*18*/], iLocal_91, &(Local_131[iVar0 /*18*/].f_5), &(Local_131[iVar0 /*18*/].f_15), &(Local_131[iVar0 /*18*/].f_11), &(Local_131[iVar0 /*18*/].f_14), &(Local_131[iVar0 /*18*/].f_16), Local_131[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_614 = iVar0;
								iLocal_615 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_67(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
					{
						iVar3 = func_65(iVar0);
					}
					else
					{
						iVar3 = func_67(iVar0);
					}
					switch (Local_131[iVar0 /*18*/].f_17)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_131[iVar0 /*18*/], -1, 0))
											{
												TASK::TASK_ENTER_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 1073741824, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar3 /*18*/], -1794415470) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_131[iVar0 /*18*/], 0, 0))
												{
													TASK::TASK_ENTER_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 1073741824, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/])))
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar3 != -1 && PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar2 /*18*/], -1817882002) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 3, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 1, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														TASK::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 1)
													{
														TASK::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
													else if (iVar0 == 2)
													{
														TASK::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, 50f, 786471, 4f, 10f, 1);
													}
													else if (iVar0 == 3)
													{
														TASK::TASK_VEHICLE_MISSION(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, 50f, 786470, 4f, 10f, 1);
													}
												}
												TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_204[iVar2 /*18*/], func_45((3f * MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_66, Local_131[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_574 > 3f && SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) < 10f)
									{
										Local_131[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_204[iVar2 /*18*/]))
									{
										PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar2 /*18*/], 2, false);
										TASK::TASK_SMART_FLEE_PED(Local_204[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
									{
										if (!PED::IS_PED_FLEEING(Local_204[iVar3 /*18*/]))
										{
											PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar3 /*18*/], 2, false);
											TASK::TASK_SMART_FLEE_PED(Local_204[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
										}
									}
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar2 /*18*/], 0))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_52(iLocal_86, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar3 /*18*/], 0))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_52(iLocal_86, iVar3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
							{
								if (SYSTEM::VDIST(Local_131[iVar0 /*18*/].f_8, vLocal_66) > 15f)
								{
									Local_131[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_204[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_204[iVar3 /*18*/]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
					{
						iVar4 = 1;
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(vLocal_60, Local_131[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(vLocal_60, Local_204[iVar0 /*18*/].f_6) > 25f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_204[iVar2 /*18*/], Local_131[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									PED::SET_PED_INTO_VEHICLE(Local_204[iVar3 /*18*/], Local_131[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 4:
			func_55();
			if (!iLocal_618)
			{
				iVar0 = 0;
				while (iVar0 < Local_131)
				{
					iVar5 = func_67(iVar0);
					if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
					{
						iVar6 = func_65(iVar0);
					}
					else
					{
						iVar6 = func_67(iVar0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], -1, -1, 1073741824, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar6 /*18*/], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], -1, 0, 1073741824, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_204[iVar6 /*18*/])))
							{
								if ((PED::IS_PED_IN_VEHICLE(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], 0) && (iVar6 != -1 && PED::IS_PED_IN_VEHICLE(Local_204[iVar6 /*18*/], Local_131[iVar0 /*18*/], 0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
								{
									fVar7 = func_45((70f - (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_85)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (MISC::GET_GAME_TIMER() - iLocal_85) > 4000)
									{
										TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_204[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_131)
										{
											if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar8 /*18*/], 0) && !PED::IS_PED_INJURED(func_62(iVar8, 0))) && PED::IS_PED_IN_VEHICLE(func_62(iVar8, 0), Local_131[iVar8 /*18*/], 0))
											{
												TASK::CLEAR_PED_TASKS(func_62(iVar8, 0));
												TASK::TASK_VEHICLE_MISSION(func_62(iVar8, 0), Local_131[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, 1);
											}
											iVar8++;
										}
										iLocal_618 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar5 /*18*/], -1817882002) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 3, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 1, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											TASK::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 1)
										{
											TASK::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
										else if (iVar0 == 2)
										{
											TASK::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 10, fVar7, 786471, 4f, 10f, 1);
										}
										else if (iVar0 == 3)
										{
											TASK::TASK_VEHICLE_MISSION(Local_204[iVar5 /*18*/], Local_131[iVar0 /*18*/], iLocal_91, 11, fVar7, 786470, 4f, 10f, 1);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_FLEEING(Local_204[iVar5 /*18*/]))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar5 /*18*/], 2, false);
								TASK::TASK_SMART_FLEE_PED(Local_204[iVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_FLEEING(Local_204[iVar6 /*18*/]))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iVar6 /*18*/], 2, false);
									TASK::TASK_SMART_FLEE_PED(Local_204[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, 0, 0);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_617, 10f))
				{
					func_43(iLocal_617);
				}
				iLocal_617++;
				if (iLocal_617 > 3)
				{
					iLocal_617 = 0;
				}
			}
			func_50();
			func_35();
			break;
		
		case 6:
			if (func_44(iLocal_617, 1125515264))
			{
				func_43(iLocal_617);
			}
			iLocal_617++;
			if (iLocal_617 > 3)
			{
				iLocal_617 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (iLocal_49 > 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_373))
				{
					func_34(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2) && ENTITY::IS_ENTITY_ATTACHED(Local_204[iVar0 /*18*/].f_2))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
							{
								if (TASK::IS_PED_GETTING_UP(Local_204[iVar0 /*18*/]))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, false, 0);
								}
							}
							else if (!TASK::IS_PED_GETTING_UP(Local_204[iVar0 /*18*/]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, true, 0);
							}
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_373, func_33(iVar0), 3))
								{
									if (!Local_204[iVar0 /*18*/].f_11)
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
											Local_204[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_204[iVar0 /*18*/].f_11)
								{
									TASK::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
									Local_204[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_204[iVar0 /*18*/].f_10)
							{
								STREAMING::REQUEST_ANIM_SET(sLocal_373);
								if (STREAMING::HAS_ANIM_SET_LOADED(sLocal_373))
								{
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/], sLocal_373);
									Local_204[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_204[iVar0 /*18*/].f_11)
							{
								TASK::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
								Local_204[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_204[iVar0 /*18*/].f_10)
							{
								PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/]);
								Local_204[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/]) && func_32(Local_204[iVar0 /*18*/], PED::GET_VEHICLE_PED_IS_IN(Local_204[iVar0 /*18*/], 0)) == -1)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, false, 0);
							}
						}
						else if (!ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_204[iVar0 /*18*/].f_2, true, 0);
						}
					}
					else
					{
						if (Local_204[iVar0 /*18*/].f_11)
						{
							TASK::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 48, 0.99f, 0, 0, 0);
							Local_204[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_204[iVar0 /*18*/].f_10)
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_204[iVar0 /*18*/]);
							Local_204[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_47 != 7)
			{
				if (PED::IS_PED_BEING_JACKED(Local_204[iVar0 /*18*/]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
				{
					func_188(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_47 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_131)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_131[iVar0 /*18*/], 0))
					{
						func_188(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(int iParam0, int iParam1)//Position - 0x2CAA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)//Position - 0x2D1C
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)//Position - 0x2D92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_375);
			iVar3 = iVar0;
			if (iVar3 < iVar1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0)) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (iVar3 < iVar2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)], 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[(iVar3 - iVar1)]) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sLocal_373, "grip", 3))
			{
				MISC::CLEAR_BIT(&(Local_204[iParam0 /*18*/].f_15), iVar0);
			}
		}
		iVar0++;
	}
}

void func_35()//Position - 0x2E8F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = func_65(iLocal_568);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_131[iLocal_568 /*18*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iLocal_568 /*18*/], 0)) && ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(Local_131[iLocal_568 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					if (!Local_204[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13) > 1000)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iVar0 /*18*/], sLocal_374, "base", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_204[iVar0 /*18*/], sLocal_374, "base", 8f, 1000f, -1, 16, 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!Local_204[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_204[iVar0 /*18*/].f_6, vLocal_63) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_131[iLocal_568 /*18*/], 0, 0) == Local_204[iVar0 /*18*/])
				{
					TASK::TASK_SWEEP_AIM_ENTITY(Local_204[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_86, 1.57f, 0.25f);
					Local_204[iVar0 /*18*/].f_9 = 1;
					Local_204[iVar0 /*18*/].f_13 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_204[iVar0 /*18*/].f_9)
			{
				if ((MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_13) > 2000)
				{
					Local_204[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_568++;
		if (iLocal_568 >= Local_131)
		{
			iLocal_568 = 0;
		}
	}
}

void func_36(int iParam0)//Position - 0x306D
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_86))
	{
		iVar0 = 15;
		vVar1 = { vLocal_63 - Local_204[iParam0 /*18*/].f_6 };
		vVar4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_204[iParam0 /*18*/]) };
		fVar7 = func_40(vVar4, vVar1);
		if (MISC::ABSF(fVar7) < 10f)
		{
			iVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			iVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			iVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			iVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			iVar0 = 9;
		}
		if (iVar0 != 15)
		{
			func_37(iParam0, iVar0);
		}
	}
}

void func_37(int iParam0, int iParam1)//Position - 0x315D
{
	if (iParam1 < 15)
	{
		if (!MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iParam1))
		{
			if (func_39(iParam1))
			{
				TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_374, iLocal_375[func_38(iParam1)], 4f, -4f, -1, 16, 0, 0, 0, 0);
			}
			else if (iParam1 < 5)
			{
				TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_373, func_33(iParam0), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sLocal_373, "grip", 1000f, -1000f, -1, 57, 0, 0, 0, 0);
			}
			Local_204[iParam0 /*18*/].f_15 = 0;
			MISC::SET_BIT(&(Local_204[iParam0 /*18*/].f_15), iParam1);
		}
	}
}

int func_38(int iParam0)//Position - 0x3214
{
	return (iParam0 - 5);
}

bool func_39(int iParam0)//Position - 0x3220
{
	int iVar0;
	
	iVar0 = iParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_375));
}

float func_40(vector3 vParam0, vector3 vParam3)//Position - 0x323D
{
	float fVar0;
	
	vParam0 = { func_41(vParam0) };
	vParam3 = { func_41(vParam3) };
	fVar0 = (MISC::ATAN2(vParam3.y, vParam3.x) - MISC::ATAN2(vParam0.y, vParam0.x));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(vector3 vParam0)//Position - 0x32A3
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

bool func_42(int iParam0)//Position - 0x32E2
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_374))
	{
		iVar1 = 5;
		while (iVar1 <= 13)
		{
			if (!bVar0)
			{
				if (MISC::IS_BIT_SET(Local_204[iParam0 /*18*/].f_15, iVar1))
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)//Position - 0x3327
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_131[iParam0 /*18*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_131[iParam0 /*18*/]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_131[iParam0 /*18*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_131[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_65(iParam0);
		}
		else
		{
			iVar1 = func_67(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_204[iVar1 /*18*/].f_2));
			}
			if (HUD::DOES_BLIP_EXIST(Local_204[iVar1 /*18*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar1 /*18*/].f_1));
			}
			PED::DELETE_PED(&(Local_204[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)//Position - 0x33F5
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_131[iParam0 /*18*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_131[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_131[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_62(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_62(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_67(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_62(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_62(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_62(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(vLocal_60, Local_204[func_65(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_62(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)//Position - 0x34EE
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, int iParam10, float fParam11)//Position - 0x3515
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_49(iParam0, iParam1, iLocal_358, ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_ROTATION(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, vParam7) };
					*uParam4 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iParam1);
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if ((func_48(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 6f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 6f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 6f, 0, 0, 0, 0, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, func_45((ENTITY::GET_ENTITY_SPEED(iParam1) + 10f), 10f, 60f));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, 0);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_47(vector3 vParam0)//Position - 0x36E5
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x370F
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

int func_49(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)//Position - 0x376D
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &vVar13, &uVar16);
		fVar19 = MISC::ABSF((vVar10.z - vVar7.z));
		fVar20 = MISC::ABSF((vVar10.x - vVar7.x));
		fVar21 = MISC::ABSF((vVar10.y - vVar7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(vVar7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(vVar7.x));
		}
		vVar24.z = (vVar24.z + (vVar13.z - vVar7.z));
		ENTITY::SET_ENTITY_COORDS(iParam2, vParam3, 1, false, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iParam2, vParam6, 2, 1);
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + vVar24) };
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + vVar24) };
		iVar35 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar4, vVar1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()//Position - 0x38A3
{
	bool bVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_567) > 100)
	{
		if ((MISC::GET_GAME_TIMER() - Local_204[iLocal_566 /*18*/].f_12) > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iLocal_566 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iLocal_566 /*18*/]))
			{
				bVar0 = true;
				if (!Local_204[iLocal_566 /*18*/].f_9 && PED::IS_PED_IN_ANY_VEHICLE(Local_204[iLocal_566 /*18*/], 0))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) > 0.5f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iLocal_566 /*18*/], sLocal_373, func_33(iLocal_566)) < 0.75f) || Local_204[iLocal_566 /*18*/].f_9)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_204[iLocal_566 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1f, 0, 0, 0);
						if ((iLocal_566 % 3) == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER_FLASH", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						else if ((iLocal_566 % 3) == 1)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "FLASH", ENTITY::GET_ENTITY_COORDS(Local_204[iLocal_566 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, 0);
						}
						Local_204[iLocal_566 /*18*/].f_12 = MISC::GET_GAME_TIMER();
					}
					iLocal_567 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_566++;
			if (iLocal_566 >= Local_204)
			{
				iLocal_566 = 0;
			}
		}
	}
}

void func_51(int iParam0, int iParam1)//Position - 0x3A46
{
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_FACING_PED(Local_204[iParam1 /*18*/], iParam0, 20f))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], -875674219) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_204[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_204[iParam1 /*18*/].f_13) > 2000)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 3))
			{
				TASK::TASK_PLAY_ANIM(Local_204[iParam1 /*18*/], sLocal_373, func_33(iParam1), 4f, -4f, -1, 0, 0, 0, 0, 0);
				Local_204[iParam1 /*18*/].f_13 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_52(int iParam0, int iParam1)//Position - 0x3AF6
{
	vector3 vVar0;
	
	if (!PED::IS_PED_INJURED(Local_204[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_54(iParam1)) };
		switch (Local_204[iParam1 /*18*/].f_16)
		{
			case 0:
				func_53(vVar0, iParam1, iParam0);
				Local_204[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], 713668775) != 1 || SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 5f)
				{
					Local_204[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(vVar0, Local_204[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(vVar0, iParam1, iParam0);
					Local_204[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(vVar0, Local_204[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(vVar0, iParam1, iParam0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iParam1 /*18*/], 713668775) != 1)
				{
					Local_204[iParam1 /*18*/].f_16 = (Local_204[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_53(vector3 vParam0, int iParam3, int iParam4)//Position - 0x3C47
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { func_41(ENTITY::GET_ENTITY_COORDS(iParam4, true) - vParam0) };
	fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
	Local_204[iParam3 /*18*/].f_3 = { vParam0 };
	TASK::CLEAR_PED_TASKS(Local_204[iParam3 /*18*/]);
	if (SYSTEM::VDIST(vParam0, Local_204[iParam3 /*18*/].f_6) < 2f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar3);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam3 /*18*/], Local_204[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar3);
	}
}

Vector3 func_54(int iParam0)//Position - 0x3CE1
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()//Position - 0x3DCE
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
			{
				HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
		{
			Local_204[iVar0 /*18*/].f_1 = func_190(Local_204[iVar0 /*18*/], 1, 145);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_204[iVar0 /*18*/].f_1, "EP_PAPBLIP");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar0 /*18*/], 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
			{
				vVar1 = { HUD::GET_BLIP_COORDS(Local_131[iVar0 /*18*/].f_1) };
				vVar4 = { Local_131[iVar0 /*18*/].f_8 };
				vVar1.x = (vVar1.x + ((vVar4.x - vVar1.x) / 10f));
				vVar1.y = (vVar1.y + ((vVar4.y - vVar1.y) / 10f));
				vVar1.z = (vVar1.z + ((vVar4.z - vVar1.z) / 10f));
				HUD::SET_BLIP_COORDS(Local_131[iVar0 /*18*/].f_1, vVar1);
				if (func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_131[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_131[iVar0 /*18*/].f_1 = func_56(Local_131[iVar0 /*18*/].f_8, 0);
				HUD::SET_BLIP_COLOUR(Local_131[iVar0 /*18*/].f_1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_131[iVar0 /*18*/].f_1, "EP_PAPBLIP");
				HUD::SET_BLIP_PRIORITY(Local_131[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_56(vector3 vParam0, bool bParam3)//Position - 0x3FAD
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)//Position - 0x3FD9
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x3FF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_59(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (!PED::IS_PED_INJURED(iVar2) || iParam8)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
						{
							if (!bParam5)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_59(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x40B6
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_60(int iParam0, vector3 vParam1, float fParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x4151
{
	if (!PED::IS_PED_INJURED(Local_204[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_204[iParam0 /*18*/], true), vParam1) > 1.5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iParam0 /*18*/], 713668775) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_204[iParam0 /*18*/], vParam1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (MISC::ABSF((func_61(ENTITY::GET_ENTITY_HEADING(Local_204[iParam0 /*18*/])) - func_61(fParam4))) > 10f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iParam0 /*18*/], 1920390111) != 1)
			{
				TASK::TASK_ACHIEVE_HEADING(Local_204[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_204[iParam0 /*18*/].f_16)
			{
				case 0:
					if (MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0, 0, 0, 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, iParam7, 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_204[iParam0 /*18*/], sParam5, iParam7) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_204[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0, 0, 0, 0);
						Local_204[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_61(float fParam0)//Position - 0x432B
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_62(int iParam0, int iParam1)//Position - 0x435F
{
	if (iParam1 == 0)
	{
		return Local_204[func_67(iParam0) /*18*/];
	}
	return Local_204[func_65(iParam0) /*18*/];
}

void func_63(int iParam0, vector3 vParam1, float fParam4, bool bParam5)//Position - 0x4387
{
	if ((iParam0 % 2) == 1)
	{
		Local_131[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("vader"), vParam1, fParam4, true, true, false);
	}
	else
	{
		Local_131[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("cavalcade2"), vParam1, fParam4, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_131[iParam0 /*18*/], 0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_131[iParam0 /*18*/], 1084227584);
	VEHICLE::SET_VEHICLE_STRONG(Local_131[iParam0 /*18*/], true);
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_62(iParam0, 0)))
		{
			func_64(func_67(iParam0), vParam1, fParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_62(iParam0, 1)))
		{
			func_64(func_65(iParam0), vParam1, fParam4);
		}
		if (!PED::IS_PED_INJURED(func_62(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_62(iParam0, 0), Local_131[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_62(iParam0, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iParam0 /*18*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(func_62(iParam0, 1), Local_131[iParam0 /*18*/], 0);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_131[iParam0 /*18*/], true, true, 0);
	}
}

void func_64(int iParam0, vector3 vParam1, float fParam4)//Position - 0x44A2
{
	Local_204[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("a_m_y_genstreet_02"), vParam1, fParam4, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 1, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 0, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_204[iParam0 /*18*/], 3);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_204[iParam0 /*18*/], 2, false);
	ENTITY::_SET_ENTITY_SOMETHING(Local_204[iParam0 /*18*/], false);
	PED::SET_PED_KEEP_TASK(Local_204[iParam0 /*18*/], true);
	PED::SET_PED_SHOOT_RATE(Local_204[iParam0 /*18*/], 100);
	PED::SET_PED_FIRING_PATTERN(Local_204[iParam0 /*18*/], -957453492);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 101, true);
	PED::SET_PED_CONFIG_FLAG(Local_204[iParam0 /*18*/], 185, false);
	ENTITY::SET_ENTITY_HEALTH(Local_204[iParam0 /*18*/], 300, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_204[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_70)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_204[iParam0 /*18*/], true);
		ENTITY::SET_ENTITY_HEALTH(Local_204[iParam0 /*18*/], 500, 0);
	}
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_204[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_204[iParam0 /*18*/], 2, true);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_204[iParam0 /*18*/], 2f);
	ENTITY::_SET_ENTITY_SOMETHING(Local_204[iParam0 /*18*/], false);
	PED::SET_PED_HELMET(Local_204[iParam0 /*18*/], 0);
	Local_204[iParam0 /*18*/].f_2 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), PED::GET_PED_BONE_COORDS(Local_204[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_204[iParam0 /*18*/].f_2, Local_204[iParam0 /*18*/], PED::GET_PED_BONE_INDEX(Local_204[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_204[0 /*18*/].f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_204[0 /*18*/].f_2, false, 0);
	}
	Local_204[iParam0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_204[iParam0 /*18*/]);
}

int func_65(int iParam0)//Position - 0x4665
{
	return iParam0 * 2 + 1;
}

void func_66(int iParam0)//Position - 0x4673
{
	if ((iParam0 % 2) == 1)
	{
		Local_204[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_204[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_67(int iParam0)//Position - 0x46A0
{
	return iParam0 * 2;
}

void func_68(int iParam0)//Position - 0x46AC
{
	Local_131[iParam0 /*18*/].f_17 = 0;
}

int func_69()//Position - 0x46BD
{
	bool bVar0;
	bool bVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		bVar0 = false;
		if (func_72())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_71()))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_71(), true), vLocal_63) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_91) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				fLocal_570 = (fLocal_570 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_570 > 0f)
			{
				fLocal_570 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_569 = (fLocal_569 + MISC::GET_FRAME_TIME());
		}
		else if (fLocal_569 > 0f)
		{
			fLocal_569 = 0f;
		}
		if (fLocal_569 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_71)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_86))
				{
					bVar1 = true;
				}
				iLocal_71 = 0;
			}
		}
		if (!iLocal_71)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				iLocal_71 = 1;
			}
		}
		if (fLocal_570 > 30f)
		{
			bVar1 = true;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && (!bLocal_368 || iLocal_47 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(vLocal_63, vLocal_60) > 30f)
		{
			bVar1 = true;
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && func_70(iLocal_91)) && (!bLocal_368 || iLocal_47 == 1)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_86, true), vLocal_56) > 15f)
		{
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && ENTITY::IS_ENTITY_IN_WATER(iLocal_91))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
			{
				sLocal_371 = "REPAP_GUP";
			}
			else
			{
				sLocal_371 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x487A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_71()//Position - 0x48DF
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_86))
		{
			if (SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(vLocal_63, Local_204[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_204[iVar1 /*18*/];
	}
	return 0;
}

int func_72()//Position - 0x496D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73()//Position - 0x49AA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (func_74(Local_204[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]) || ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
			{
				if (iLocal_386[iVar0] > 50)
				{
					iLocal_349++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2)//Position - 0x4A1C
{
	vector3 vVar0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1);
		}
		if (!bParam2)
		{
			if (MISC::IS_BULLET_IN_AREA(vVar0, 5f, 1))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(vVar0, vLocal_60) < 400f)
		{
			if (!bParam2)
			{
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(vLocal_60, vVar0) < 9f)
			{
				return 1;
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) && (func_75(vLocal_60, iParam0) && SYSTEM::VDIST2(vLocal_60, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 100f)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
			if (iLocal_385 > 150)
			{
				return 1;
			}
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_75(vector3 vParam0, int iParam3)//Position - 0x4B75
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, 0f, 1f, 0f) - vVar0 };
	vVar6 = { vParam0 - vVar0 };
	fVar9 = func_76(vVar3, vVar6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_76(vector3 vParam0, vector3 vParam3)//Position - 0x4BC5
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_77()//Position - 0x4BE6
{
	if (iLocal_47 != 11)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_362))
		{
			HUD::REMOVE_BLIP(&iLocal_362);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_363))
		{
			HUD::REMOVE_BLIP(&iLocal_363);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_360))
		{
			HUD::REMOVE_BLIP(&iLocal_360);
		}
		iLocal_48 = iLocal_47;
		iLocal_47 = 11;
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			if (!func_80())
			{
				func_78("REPAP_COP1");
			}
		}
		else
		{
			func_188(5);
		}
	}
	else if (func_5(&Local_395, cLocal_372, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_47 = iLocal_48;
	}
}

void func_78(char* sParam0)//Position - 0x4C7F
{
	if ((MISC::GET_GAME_TIMER() - iLocal_667) > 5000)
	{
		if (!func_79())
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_667 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_79()//Position - 0x4CB7
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_80()//Position - 0x4CD9
{
	if (!PED::IS_PED_INJURED(iLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
	{
		if (!iLocal_350 && (MISC::GET_GAME_TIMER() - iLocal_352) > 5000)
		{
			if (iLocal_82 > 10)
			{
				iLocal_350 = 1;
				iLocal_82 = 0;
			}
		}
		if ((!iLocal_355 && !iLocal_350) && (MISC::GET_GAME_TIMER() - iLocal_356) > 4000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_357 > 2)
				{
					if (!Global_3 && !bLocal_70)
					{
						func_188(5);
					}
				}
				else
				{
					iLocal_355 = 1;
					iLocal_357++;
				}
			}
		}
		if (((!iLocal_353 && !iLocal_350) && !iLocal_355) && (MISC::GET_GAME_TIMER() - iLocal_354) > 15000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_353 = 1;
			}
		}
		if (iLocal_350)
		{
			if (iLocal_351)
			{
				if (func_5(&Local_395, cLocal_372, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_352 = MISC::GET_GAME_TIMER();
					iLocal_350 = 0;
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_350 = 0;
				iLocal_351 = 1;
			}
		}
		if (iLocal_355)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_356 = MISC::GET_GAME_TIMER();
				iLocal_355 = 0;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_395, cLocal_372, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_353 = 0;
			}
		}
	}
	return ((iLocal_353 || iLocal_355) || iLocal_350);
}

void func_81()//Position - 0x4E89
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		PED::SET_PED_KEEP_TASK(iLocal_86, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_69, 1862763509);
		if (!Global_3 && !bLocal_70)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_86, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, false);
		}
	}
	func_85(-1, 0);
	func_82();
	AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
	func_281();
}

void func_82()//Position - 0x4EE3
{
	func_83();
}

int func_83()//Position - 0x4EF0
{
	if (func_84(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_84(bool bParam0)//Position - 0x4F3B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_85(int iParam0, int iParam1)//Position - 0x4F66
{
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_102(iParam0))
	{
		func_101(iParam0, iParam1);
		if (!func_100(51))
		{
			func_96("RE_REWARD", 1, 0, 4000, 10000, func_99(), 0, 138, 0);
			func_95(51);
		}
		if (func_94(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_93(iParam0, iParam1) != 322)
		{
			func_87(func_93(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_86(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_86(7);
			}
			else
			{
				func_86(1);
			}
		}
	}
}

void func_86(int iParam0)//Position - 0x506A
{
	Global_111546 = iParam0;
}

void func_87(int iParam0, var uParam1, var uParam2)//Position - 0x5078
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_91((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_88();
	}
}

void func_88()//Position - 0x5160
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_111283, 0);
					MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_111296, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_111279, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_111297, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_111280, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_111298, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_111281, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_111299, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_111282, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_111286, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_111303, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_111304, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111560.f_10189.f_3853))
	{
		func_90(13, SYSTEM::FLOOR(Global_111560.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76577)
		{
			if (func_89() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_83();
				}
			}
		}
	}
}

int func_89()//Position - 0x5621
{
	return Global_30736;
}

int func_90(int iParam0, int iParam1)//Position - 0x562C
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_91(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x567D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_92()//Position - 0x5CCF
{
	return Global_1312745;
}

int func_93(int iParam0, int iParam1)//Position - 0x5CDB
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_94(int iParam0)//Position - 0x604F
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_95(int iParam0)//Position - 0x607E
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x60C0
{
	func_97(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_97(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x60E0
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_98();
	}
}

void func_98()//Position - 0x62B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_99()//Position - 0x63D2
{
	func_25();
	switch (Global_111560.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x6418
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_101(int iParam0, int iParam1)//Position - 0x645B
{
	MISC::SET_BIT(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_102(int iParam0)//Position - 0x6476
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_103()//Position - 0x6527
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_104(Var0);
	return uVar16;
}

int func_104(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x6544
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_105()//Position - 0x671E
{
	if (Global_30972)
	{
		func_86(4);
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x6736
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_360))
	{
		HUD::REMOVE_BLIP(&iLocal_360);
	}
	switch (iLocal_369)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_131)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						VEHICLE::DELETE_VEHICLE(&(Local_131[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_673 = 0;
			iLocal_369++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_204)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/])) && !ENTITY::IS_ENTITY_DEAD(Local_204[iVar0 /*18*/], 0))
				{
					iVar1++;
					func_52(PLAYER::PLAYER_PED_ID(), iVar0);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_673)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_71(), true)) < 100f)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (func_24() == 1)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 7);
						func_23(&Local_395, 8);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 7, func_71(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 8, func_71(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[8 /*10*/]) && !PED::IS_PED_INJURED(Local_395[8 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_395, 6);
						func_23(&Local_395, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_395, 6, func_71(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_395, 5, func_71(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_395[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_395[iVar2 /*10*/]))
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_673 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_73())
			{
				func_200();
				func_281();
			}
			if (iVar1 == 0)
			{
				func_281();
			}
			break;
	}
}

void func_107(char* sParam0)//Position - 0x6CF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_49 != 5)
	{
		iLocal_49 = 5;
	}
	if (!iLocal_672)
	{
		iVar0 = 0;
		while (iVar0 < Local_204)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
				Local_204[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_672 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (HUD::DOES_BLIP_EXIST(Local_204[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_204[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_86))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_204[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_52(iLocal_86, iVar0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_204[iVar0 /*18*/], -1146898486) != 1)
				{
					TASK::TASK_WANDER_STANDARD(Local_204[iVar0 /*18*/], 1193033728, 0);
				}
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_204[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_204[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f)
			{
				PED::DELETE_PED(&(Local_204[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/].f_2))
				{
					OBJECT::DELETE_OBJECT(&(Local_204[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar0 /*18*/]))
		{
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_131[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_131[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f) && func_58(Local_131[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_131[iVar0 /*18*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_131[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_131[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_86) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_63) > 2500f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_86);
			func_281();
		}
	}
	if (func_73() || func_74(iLocal_86, 1, 1))
	{
		func_188(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_369)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_361))
			{
				HUD::REMOVE_BLIP(&iLocal_361);
			}
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				TASK::CLEAR_PED_TASKS(iLocal_86);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 3f);
			}
			func_108();
			if (SYSTEM::VDIST(vLocal_60, vLocal_63) < 30f)
			{
				if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_204)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_369++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_204)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_204[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_369++;
			}
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0)) && !bLocal_368) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_91, -1, 0))
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_91, 0);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_91, vLocal_53, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_91, vLocal_53, 288.7089f, 1, 50f, 0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_91, ENTITY::GET_ENTITY_COORDS(iLocal_91, true), 5, 10f, 262144, 2f, 2f, 1);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_91, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_91, 15f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				}
				iLocal_369 = 1000;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_86, 0, 0);
				}
				iLocal_369++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 3000f, -1, 1, 0);
				iLocal_369 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(vLocal_63, vLocal_53) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, -1, 0.25f, 512, fLocal_59);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_86, 1193033728, 0);
				}
				iLocal_369 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_281();
			}
			break;
	}
}

void func_108()//Position - 0x725B
{
	Global_19671 = 0;
	func_109();
}

void func_109()//Position - 0x726B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_110()//Position - 0x728C
{
	func_108();
	if (!PED::IS_PED_INJURED(iLocal_86) && SYSTEM::VDIST2(vLocal_60, vLocal_63) < 900f)
	{
		TASK::CLEAR_PED_TASKS(iLocal_86);
		if (func_5(&Local_395, cLocal_372, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_200();
			func_188(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, -2065892691);
	}
	else
	{
		func_200();
		func_188(10);
	}
}

void func_111()//Position - 0x72F6
{
	int iVar0;
	
	switch (iLocal_369)
	{
		case 0:
			func_147();
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_190(iLocal_86, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					HUD::REMOVE_BLIP(&iLocal_363);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					HUD::REMOVE_BLIP(&iLocal_362);
				}
				TASK::CLEAR_PED_TASKS(iLocal_86);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				if (PED::IS_PED_IN_GROUP(iLocal_86))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_86);
				}
				func_108();
				iLocal_369++;
			}
			break;
		
		case 1:
			if (!func_79() && !PED::IS_PED_INJURED(iLocal_86))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_86, vLocal_56, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				func_146(0);
				if (func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
				{
					func_113(func_24(), 1, 150, 0, 1);
					iLocal_369++;
				}
			}
			break;
		
		case 3:
			if (!func_79() && !PED::IS_PED_INJURED(iLocal_86))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_112())
				{
					func_81();
				}
			}
			break;
	}
}

int func_112()//Position - 0x7494
{
	return 1;
}

void func_113(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x749D
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) == 3)
	{
		return;
	}
	if (func_145(iParam0) == 4)
	{
		return;
	}
	func_114(func_145(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x756F
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_144();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_143(99, 1);
					func_142(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_142(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_142(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_128(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_123(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_123(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_142(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_142(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_123(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_142(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_142(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_122(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_143(95, iParam3);
					break;
				
				case 1:
					func_143(97, iParam3);
					break;
				
				case 2:
					func_143(96, iParam3);
					break;
			}
			func_143(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_117(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_117(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_142(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_142(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_142(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_116(iParam0);
	if (Global_41396 == 15)
	{
		func_115(0);
	}
	return 1;
}

void func_115(bool bParam0)//Position - 0x7B6E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_116(int iParam0)//Position - 0x7DF0
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_117(int iParam0)//Position - 0x7E4A
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_91(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_91(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_91(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_91(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_120(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_120(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_120(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_120(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_120(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_120(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_119() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_119() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_118(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_118(int iParam0)//Position - 0x7FD9
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_119()//Position - 0x80F4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x8101
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_121(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_121(var uParam0)//Position - 0x8131
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_92();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

void func_122(int iParam0)//Position - 0x8165
{
	func_143(93, iParam0);
	func_143(29, iParam0);
	func_143(30, iParam0);
}

bool func_123(int iParam0)//Position - 0x8185
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_125(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_125(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_125(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_125(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_124(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_124(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_124(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_124(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_124(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_124(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_119() /*10828*/].f_6168.f_10, iParam0);
}

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x8335
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_121(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)//Position - 0x8367
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar1 = func_127(iParam0, iParam1);
	uVar2 = func_126(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_126(int iParam0)//Position - 0x83A4
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_127(int iParam0, int iParam1)//Position - 0x8740
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_92();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_128(bool bParam0)//Position - 0x8AB9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_90(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_129(27, 1);
	return 1;
}

int func_129(int iParam0, int iParam1)//Position - 0x8B70
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_130(iParam0, iParam1);
}

int func_130(int iParam0, int iParam1)//Position - 0x8B8B
{
	if (func_17(14) && !func_141(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_140(&Global_4269915))
	{
		if (func_138(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_131(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_131(var uParam0, int iParam1)//Position - 0x8C28
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	func_134(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_132(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_132(var uParam0, int iParam1)//Position - 0x8CD9
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_133(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)//Position - 0x8D54
{
	return (*uParam0)[iParam1] == 78;
}

void func_134(var uParam0)//Position - 0x8D65
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_135(uParam0, iVar0);
		iVar0++;
	}
	func_136(uParam0, (Global_4269914 - 0.5f));
}

void func_135(var uParam0, int iParam1)//Position - 0x8D99
{
	(*uParam0)[iParam1] = 78;
}

void func_136(var uParam0, float fParam1)//Position - 0x8DA9
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_137(var uParam0)//Position - 0x8DC6
{
	return uParam0->f_80;
}

bool func_138(var uParam0, int iParam1)//Position - 0x8DD2
{
	return func_139(uParam0, iParam1) != -1;
}

int func_139(var uParam0, int iParam1)//Position - 0x8DE4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(var uParam0)//Position - 0x8E11
{
	return uParam0->f_79 == 1;
}

int func_141(int iParam0)//Position - 0x8E1F
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_142(int iParam0, int iParam1)//Position - 0x8E6F
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_143(int iParam0, int iParam1)//Position - 0x8E92
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_144()//Position - 0x8EEF
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_145(int iParam0)//Position - 0x8F64
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_146(bool bParam0)//Position - 0x8F75
{
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (iLocal_621 > 1)
		{
			if (!PED::IS_PED_FACING_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_621 = 0;
				iLocal_622 = 0;
			}
		}
		switch (iLocal_621)
		{
			case 0:
				TASK::CLEAR_PED_TASKS(iLocal_86);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_620);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_620);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iLocal_620);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_620);
				iLocal_621++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1)
				{
					iLocal_621++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_622)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622++;
							}
							break;
						
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
								iLocal_622 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_147()//Position - 0x9193
{
	if (HUD::DOES_BLIP_EXIST(iLocal_364))
	{
		HUD::REMOVE_BLIP(&iLocal_364);
	}
}

void func_148()//Position - 0x91AC
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		switch (iLocal_369)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					func_147();
					func_152(1, 1, 0, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_362))
					{
						HUD::REMOVE_BLIP(&iLocal_362);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_360))
					{
						HUD::REMOVE_BLIP(&iLocal_360);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_361))
					{
						HUD::REMOVE_BLIP(&iLocal_361);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_86))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_86);
					}
					func_150();
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_86, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
					if ((bLocal_368 || Global_3) || bLocal_70)
					{
						while (!func_149(&Local_395, cLocal_372, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_395, cLocal_372, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_113(func_24(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_86))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_86, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, -10f, 5f, 0f), -1, 16, 4);
						PED::_0x2208438012482A1A(iLocal_86, 0, 0);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_369++;
				}
				break;
			
			case 1:
				if (!func_79() && !PED::IS_PED_INJURED(iLocal_86))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_91, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_56, 1f, 30000, 0.25f, 512, fLocal_59);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_369++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_368)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							func_152(0, 1, 0, 0, 0, 0);
							iLocal_369 = 5;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0)) && SYSTEM::TIMERA() > 1000)
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 10000, 0, 3);
					iLocal_369++;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_152(0, 1, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_112())
					{
						if (!bLocal_368)
						{
							if (!func_100(19))
							{
								func_96("AM_H_CALLTX", 1, 0, -1, 10000, 7, 0, 0, 0);
								func_95(19);
							}
						}
						func_81();
					}
				}
				break;
			}
	}
}

bool func_149(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x94DD
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_150()//Position - 0x9531
{
	Global_19671 = 0;
	func_151();
}

void func_151()//Position - 0x9541
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

void func_152(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x9565
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_159(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_14())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_158(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_159(0);
		HUD::THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_158(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_156(PLAYER::PLAYER_ID())) && !func_154(PLAYER::PLAYER_ID(), 0)) && !func_153()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_156(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76575 = 0;
	}
}

bool func_153()//Position - 0x969E
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

bool func_154(int iParam0, int iParam1)//Position - 0x96BB
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_155(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_155(int iParam0, bool bParam1)//Position - 0x9706
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_92();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_156(int iParam0)//Position - 0x9747
{
	if (func_154(iParam0, 0))
	{
		return 1;
	}
	if (func_157())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_157()//Position - 0x9789
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x979A
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_159(int iParam0)//Position - 0x97CD
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_160()//Position - 0x97F0
{
	if (Global_3 || bLocal_70)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	}
	if (bLocal_368 && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (!func_181(iLocal_86))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				iLocal_360 = func_190(iLocal_86, 0, 145);
			}
		}
		else
		{
			if (func_72())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					iLocal_362 = func_56(vLocal_53, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					HUD::REMOVE_BLIP(&iLocal_363);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_363))
				{
					iLocal_363 = func_56(vLocal_56, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					HUD::REMOVE_BLIP(&iLocal_362);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && func_180(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_91 = 0;
				iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_363) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_56, 15f, 15f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_188(4);
			}
		}
		else if (iLocal_369 != 100)
		{
			if (func_72() && func_179(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_369 != 100)
		{
			if (func_72() && func_179(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.5938f, 681.1489f, 188.4262f, 232.02f, 681.3113f, 191.9843f, 8.75f, 0, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.6788f, 681.0637f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369 = 100;
				}
			}
		}
		func_175(1);
	}
	switch (iLocal_369)
	{
		case 0:
			if (func_72())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_86);
				}
				if (func_5(&Local_395, cLocal_372, "REPAP_HM", 4, 0, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					iLocal_369++;
				}
				if (!func_174())
				{
					func_169();
				}
			}
			break;
		
		case 1:
			if (!func_80())
			{
				if (func_72())
				{
					if (!func_79())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_80())
			{
				if (func_72())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_70)
						{
							iLocal_369 = 99;
						}
						else
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_165("REPAP_HOME1", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 4:
			if (func_24() == 0)
			{
				if (func_165("REPAP_HOME1M", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_165("REPAP_HOME1F", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			else if (func_165("REPAP_HOME1T", (func_168() && !func_80())))
			{
				iLocal_369++;
			}
			break;
		
		case 5:
			if (func_165("REPAP_HOME1L", (func_168() && !func_80())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_369++;
			}
			break;
		
		case 6:
			if (!func_80())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_168())
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME2"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 8:
			if (func_165("REPAP_HOME2L", (func_168() && !func_80())))
			{
				iLocal_369++;
			}
			break;
		
		case 9:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_165("REPAP_HOME3", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 11:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_165("REPAP_HOME4", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 13:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_369++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_165("REPAP_NOBAN", (func_168() && !func_80())))
				{
					iLocal_369++;
				}
			}
			break;
		
		case 15:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_164("REPAP_NOBAN"))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_80())
			{
				if (func_168() && !func_79())
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_369++;
					}
				}
			}
			break;
		
		case 17:
			func_80();
			break;
		
		case 100:
			if (func_162(iLocal_91, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_189("");
				func_188(3);
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_77();
	}
	if (func_24() == 2)
	{
		if ((func_161() && !func_174()) && iLocal_47 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_86, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_86, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_86, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					}
					func_108();
					iLocal_47 = 8;
				}
			}
		}
	}
}

var func_161()//Position - 0x9FFC
{
	return Global_30971;
}

int func_162(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xA007
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_163(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_163(int iParam0)//Position - 0xA196
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, 0);
			}
		}
	}
}

int func_164(char* sParam0)//Position - 0xA1C2
{
	vector3 vVar0;
	
	StringConCat(&vVar0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&vVar0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&vVar0, "F", 24);
	}
	else
	{
		StringConCat(&vVar0, "T", 24);
	}
	if (func_5(&Local_395, cLocal_372, &vVar0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_165(char* sParam0, bool bParam1)//Position - 0xA216
{
	if (bParam1)
	{
		if (!iLocal_72)
		{
			if (func_5(&Local_395, cLocal_372, sParam0, 4, 0, 0, 0))
			{
				iLocal_72 = 1;
				iLocal_73 = 0;
			}
		}
		else if (iLocal_73)
		{
			if (func_167(&Local_395, cLocal_372, sParam0, &Local_75, 4, 0, 0))
			{
				iLocal_73 = 0;
			}
		}
		if ((iLocal_72 && !iLocal_73) && bParam1)
		{
			if (iLocal_81 == -1)
			{
				if (!func_79())
				{
					iLocal_81 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_81) > 500)
			{
				iLocal_81 = -1;
				iLocal_72 = 0;
				iLocal_73 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_72 && !iLocal_73)
	{
		Local_75 = { func_166() };
		func_150();
		iLocal_73 = 1;
	}
	return 0;
}

struct<6> func_166()//Position - 0xA2C6
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7 /*6*/])))
			{
				return Global_19673[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8 /*6*/])))
					{
						return Global_19673[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_167(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA372
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_168()//Position - 0xA3C6
{
	if (bLocal_368)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
		{
			if (func_72())
			{
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 0))
		{
			if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_72();
	}
	return 0;
}

void func_169()//Position - 0xA427
{
	if (func_24() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_364))
		{
			func_172();
			iLocal_364 = func_171(-1034.6f, 4918.6f, 205.9f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_364, 269);
			func_170();
		}
	}
}

void func_170()//Position - 0xA46B
{
	if (!func_174())
	{
		if (func_24() == 2)
		{
			Global_30971 = 1;
		}
	}
}

int func_171(vector3 vParam0, bool bParam3)//Position - 0xA487
{
	return func_56(vParam0, bParam3);
}

void func_172()//Position - 0xA499
{
	if (func_24() == 2)
	{
		if (!Global_30973)
		{
			func_173("CULT_BLIP_HELP", -1);
			Global_30973 = 1;
		}
	}
}

void func_173(char[4] cParam0, int iParam1)//Position - 0xA4BD
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_174()//Position - 0xA4D4
{
	if (Global_111560.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_175(bool bParam0)//Position - 0xA4F0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (func_72())
		{
			if (bParam0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_362))
				{
					iLocal_362 = func_56(vLocal_53, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_361))
			{
				HUD::REMOVE_BLIP(&iLocal_361);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_362))
			{
				HUD::REMOVE_BLIP(&iLocal_362);
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_361))
				{
					iLocal_361 = func_176(iLocal_91, 0, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_190(iLocal_86, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
		}
	}
}

int func_176(int iParam0, bool bParam1, bool bParam2)//Position - 0xA5C4
{
	return func_177(iParam0, !bParam1, bParam2);
}

int func_177(int iParam0, bool bParam1, bool bParam2)//Position - 0xA5D7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_178(int iParam0)//Position - 0xA67B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = 0;
		while (iVar1 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2, 0))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_179(bool bParam0, bool bParam1, bool bParam2)//Position - 0xA6C5
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0)//Position - 0xA7AA
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0)//Position - 0xA7FA
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, 0, 1, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, 0, 1, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	return 0;
}

void func_182()//Position - 0xA864
{
	if (!PED::IS_PED_INJURED(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_71()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_86, true), ENTITY::GET_ENTITY_COORDS(func_71(), true)) < 100f) && (ENTITY::GET_ENTITY_SPEED(iLocal_91) < 5f || !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_91))))
		{
			if (bLocal_368)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
				{
					TASK::TASK_PLAY_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
			{
				TASK::TASK_PLAY_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0, 0, 0, 0);
			}
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_86, iLocal_91))
		{
			TASK::CLEAR_PED_TASKS(iLocal_86);
		}
		switch (iLocal_369)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_71()) && !PED::IS_PED_INJURED(func_71()))
					{
						func_23(&Local_395, 4);
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
					}
					iLocal_49 = 2;
					func_108();
					if (func_5(&Local_395, cLocal_372, "REPAP_GO", 4, 0, 0, 0))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, true);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_69, 1862763509);
						iLocal_358 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), vLocal_87, true, true, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_358, false, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_358, false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_358, true);
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				func_184();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_86, 243.5571f, 77.51265f, 90.08002f, 268.2083f, 144.2189f, 109.853f, 23.25f, 0, true, 0))
				{
					iLocal_369++;
					iLocal_370 = MISC::GET_GAME_TIMER();
					iLocal_49 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_668)
				{
					if (((((iLocal_670 != 1 && iLocal_670 != 3) && iLocal_670 != 6) && iLocal_670 != 9) && iLocal_670 != 11) && iLocal_670 != 13)
					{
						bLocal_669 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_71()) && ENTITY::IS_ENTITY_AT_ENTITY(func_71(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = true;
						}
					}
				}
				else
				{
					if (!func_79())
					{
						bLocal_669 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_71()))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(func_71(), iLocal_91, 5f, 5f, 3f, 0, 1, 0))
						{
							bLocal_668 = false;
						}
					}
				}
				if (bLocal_669)
				{
					if (!func_80())
					{
						if (!func_183())
						{
							func_184();
						}
					}
				}
				else
				{
					switch (iLocal_670)
					{
						case 0:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_164("REPAP_RES1"))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT2"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT3M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT3F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT3T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 4)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT4M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT4F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT4T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 5)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_165("REPAP_CHT5M", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_165("REPAP_CHT5F", ((func_168() && !func_80()) && !bLocal_668)))
									{
										iLocal_670++;
									}
								}
								else if (func_165("REPAP_CHT5T", ((func_168() && !func_80()) && !bLocal_668)))
								{
									iLocal_670++;
								}
								if (iLocal_670 > 6)
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT6"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 9:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT7"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_671 = MISC::GET_GAME_TIMER();
									iLocal_670++;
								}
							}
							break;
						
						case 11:
							if ((MISC::GET_GAME_TIMER() - iLocal_671) > 8000)
							{
								if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
								{
									if (func_164("REPAP_CHT8"))
									{
										iLocal_670++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_668 && func_168()) && !func_80()) && !func_79())
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_670++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_71()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_369++;
					func_150();
					if (!Global_3 && !bLocal_70)
					{
						iLocal_49 = 6;
					}
				}
				if (Global_3 || bLocal_70)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 244.2175f, 441.0128f, 126.2767f, 33.5f, 40f, 14.75f, false, true, 0) && func_72())
					{
						iLocal_49 = 4;
						iLocal_85 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_72())
				{
					func_189("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_395, cLocal_372, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_188(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_175(0);
	}
}

int func_183()//Position - 0xB18E
{
	int iVar0;
	
	iVar0 = func_30();
	if ((MISC::GET_GAME_TIMER() - iLocal_666) > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 1))
			{
				if (iVar0 != -1 && (MISC::GET_GAME_TIMER() - Local_204[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_395, cLocal_372, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_666 = MISC::GET_GAME_TIMER();
						return 1;
					}
				}
			}
			else if (func_5(&Local_395, cLocal_372, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_666 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_184()//Position - 0xB230
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_564) > iLocal_565)
	{
		if ((!PED::IS_PED_INJURED(iLocal_86) && ENTITY::DOES_ENTITY_EXIST(func_71())) && !PED::IS_PED_INJURED(func_71()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_63, ENTITY::GET_ENTITY_COORDS(func_71(), true), true) < 8f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				func_23(&Local_395, 4);
				func_23(&Local_395, 5);
				func_23(&Local_395, 6);
				func_23(&Local_395, 7);
				switch (iVar0)
				{
					case 0:
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_22(&Local_395, 4, func_71(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[4 /*10*/]) && !PED::IS_PED_INJURED(Local_395[4 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_22(&Local_395, 5, func_71(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[5 /*10*/]) && !PED::IS_PED_INJURED(Local_395[5 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_22(&Local_395, 6, func_71(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[6 /*10*/]) && !PED::IS_PED_INJURED(Local_395[6 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_22(&Local_395, 7, func_71(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_395[7 /*10*/]) && !PED::IS_PED_INJURED(Local_395[7 /*10*/]))
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_564 = MISC::GET_GAME_TIMER();
								iLocal_565 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_185()//Position - 0xB497
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3[24];
	char* sVar9;
	vector3 vVar10[24];
	int iVar16;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_360))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_360, iLocal_664);
		}
		switch (iLocal_369)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait"))
				{
					iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_626[0] = "peek_a";
					sLocal_626[1] = "peek_b";
					sLocal_626[2] = "peek_c";
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_623 = 0;
					iLocal_659 = 0;
					bLocal_664 = false;
					iLocal_74 = 1;
					iLocal_660 = 0;
					iLocal_71 = 0;
					fLocal_661 = 0f;
					iLocal_369++;
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(iLocal_660, 0))
				{
					if (!MISC::IS_BIT_SET(iLocal_660, 1))
					{
						MISC::SET_BIT(&iLocal_660, 1);
					}
					else
					{
						iLocal_660 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_639, vLocal_642, fLocal_645, 0, true, 0);
				bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_632, vLocal_635, fLocal_638, 0, true, 0);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_631, "right_"))
				{
					if (bVar1)
					{
						sLocal_631 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_631 = "right_";
					iVar2 = 1;
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_625) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_625) > 0.9f) || iVar2)
				{
					if (iLocal_660 == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_86);
						iLocal_630++;
						if (iLocal_630 >= 3)
						{
							iLocal_630 = 0;
						}
						StringCopy(&cVar3, sLocal_631, 24);
						StringConCat(&cVar3, sLocal_626[iLocal_630], 24);
						iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1148846080, 0);
						MISC::SET_BIT(&iLocal_660, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_661 <= 20f)
					{
						fLocal_661 = (fLocal_661 + MISC::GET_FRAME_TIME());
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_624) > 5000 && iLocal_660 == 0)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < (22.2f * 22.2f))
						{
							if (fLocal_661 < 10f)
							{
								if (iLocal_662)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_395, cLocal_372, sVar9, 4, 0, 0, 0))
							{
								iLocal_662 = 1;
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 7f, 7f, 7f, 0, 1, 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_86);
									StringCopy(&cVar10, sLocal_631, 24);
									StringConCat(&cVar10, "come_here", 24);
									iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1148846080, 0);
									MISC::SET_BIT(&iLocal_660, 0);
								}
								iLocal_624 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vLocal_646, vLocal_649, fLocal_652, 0, true, 0) && iLocal_660 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_359))
					{
						HUD::REMOVE_BLIP(&iLocal_359);
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_190(iLocal_86, 0, 145);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_86);
					iLocal_625 = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_653, vLocal_656, 2);
					if (bVar1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, iLocal_625, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1148846080, 0);
					}
					MISC::SET_BIT(&iLocal_660, 0);
					iLocal_369++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_625) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_625) > 0.9f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_86);
						TASK::TASK_PLAY_ANIM(iLocal_86, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
						iLocal_621 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_369++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_187())
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_91);
						iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
						bLocal_368 = true;
					}
				}
				if (!bLocal_368)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 1);
					if (func_149(&Local_395, cLocal_372, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_664 = true;
						iLocal_369 = 100;
					}
				}
				else if (func_149(&Local_395, cLocal_372, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_664 = true;
					iLocal_369++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_186(vLocal_87, 1);
				}
				break;
			
			case 4:
				func_55();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_86, Global_19 + Vector(2f, 12f, 12f), 0, 1, 0) && !bLocal_368)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) != 1 && !iLocal_659)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar16);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar16);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_86, iVar16);
							PED::_0x2208438012482A1A(iLocal_86, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar16);
							iLocal_659 = 1;
						}
						else
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 1f);
							func_186(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_186(vLocal_87, 1);
					}
					if (!bLocal_368)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_361))
							{
								HUD::REMOVE_BLIP(&iLocal_361);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_360))
							{
								iLocal_360 = func_190(iLocal_86, 0, 145);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_86, Global_19, 0, 1, 0) && func_180(iLocal_91)) && (SYSTEM::TIMERA() > 6000 || !bLocal_368))
					{
						if (!iLocal_623)
						{
							func_108();
							if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_395, cLocal_372, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_623 = 1;
									}
								}
								else if (func_5(&Local_395, cLocal_372, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_395, cLocal_372, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_623 = 1;
								}
							}
							else if (func_5(&Local_395, cLocal_372, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_623 = 1;
							}
						}
						else
						{
							if (!bLocal_368)
							{
								iLocal_369 = -5;
							}
							else
							{
								iLocal_369++;
							}
							TASK::CLEAR_PED_TASKS(iLocal_86);
							TASK::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_368)
				{
					func_186(vLocal_87, 1);
				}
				else
				{
					func_186(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (func_162(iLocal_91, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_369 = 5;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_86) && PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							HUD::REMOVE_BLIP(&iLocal_360);
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						func_188(1);
					}
					else
					{
						if (!Global_3 && !bLocal_70)
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 1)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_91, 225.1779f, 125.6632f, 113.6647f, 262.3032f, 111.8771f, 97.16339f, 37f, 0, true, 0))
							{
								if (bLocal_368)
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, true);
									sLocal_371 = "REPAP_GUP";
									func_188(6);
								}
								else
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, true);
									sLocal_371 = "REPAP_CP";
									func_188(6);
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_86, iLocal_91, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_86);
								TASK::TASK_ENTER_VEHICLE(iLocal_86, iLocal_91, -1, func_178(iLocal_91), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(vLocal_63, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_91, 1f, 0f, 0f)) < 1f)
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_86, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!func_79())
					{
						func_108();
						if (func_24() == 1)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
						}
						else if (func_24() == 0)
						{
							func_108();
							if (func_5(&Local_395, cLocal_372, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_369++;
							}
							iLocal_74 = 0;
						}
						else if (func_5(&Local_395, cLocal_372, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_369++;
						}
					}
				}
				if (iLocal_369 == 101)
				{
					fLocal_665 = 0f;
				}
				func_186(vLocal_87, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(vLocal_60, vLocal_63) < 49f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_665 = (fLocal_665 + MISC::GET_FRAME_TIME());
					}
					else
					{
						fLocal_665 = (fLocal_665 - (MISC::GET_FRAME_TIME() * 2f));
					}
					if (fLocal_665 > 10f)
					{
						if (func_5(&Local_395, cLocal_372, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_665 = 0f;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0) && func_187())
					{
						bLocal_368 = true;
						iLocal_74 = 1;
						iLocal_91 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, 1);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							HUD::REMOVE_BLIP(&iLocal_361);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_190(iLocal_86, 0, 145);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							HUD::REMOVE_BLIP(&iLocal_360);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							iLocal_361 = func_176(iLocal_91, 0, 0);
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_361))
						{
							HUD::REMOVE_BLIP(&iLocal_361);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_360))
						{
							iLocal_360 = func_190(iLocal_86, 0, 145);
						}
						func_189("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_369 = 4;
					}
					if (!iLocal_74)
					{
						if (SYSTEM::VDIST2(vLocal_60, vLocal_66) < 9f && func_24() == 0)
						{
							if (func_5(&Local_395, cLocal_372, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_74 = 1;
							}
						}
					}
				}
				func_186(vLocal_87, 1);
				break;
		}
		if (!Global_3 && !bLocal_70)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (SYSTEM::VDIST(vLocal_60, vLocal_87) > 75f)
				{
					func_188(6);
				}
				if (func_201())
				{
					func_188(5);
				}
			}
		}
		if (!bLocal_368)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_188(5);
				}
			}
			else
			{
				if (!bLocal_368)
				{
					if (!Global_3 && !bLocal_70)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_91) < iLocal_83)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
							{
								iLocal_84 = (iLocal_84 + (iLocal_83 - ENTITY::GET_ENTITY_HEALTH(iLocal_91)));
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_91);
						}
						if (iLocal_84 > 250)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_86, iLocal_91) && SYSTEM::VDIST(vLocal_63, vLocal_66) < 25f)
							{
								func_188(5);
							}
						}
					}
				}
				iLocal_83 = ENTITY::GET_ENTITY_HEALTH(iLocal_91);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_86))
		{
			if (PED::IS_PED_FLEEING(iLocal_86))
			{
				if (!Global_3 && !bLocal_70)
				{
					func_188(5);
				}
			}
		}
	}
}

void func_186(vector3 vParam0, bool bParam3)//Position - 0xC123
{
	if (SYSTEM::VDIST(vLocal_63, vParam0) > 2.5f)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 713668775) != 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_86, vParam0, 1f, -1, 0.25f, 0, 1193033728);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 713668775) != 1)
	{
		func_146(bParam3);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

bool func_187()//Position - 0xC18C
{
	return (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 0) && func_180(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !Global_110607);
}

void func_188(int iParam0)//Position - 0xC20D
{
	iLocal_47 = iParam0;
	iLocal_369 = 0;
}

void func_189(char* sParam0)//Position - 0xC21D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (!MISC::ARE_STRINGS_EQUAL(iLocal_560[iVar0], sParam0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_560[iVar0]))
			{
				AUDIO::STOP_AUDIO_SCENE(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_560)
	{
		if (MISC::ARE_STRINGS_EQUAL(iLocal_560[iVar0], sParam0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_560[iVar0]))
			{
				AUDIO::START_AUDIO_SCENE(iLocal_560[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_190(int iParam0, bool bParam1, int iParam2)//Position - 0xC2A2
{
	int iVar0;
	
	iVar0 = func_177(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_191(int iParam0)//Position - 0xC2EC
{
	if (func_194())
	{
		Global_111550 = 1;
		Global_111547 = MISC::GET_GAME_TIMER();
		if (func_94(Global_111549))
		{
			func_192(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_94(Global_111549))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_192(int iParam0)//Position - 0xC33F
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_2++;
					MISC::SET_BIT(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_111556, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_3++;
					MISC::SET_BIT(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_111556, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_173(func_193(iParam0), -1);
					Global_111560.f_24990.f_4++;
					MISC::SET_BIT(&Global_111556, 2);
				}
			}
			break;
	}
}

char* func_193(int iParam0)//Position - 0xC420
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_194()//Position - 0xC462
{
	switch (func_195(&Global_30795, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_195(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xC498
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_199(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_197(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_196(uParam0, iParam4);
		}
	}
	return 2;
}

void func_196(var uParam0, int iParam1)//Position - 0xC5CF
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_197(int iParam0)//Position - 0xC61E
{
	return func_198(iParam0, Global_41396);
}

int func_198(int iParam0, int iParam1)//Position - 0xC62F
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0xC810
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_197(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_200()//Position - 0xC832
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_86))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 2, false);
		TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_204)
	{
		if (!PED::IS_PED_INJURED(Local_204[iVar0 /*18*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_204[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_204[iVar0 /*18*/], -2065892691);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_204[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_201()//Position - 0xC8AF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_204)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_204[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_204[iVar1 /*18*/]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_204[iVar1 /*18*/]))
			{
				if (((MISC::IS_BULLET_IN_AREA(Local_204[iVar1 /*18*/].f_6, 5f, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_204[iVar1 /*18*/].f_6, 10f)) || PED::IS_PED_FLEEING(Local_204[iVar1 /*18*/])) || (iLocal_386[iVar1] > 10 && iLocal_47 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_349 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_131)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_131[iVar1 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_131[iVar1 /*18*/], 0) && ENTITY::IS_ENTITY_VISIBLE(Local_131[iVar1 /*18*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_131[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_202()//Position - 0xC9A9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_209())
	{
		return 1;
	}
	if (func_203(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_203(float fParam0, bool bParam1)//Position - 0xCA2F
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_26(func_24()))
		{
			iVar36 = func_99();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_204(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_204(int iParam0, var uParam1)//Position - 0xCAE6
{
	switch (iParam0)
	{
		case 0:
			func_205(uParam1, "Abigail1", func_207(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 1:
			func_205(uParam1, "Abigail2", func_207(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 2:
			func_205(uParam1, "Barry1", func_207(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 3:
			func_205(uParam1, "Barry2", func_207(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 4:
			func_205(uParam1, "Barry3", func_207(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 5:
			func_205(uParam1, "Barry3A", func_207(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 6:
			func_205(uParam1, "Barry3C", func_207(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 7:
			func_205(uParam1, "Barry4", func_207(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_206(iParam0), 0, 0);
			break;
		
		case 8:
			func_205(uParam1, "Dreyfuss1", func_207(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 9:
			func_205(uParam1, "Epsilon1", func_207(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 10:
			func_205(uParam1, "Epsilon2", func_207(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 11:
			func_205(uParam1, "Epsilon3", func_207(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 12:
			func_205(uParam1, "Epsilon4", func_207(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 13:
			func_205(uParam1, "Epsilon5", func_207(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 14:
			func_205(uParam1, "Epsilon6", func_207(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 15:
			func_205(uParam1, "Epsilon7", func_207(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 16:
			func_205(uParam1, "Epsilon8", func_207(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 17:
			func_205(uParam1, "Extreme1", func_207(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 18:
			func_205(uParam1, "Extreme2", func_207(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 19:
			func_205(uParam1, "Extreme3", func_207(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 20:
			func_205(uParam1, "Extreme4", func_207(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 21:
			func_205(uParam1, "Fanatic1", func_207(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_206(iParam0), 1, 0);
			break;
		
		case 22:
			func_205(uParam1, "Fanatic2", func_207(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_206(iParam0), 1, 0);
			break;
		
		case 23:
			func_205(uParam1, "Fanatic3", func_207(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_206(iParam0), 0, 1);
			break;
		
		case 24:
			func_205(uParam1, "Hao1", func_207(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_206(iParam0), 0, 1);
			break;
		
		case 25:
			func_205(uParam1, "Hunting1", func_207(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 26:
			func_205(uParam1, "Hunting2", func_207(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 27:
			func_205(uParam1, "Josh1", func_207(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 28:
			func_205(uParam1, "Josh2", func_207(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 29:
			func_205(uParam1, "Josh3", func_207(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 30:
			func_205(uParam1, "Josh4", func_207(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 31:
			func_205(uParam1, "Maude1", func_207(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 32:
			func_205(uParam1, "Minute1", func_207(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 33:
			func_205(uParam1, "Minute2", func_207(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 34:
			func_205(uParam1, "Minute3", func_207(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 35:
			func_205(uParam1, "MrsPhilips1", func_207(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 36:
			func_205(uParam1, "MrsPhilips2", func_207(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 37:
			func_205(uParam1, "Nigel1", func_207(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 38:
			func_205(uParam1, "Nigel1A", func_207(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 39:
			func_205(uParam1, "Nigel1B", func_207(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 40:
			func_205(uParam1, "Nigel1C", func_207(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 41:
			func_205(uParam1, "Nigel1D", func_207(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_206(iParam0), 1, 1);
			break;
		
		case 42:
			func_205(uParam1, "Nigel2", func_207(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 43:
			func_205(uParam1, "Nigel3", func_207(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 1);
			break;
		
		case 44:
			func_205(uParam1, "Omega1", func_207(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 45:
			func_205(uParam1, "Omega2", func_207(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 46:
			func_205(uParam1, "Paparazzo1", func_207(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 47:
			func_205(uParam1, "Paparazzo2", func_207(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 48:
			func_205(uParam1, "Paparazzo3", func_207(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 49:
			func_205(uParam1, "Paparazzo3A", func_207(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 50:
			func_205(uParam1, "Paparazzo3B", func_207(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 51:
			func_205(uParam1, "Paparazzo4", func_207(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 52:
			func_205(uParam1, "Rampage1", func_207(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 54:
			func_205(uParam1, "Rampage3", func_207(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 55:
			func_205(uParam1, "Rampage4", func_207(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 56:
			func_205(uParam1, "Rampage5", func_207(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_206(iParam0), 0, 0);
			break;
		
		case 53:
			func_205(uParam1, "Rampage2", func_207(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_206(iParam0), 1, 0);
			break;
		
		case 57:
			func_205(uParam1, "TheLastOne", func_207(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 58:
			func_205(uParam1, "Tonya1", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 59:
			func_205(uParam1, "Tonya2", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 60:
			func_205(uParam1, "Tonya3", func_207(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 61:
			func_205(uParam1, "Tonya4", func_207(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		case 62:
			func_205(uParam1, "Tonya5", func_207(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_206(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_205(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xDC5B
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_206(int iParam0)//Position - 0xDCEC
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_207(int iParam0)//Position - 0xE032
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_208(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_208(int iParam0)//Position - 0xE068
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_209()//Position - 0xE4B3
{
	if (func_212() && !func_213())
	{
		return 1;
	}
	if (func_211() && func_210())
	{
		return 1;
	}
	return 0;
}

bool func_210()//Position - 0xE4E5
{
	return Global_111278 > 0;
}

int func_211()//Position - 0xE4F3
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xE508
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_213()//Position - 0xE52E
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_214()//Position - 0xE54B
{
	func_216(39, 1);
	func_216(40, 1);
	func_216(41, 1);
	func_216(42, 1);
	func_216(43, 1);
	func_216(44, 1);
	iLocal_359 = func_215(vLocal_87);
	iLocal_86 = PED::CREATE_PED(26, joaat("a_f_y_bevhills_03"), vLocal_87, fLocal_90, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 128, true);
	PED::SET_PED_KEEP_TASK(iLocal_86, true);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_86, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 7, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_86, 8, 0, 0, 0);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_86, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_86, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_86, "LACEY");
	if (Global_3 || bLocal_70)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_86, true);
	}
	if (PED::ADD_RELATIONSHIP_GROUP("CELEBRITY", &iLocal_69))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_86, iLocal_69);
	}
	iLocal_91 = VEHICLE::CREATE_VEHICLE(joaat("surano"), vLocal_92, fLocal_95, true, true, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_91, vLocal_92, 0, 0, 1);
	ENTITY::SET_ENTITY_QUATERNION(iLocal_91, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_91, false, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_91, 10);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_91, 1084227584);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_91, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_91, 1);
	AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_91, 1);
	AUDIO::SET_VEH_RADIO_STATION(iLocal_91, AUDIO::GET_RADIO_STATION_NAME(1));
	if (func_24() == 1)
	{
		func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_395, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_22(&Local_395, 3, iLocal_86, "LACEY", 0, 1);
	iLocal_375[0] = "idle_a";
	iLocal_375[1] = "idle_b";
	iLocal_375[2] = "idle_c";
	iLocal_375[3] = "idle_d";
	iLocal_375[4] = "idle_e";
	iLocal_375[5] = "idle_f";
	iLocal_375[6] = "idle_g";
	iLocal_375[7] = "idle_h";
	iLocal_375[8] = "idle_i";
	iLocal_560[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_560[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_560[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), true);
}

int func_215(vector3 vParam0)//Position - 0xE7B5
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_ALPHA(iVar0, 0);
	HUD::SET_BLIP_DISPLAY(iVar0, 0);
	return iVar0;
}

void func_216(int iParam0, bool bParam1)//Position - 0xE7D7
{
	if (bParam1)
	{
		if (!func_220(iParam0, 2, 1))
		{
			func_219(iParam0, 2, 1);
		}
	}
	else if (func_220(iParam0, 2, 1))
	{
		func_217(iParam0, 2, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)//Position - 0xE80E
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_89() == 0)
		{
			iVar0 = func_124(func_218(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_120(func_218(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_218(int iParam0)//Position - 0xE880
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

void func_219(int iParam0, int iParam1, bool bParam2)//Position - 0xEBB0
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_89() == 0)
		{
			iVar0 = func_124(func_218(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_120(func_218(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_220(int iParam0, int iParam1, bool bParam2)//Position - 0xEC22
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_89() == 0)
		{
			return MISC::IS_BIT_SET(func_124(func_218(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_221()//Position - 0xEC8C
{
	if (!iLocal_96)
	{
		func_229(&uLocal_97, joaat("surano"));
		func_229(&uLocal_97, joaat("prop_ld_test_01"));
		func_229(&uLocal_97, joaat("a_f_y_bevhills_03"));
		func_229(&uLocal_97, joaat("a_m_y_genstreet_02"));
		func_229(&uLocal_97, joaat("vader"));
		func_229(&uLocal_97, joaat("cavalcade2"));
		func_229(&uLocal_97, joaat("prop_pap_camera_01"));
		func_226(&uLocal_97);
		iLocal_96 = 1;
	}
	if (!func_222(&uLocal_97))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REQUEST_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT(sLocal_374);
	HUD::REQUEST_ADDITIONAL_TEXT("ESCPAP", 0);
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("random@escape_paparazzi@standing@") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@low@front_ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_374)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_222(var uParam0)//Position - 0xEDC7
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_223(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_223(var uParam0)//Position - 0xEE29
{
	return func_224(*uParam0, "NULL", uParam0->f_1);
}

int func_224(int iParam0, char* sParam1, int iParam2)//Position - 0xEE3E
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_225(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_225(int iParam0)//Position - 0xEF32
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_226(var uParam0)//Position - 0xEF5E
{
	func_227(uParam0, 9, -1, 0);
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEF70
{
	int iVar0;
	
	if (!func_228(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_228(int iParam0)//Position - 0xF033
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_229(var uParam0, int iParam1)//Position - 0xF0D2
{
	func_227(uParam0, 0, iParam1, 0);
}

int func_230()//Position - 0xF0E4
{
	if (!func_197(5))
	{
		return 1;
	}
	if (func_209())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_213())
		{
			return 0;
		}
	}
	if (func_203(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_231()//Position - 0xF146
{
	if ((Global_111549 == func_103() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

void func_232(var uParam0)//Position - 0xF171
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || MISC::IS_BIT_SET(Global_98669.f_20, 2)) || MISC::IS_BIT_SET(Global_98669.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
					{
						func_233(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_233(int iParam0)//Position - 0xF1FB
{
	func_234(iParam0, "NULL", iParam0->f_1);
}

void func_234(int iParam0, char* sParam1, int iParam2)//Position - 0xF20F
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_225(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_235(int iParam0)//Position - 0xF2E9
{
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_237(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111546 = 0;
	func_236();
}

void func_236()//Position - 0xF31F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_237(int iParam0)//Position - 0xF35C
{
	Global_111549 = iParam0;
}

int func_238(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xF36A
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	
	if (!Global_150139)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_103();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_279())
		{
			return 0;
		}
	}
	vLocal_43 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_213())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_84(0))
		{
			return 0;
		}
		if (func_209())
		{
			return 0;
		}
		if (func_278())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_203(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_43.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_277(iParam3))
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_276(func_24()) == 4 || func_276(func_24()) == 5)
			{
				return 0;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_275(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_274(Global_111560.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111551) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_273())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_264(4))
		{
			return 0;
		}
		if (!func_197(5))
		{
			return 0;
		}
		if (func_263(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_263(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_277(30) && !func_263(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_262(iVar8))
				{
					if (func_240(iVar4))
					{
						if (!func_239(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_24() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_239(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0xF704
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_240(int iParam0)//Position - 0xF74B
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_241(iVar0);
}

int func_241(int iParam0)//Position - 0xF76C
{
	return func_242(iParam0, 1);
}

int func_242(int iParam0, int iParam1)//Position - 0xF77B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_262(iParam0))
	{
		return 0;
	}
	func_243(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xF7CE
{
	func_244(func_255(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_244(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xF7EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_254(iParam0, iParam1))
	{
		iVar0 = func_253(iParam1);
		iVar1 = func_251(iParam0);
		iVar2 = (func_251(iParam0) - func_251(iParam1));
		iVar3 = (func_253(iParam0) - func_253(iParam1));
		iVar4 = (func_250(iParam0) - func_250(iParam1));
		iVar5 = (func_249(iParam0) - func_249(iParam1));
		iVar6 = (func_248(iParam0) - func_248(iParam1));
		iVar7 = (func_247(iParam0) - func_247(iParam1));
	}
	else
	{
		iVar0 = func_253(iParam0);
		iVar1 = func_251(iParam1);
		iVar2 = (func_251(iParam1) - func_251(iParam0));
		iVar3 = (func_253(iParam1) - func_253(iParam0));
		iVar4 = (func_250(iParam1) - func_250(iParam0));
		iVar5 = (func_249(iParam1) - func_249(iParam0));
		iVar6 = (func_248(iParam1) - func_248(iParam0));
		iVar7 = (func_247(iParam1) - func_247(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_246(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_245(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_245(float fParam0, float fParam1, float fParam2)//Position - 0xF9ED
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_246(int iParam0, int iParam1)//Position - 0xFA2F
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_247(int iParam0)//Position - 0xFAD1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_248(int iParam0)//Position - 0xFAE4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_249(int iParam0)//Position - 0xFAF7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_250(int iParam0)//Position - 0xFB0A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_251(int iParam0)//Position - 0xFB1C
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_252(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_252(bool bParam0, int iParam1, int iParam2)//Position - 0xFB41
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_253(int iParam0)//Position - 0xFB58
{
	return iParam0 & 15;
}

int func_254(int iParam0, int iParam1)//Position - 0xFB65
{
	int iVar0;
	int iVar1;
	
	if (!func_262(iParam1) || !func_262(iParam0))
	{
		return 1;
	}
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_253(iParam0);
	iVar1 = func_253(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	iVar1 = func_247(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_255()//Position - 0xFC71
{
	var uVar0;
	
	func_261(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_260(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_259(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_258(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_257(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_256(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_256(var uParam0, int iParam1)//Position - 0xFCB7
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_257(var uParam0, int iParam1)//Position - 0xFD3D
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_258(var uParam0, int iParam1)//Position - 0xFD70
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_253(*uParam0);
	iVar1 = func_251(*uParam0);
	if (iParam1 < 1 || iParam1 > func_246(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_259(var uParam0, int iParam1)//Position - 0xFDC1
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_260(var uParam0, int iParam1)//Position - 0xFDFB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_261(var uParam0, int iParam1)//Position - 0xFE36
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_262(int iParam0)//Position - 0xFE72
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_247(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_248(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_249(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_251(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_253(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_250(iParam0);
	if (iVar5 < 1 || iVar5 > func_246(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_263(int iParam0, int iParam1)//Position - 0xFF4E
{
	if (MISC::IS_BIT_SET(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)//Position - 0xFF71
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_270()) || func_269()) || func_268()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_272()) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_270()) || func_269()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_272() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_19(8, -1)) || func_267()) || func_266()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_270()) || func_269()) || func_266()) || func_265())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_272()) || Global_30738) || func_271()) || func_19(8, -1)) || func_269()) || func_268()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_272()) || func_269()) || Global_110607) || Global_30738) || func_271()) || Global_42561) || func_19(8, -1)) || func_268()) || func_266()) || func_267()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_272()) || Global_110607) || Global_30738) || func_271()) || func_19(8, -1)) || func_268()) || func_266()) || func_270()) || func_269()) || func_267())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_265()//Position - 0x10691
{
	return Global_98708.f_1;
}

int func_266()//Position - 0x1069F
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_267()//Position - 0x106C5
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_268()//Position - 0x106DF
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_269()//Position - 0x10709
{
	return Global_98721.f_346 > 0;
}

bool func_270()//Position - 0x1071A
{
	return Global_98721.f_345 > 0;
}

var func_271()//Position - 0x1072B
{
	return Global_1312873;
}

int func_272()//Position - 0x10737
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_273()//Position - 0x10753
{
	func_16();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_274(int iParam0)//Position - 0x1077B
{
	return func_254(func_255(), iParam0);
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x1078D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_24();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_276(int iParam0)//Position - 0x10871
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_277(int iParam0)//Position - 0x10895
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_279())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_111560.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_111560.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_278()//Position - 0x108F3
{
	int iVar0;
	
	if (Global_30886)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_279()//Position - 0x10937
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, int iParam1)//Position - 0x109F2
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_281()//Position - 0x10A09
{
	func_299(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-90f, -1488f, -50f, 55f, -1470f, 50f, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_294(&uLocal_97, 0);
	STREAMING::REMOVE_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REMOVE_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT(sLocal_374);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_231())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && !PED::IS_PED_INJURED(iLocal_86))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_86))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_86);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_86, 1))
		{
			if (!PED::IS_PED_FLEEING(iLocal_86))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_86, 0, 0);
			}
		}
	}
	func_283(-1);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_365, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_366, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_367, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, 1);
	if (Global_30975)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_282();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_282()//Position - 0x10B5D
{
	Global_30971 = 0;
	Global_30972 = 0;
	Global_30974 = 0;
	Global_30975 = 0;
	Global_30976 = 0;
}

void func_283(int iParam0)//Position - 0x10B79
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_103();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_231())
	{
		func_287(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111551 = MISC::GET_GAME_TIMER();
		func_286(30000);
		StringCopy(&cVar0, func_285(Global_111549, 1), 64);
		if (func_102(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111546, (MISC::GET_GAME_TIMER() - Global_111547), 0);
	}
	else if (MISC::IS_BIT_SET(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_111556, 0);
	}
	func_284(&Global_30795);
	Global_111550 = 0;
	func_237(-1);
}

void func_284(var uParam0)//Position - 0x10C2E
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

char* func_285(int iParam0, bool bParam1)//Position - 0x10C6B
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_286(int iParam0)//Position - 0x10EB4
{
	Global_41947 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_287(int iParam0)//Position - 0x10EC6
{
	func_288(iParam0, 0, func_293(iParam0));
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0x10EDB
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_255();
	func_291(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_290(iParam0, &uVar0);
	Var1 = { func_289(&uVar0) };
}

struct<16> func_289(var uParam0)//Position - 0x10F0A
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_249(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_248(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_247(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_250(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_253(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_251(*uParam0), 64);
	return Var0;
}

void func_290(int iParam0, var uParam1)//Position - 0x10FD9
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_291(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10FF1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_251(*uParam0);
	iVar1 = func_253(*uParam0);
	iVar2 = func_250(*uParam0);
	iVar3 = func_249(*uParam0);
	iVar4 = func_248(*uParam0);
	iVar5 = func_247(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_246(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_246(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_292(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11173
{
	func_261(uParam0, iParam1);
	func_260(uParam0, iParam2);
	func_259(uParam0, iParam3);
	func_257(uParam0, iParam5);
	func_258(uParam0, iParam4);
	func_256(uParam0, iParam6);
}

int func_293(int iParam0)//Position - 0x111AB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_294(var uParam0, bool bParam1)//Position - 0x1134E
{
	int iVar0;
	
	if (!bParam1)
	{
		func_296(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_295(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_295(var uParam0)//Position - 0x1138E
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_296(var uParam0)//Position - 0x1139F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_297(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_297(var uParam0)//Position - 0x113D8
{
	func_298(*uParam0, "NULL", uParam0->f_1);
}

void func_298(int iParam0, char* sParam1, int iParam2)//Position - 0x113ED
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_225(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_299(bool bParam0)//Position - 0x114AD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_216(iVar0, bParam0);
		iVar0++;
	}
}

