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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<2> Local_82 = { 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	vector3 vLocal_86[24] = "";
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	char* sLocal_92 = NULL;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<136> Local_96 = { 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_232[64] = "";
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
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
	vLocal_61 = { 0f, 0f, 0f };
	vLocal_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	StringCopy(&Local_82, "SAVE_TRIG", 16);
	StringCopy(&cLocal_86, "SCRIPT\Alarm_Clocks", 24);
	sLocal_92 = "Alarm_Clocks_Bell";
	iLocal_251 = -1;
	vLocal_73 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_439();
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-462902287) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(-462902287);
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(-462902287))
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(-462902287, &ScriptParam_0, 23, 1424);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || Global_3)
		{
			iLocal_69 = 4;
		}
		iLocal_252 = func_438();
		switch (iLocal_69)
		{
			case 0:
				func_435();
				break;
			
			case 1:
				func_433();
				func_432();
				func_420();
				break;
			
			case 2:
				func_18();
				break;
			
			case 4:
				func_439();
				break;
		}
		func_9();
		func_2();
		func_1();
	}
}

void func_1()//Position - 0x16C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_69 == 1 || iLocal_69 == 3)
		{
			if (iLocal_250 != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_71 = 0;
				iLocal_69 = 0;
			}
		}
	}
}

void func_2()//Position - 0x1A4
{
	if (((iLocal_69 == 0 || iLocal_69 == 3) || !Local_96.f_135) || iLocal_252 != Local_96.f_1)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_8(0);
	}
	else
	{
		func_3();
	}
}

void func_3()//Position - 0x1EB
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (((iLocal_95 || !Local_96.f_135) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_96.f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 20f)
	{
		return;
	}
	if (!iLocal_95)
	{
		if (func_6(Local_96))
		{
			iVar1 = 0;
			MISC::SET_BIT(&iVar1, 3);
			MISC::SET_BIT(&iVar1, 8);
			MISC::SET_BIT(&iVar1, 1);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!func_5(Local_96.f_114[iVar0 /*3*/], 0f, 0f, 0f, 0))
				{
					Global_93959[Local_96.f_134 /*4*/][iVar0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), Local_96.f_114[iVar0 /*3*/], Local_96.f_124[iVar0 /*3*/], iVar1, -1, 2, 1, 0);
					if (func_4(Local_96, iVar0, &sVar2))
					{
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Global_93959[Local_96.f_134 /*4*/][iVar0], &sVar2);
					}
				}
				iVar0++;
			}
			iLocal_95 = 1;
		}
	}
}

bool func_4(int iParam0, int iParam1, char* sParam2)//Position - 0x2D9
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "v_michael_g_kitche", 32);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "v_michael_1_wc", 32);
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "v_57_bathrm", 32);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "v_57_kitchrm", 32);
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "kitchen", 32);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "bedroom", 32);
			}
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				if (iParam1 == 0)
				{
					StringCopy(sParam2, "V_TrailerRm", 32);
				}
				else if (iParam1 == 1)
				{
					StringCopy(sParam2, "V_TrailerToiletRm", 32);
				}
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				if (iParam1 == 0)
				{
					StringCopy(sParam2, "V_TrailerTIDYRm", 32);
				}
				else if (iParam1 == 1)
				{
					StringCopy(sParam2, "V_TrailerToiletTIDYRm", 32);
				}
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				if (iParam1 == 0)
				{
					StringCopy(sParam2, "V_TrailTRASHRm", 32);
				}
				else if (iParam1 == 1)
				{
					StringCopy(sParam2, "V_TraiToiletTRASHRm", 32);
				}
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "rm_lounge", 32);
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "rm_bathroom", 32);
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "strp3off", 32);
			}
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam2, "");
}

bool func_5(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x435
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_6(int iParam0)//Position - 0x47C
{
	char* sVar0;
	int iVar8;
	
	if (func_7(iParam0, &sVar0))
	{
		iVar8 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93737[iParam0 /*10*/].f_3, &sVar0);
		if (iVar8 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iVar8))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_7(int iParam0, char* sParam1)//Position - 0x4B7
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

void func_8(int iParam0)//Position - 0x594
{
	int iVar0;
	
	if (!Local_96.f_135)
	{
		return;
	}
	if (iLocal_95 || iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (OBJECT::DOES_PICKUP_EXIST(Global_93959[Local_96.f_134 /*4*/][iVar0]))
			{
				OBJECT::REMOVE_PICKUP(Global_93959[Local_96.f_134 /*4*/][iVar0]);
			}
			iVar0++;
		}
		iLocal_95 = 0;
	}
}

void func_9()//Position - 0x5F0
{
	if (iLocal_69 == 2)
	{
		func_11(0);
		func_10();
		PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	}
}

void func_10()//Position - 0x60F
{
	Global_22211.f_6 = 1;
}

void func_11(int iParam0)//Position - 0x61D
{
	if (func_17())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_16(0))
		{
			func_12(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_12(int iParam0)//Position - 0x650
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_15())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()//Position - 0x6DA
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x701
{
	if (bParam0)
	{
		if (func_16(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_15()//Position - 0x775
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_16(int iParam0)//Position - 0x786
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_17()//Position - 0x7E0
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

void func_18()//Position - 0x7F2
{
	var uVar0[5];
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	int iVar11;
	char* sVar12;
	int iVar20;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		switch (iLocal_70)
		{
			case 0:
				switch (iLocal_71)
				{
					case 0:
						func_412(1, 1, 1, 1, 0, 0);
						func_411();
						func_410(45000);
						switch (iLocal_252)
						{
							case 0:
								STATS::STAT_SET_INT(joaat("sp0_kills_since_safehouse_visit"), 0, 1);
								break;
							
							case 1:
								STATS::STAT_SET_INT(joaat("sp1_kills_since_safehouse_visit"), 0, 1);
								break;
							
							case 2:
								STATS::STAT_SET_INT(joaat("sp2_kills_since_safehouse_visit"), 0, 1);
								break;
						}
						iLocal_71++;
						break;
					
					case 1:
						if (func_411())
						{
							HUD::DISPLAY_RADAR(false);
							HUD::DISPLAY_HUD(false);
							iVar6 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::DOES_ENTITY_EXIST(iVar6))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar6, true), Local_96.f_2, true) < 75f)
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, 0);
										}
										MISC::CLEAR_AREA(Local_96.f_66, 10f, 1, 0, 0, false);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
										{
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar6, 1);
										}
									}
								}
							}
							MISC::CLEAR_AREA(Local_96.f_2, 15f, 1, 0, 0, false);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::_0xA660FAF550EB37E5(PLAYER::PLAYER_PED_ID(), 1);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, 0))
							{
								if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar6, 1))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar6);
								}
							}
							bVar7 = false;
							if (Local_96 == 0)
							{
								if (Global_93705[2] == 66)
								{
									bVar7 = true;
								}
								else if ((((Global_93705[2] != 64 && Global_93705[2] != 65) && Global_93705[2] != 61) && Global_93705[2] != 62) && Global_93705[2] != 63)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.7371f, 179.976f, 75.30324f, -814.2743f, 180.9501f, 78.54263f, 7.4375f, 0, true, 0))
									{
										bVar7 = true;
									}
								}
							}
							else if (Local_96 == 6)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 0.342038f, 521.9959f, 169.4297f, -0.790193f, 524.3142f, 171.6991f, 7.4375f, 0, true, 0))
								{
									bVar7 = true;
								}
							}
							else if (Local_96 == 3)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.28f, -1513.459f, 9.321099f, -1148.496f, -1512.256f, 11.28705f, 4.375f, 0, true, 0))
								{
									bVar7 = true;
								}
							}
							else if (Local_96 == 1)
							{
								iVar8 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
								iVar9 = 0;
								while (iVar9 < iVar8)
								{
									if ((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar9]) && !PED::IS_PED_INJURED(uVar0[iVar9])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar9]) == func_408(2))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar9], false, 1);
										PED::DELETE_PED(&(uVar0[iVar9]));
										func_405(9, 140);
									}
									iVar9++;
								}
							}
							func_404(&Local_96, bVar7);
							iLocal_72 = PED::CREATE_SYNCHRONIZED_SCENE(Local_96.f_20, Local_96.f_23, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_72, &(Local_96.f_26), &(Local_96.f_34), 1000f, -8f, 0, 0, 1148846080, 0);
							PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_72, true);
							if (!CAM::DOES_CAM_EXIST(iLocal_93))
							{
								iLocal_93 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
							}
							MemCopy(&cLocal_232, {Local_96.f_34}, 16);
							StringConCat(&cLocal_232, "_CAM", 64);
							CAM::PLAY_CAM_ANIM(iLocal_93, &cLocal_232, &(Local_96.f_26), Local_96.f_20, Local_96.f_23, 0, 2);
							CAM::SET_CAM_ACTIVE(iLocal_93, true);
							if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) != 4)
							{
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
							}
							SYSTEM::SETTIMERA(0);
							iLocal_76 = 1;
							iLocal_71++;
						}
						break;
					
					case 2:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_72))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_72) >= 1f)
							{
								iLocal_71 = 0;
								iLocal_70 = 1;
							}
						}
						else if (SYSTEM::TIMERA() > 1000)
						{
							if (iLocal_253 < 1 && !CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								iLocal_72 = PED::CREATE_SYNCHRONIZED_SCENE(Local_96.f_20, Local_96.f_23, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_72, &(Local_96.f_26), &(Local_96.f_34), 1000f, -8f, 0, 0, 1148846080, 0);
								PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_72, true);
								SYSTEM::SETTIMERA(0);
								iLocal_253++;
							}
							else
							{
								iLocal_70 = 3;
							}
						}
						break;
				}
				break;
			
			case 1:
				switch (iLocal_71)
				{
					case 0:
						if (!CAM::IS_SCREEN_FADING_OUT() && CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_OUT(800);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							switch (iLocal_252)
							{
								case 0:
									CLOCK::ADD_TO_CLOCK_TIME(6, 0, 0);
									func_397(6f);
									break;
								
								case 1:
									CLOCK::ADD_TO_CLOCK_TIME(8, 0, 0);
									func_397(8f);
									break;
								
								case 2:
									CLOCK::ADD_TO_CLOCK_TIME(12, 0, 0);
									func_397(12f);
									break;
								
								default:
									CLOCK::ADD_TO_CLOCK_TIME(6, 0, 0);
									func_397(6f);
									break;
							}
							func_387();
							func_11(0);
							func_12(0);
							func_20(0, 0, 0);
							MISC::SET_SAVE_MENU_ACTIVE(0);
							iLocal_71++;
						}
						break;
					
					case 1:
						if (MISC::_0x397BAA01068BAA96() != 1)
						{
							iLocal_71++;
						}
						break;
					
					case 2:
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 0);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 2);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 3);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 4);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 5);
						PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
						AUDIO::SKIP_RADIO_FORWARD();
						switch (Local_96.f_113)
						{
							case 0:
								sVar10 = "Alarm_Clocks_Bell";
								break;
							
							case 1:
								sVar10 = "Alarm_Clocks_Cowbell";
								break;
							
							case 2:
								sVar10 = "Alarm_Clocks_Electronic";
								break;
							
							default:
								sVar10 = sLocal_92;
								break;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, sVar10, 0, true);
						iVar11 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, true), Local_96.f_2, true) < 75f)
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar11))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar11, true, 0);
									}
								}
							}
						}
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 1, 0, 0, false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar11, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar11, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar11);
							}
						}
						iLocal_71 = 0;
						iLocal_70 = 2;
						break;
				}
				break;
			
			case 2:
				switch (iLocal_71)
				{
					case 0:
						func_7(Local_96, &sVar12);
						iVar20 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93737[Local_96 /*10*/].f_3, &sVar12);
						if (iVar20 != 0)
						{
							INTERIOR::REFRESH_INTERIOR(iVar20);
						}
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 12f, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_71++;
						break;
					
					case 1:
						if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && SYSTEM::TIMERA() < 8000)
						{
						}
						else
						{
							if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							{
								STREAMING::NEW_LOAD_SCENE_STOP();
							}
							iLocal_71++;
						}
						break;
					
					case 2:
						CAM::DO_SCREEN_FADE_IN(2500);
						HUD::THEFEED_FLUSH_QUEUE();
						iLocal_72 = PED::CREATE_SYNCHRONIZED_SCENE(Local_96.f_20, Local_96.f_23, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_72, false);
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_72, false);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_72, &(Local_96.f_26), &(Local_96.f_50), 8f, -1.5f, 0, 0, 1000f, 1);
						if (!CAM::DOES_CAM_EXIST(iLocal_93))
						{
							iLocal_93 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						}
						MemCopy(&cLocal_232, {Local_96.f_50}, 16);
						StringConCat(&cLocal_232, "_CAM", 64);
						CAM::PLAY_CAM_ANIM(iLocal_93, &cLocal_232, &(Local_96.f_26), Local_96.f_20, Local_96.f_23, 0, 2);
						CAM::SET_CAM_ACTIVE(iLocal_93, true);
						if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) != 4)
						{
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						}
						iLocal_71++;
						break;
					
					case 3:
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_72) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_72) >= 1f)
						{
							iLocal_71 = 0;
							iLocal_70 = 3;
						}
						break;
				}
				break;
			
			case 3:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (CAM::DOES_CAM_EXIST(iLocal_93))
				{
					CAM::SET_CAM_ACTIVE(iLocal_93, false);
					CAM::DESTROY_CAM(iLocal_93, 0);
				}
				if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) != 4)
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_19(0);
				func_412(0, 1, 1, 0, 0, 0);
				if (iLocal_252 == 1)
				{
					if (Local_96 == 5 || Local_96 == 6)
					{
						BRAIN::_0x6D6840CEE8845831("chop");
					}
				}
				PED::_0xA660FAF550EB37E5(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_76 = 0;
				iLocal_253 = 0;
				iLocal_69 = 1;
				break;
			}
	}
}

void func_19(bool bParam0)//Position - 0x105F
{
	if (!bParam0)
	{
		Global_110202 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_110199 = bParam0;
}

void func_20(bool bParam0, int iParam1, bool bParam2)//Position - 0x107D
{
	var uVar0;
	var uVar3;
	
	func_386();
	func_375();
	func_63();
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_111560.f_10011.f_25), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_10011.f_25), 4);
	}
	Global_111560.f_7683.f_924 = MISC::GET_GAME_TIMER();
	if (Global_76839 == 62 || Global_76840 == 62)
	{
		func_21(2, 1);
	}
	if (!bParam0)
	{
		Global_98708.f_8 = 0;
		Global_111560.f_10011.f_23 = 0;
		Global_111560.f_10011.f_24 = 0;
	}
	MISC::OVERRIDE_SAVE_HOUSE(iParam1, Global_111560.f_25079, Global_111560.f_25079.f_3, bParam0, &uVar0, &uVar3);
}

void func_21(int iParam0, bool bParam1)//Position - 0x1120
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_111560.f_7224[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_7224[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_93737[iParam0 /*10*/].f_8, bParam1, 1);
	func_54(iParam0);
	func_52(iParam0, 0);
	func_50(iParam0);
	func_22(iParam0);
}

void func_22(int iParam0)//Position - 0x1184
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_37183[(38 / 32)]), (38 % 32));
			func_23(38, 0);
			MISC::SET_BIT(&(Global_37183[(41 / 32)]), (41 % 32));
			func_23(41, 0);
			MISC::SET_BIT(&(Global_37183[(43 / 32)]), (43 % 32));
			func_23(43, 0);
			MISC::SET_BIT(&(Global_37183[(42 / 32)]), (42 % 32));
			func_23(42, 0);
			MISC::SET_BIT(&(Global_37183[(44 / 32)]), (44 % 32));
			func_23(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_37183[(51 / 32)]), (51 % 32));
			func_23(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_37183[(51 / 32)]), (51 % 32));
			func_23(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_37183[(53 / 32)]), (53 % 32));
			func_23(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_37183[(81 / 32)]), (81 % 32));
			func_23(81, 0);
			MISC::SET_BIT(&(Global_37183[(82 / 32)]), (82 % 32));
			func_23(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_37183[(47 / 32)]), (47 % 32));
			func_23(47, 0);
			MISC::SET_BIT(&(Global_37183[(50 / 32)]), (50 % 32));
			func_23(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_37183[(50 / 32)]), (50 % 32));
			func_23(50, 0);
			break;
	}
}

void func_23(int iParam0, int iParam1)//Position - 0x1314
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_76577)
		{
			iVar0 = Global_2437549.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_111560.f_7256[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_37183[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_37192[(iParam0 / 32)]), (iParam0 % 32));
				Global_37655[iParam0] = iParam1;
			}
			else if (Global_76577)
			{
				Global_2437549.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_111560.f_7256[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_37183[(iParam0 / 32)]), (iParam0 % 32));
			func_25(iParam0);
			if (MISC::IS_BIT_SET(Global_37183[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_24(iParam0);
			}
		}
	}
}

void func_24(int iParam0)//Position - 0x140D
{
	if (!MISC::IS_BIT_SET(Global_38126.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_38126.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_38126[Global_38126.f_227] = iParam0;
		Global_38126.f_227++;
	}
}

void func_25(int iParam0)//Position - 0x145B
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_47())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_46(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		func_32(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((MISC::IS_BIT_SET(Global_37192[(iParam0 / 32)], (iParam0 % 32)) && Global_37655[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_37192[(iParam0 / 32)]), (iParam0 % 32));
		Global_37201[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_37428[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_98721.f_343 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_98721.f_343 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_98721.f_343;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_37192[(iParam0 / 32)]), (iParam0 % 32));
					Global_37655[iParam0] = 3;
					MISC::SET_BIT(&(Global_37183[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_37428[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_37192[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_37655[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_111560.f_9080)
		{
			iVar9 = func_28(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_27(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_26())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_111560.f_7256[iParam0];
	}
	if (Global_37882[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_37183[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_37192[(iParam0 / 32)], (iParam0 % 32)) || (Global_37201[iParam0] == 0 && Global_37655[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_37182)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, false, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_37183[(iParam0 / 32)]), (iParam0 % 32));
			Global_37882[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_37192[(iParam0 / 32)], (iParam0 % 32)) && Global_37655[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_37183[(iParam0 / 32)]), (iParam0 % 32));
		func_24(iParam0);
		if (Global_37201[iParam0] < 2)
		{
			Global_37201[iParam0]++;
		}
	}
}

int func_26()//Position - 0x193E
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_438())
	{
		case 0:
			if (Global_111560.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_111560.f_9080.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_111560.f_9080.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_27(int iParam0)//Position - 0x19BD
{
	return Global_41396 == iParam0;
}

int func_28(int iParam0)//Position - 0x19CB
{
	int iVar0;
	
	iVar0 = func_438();
	if (func_30(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (MISC::IS_BIT_SET(Global_111560.f_7224[5], 0) || MISC::IS_BIT_SET(Global_111560.f_7224[6], 0))
			{
				return 0;
			}
		}
		if (func_29(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_93726[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[0], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93726[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[5], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93726[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[6], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93726[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[2], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_93726[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[1], 0))
				{
					return 0;
				}
				if (func_29(iVar0))
				{
					if (MISC::IS_BIT_SET(Global_93726[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7224[3], 0))
				{
					return 0;
				}
			}
			if (func_29(iVar0))
			{
				if (MISC::IS_BIT_SET(Global_93726[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

bool func_29(int iParam0)//Position - 0x1C20
{
	return iParam0 < 3;
}

int func_30(int iParam0)//Position - 0x1C2C
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_31(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x1C98
{
	return iParam0;
}

void func_32(int iParam0, var uParam1)//Position - 0x1CA2
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_35();
	iVar1 = func_34(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_33(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_111560.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_33(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_111560.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_33(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_111560.f_9080.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_111560.f_7256[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_111560.f_9080.f_99.f_58[4])
				{
					Global_111560.f_7256[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else if (Global_111560.f_9080.f_99.f_58[4])
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_111560.f_7256[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_111560.f_7256[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_33(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_111560.f_7256[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_33(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_111560.f_7256[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[70 /*34*/].f_6) == 0)
			{
				if (!func_33(iParam0))
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_33(iParam0))
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_33(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[26 /*34*/].f_6) == 0)
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_33(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[43 /*34*/].f_6) == 0)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 193:
			if (!func_33(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[93 /*34*/].f_6) > 0)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 80:
			if (!func_33(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[10 /*34*/].f_6) == 0)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_33(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[47 /*34*/].f_6) == 0)
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[70 /*34*/].f_6) == 0)
			{
				if (!func_33(iParam0))
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[48 /*34*/].f_6) == 0)
			{
				if (!func_33(iParam0))
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_89487[39 /*34*/].f_6) == 0)
			{
				if (!func_33(iParam0))
				{
					Global_111560.f_7256[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
				}
			}
			break;
		
		case 216:
			if (!func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 217:
		case 218:
			if (!func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_33(iParam0))
			{
				Global_111560.f_7256[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_111560.f_7256[iParam0], true, true);
			}
			break;
	}
}

bool func_33(int iParam0)//Position - 0x263D
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_46(iParam0) };
	iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_34(int iParam0)//Position - 0x2671
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_35()//Position - 0x2684
{
	var uVar0;
	
	func_45(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_44(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_43(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_38(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_37(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_36(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_36(var uParam0, int iParam1)//Position - 0x26CA
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

void func_37(var uParam0, int iParam1)//Position - 0x2750
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_38(var uParam0, int iParam1)//Position - 0x2783
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_42(*uParam0);
	iVar1 = func_40(*uParam0);
	if (iParam1 < 1 || iParam1 > func_39(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_39(int iParam0, int iParam1)//Position - 0x27D4
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

var func_40(int iParam0)//Position - 0x2876
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_41(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_41(bool bParam0, int iParam1, int iParam2)//Position - 0x289B
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_42(var uParam0)//Position - 0x28B2
{
	return uParam0 & 15;
}

void func_43(var uParam0, int iParam1)//Position - 0x28BF
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_44(var uParam0, int iParam1)//Position - 0x28F9
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_45(var uParam0, int iParam1)//Position - 0x2934
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_46(int iParam0)//Position - 0x2970
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_47()//Position - 0x557E
{
	if ((func_49() == -1 || func_49() == 999) && !func_48() == 0)
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x55AE
{
	return Global_30737;
}

int func_49()//Position - 0x55B9
{
	return Global_30736;
}

void func_50(int iParam0)//Position - 0x55C4
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
			if (func_51(1))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[1 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[0 /*10*/].f_8, func_51(0), 0);
			}
			else if (func_51(0))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[0 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[1 /*10*/].f_8, func_51(1), 0);
			}
			break;
		
		case 2:
		case 3:
		case 4:
			if (func_51(3))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[3 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[4 /*10*/].f_8, func_51(4), 0);
				MISC::SET_SAVE_HOUSE(Global_93737[2 /*10*/].f_8, func_51(2), 0);
			}
			else if (func_51(4))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[4 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[3 /*10*/].f_8, func_51(3), 0);
				MISC::SET_SAVE_HOUSE(Global_93737[2 /*10*/].f_8, func_51(2), 0);
			}
			else if (func_51(2))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[2 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[3 /*10*/].f_8, func_51(3), 0);
				MISC::SET_SAVE_HOUSE(Global_93737[4 /*10*/].f_8, func_51(4), 0);
			}
			break;
		
		case 5:
		case 6:
			if (func_51(6))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[6 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[5 /*10*/].f_8, func_51(5), 0);
			}
			else if (func_51(5))
			{
				MISC::SET_SAVE_HOUSE(Global_93737[5 /*10*/].f_8, true, 1);
				MISC::SET_SAVE_HOUSE(Global_93737[6 /*10*/].f_8, func_51(6), 0);
			}
			break;
	}
}

bool func_51(int iParam0)//Position - 0x577B
{
	return MISC::IS_BIT_SET(Global_111560.f_7224[iParam0], 0);
}

void func_52(int iParam0, bool bParam1)//Position - 0x5793
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar11;
	
	if (iParam0 == 10)
	{
		return;
	}
	bVar11 = MISC::IS_BIT_SET(Global_111560.f_7224[iParam0], 0);
	if (iParam0 == 5 && MISC::IS_BIT_SET(Global_111560.f_7224[6], 0))
	{
		bVar11 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_53(iVar0, iVar1, &Var3, &iVar2))
		{
			if (iVar2 == iParam0)
			{
				if (bVar11)
				{
					if (bParam1)
					{
						OBJECT::_CLEAR_GARAGE_AREA(MISC::GET_HASH_KEY(&Var3), 0);
					}
				}
				OBJECT::ENABLE_SAVING_IN_GARAGE(MISC::GET_HASH_KEY(&Var3), bVar11);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_53(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5838
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x5910
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_93737[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_BIT_SET(Global_111560.f_7224[iParam0], 0))
	{
		if (Global_93737[iParam0 /*10*/].f_9 != func_60())
		{
			bVar0 = true;
		}
		else if (!func_59(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_51(6))
		{
			bVar0 = false;
		}
	}
	if (func_56(14))
	{
		bVar0 = false;
	}
	func_55(Global_93737[iParam0 /*10*/].f_7, bVar0, 0);
}

void func_55(int iParam0, bool bParam1, bool bParam2)//Position - 0x599D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = MISC::IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 18);
		if (Global_31108 == 1)
		{
			Global_31109 = 1;
		}
		Global_31108 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_31111[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_31111[iVar0 /*23*/].f_11), 15);
	}
	if (!MISC::IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_31111[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_31111[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_56(int iParam0)//Position - 0x5AA6
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_57(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_57(int iParam0)//Position - 0x5AC8
{
	return func_58(iParam0, Global_41396);
}

int func_58(int iParam0, int iParam1)//Position - 0x5AD9
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

int func_59(int iParam0)//Position - 0x5CBA
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_98721.f_343 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_59(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_7(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93737[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_98721.f_343 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

int func_60()//Position - 0x5D3F
{
	func_61();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_61()//Position - 0x5D58
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_408(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_62(PLAYER::PLAYER_PED_ID());
			if (func_29(iVar0) && (!func_27(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_29(Global_111560.f_2358.f_539.f_4321))
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

int func_62(int iParam0)//Position - 0x5E55
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_408(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_63()//Position - 0x5E92
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<4> Var3;
	vector3 vVar11;
	int iVar14;
	
	func_361(PLAYER::PLAYER_PED_ID(), 1);
	func_66(PLAYER::PLAYER_PED_ID(), 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			bVar1 = false;
			iVar2 = 0;
			StringCopy(&Var3, "", 32);
			vVar11 = { 0f, 0f, 0f };
			iVar14 = func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_96040[iVar0], 1);
			if ((((iVar14 != 10 && iVar14 != 3) && iVar14 != 2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96030[iVar0], 0)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Global_96030[iVar0]))
			{
				while (!bVar1 && func_53(Global_96040[iVar0], iVar2, &Var3, &iVar14))
				{
					if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&Var3, Global_96030[iVar0]))
					{
						bVar1 = true;
						vVar11 = { ENTITY::GET_ENTITY_COORDS(Global_96030[iVar0], false) };
						func_64(Global_96040[iVar0], iVar2, &vVar11);
					}
					iVar2++;
				}
			}
			if (bVar1)
			{
				if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_96050[iVar0]))
				{
					Global_111560.f_2358.f_539.f_3588[0 /*10*/][Global_96040[iVar0] /*3*/] = { vVar11 };
					Global_111560.f_2358.f_539.f_3609[0 /*4*/][Global_96040[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_96030[iVar0]);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_96050[iVar0]))
				{
					Global_111560.f_2358.f_539.f_3588[1 /*10*/][Global_96040[iVar0] /*3*/] = { vVar11 };
					Global_111560.f_2358.f_539.f_3609[1 /*4*/][Global_96040[iVar0]] = ENTITY::GET_ENTITY_HEADING(Global_96030[iVar0]);
				}
			}
			else if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_96050[iVar0]))
			{
				Global_111560.f_2358.f_539.f_3588[0 /*10*/][Global_96040[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_111560.f_2358.f_539.f_3609[0 /*4*/][Global_96040[iVar0]] = 0f;
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(Global_96050[iVar0]))
			{
				Global_111560.f_2358.f_539.f_3588[1 /*10*/][Global_96040[iVar0] /*3*/] = { 0f, 0f, 0f };
				Global_111560.f_2358.f_539.f_3609[1 /*4*/][Global_96040[iVar0]] = 0f;
			}
		}
		iVar0++;
	}
}

void func_64(int iParam0, int iParam1, var uParam2)//Position - 0x60DC
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 71.47866f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 31.39692f;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 29.65688f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 175.0277f;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				uParam2->f_2 = 31.39692f;
			}
			else if (iParam1 == 1)
			{
				uParam2->f_2 = 3.24864f;
			}
			else if (iParam1 == 2)
			{
			}
			break;
	}
}

int func_65(vector3 vParam0, int iParam3, int iParam4)//Position - 0x6172
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93737[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93737[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_51(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_93737[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_66(int iParam0, int iParam1)//Position - 0x6201
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_62(iParam0);
		if (func_29(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_360(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_359(iVar0);
					func_84(iParam0, &(Global_111560.f_2358.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_78(iParam0, &Var2, 1, -1);
			Global_98394[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_72();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_27(0) && !func_27(1)) && !func_27(2)) && !func_27(3)) && !func_27(4)) && !func_27(9)) && !func_27(10)))
				{
					Global_111560.f_2358.f_539[iVar0 /*65*/] = { Var2 };
					Global_111560.f_2358.f_539.f_2391[iVar0] = func_71(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111560.f_2358.f_539.f_204[iVar67 /*4*/][iVar0] = func_67(iParam0, func_70(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111560.f_2358.f_539.f_204[iVar67 /*4*/][iVar0] = func_67(iParam0, func_70(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_111560.f_9080.f_99.f_58[121])
						{
							Global_111560.f_9080.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_67(int iParam0, int iParam1)//Position - 0x63E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_69(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_68(iParam0, iVar1, iVar2, iParam1);
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6449
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_69(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_69(int iParam0)//Position - 0x64CD
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x657D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x662D
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_72()//Position - 0x66C0
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_29(func_438())) || !func_75())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_78(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	func_73(1306, Var0[0], -1, 1);
	func_73(1307, Var0[1], -1, 1);
	func_73(1308, Var0[2], -1, 1);
	func_73(1309, Var0[3], -1, 1);
	func_73(1310, Var0[4], -1, 1);
	func_73(1311, Var0[5], -1, 1);
	func_73(1312, Var0[6], -1, 1);
	func_73(1313, Var0[7], -1, 1);
	func_73(1314, Var0[8], -1, 1);
	func_73(1315, Var0[9], -1, 1);
	func_73(1316, Var0[10], -1, 1);
	func_73(1317, Var0[11], -1, 1);
	func_73(1318, Var0.f_13[0], -1, 1);
	func_73(1319, Var0.f_13[1], -1, 1);
	func_73(1320, Var0.f_13[2], -1, 1);
	func_73(1321, Var0.f_13[3], -1, 1);
	func_73(1322, Var0.f_13[4], -1, 1);
	func_73(1323, Var0.f_13[5], -1, 1);
	func_73(1324, Var0.f_13[6], -1, 1);
	func_73(1325, Var0.f_13[7], -1, 1);
	func_73(1326, Var0.f_13[8], -1, 1);
	func_73(1327, Var0.f_13[9], -1, 1);
	func_73(1328, Var0.f_13[10], -1, 1);
	func_73(1329, Var0.f_13[11], -1, 1);
	func_73(1330, Var0.f_26[0], -1, 1);
	func_73(1331, Var0.f_26[1], -1, 1);
	func_73(1332, Var0.f_26[2], -1, 1);
	func_73(1333, Var0.f_26[3], -1, 1);
	func_73(1334, Var0.f_26[4], -1, 1);
	func_73(1335, Var0.f_26[5], -1, 1);
	func_73(1336, Var0.f_26[6], -1, 1);
	func_73(1337, Var0.f_26[7], -1, 1);
	func_73(1338, Var0.f_26[8], -1, 1);
	func_73(1339, Var0.f_26[9], -1, 1);
	func_73(1340, Var0.f_26[10], -1, 1);
	func_73(1341, Var0.f_26[11], -1, 1);
	func_73(1342, Var0.f_39[0], -1, 1);
	func_73(1343, Var0.f_39[1], -1, 1);
	func_73(1344, Var0.f_39[2], -1, 1);
	func_73(1345, Var0.f_39[3], -1, 1);
	func_73(1346, Var0.f_39[4], -1, 1);
	func_73(1347, Var0.f_39[5], -1, 1);
	func_73(1348, Var0.f_39[6], -1, 1);
	func_73(1349, Var0.f_39[7], -1, 1);
	func_73(1350, Var0.f_39[8], -1, 1);
	func_73(1351, Var0.f_49[0], -1, 1);
	func_73(1352, Var0.f_49[1], -1, 1);
	func_73(1353, Var0.f_49[2], -1, 1);
	func_73(1354, Var0.f_49[3], -1, 1);
	func_73(1355, Var0.f_49[4], -1, 1);
	func_73(1356, Var0.f_49[5], -1, 1);
	func_73(1357, Var0.f_49[6], -1, 1);
	func_73(1358, Var0.f_49[7], -1, 1);
	func_73(1359, Var0.f_49[8], -1, 1);
	func_73(1360, func_438(), -1, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), true, 1);
	Global_111560.f_2358.f_539.f_4315 = 1;
}

var func_73(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6AD4
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_74()//Position - 0x7096
{
	return Global_1312745;
}

int func_75()//Position - 0x70A2
{
	if (func_77() && func_76(0))
	{
		return 1;
	}
	return 0;
}

var func_76(int iParam0)//Position - 0x70C0
{
	return Global_1312373[iParam0];
}

var func_77()//Position - 0x70D0
{
	return func_76(func_74() + 1);
}

void func_78(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x70E2
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_62(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_83(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_82(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_29(iVar0))
		{
			uParam1->f_59 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_81(161, iParam3))
			{
				uParam1->f_59 = func_79(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_79(752, iParam3, 0);
			}
			uParam1->f_60 = func_79(753, iParam3, 0);
			uParam1->f_61 = func_79(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_81(161, iParam3))
			{
				uParam1->f_59 = func_79(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_79(752, iParam3, 0);
			}
		}
	}
}

int func_79(int iParam0, int iParam1, int iParam2)//Position - 0x7282
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_80(var uParam0)//Position - 0x72B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
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

int func_81(int iParam0, int iParam1)//Position - 0x72E8
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_82(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7314
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_83(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x785C
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_84(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7A9D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = func_62(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_29(iVar0))
		{
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_358(iParam0, iVar1, &iVar2, 0))
			{
				func_344(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_111560.f_2358.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_285(iParam0, iVar1, &iVar2))
			{
				func_344(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_282(iParam0);
			func_281(753, uParam1->f_60, Global_76386, 1, 0);
			func_281(754, uParam1->f_61, Global_76386, 1, 0);
			iVar5 = func_68(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_279(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_277(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_93(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76386, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_68(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_93(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76386, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_87(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_93(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76386, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_279(iVar9);
			}
			else
			{
				iVar9 = func_277(iVar9);
			}
			func_281(752, iVar9, Global_76386, 1, 0);
			func_281(2051, iVar9, Global_76386, 1, 0);
			func_85(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, -2103452271, 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == 1551873674)
					{
						FILES::GET_SHOP_PED_QUERY_PROP(-518535904, &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(530896308, &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, -2103452271, 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x7F3A
{
	int iVar0;
	
	if (func_86())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_80(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_86()//Position - 0x7F6C
{
	return 1;
	return 0;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7F79
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_92(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_89(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_89(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_88(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_92(iParam3);
}

int func_88(int iParam0, int iParam1)//Position - 0x8076
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x81B4
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_91(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var20);
		iVar38 = 0;
		iVar39 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_69(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_90(iParam0, func_69(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_90(int iParam0, int iParam1)//Position - 0x8294
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_91(int iParam0)//Position - 0x863B
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_92(int iParam0)//Position - 0x869C
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x8722
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	float fVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	var uVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	var uVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1312807 != 4 && Global_1312807 != 5) && Global_1312807 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_222 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76386;
	}
	Global_76387++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
		if (!func_235(iParam3))
		{
			Global_76387 = (Global_76387 - 1);
			return 0;
		}
		func_230(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76432 };
		}
		else
		{
			uVar15 = { func_227(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76389[1 /*14*/] = { func_236(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iVar0), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_69(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iVar0), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
					{
						func_230(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76389[1 /*14*/] = { func_236(iVar5, iVar0, uVar15[iVar0], -1) };
					if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76449 };
							}
							else
							{
								uVar32 = { func_224(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76389[1 /*14*/] = { func_236(iVar5, 14, uVar32[iVar1], -1) };
								func_223(iParam0, Global_76389[1 /*14*/].f_12, Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
								{
									func_230(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iVar0), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_69(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iVar0), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_93(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
							{
								func_230(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76389[1 /*14*/] = { func_236(iVar5, iVar0, func_221(iParam0, iVar0, -1), -1) };
				if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_227(iVar5, 0) };
					func_93(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_220();
			if (iVar59 != -1)
			{
				func_217(iVar59, 0, iParam10);
			}
			func_215(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_224(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76389[1 /*14*/] = { func_236(iVar5, 14, uVar60[iVar1], -1) };
			func_223(iParam0, Global_76389[1 /*14*/].f_12, Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
			{
				func_230(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76387 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_213(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_223(iParam0, Global_76389[1 /*14*/].f_12, Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
		{
			func_230(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76389[1 /*14*/].f_12 == 0)
		{
			if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, 537651880, 1))
			{
			}
			else
			{
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, 66092876, 0))
				{
					func_93(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76389[1 /*14*/].f_12 == 0)
		{
			func_208(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76387 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_93(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar71 = -1;
				if (MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -1996375172, 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1314030, Global_1314031, Global_1314032, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1314030, Global_1314031, Global_1314032, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1314030, Global_1314031, Global_1314032, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1314030, Global_1314031, Global_1314032, 3);
				}
				iVar72 = func_67(iParam0, 11);
				iVar73 = func_67(iParam0, 8);
				iVar74 = func_67(iParam0, 4);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar71 = func_207(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar71 = func_207(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 320460654, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -1855618474, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -1420825402, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -299089347, 0))
					{
					}
					else
					{
						iVar9 = func_67(iParam0, 8);
					}
				}
				iVar75 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -356646862, 0))
				{
					iVar76 = func_206(iVar5, iVar73, iVar72, iVar74);
					if (iVar76 == -99)
					{
						iVar76 = func_213(iParam0, iVar5, 11, iVar72, 3, 0);
					}
					switch (iVar75)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar76 = 11;
							iVar71 = func_207(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -530089825, 0))
							{
								iVar76 = -99;
							}
							break;
					}
					if (iVar76 != -99)
					{
						iVar77 = 0;
						while (iVar77 < 17)
						{
							if (func_205(iVar5, iVar76, iVar77) == iVar75)
							{
								iVar11 = iVar77;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar71 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar72 = func_67(iParam0, 11);
					if (iVar72 >= 256)
					{
						iVar71 = func_207(iVar5, iVar72, 11, 4);
					}
					if (iVar72 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 1965569012, 0))
					{
						iVar78 = func_203(iVar5, iVar72, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar78 != -99)
						{
							func_93(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_202(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar72 >= 237)
						{
							iVar71 = func_207(iVar5, iVar72, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar72 >= 256)
						{
							iVar71 = func_207(iVar5, iVar72, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_202(iVar5, iVar72, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar72 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -1200513218, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar72 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 684992453, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -820724897, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 700658917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar71, 1830529185, 0)))
						{
						}
						else
						{
							iVar79 = func_201(iParam0, iParam2);
							iVar80 = func_203(iVar5, iVar72, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar80 != -99)
							{
								func_93(iParam0, 8, iVar80, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar79 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4267255))
							{
								func_93(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar81 = func_200(iVar5, 11, -1);
									Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar81, -1) };
									iVar80 = func_203(iVar5, iVar81, iParam2, Global_76389[1 /*14*/].f_4);
									if (iVar80 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 3), -1237899132, 0))
									{
										iVar80 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 4), -1237899132, 0))
									{
										iVar80 = 120;
									}
									else
									{
										iVar80 = 48;
									}
								}
								func_93(iParam0, 8, iVar80, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar72, -1) };
						iVar82 = Global_76389[1 /*14*/].f_3;
						Global_76389[1 /*14*/] = { func_236(iVar5, 11, iParam2, -1) };
						iVar83 = Global_76389[1 /*14*/].f_3;
						if (iVar82 != iVar83)
						{
							iVar85 = func_201(iParam0, iParam2);
							Global_76389[1 /*14*/] = { func_236(iVar5, 8, iVar73, -1) };
							iVar84 = Global_76389[1 /*14*/].f_4;
							iVar86 = func_199(iVar5, iVar73, iVar84);
							if (iVar85 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4267255))
							{
								iVar87 = iVar85;
							}
							else if (iVar86 == -99)
							{
								iVar87 = iVar73;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar88 = func_207(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_198(iVar88) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar88, -1237899132, 0))
									{
										iVar86 = func_200(iVar5, 11, -1);
										Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar86, -1) };
										iVar87 = func_203(iVar5, iVar86, iParam2, Global_76389[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar73 == 32 || iVar73 == 33))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar86 = func_200(iVar5, 11, -1);
										Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar86, -1) };
										iVar87 = func_203(iVar5, iVar86, iParam2, Global_76389[1 /*14*/].f_4);
									}
								}
								iVar89 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar89 = func_207(iVar5, iVar73, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar89 = func_207(iVar5, iVar73, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar89, -316495692, 0))
								{
									iVar86 = func_200(iVar5, 11, -1);
									Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar86, -1) };
									iVar87 = func_203(iVar5, iVar86, iParam2, Global_76389[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar87 = func_203(iVar5, iVar86, iParam2, iVar84);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_197(iVar5, func_67(iParam0, 4), iVar86))
										{
											iVar87 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_197(iVar5, func_67(iParam0, 4), iVar86))
										{
											iVar87 = 48;
										}
									}
								}
							}
							if (iVar87 != -99)
							{
								func_93(iParam0, 8, iVar87, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar86 = func_200(iVar5, 11, -1);
								Global_76389[1 /*14*/] = { func_236(iVar5, 11, iVar86, -1) };
								iVar87 = func_203(iVar5, iVar86, iParam2, Global_76389[1 /*14*/].f_4);
								if (iVar87 == -99)
								{
									iVar87 = 240;
								}
								func_93(iParam0, 8, iVar87, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_93(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_194(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_215(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_206(iVar5, func_221(iParam0, 8, -1), iParam2, func_221(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_79(2151, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_79(2158, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar90 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar90 = func_279(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar90 = func_277(iParam2);
					}
					if (iVar90 != -99 && iParam2 != iVar90)
					{
						iParam2 = iVar90;
					}
				}
				func_141(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar91 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar91, -356646862, 0))
			{
				iVar92 = func_67(iParam0, 11);
				iVar93 = func_67(iParam0, 4);
				iVar94 = func_206(iVar5, iParam2, iVar92, iVar93);
				if (iVar94 == -99)
				{
					iVar94 = func_213(iParam0, iVar5, 11, iVar92, 3, 0);
				}
				switch (iVar91)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar94 = 11;
						iVar95 = func_207(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar95, -530089825, 0))
						{
							iVar94 = -99;
						}
						break;
				}
				if (iVar94 != -99)
				{
					iVar96 = 0;
					while (iVar96 < 17)
					{
						if (func_205(iVar5, iVar94, iVar96) == iVar91)
						{
							iVar11 = iVar96;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar96++;
					}
				}
			}
			func_215(iParam0, iParam1, iParam2, iParam6, 0);
			iVar97 = func_67(iParam0, 11);
			if (func_202(iVar5, iVar97, -1))
			{
				iVar98 = func_199(iVar5, iParam2, Global_76389[1 /*14*/].f_4);
				func_194(iVar5, iVar98);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_206(iVar5, iParam2, func_67(iParam0, 11), func_67(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar99 = func_67(iParam0, 7);
				if (!func_138(iVar5, iVar99, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -921710083, 0)))
			{
				iVar100 = func_79(2098, iParam10, 0);
				iVar101 = func_79(2099, iParam10, 0);
				iVar102 = func_79(2100, iParam10, 0);
				fVar103 = func_137(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar100, iVar101, iVar102, 0f, fVar103, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar100, iVar101, iVar102, 0f, fVar103, 0f, false);
				}
				iVar104 = 0;
				while (iVar104 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar104, 0f);
					iVar104++;
				}
			}
			else
			{
				func_121(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar105 = func_67(iParam0, 11);
			iVar106 = func_67(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iVar105, 11, 3), -1719338724, 0))
				{
					if (!func_197(iVar5, iParam2, func_199(iVar5, iVar106, 0)))
					{
						func_93(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iVar5, iVar105, 11, 4), -1719338724, 0))
				{
					if (!func_197(iVar5, iParam2, func_199(iVar5, iVar106, 0)))
					{
						func_93(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76389[1 /*14*/] = { func_236(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_206(iVar5, func_67(iParam0, 8), func_67(iParam0, 11), iParam2);
			}
			iVar107 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar107, -356646862, 0))
			{
				iVar108 = func_206(iVar5, iVar106, iVar105, iParam2);
				if (iVar108 == -99)
				{
					iVar108 = func_213(iParam0, iVar5, 11, iVar105, 3, 0);
				}
				switch (iVar107)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar108 = 11;
						iVar109 = func_207(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar109, -530089825, 0))
						{
							iVar108 = -99;
						}
						break;
				}
				if (iVar108 != -99)
				{
					iVar110 = 0;
					while (iVar110 < 17)
					{
						if (func_205(iVar5, iVar108, iVar110) == iVar107)
						{
							iVar11 = iVar110;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar110++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iParam1), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_69(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_69(iParam1), Global_76389[1 /*14*/].f_3, Global_76389[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76387 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_206(iVar5, iVar3, func_67(iParam0, 11), func_67(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_93(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_120(iParam0))
				{
					iVar111 = func_118(iParam0, iVar5, iParam1, iParam2);
					if (iVar111 > 0)
					{
						iVar111 = (iVar111 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_112(iParam0, 9, iVar111))
						{
							func_93(iParam0, 9, iVar111, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_93(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 240476421, 8))
					{
						func_93(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar112 = func_79(2040, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_106(iParam0, iVar112), func_105(iParam0, iVar112), func_104(iParam0, iVar112));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_106(PLAYER::PLAYER_PED_ID(), iVar112), func_105(PLAYER::PLAYER_PED_ID(), iVar112), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_104(PLAYER::PLAYER_PED_ID(), iVar112));
					func_103(PLAYER::PLAYER_ID(), iVar112);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -319568873, 0))
					{
						func_93(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar113 = func_221(iParam0, 4, -1);
					iVar114 = iParam2;
				}
				else
				{
					iVar113 = iParam2;
					iVar114 = func_221(iParam0, 11, -1);
				}
				if (func_102(iVar5, 11, iVar114, -1))
				{
					if (!func_101(iVar5, 4, iVar113, -1))
					{
						if (func_100(iVar5, 4, iVar113, &uVar115))
						{
							func_93(iParam0, 4, uVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_101(iVar5, 4, iVar113, -1))
				{
					if (func_99(iVar5, 4, iVar113, &uVar115))
					{
						func_93(iParam0, 4, uVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar116 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar117 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar118 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar116, iVar117);
				iVar119 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar120 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar121 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar119, iVar120);
				iVar122 = func_67(iParam0, 4);
				iVar123 = func_67(iParam0, 6);
				if (func_98(iVar5, iVar118))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar118, 1812005517, 0) != func_97(iVar5, iVar122, iVar118))
					{
						iVar124 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar118);
						iVar125 = 0;
						while (iVar125 < iVar124)
						{
							FILES::GET_VARIANT_COMPONENT(iVar118, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 6)
							{
								if (iVar126 != 0 && iVar126 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar123 = func_89(iVar5, iVar126, 6, 3);
										iVar118 = iVar126;
										func_93(iParam0, 6, iVar123, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar123 = func_89(iVar5, iVar126, 6, 4);
										iVar118 = iVar126;
										func_93(iParam0, 6, iVar123, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar121, -2042643157, 0) != func_96(iVar5, iVar123, iVar121))
					{
						iVar124 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar121);
						iVar125 = 0;
						while (iVar125 < iVar124)
						{
							FILES::GET_VARIANT_COMPONENT(iVar121, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 4)
							{
								if (iVar126 != 0 && iVar126 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar122 = func_89(iVar5, iVar126, 4, 3);
										iVar121 = iVar126;
										func_93(iParam0, 4, iVar122, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar122 = func_89(iVar5, iVar126, 4, 4);
										iVar121 = iVar126;
										func_93(iParam0, 4, iVar122, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
				}
				if (func_98(iVar5, iVar121))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar121, -2042643157, 0) != func_96(iVar5, iVar123, iVar121))
					{
						iVar124 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar121);
						iVar125 = 0;
						while (iVar125 < iVar124)
						{
							FILES::GET_VARIANT_COMPONENT(iVar121, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 4)
							{
								if (iVar126 != 0 && iVar126 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar122 = func_89(iVar5, iVar126, 4, 3);
										iVar121 = iVar126;
										func_93(iParam0, 4, iVar122, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar122 = func_89(iVar5, iVar126, 4, 4);
										iVar121 = iVar126;
										func_93(iParam0, 4, iVar122, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar118, 1812005517, 0) != func_97(iVar5, iVar122, iVar118))
					{
						iVar124 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar118);
						iVar125 = 0;
						while (iVar125 < iVar124)
						{
							FILES::GET_VARIANT_COMPONENT(iVar118, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 6)
							{
								if (iVar126 != 0 && iVar126 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar123 = func_89(iVar5, iVar126, 6, 3);
										iVar118 = iVar126;
										func_93(iParam0, 6, iVar123, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar123 = func_89(iVar5, iVar126, 6, 4);
										iVar118 = iVar126;
										func_93(iParam0, 6, iVar123, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_208(iParam0);
				iVar129 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar130 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar131 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar129, iVar130);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar131, 838607662, 0))
				{
					iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_93(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_213(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_93(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_94(iParam0, &uVar4))
		{
			func_93(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_93(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_93(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_93(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar132 = func_205(iVar5, func_221(iParam0, 3, -1), iVar11);
		if (iVar132 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar132, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar132, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_93(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76387 = (Global_76387 - 1);
	return 1;
}

int func_94(int iParam0, var uParam1)//Position - 0xA4B3
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_221(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (func_79(753, Global_76386, 0) != -99 && func_75())
	{
		if (func_95() == 4)
		{
			return 1;
		}
		if (func_79(753, Global_76386, 0) == 0 && func_79(754, Global_76386, 0) == 0)
		{
			if (func_81(161, Global_76386))
			{
				if (func_79(2051, Global_76386, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_79(752, Global_76386, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_79(753, Global_76386, 0);
		iVar1 = func_79(754, Global_76386, 0);
		if (!func_112(iParam0, iVar1, iVar0))
		{
			if (func_81(161, Global_76386))
			{
				*uParam1 = func_79(2051, Global_76386, 0);
			}
			else
			{
				*uParam1 = func_79(752, Global_76386, 0);
			}
			func_281(753, -99, Global_76386, 1, 0);
			func_281(754, 2, Global_76386, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_95()//Position - 0xA5C7
{
	return Global_1312807;
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0xA5D3
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_207(iParam0, iParam1, 6, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -364248070, 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1080576805, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1387458490, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1420825402, 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -56268180, 0))
			{
				if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -713698407, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 140732128, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2106216756, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -849839091, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1446333198, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -269266203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 201427653, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 967829025, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -364248070, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_207(iParam0, iParam1, 6, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -56268180, 0))
			{
				if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -713698407, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 140732128, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1863955539, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -849839091, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -269266203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 201427653, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 967829025, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -309899747, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_97(int iParam0, int iParam1, int iParam2)//Position - 0xA804
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_207(iParam0, iParam1, 4, 3);
				iVar1 = func_198(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -56268180, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -269266203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 201427653, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 967829025, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -685039259, 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1080576805, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1387458490, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case -439764935:
					case 1858824227:
					case -44268217:
					case 301706885:
					case 1283072893:
					case -1590178565:
					case 1995307108:
					case 1029014836:
					case -365568266:
					case -138446327:
					case -2034722819:
					case -1219513062:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case -145679239:
					case 686423978:
					case -763407658:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case -1698011990:
					case -1443101939:
					case 2133699953:
					case -1924511318:
					case -475531676:
					case -237137197:
					case 754461254:
					case -1155840382:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case 423009394:
					case 662518015:
					case 1973998937:
					case -2082049580:
					case 8743696:
					case -850459484:
					case -596466965:
					case 1244823145:
					case -1187390334:
					case 1269301600:
					case -607480390:
						iVar2 = 0;
						break;
				}
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1248753945, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 481861038, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 713391749, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 434101562, 0))
				{
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1080576805, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1387458490, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -269266203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 201427653, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 967829025, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_207(iParam0, iParam1, 4, 4);
				iVar1 = func_198(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -56268180, 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1080576805, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1387458490, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0))
				{
					if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -364248070, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -979468724, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1813210391, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1248753945, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if ((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1863955539, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2106216756, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -761463976, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 684992453, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1127835965, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1207283343, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -849839091, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2088146832, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1446333198, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1055526375, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1052059919, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1006704786, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_98(int iParam0, int iParam1)//Position - 0xAF11
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, -364248070, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, -364248070, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, -56268180, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xAF7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_207(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -1100807313, 0))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xB026
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_207(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -1100807313, 0))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB0CE
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 4, 4);
						}
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1100807313, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB124
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 11, 4);
						}
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_103(int iParam0, int iParam1)//Position - 0xB177
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_104(int iParam0, int iParam1)//Position - 0xB1ED
{
	return 0;
}

int func_105(int iParam0, int iParam1)//Position - 0xB1F6
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_106(int iParam0, int iParam1)//Position - 0xB258
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_76550 || !iParam1 == Global_76551) || !iVar1 == Global_76552) || !iVar2 == Global_76553) || !iVar3 == Global_76554)
	{
		Global_76550 = bVar0;
		Global_76551 = iParam1;
		Global_76552 = iVar1;
		Global_76553 = iVar2;
		Global_76554 = iVar3;
		Global_76555 = func_107(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 76)
				{
					Global_76555 = 80;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 78;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 78;
				}
			}
		}
	}
	return Global_76555;
}

int func_107(int iParam0, int iParam1)//Position - 0xB3BA
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 350281921, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -887141061, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1185371730, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2124629577, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -887141061, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1185371730, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2124629577, 8))
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		return func_111(iParam0, iParam1);
	}
	if (func_110(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -979468724, 0))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -306768813, 0))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -58412562, 0))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1536649085, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 350281921, 0))
		{
			iVar6 = func_109(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_198(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_198(iVar5);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 248194463, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 396458410, 0))
		{
			iVar7 = func_108(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_198(iVar5);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1719167561, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1274099003, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1407614029, 0))
				{
					return func_111(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 103539798, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_111(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1506370874, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1347486026, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2006289597, 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_111(iParam0, iParam1) + 15;
				}
				else
				{
					return func_111(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -540436505, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1663871176, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1);
			}
			else
			{
				return func_111(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_111(iParam0, iParam1) + 15;
			}
			else
			{
				return func_111(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -2017999390, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_198(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_108(int iParam0, int iParam1)//Position - 0xD5EF
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_109(int iParam0, int iParam1)//Position - 0xD78F
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_110(int iParam0)//Position - 0xD8D3
{
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0xD902
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_112(int iParam0, int iParam1, int iParam2)//Position - 0xD980
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	var uVar68;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_76389[1 /*14*/] = { func_236(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_227(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_112(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_224(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_112(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76389[2 /*14*/] = { func_236(iVar0, 14, iVar6, -1) };
									if (Global_76389[2 /*14*/].f_12 == iVar5)
									{
										if (func_112(iParam0, 14, iVar6))
										{
											if (!func_113(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76389[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_67(iParam0, iVar4);
						Global_76389[2 /*14*/] = { func_236(iVar0, iVar4, iVar1, -1) };
						if (!func_113(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76389[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_79(1757, Global_76386, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_224(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_112(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_76389[1 /*14*/].f_12) == Global_76389[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_76389[1 /*14*/].f_12) == Global_76389[1 /*14*/].f_4 || Global_76389[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76389[1 /*14*/].f_12 == 0 && MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -1033433901, 1)) && FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2621444) > 0)
		{
			iVar50 = FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				FILES::_GET_VARIANT_PROP(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579)
				{
					FILES::INIT_SHOP_PED_PROP(&Var51);
					FILES::GET_SHOP_PED_PROP(iVar47, &Var51);
					if (Var51.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_76389[1 /*14*/].f_12) && Var51.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_76389[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_76389[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_69(iParam1)) && Global_76389[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_69(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76388++;
			if (Global_76388 == 1)
			{
				if (func_102(iVar0, 11, func_67(iParam0, 11), -1))
				{
					if (func_100(iVar0, 4, iParam2, &uVar68))
					{
						return func_112(iParam0, 4, uVar68);
					}
				}
				else if (func_99(iVar0, 4, iParam2, &uVar68))
				{
					return func_112(iParam0, 4, uVar68);
				}
			}
			Global_76388 = (Global_76388 - 1);
		}
	}
	return 0;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0xDDE0
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_224(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_117(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_116(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_115(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_114(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_116(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_115(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_114(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_116(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_115(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_114(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE3E4
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 14, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 1, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 14, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_207(iParam0, iParam2, 1, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE661
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEA86
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2)//Position - 0xED79
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xEE12
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_110(iParam0))
	{
		return -99;
	}
	if (func_119(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_207(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_89(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_207(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_89(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_119(int iParam0)//Position - 0xF231
{
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), -2124629577, 0))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0xF263
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_121(int iParam0, int iParam1)//Position - 0xF2B5
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	int iVar20;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar10 = func_79(2095, iParam1, 0);
	iVar11 = func_79(2096, iParam1, 0);
	iVar12 = func_79(2097, iParam1, 0);
	iVar13 = func_79(2098, iParam1, 0);
	iVar14 = func_79(2099, iParam1, 0);
	iVar15 = func_79(2100, iParam1, 0);
	fVar16 = func_137(134, iParam1);
	fVar17 = func_137(135, iParam1);
	fVar18 = func_137(136, iParam1);
	bVar19 = func_81(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_79(2101, iParam1, 0);
		if (iVar20 > 0)
		{
			func_122(iParam0, iParam1, 0);
		}
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)//Position - 0xF3F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_136(iVar1);
		if (!bParam2)
		{
			fVar3 = func_137(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_135(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_134(iVar4);
		iVar6 = func_133(iVar5);
		iVar7 = func_132(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_129(iVar6, iParam1, -1);
				fVar11 = func_137(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_128(iVar6, iParam1);
				fVar11 = func_135(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_127(iVar5);
			iVar9 = func_126(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_79(iVar8, iParam1, 0);
					iVar14 = func_79(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_125(iVar8, iParam1);
					iVar14 = func_125(iVar9, iParam1);
				}
				func_124(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_123(&iParam0, iParam1, bParam2);
}

void func_123(int iParam0, int iParam1, bool bParam2)//Position - 0xF527
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_137(157, iParam1);
	}
	else
	{
		fVar0 = func_135(157, iParam1);
	}
	if (*iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_124(int iParam0, var uParam1, var uParam2)//Position - 0xF566
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_125(int iParam0, int iParam1)//Position - 0xF587
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2542527[iParam0 /*3*/][func_80(iParam1)];
	if (HUD::_0xEF4CED81CEBEDC6D(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)//Position - 0xF5B2
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_127(int iParam0)//Position - 0xF5FE
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return -1;
}

int func_128(int iParam0, int iParam1)//Position - 0xF64A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	if (!HUD::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_129(int iParam0, int iParam1, int iParam2)//Position - 0xFC10
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar0 = 0;
	iVar1 = func_131(iParam0, iParam1);
	iVar2 = func_130(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_130(int iParam0)//Position - 0xFC56
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_131(int iParam0, int iParam1)//Position - 0x10057
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

int func_132(int iParam0)//Position - 0x10405
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_133(int iParam0)//Position - 0x104A4
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_134(int iParam0)//Position - 0x10550
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_135(int iParam0, int iParam1)//Position - 0x105E7
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2575525[iParam0 /*3*/][func_80(iParam1)];
	if (HUD::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_136(int iParam0)//Position - 0x10612
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_137(int iParam0, int iParam1)//Position - 0x106FE
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2575525[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1072A
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
	struct<7> Var21;
	int iVar38;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4266967 == iParam1)
		{
			iVar2 = Global_4266966;
			iVar1 = Global_4266965;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_207(iParam0, iParam1, 7, 3);
			iVar1 = func_198(iVar2);
			Global_4266967 = iParam1;
			Global_4266966 = iVar2;
			Global_4266965 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4266970 == iParam3)
		{
			iVar4 = Global_4266969;
			iVar3 = Global_4266968;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_207(iParam0, iParam3, 11, 3);
			iVar3 = func_198(iVar4);
			Global_4266970 = iParam3;
			Global_4266969 = iVar4;
			Global_4266968 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4266973 == iParam4)
		{
			iVar6 = Global_4266972;
			iVar5 = Global_4266971;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_207(iParam0, iParam4, 8, 3);
			iVar5 = func_198(iVar6);
			Global_4266973 = iParam4;
			Global_4266972 = iVar6;
			Global_4266971 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4266976 == iParam10)
		{
			iVar8 = Global_4266975;
			iVar7 = Global_4266974;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_207(iParam0, iParam10, 1, 3);
			iVar7 = func_198(iVar8);
			Global_4266976 = iParam10;
			Global_4266975 = iVar8;
			Global_4266974 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1855618474, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 351511157, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 1438931885, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, -973213642, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -372885432, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 531704825, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -372885432, 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_207(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
					case 1379309694:
					case 491826867:
					case 1855607109:
					case -1962767847:
					case -1654116636:
					case -1485356286:
					case -1178212449:
					case -766633809:
					case 665568109:
					case -288304716:
					case 1772824957:
					case 1533381874:
					case -2012223930:
					case 2008237453:
					case -1304118613:
					case -1543430620:
					case -854101936:
					case -1061103709:
					case -616035151:
					case 1307111925:
					case 1759289928:
					case -1036580403:
					case -203035350:
					case 917598912:
					case 682284723:
					case 481083063:
					case 114660105:
					case 1897981854:
					case 1601455173:
					case 1932815241:
					case 1626031863:
					case 926585800:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1473812293, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1396865968, 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -63750166, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -870074461, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1834446747, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2102859770, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1784133476, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1719167561, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1274099003, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1431529976, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1723403459, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1419806467, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -785939537, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1446333198, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 492620493, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 137011325, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1830529185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1927516484, 0))
					{
						return 0;
					}
					else if (func_140(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -63750166, 0))
				{
					return 0;
				}
				else if (func_140(iParam0, iParam3))
				{
					return 0;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1127835965, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1927516484, 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -353070590, 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -870074461, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1473812293, 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -319568873, 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_207(iParam0, iParam11, 4, 3);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 654065530, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -7109286, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 974680318, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1625463492, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -713698407, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -779835469, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1627756587, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1021189127, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1127835965, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -672871169, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 572416369, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -196114988, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1322269404, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1655154167, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1607949555, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1719167561, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1431529976, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1723403459, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1419806467, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -785939537, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 137011325, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1351486939, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -491588875, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -828478571, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1927516484, 0))
				{
					return 0;
				}
				else if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 651155766, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 974680318, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1010805287, 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 248194463, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 572350888, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1817355735, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -713698407, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 140732128, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1863955539, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1627756587, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 572416369, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1538937264, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -785939537, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -828478571, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 602650322, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -99064836, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -148928294, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1927516484, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -435539886, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1375878737, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1778265882, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1965569012, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 651155766, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1914383230, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1553766533, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 505220913, 0))
				{
					return 0;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return 0;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return 0;
				}
			}
			if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2066241403, 0))
			{
				return 0;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_202(iParam0, iParam3, -1)) || iVar3 == 13)
				{
					if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1446333198, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 492620493, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1351486939, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1778265882, 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 505220913, 0)))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_67(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_198(func_207(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_202(iParam0, iParam3, -1)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1446333198, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 492620493, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -7109286, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1778265882, 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1965569012, 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 651155766, 0))) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 505220913, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					iVar0 = func_67(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_198(func_207(iParam0, iVar0, 11, 3)) == 13))
					{
						return 1;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -7109286, 0))
					{
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
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1965569012, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 558082254, 0))
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 651155766, 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -277681306, 0)) || (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 505220913, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -277681306, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 558082254, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || iVar6 == -374729298) || iVar6 == 399897093) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 684992453, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1458930564, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 2048281121, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 19149565, 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -374729298) || iVar6 == 399897093) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 684992453, 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -7109286, 0))
							{
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 470686834, 0))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_139(iVar6)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return 0;
				}
				else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1627756587, 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1322269404, 0)))
				{
					return 0;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -713698407, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, 1438931885, 0))
				{
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar11 = -1;
		iVar12 = -1;
		if (Global_4266967 == iParam1)
		{
			iVar12 = Global_4266966;
			iVar11 = Global_4266965;
		}
		else if (iParam1 >= 55)
		{
			iVar12 = func_207(iParam0, iParam1, 7, 4);
			iVar11 = func_198(iVar12);
			Global_4266967 = iParam1;
			Global_4266966 = iVar12;
			Global_4266965 = iVar11;
		}
		iVar13 = -1;
		iVar14 = -1;
		if (Global_4266970 == iParam3)
		{
			iVar14 = Global_4266969;
			iVar13 = Global_4266968;
		}
		else if (iParam3 >= 256)
		{
			iVar14 = func_207(iParam0, iParam3, 11, 4);
			iVar13 = func_198(iVar14);
			Global_4266970 = iParam3;
			Global_4266969 = iVar14;
			Global_4266968 = iVar13;
		}
		iVar15 = -1;
		iVar16 = -1;
		if (Global_4266973 == iParam4)
		{
			iVar16 = Global_4266972;
			iVar15 = Global_4266971;
		}
		else if (iParam4 >= 136)
		{
			iVar16 = func_207(iParam0, iParam4, 8, 4);
			iVar15 = func_198(iVar16);
			Global_4266973 = iParam4;
			Global_4266972 = iVar16;
			Global_4266971 = iVar15;
		}
		iVar17 = -1;
		iVar18 = -1;
		if (Global_4266976 == iParam10)
		{
			iVar18 = Global_4266975;
			iVar17 = Global_4266974;
		}
		else if (iParam10 >= 26)
		{
			iVar18 = func_207(iParam0, iParam10, 1, 4);
			iVar17 = func_198(iVar18);
			Global_4266976 = iParam10;
			Global_4266975 = iVar18;
			Global_4266974 = iVar17;
		}
		iVar19 = -1;
		if (iParam9 >= 327)
		{
			iVar19 = func_207(iParam0, iParam9, 14, 4);
		}
		if (iParam3 != -99)
		{
			if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1855618474, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 351511157, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -299089347, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1420825402, 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1438931885, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, -973213642, 0))
			{
				if (((((((iParam1 == 0 || (iParam1 >= 13 && iParam1 <= 18)) || iVar11 == 3) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1320139576, 0))) || (iParam1 >= 19 && iParam1 <= 24)) || iVar11 == 4) || (iParam1 >= 25 && iParam1 <= 30)) || iVar11 == 5)
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1438931885, 0))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -713698407, 0))
			{
				if (iParam1 != 0 && !(iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -713698407, 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -372885432, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2103452271, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 531704825, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2103452271, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -372885432, 0))
			{
				if (iParam4 == 66)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar12 == 281786684 || iVar12 == 653911448) || iVar12 == -1519558015)
		{
			if (iParam9 != -99)
			{
				switch (iVar19)
				{
					case 1446628467:
					case -1938048778:
					case 2041418586:
					case -1342898200:
					case 2026483804:
					case -1977527541:
					case -1670449242:
					case -1385031204:
					case -1088111295:
					case -1530918836:
					case -1221415631:
					case -629869643:
					case 530255864:
					case 38181873:
					case 319110510:
					case 482562282:
					case -1178170642:
					case -880726429:
					case -699776011:
					case -401873032:
					case -700496933:
					case -404429018:
					case -2134238990:
					case -2136376254:
					case 1861212367:
					case -789144321:
					case -223092615:
					case 763352592:
					case -549897852:
					case -1976889495:
					case -1410575637:
					case -428980242:
					case -1731482454:
					case -1390357480:
					case -1765816422:
					case -1533320367:
					case 939297301:
					case 1186965403:
					case 1575507436:
					case 1783131820:
					case 2059866009:
					case -1997689882:
					case -1617209023:
					case -1391954917:
					case -1832969872:
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 240476421, 0))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1473812293, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1396865968, 0))
				{
					if ((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -63750166, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -733792105, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1830529185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1927516484, 0))
					{
						return 0;
					}
					else if (func_140(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (func_140(iParam0, iParam3) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -63750166, 0))
				{
					return 0;
				}
				if (iParam10 != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1438931885, 0))
					{
						return 0;
					}
				}
			}
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -353070590, 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -870074461, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1174924468, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1834446747, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1473812293, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -63750166, 0))
			{
				return 0;
			}
		}
		else if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 596326873, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 974680318, 0))
			{
				return 0;
			}
		}
		if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -713698407, 0))
		{
			if (iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return 0;
			}
		}
		else if ((iParam9 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return 0;
		}
		if ((((iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1473812293, 0)) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -319568873, 0))) || (iParam1 >= 43 && iParam1 <= 48)) || iVar11 == 8)
		{
			if (iParam11 != -99)
			{
				iVar20 = -1;
				if (iParam11 >= 256)
				{
					iVar20 = func_207(iParam0, iParam11, 4, 4);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, 1052059919, 0))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -920534092, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 684992453, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -820724897, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1714969731, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1055526375, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 947651647, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1830529185, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar13 == 7)
				{
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 700658917, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 745826556, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 144417099, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1537081084, 0))
					{
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
			else if (iParam2 == 8)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1553766533, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1914383230, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -920534092, 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 441715397, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 264959411, 0))
						{
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1828206051, 0))
							{
							}
							else
							{
								return 0;
							}
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1828206051, 0))
						{
							return 0;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam9 != -99)
		{
			if ((iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, 1406402954, 1)) || (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, 499051427, 1)))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar11 == 1) || iVar11 == 2) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1406402954, 0)))
				{
					return 0;
				}
			}
		}
		if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1358888880, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -733792105, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -828478571, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (func_202(iParam0, iParam3, -1))
				{
				}
				else if ((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar13 == 2) || iVar13 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -761463976, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1347486026, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -939525357, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2102859770, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1784133476, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1351486939, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2030343924, 0)) || iVar14 == 998321559) || iVar14 == 619380843) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -55550566, 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -530089825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1965569012, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1200513218, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -713698407, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -55104292, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -779835469, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 140732128, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2106216756, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1627756587, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1127835965, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -672871169, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 572416369, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -196114988, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1607949555, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1976716889, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1407863332, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1986415230, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -785939537, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1103045158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1927516484, 0))
				{
					return 0;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 525778571, 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar15 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1455992833, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -870074461, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1174924468, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1177480446, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1347486026, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1655154167, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -2105858993, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1893564692, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1710451520, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1416808511, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1641506460, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 699233865, 0)) || iVar16 == -565297075) || iVar16 == 262349558) || iVar16 == -917804055) || iVar16 == -1156067454) || iVar16 == -2124751863) || iVar16 == 1812836719) || iVar16 == 1582116924) || iVar16 == 877452376) || iVar16 == 1117419763) || iVar16 == 732885188) || iVar16 == -1037820496) || iVar16 == -79097863) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -2102859770, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1784133476, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1607949555, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1976716889, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1419806467, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -849839091, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -2088146832, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -352447393, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -642551350, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -819569488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -2020068325, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -269266203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 201427653, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 967829025, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -979468724, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -58412562, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -435539886, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 974680318, 0))
				{
					if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
				else if (((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1965569012, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 684992453, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1353777856, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1207283343, 0))
				{
					return 0;
				}
				else if (func_199(iParam0, iParam4, 0) != -99)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 525778571, 0))
					{
						return 0;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 654065530, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1351486939, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar11 == 3) || (iVar12 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar11 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, -1320139576, 1))
				{
					FILES::GET_SHOP_PED_PROP(iVar19, &Var21);
					if (Var21.f_6 == 7)
					{
						return 0;
					}
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar11 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar13 == 3) || iVar13 == 7) || iVar13 == 10) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1147939952, 0)))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar11 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1965569012, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -761463976, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1347486026, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -994703884, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1119232689, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1986415230, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -733792105, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1351486939, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2030343924, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -828478571, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 602650322, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 905042630, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1204125293, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1855618474, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1927516484, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1375878737, 0))
				{
					return 0;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar11 == 7) || (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar13 == 2) || iVar13 == 3) || iVar13 == 9) || iVar13 == 14) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 396458410, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -761463976, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 821147517, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1347486026, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -994703884, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1119232689, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1607949555, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1965569012, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1986415230, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -430330349, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -733792105, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1351486939, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2030343924, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -828478571, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1831422288, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1927516484, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 974680318, 0))
				{
					return 0;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar13 == 7) || iVar13 == 10) || iVar13 == 12) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1147939952, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 2026620439, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1882920022, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0))
				{
					if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1965569012, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 2083259958, 0))
					{
						return 0;
					}
				}
				else if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1786447517, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -549843760, 0))
				{
					return 0;
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1703203608, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1415000253, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -168336417, 0))
				{
					return 0;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar19 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, -1320139576, 1))
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar11 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 2) || iVar13 == 4) || iVar13 == 5) || iVar13 == 9) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -530089825, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 103539798, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -994703884, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar11 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar13 == 0) || iVar13 == 4) || iVar13 == 5) || iVar13 == 11) || iVar13 == 12) || iVar13 == 13) || iVar13 == 15) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1200513218, 0))) || (iParam3 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -530089825, 0)))
				{
				}
				else
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -7109286, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 1943347821, 0))
				{
					return 0;
				}
				else if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1786447517, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, -549843760, 0))
				{
					return 0;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam10 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1438931885, 0))
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 158381135, 0))
		{
			if (iParam4 != -99)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, 558082254, 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar14 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -747583185, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (iParam11 != -99)
			{
				iVar38 = -1;
				if (iParam11 >= 256)
				{
					iVar38 = func_207(iParam0, iParam11, 4, 4);
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, -33031567, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_139(int iParam0)//Position - 0x15654
{
	if (iParam0 != -1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return 1;
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x15735
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_207(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if (((((((((((((((((((((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1119232689, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2102859770, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1784133476, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1976716889, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2099109084, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1719167561, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1274099003, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1431529976, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1723403459, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1419806467, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -441291342, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -785939537, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1446333198, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 492620493, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1927516484, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1603194928, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_202(iParam0, iParam1, -1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_207(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_198(iVar1);
		}
		if (((((((((((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1393156190, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 320460654, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -2017999390, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -826135203, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -747583185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -102825006, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -733792105, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -641612092, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1506370874, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1786447517, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1010805287, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1325813684, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1690933245, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1360588936, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 2136821028, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, 1927516484, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_141(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x15C63
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_193(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = func_192(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_76386;
		}
		func_217(iVar1, 1, iParam2);
	}
	func_142(iParam0, bParam3, 0);
}

void func_142(int iParam0, bool bParam1, bool bParam2)//Position - 0x15CAF
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_76386;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = func_191(iParam0);
		bVar15 = func_186(iParam0, 0);
		bVar16 = func_182(iParam0);
		bVar17 = func_181(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_178(iVar18, iVar0))
			{
				if (func_171(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_168(iParam0, &Var1, iVar18, Var1.f_4, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_178(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(-1719270477, -1824026490) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = FILES::_GET_NUM_DECORATIONS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::_GET_TATTOO_COLLECTION_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (func_178(iVar36, iVar0))
					{
						if (func_168(iParam0, &(Var21.f_7), iVar36, Var21.f_2, Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							if (!func_144(Var21.f_2, Var21.f_3, iVar36))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
								func_143(iParam0, Var21.f_2, Var21.f_3);
							}
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_143(int iParam0, int iParam1, int iParam2)//Position - 0x15E15
{
	switch (iParam1)
	{
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -2083543812);
					break;
				
				case -485989621:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1873408074);
					break;
				
				case 711356870:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1873408074);
					break;
				
				case 111487556:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 510898066);
					break;
				
				case 588276502:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 510898066);
					break;
				
				case -3335024:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 557464221);
					break;
				
				case 1184770609:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 557464221);
					break;
				
				case 359647189:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2089193796);
					break;
				
				case 1545327916:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1305509445);
					break;
				
				case 954502846:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -638853135);
					break;
				
				case -893208491:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -638853135);
					break;
				
				case -1661674318:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1601527241);
					break;
				
				case -1624645348:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1960396175);
					break;
				
				case 620358850:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 54045697);
					break;
				
				case 122204512:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1310058833);
					break;
				
				case -645147161:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 251854291);
					break;
				
				case -375556598:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2062329004);
					break;
				
				case 1841102407:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1538230799);
					break;
				
				case 831620593:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -59766962);
					break;
				
				case 1129884031:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1480518916);
					break;
				
				case 2092301321:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -482380281);
					break;
				
				case 580667351:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -76867803);
					break;
				
				case 1538832911:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -76867803);
					break;
				
				case -1355259635:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -533311445);
					break;
				
				case -1583168030:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2137255691);
					break;
				
				case -1831032746:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2137255691);
					break;
				
				case -2060448515:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -2042378246);
					break;
				
				case -50365286:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 756993084);
					break;
				
				case -364095692:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 756993084);
					break;
				
				case -606979520:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1161584545);
					break;
				
				case -1057062007:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1161584545);
					break;
				
				case -1253872621:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1528861297);
					break;
				
				case -1525625938:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1528861297);
					break;
				
				case 603801989:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 806416816);
					break;
				
				case 432289043:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 806416816);
					break;
				
				case 176592536:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1433191244);
					break;
				
				case -126291331:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1433191244);
					break;
				
				case 2093415191:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1917136673);
					break;
				
				case 1383966341:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1917136673);
					break;
				
				case 1061027846:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1634927571);
					break;
				
				case 610754913:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1634927571);
					break;
				
				case 1856271834:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1965545249);
					break;
				
				case 151235226:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1965545249);
					break;
				
				case 1292317344:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1855774824);
					break;
				
				case 1592055387:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1855774824);
					break;
			}
			switch (iParam2)
			{
				case 1389004292:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -408720218);
					break;
				
				case 459577145:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -789630253);
					break;
				
				case 697971620:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -789630253);
					break;
				
				case -157037136:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1104646403);
					break;
				
				case 70412493:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1104646403);
					break;
				
				case -861963864:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1535753965);
					break;
				
				case -496458438:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1535753965);
					break;
				
				case -1356579150:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -99283873);
					break;
				
				case -1125721545:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -485563451);
					break;
				
				case -2065044930:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1432409825);
					break;
				
				case -346765569:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1432409825);
					break;
				
				case -734816067:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -302122276);
					break;
				
				case -961282630:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -717650362);
					break;
				
				case 1134491538:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -233338433);
					break;
				
				case 842421441:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 314602147);
					break;
				
				case 523316919:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1900511936);
					break;
				
				case 158466873:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 821039296);
					break;
				
				case 1789019544:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -545035086);
					break;
				
				case 1426332252:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1960507422);
					break;
				
				case 1178893529:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -694062896);
					break;
				
				case -1101107129:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1829603753);
					break;
				
				case -1790763503:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2045678662);
					break;
				
				case -1550271812:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 2045678662);
					break;
				
				case -384612940:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1648833799);
					break;
				
				case -45257176:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -75503803);
					break;
				
				case -866087857:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -75503803);
					break;
				
				case -623761102:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1501392494);
					break;
				
				case 1075770310:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1390523363);
					break;
				
				case 342137938:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1390523363);
					break;
				
				case 599407357:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1233403366);
					break;
				
				case 335056082:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1233403366);
					break;
				
				case 1164668855:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1084269847);
					break;
				
				case -424365493:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1084269847);
					break;
				
				case -1995737350:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1344114351);
					break;
				
				case 2052610452:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1344114351);
					break;
				
				case 745160145:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1154163217);
					break;
				
				case 238944633:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1154163217);
					break;
				
				case -1894874368:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1174984361);
					break;
				
				case -1050515545:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, -1174984361);
					break;
				
				case -1296283045:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 495811116);
					break;
				
				case -254061820:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 495811116);
					break;
				
				case -482822209:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1152130184);
					break;
				
				case -1148622755:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1152130184);
					break;
				
				case 499821790:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1987407913);
					break;
				
				case 132940066:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1347816957, 1987407913);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 202420620, -501147160);
					break;
			}
			switch (iParam2)
			{
				case -1214222467:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 202420620, -1739422168);
					break;
			}
			break;
		
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 5866095);
					break;
				
				case -670835215:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 1257645214);
					break;
				
				case -32315658:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1938877708);
					break;
				
				case -715501640:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 177616986);
					break;
				
				case 812138662:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -437640642);
					break;
				
				case -1950509905:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 460297451);
					break;
				
				case 1850969667:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -589899025);
					break;
				
				case 997671095:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 342543493);
					break;
				
				case -1526467268:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -950134188);
					break;
				
				case -881852779:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 2043701187);
					break;
				
				case -570992218:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 794519137);
					break;
				
				case -1075500139:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 90598123);
					break;
				
				case -791689054:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -151296204);
					break;
				
				case 699980662:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 386731882);
					break;
				
				case -583230088:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1129017399);
					break;
				
				case 1922201848:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1175077252);
					break;
				
				case -767702908:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1710583235);
					break;
				
				case 1979813112:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 900966291);
					break;
				
				case -2056272592:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -153754682);
					break;
			}
			switch (iParam2)
			{
				case 371389080:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 580372087);
					break;
				
				case -521204587:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -326572091);
					break;
				
				case 1685732560:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1550532305);
					break;
				
				case -1386443378:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1913405685);
					break;
				
				case -1706648281:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -956341143);
					break;
				
				case -519957866:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 2063062018);
					break;
				
				case 653935582:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 605481338);
					break;
				
				case 2111779395:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1708926987);
					break;
				
				case 428988289:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 264383347);
					break;
				
				case -1903962822:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 1101363062);
					break;
				
				case 1365770911:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1963254369);
					break;
				
				case 42029862:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 390663856);
					break;
				
				case 438631811:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 916481637);
					break;
				
				case -1478715891:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 1930151778);
					break;
				
				case -1395531229:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1731016702);
					break;
				
				case 30333135:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -1915197882);
					break;
				
				case 1783341339:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, -25535717);
					break;
				
				case -16077126:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 1193200233);
					break;
				
				case -833643184:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1016521996, 1031663893);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1616273011, -815706791);
					break;
				
				case -1366750043:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 1616273011, -1066127505);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 484754152, -588549683);
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 484754152, -965491494);
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

int func_144(int iParam0, int iParam1, int iParam2)//Position - 0x16C42
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
	
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -502214028:
				case -1413356029:
					if (func_167(78, -1) || func_164(28199, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1413356029);
					break;
				
				case 836015556:
				case -1849502305:
					if (((func_167(77, -1) && func_167(78, -1)) && func_160(92, -1) >= func_159(92, 5, 9)) || func_164(28200, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1849502305);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -104345338:
				case 1184426490:
				case 47527010:
				case 1505693935:
				case -1551981580:
				case 1572497951:
					if (((func_160(93, -1) >= func_159(93, 5, 9) && func_167(79, -1)) && func_167(80, -1)) || func_164(28204, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, ((iParam1 == 1505693935 || iParam1 == -1551981580) || iParam1 == 1572497951));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case 1848216712:
				case -965460704:
					if (func_167(81, -1) || func_164(28206, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -965460704);
					break;
				
				case 223413431:
				case -1917254263:
					if (func_160(94, -1) >= func_159(94, 5, 9) || func_164(28207, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1917254263);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -432155816:
				case 1777785544:
					if (((func_167(84, -1) && func_167(85, -1)) && func_160(97, -1) >= func_159(97, 5, 9)) || func_164(28212, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1777785544);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1838365509:
				case -2062177771:
					if (func_164(28249, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2062177771);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -73524046:
				case 1921321590:
					if (func_164(28183, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1921321590);
					break;
				
				case -1843193891:
				case -822177429:
					if (func_164(28182, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -822177429);
					break;
				
				case -1224204417:
				case -531271155:
					if (func_164(28184, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -531271155);
					break;
				
				case 921109652:
				case 412829693:
					if (func_164(28181, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 412829693);
					break;
				
				case -1009122462:
				case -1411787934:
					if (func_164(28178, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1411787934);
					break;
				
				case -2143877160:
				case 653645139:
					if (func_164(28177, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 653645139);
					break;
				
				case 985961343:
				case 1848048195:
					if (func_164(28176, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1848048195);
					break;
				
				case 906071982:
				case -781400442:
					if (func_164(28180, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -781400442);
					break;
				
				case 566663142:
				case 1507919906:
					if (func_164(28179, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1507919906);
					break;
				
				case 764251611:
				case -1381102054:
					if (((((((((func_164(28176, -1, -1) && func_164(28177, -1, -1)) && func_164(28178, -1, -1)) && func_164(28179, -1, -1)) && func_164(28180, -1, -1)) && func_164(28181, -1, -1)) && func_164(28182, -1, -1)) && func_164(28183, -1, -1)) && func_164(28184, -1, -1)) || func_164(28221, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1381102054);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1575240476:
				case 565394453:
					if (func_164(28191, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 565394453);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -809444617:
				case -498335731:
					if (func_164(28190, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -498335731);
					break;
				
				case -1643354138:
				case -137061435:
					if (func_164(28189, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -137061435);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -547605203:
				case 2077453849:
					if (func_155(0))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 2077453849);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case -363871405:
			switch (iParam1)
			{
				case -1576036346:
				case 585832887:
					if ((((((((((((((((((func_167(77, -1) && func_167(78, -1)) && func_160(92, -1) >= func_159(92, 5, 9)) && func_160(93, -1) >= func_159(93, 5, 9)) && func_167(79, -1)) && func_167(80, -1)) && func_167(81, -1)) && func_160(94, -1) >= func_159(94, 5, 9)) && func_160(95, -1) >= func_159(95, 5, 9)) && func_167(82, -1)) && func_167(83, -1)) && func_160(96, -1) >= func_159(96, 5, 9)) && func_167(84, -1)) && func_167(85, -1)) && func_160(97, -1) >= func_159(97, 5, 9)) && func_167(86, -1)) && func_167(87, -1)) && func_167(88, -1)) || func_164(28222, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 585832887);
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1347816957:
			switch (iParam1)
			{
				case 1352224647:
				case 1896190035:
					return !func_161(iParam2, iParam1, iParam1 == 1352224647);
					break;
				
				case 1857392409:
				case -524815620:
					return !func_161(iParam2, iParam1, iParam1 == 1857392409);
					break;
				
				case 580667351:
				case -1790763503:
					if (func_164(27109, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 580667351);
					break;
				
				case -1355259635:
				case -384612940:
					if (func_164(27110, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1355259635);
					break;
				
				case 711356870:
				case 697971620:
					if (func_164(27111, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 711356870);
					break;
				
				case 588276502:
				case 70412493:
					if (func_164(27112, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 588276502);
					break;
				
				case 1184770609:
				case -496458438:
					if (func_164(27113, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1184770609);
					break;
				
				case -893208491:
				case -346765569:
					if (func_164(27114, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -893208491);
					break;
				
				case 1538832911:
				case -1550271812:
					if (func_164(27115, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1538832911);
					break;
			}
			break;
		
		case -2145114209:
			switch (iParam1)
			{
				case -1015392647:
				case 1817749559:
					if (func_164(25032, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1015392647);
					break;
				
				case 1742471685:
				case 1403640225:
					if (func_164(25033, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1742471685);
					break;
				
				case 408116861:
				case 1306937694:
					if (func_164(25034, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 408116861);
					break;
				
				case -1855327598:
				case -95533995:
					if (func_164(25035, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1855327598);
					break;
				
				case 1578402908:
				case -1871451886:
					if (func_164(25036, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1578402908);
					break;
				
				case -1423366674:
				case -1120843246:
					if (func_164(25037, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1423366674);
					break;
				
				case 1611107047:
				case 2081997561:
					if (func_164(25038, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1611107047);
					break;
				
				case 742927305:
				case -1339214923:
					if (func_164(25039, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 742927305);
					break;
				
				case -1578833665:
				case 9807447:
					if (func_164(25040, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1578833665);
					break;
				
				case 773738667:
				case -236005319:
					if (func_164(25041, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 773738667);
					break;
				
				case 213007702:
				case -1470794594:
					if (func_164(25042, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 213007702);
					break;
				
				case 432208089:
				case -2100868384:
					if (func_164(25043, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 432208089);
					break;
				
				case 35817542:
				case 805626890:
					if (func_164(25044, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 35817542);
					break;
				
				case -1786080093:
				case -438487729:
					if (func_164(25045, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1786080093);
					break;
				
				case -215923306:
				case 1258452311:
					if (func_164(25046, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -215923306);
					break;
				
				case 1275581512:
				case -1387587887:
					if (func_164(25047, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1275581512);
					break;
				
				case -1214009019:
				case 390131826:
					if (func_164(25048, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1214009019);
					break;
				
				case 1639713863:
				case -933865090:
					if (func_164(25049, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1639713863);
					break;
				
				case 529311368:
				case 42888304:
					if (func_164(25050, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 529311368);
					break;
				
				case -1033895864:
				case -1512618189:
					if (func_164(25051, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1033895864);
					break;
				
				case 924043677:
				case 1805955770:
					if (func_164(25052, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 924043677);
					break;
				
				case -574749266:
				case 2040741242:
					if (func_164(25053, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -574749266);
					break;
				
				case 519463901:
				case -1572115827:
					if (func_164(25054, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 519463901);
					break;
				
				case -643353187:
				case -2101278774:
					if (func_164(25055, -1, -1))
					{
						return 0;
					}
					if (func_164(27077, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -643353187);
					break;
				
				case 1571011017:
				case -2006216868:
					if (func_164(25056, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1571011017);
					break;
				
				case -94540936:
				case 1445470992:
					if (func_164(25057, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -94540936);
					break;
				
				case 1884218662:
				case 31459402:
					if (func_164(25058, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1884218662);
					break;
				
				case -345261869:
				case 850282323:
					if (func_164(25059, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -345261869);
					break;
				
				case -1022859058:
				case 1518409673:
					if (func_164(25060, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1022859058);
					break;
				
				case -1786322924:
				case 576453072:
					if (func_164(25061, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1786322924);
					break;
				
				case 2085269022:
				case 1343575520:
					if (func_164(25062, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 2085269022);
					break;
				
				case 1511882653:
				case -1244055789:
					if (func_164(25063, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1511882653);
					break;
				
				case -506986385:
				case 1650491806:
					if (func_164(25064, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -506986385);
					break;
				
				case -874081588:
				case 507754313:
					if (func_164(25065, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -874081588);
					break;
				
				case -2043405937:
				case -1168735793:
					if (func_164(25066, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2043405937);
					break;
				
				case 59038842:
				case 539301314:
					if (func_164(25067, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 59038842);
					break;
				
				case 1101237057:
				case 485114319:
					if (func_164(25068, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1101237057);
					break;
				
				case -657535677:
				case 1397146165:
					if (func_164(25069, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -657535677);
					break;
				
				case -2093585025:
				case -922912500:
					if (func_164(25070, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2093585025);
					break;
				
				case 908383468:
				case 898093918:
					if (func_164(25071, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 908383468);
					break;
				
				case -1608760399:
				case -513817029:
					if (func_164(25072, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1608760399);
					break;
				
				case 1373660540:
				case 134762953:
					if (func_164(25073, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1373660540);
					break;
				
				case 1854316713:
				case 252404144:
					if (func_164(25074, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1854316713);
					break;
				
				case -119951196:
				case 168579849:
					if (func_164(25075, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -119951196);
					break;
				
				case -1649842228:
				case 1888095634:
					if (func_164(25076, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1649842228);
					break;
				
				case -1640764925:
				case -1046236786:
					if (func_164(25077, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1640764925);
					break;
				
				case 1787927716:
				case 33901453:
					if (func_164(25078, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1787927716);
					break;
				
				case 104283481:
				case -2043232938:
					if (func_164(25079, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 104283481);
					break;
				
				case 378263500:
				case 1113927554:
					if (func_164(25080, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 378263500);
					break;
				
				case -1061215309:
				case -1602559301:
					if (func_164(25081, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1061215309);
					break;
				
				case 1034166199:
				case -1167812298:
					if (func_164(25082, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1034166199);
					break;
				
				case 1828057305:
				case 1912961832:
					if (func_164(25083, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1828057305);
					break;
				
				case -1486297381:
				case 647456058:
					if (func_164(25084, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1486297381);
					break;
				
				case -540767159:
				case -717523161:
					if (func_164(25085, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -540767159);
					break;
				
				case -1235960692:
				case -1641870267:
					if (func_164(25086, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1235960692);
					break;
				
				case -329316995:
				case 1857030685:
					if (func_164(25087, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -329316995);
					break;
				
				case -581880272:
				case -1074922646:
					if (func_164(25088, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -581880272);
					break;
				
				case -1807345434:
				case -1544308671:
					if (func_164(25089, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1807345434);
					break;
				
				case -1018409435:
				case -480375220:
					if (func_164(25090, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1018409435);
					break;
				
				case -136011898:
				case -1158306419:
					if (func_164(25091, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -136011898);
					break;
				
				case -2069494727:
				case 808115088:
					if (func_164(25092, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2069494727);
					break;
				
				case -642887005:
				case 1544542048:
					if (func_164(25093, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -642887005);
					break;
				
				case -1810837638:
				case 212713658:
					if (func_164(25094, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1810837638);
					break;
				
				case 1034484576:
				case -537477127:
					if (func_164(25095, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1034484576);
					break;
				
				case 1979445594:
				case -2067132678:
					if (func_164(25096, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1979445594);
					break;
				
				case -1533877336:
				case 1060051174:
					if (func_164(25097, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1533877336);
					break;
				
				case -892254987:
				case 2038375002:
					if (func_164(25098, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -892254987);
					break;
				
				case -654222260:
				case -256374303:
					if (func_164(25099, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -654222260);
					break;
				
				case 450544862:
				case -964420554:
					return !func_161(iParam2, iParam1, iParam1 == 450544862);
					break;
			}
			break;
		
		case 202420620:
			switch (iParam1)
			{
				case 1495413374:
				case -1214222467:
					if (func_164(22108, -1, -1) || func_164(25006, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1495413374);
					break;
				
				case 370906922:
				case -1079776812:
					if (func_164(9481, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 370906922);
					break;
				
				case 531742637:
				case -948990166:
					if (func_164(9470, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 531742637);
					break;
				
				case -225805790:
				case 1382201813:
					if (func_164(9475, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -225805790);
					break;
				
				case -624586952:
				case 1576375706:
					if (func_164(9472, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -624586952);
					break;
				
				case 915144902:
				case -1356500517:
					if (func_164(9465, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 915144902);
					break;
				
				case -242746043:
				case 1838019927:
					if (func_164(9463, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -242746043);
					break;
				
				case 1620048835:
				case 618955885:
					if (func_164(9464, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1620048835);
					break;
				
				case -1097603268:
				case 909858453:
					if (func_164(9468, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1097603268);
					break;
				
				case -660672539:
				case 1809389163:
					if (func_164(9469, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -660672539);
					break;
				
				case -4642188:
				case -382370447:
					if (func_164(9479, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -4642188);
					break;
				
				case 1855977539:
				case -290949038:
					if (func_164(9473, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1855977539);
					break;
				
				case 1537270222:
				case 381474823:
					if (func_164(9480, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1537270222);
					break;
				
				case -1226569770:
				case 570088958:
					if (func_164(9476, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1226569770);
					break;
				
				case 1641457991:
				case 1093167087:
					if (func_164(9477, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1641457991);
					break;
				
				case 1366312361:
				case -1327397746:
					if (func_164(9471, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1366312361);
					break;
				
				case -1557113221:
				case 655777349:
					if (func_164(9474, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1557113221);
					break;
				
				case -1690570414:
				case -1496905620:
					if (func_164(9467, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1690570414);
					break;
				
				case -507204255:
				case -1043010182:
					if (func_164(9478, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -507204255);
					break;
				
				case -1804897639:
				case -1326077011:
					if (func_164(9462, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1804897639)
					{
						if (func_164(27085, -1, -1))
						{
							return 0;
						}
					}
					else if (func_164(27084, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1804897639);
					break;
				
				case -1375233423:
				case -1120323372:
					if (func_164(9466, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1375233423);
					break;
				
				case 490066935:
				case -1583620927:
					if (func_164(22126, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 490066935);
					break;
				
				case 1193725595:
				case 1407674396:
					if (func_164(22127, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1193725595);
					break;
				
				case 628493116:
				case -244079832:
					if (func_164(22128, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 628493116);
					break;
				
				case -2112155518:
				case 1055951410:
					if (func_164(22124, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2112155518);
					break;
				
				case 1511337702:
				case 1092910333:
					if (func_164(22130, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1511337702);
					break;
				
				case -627666528:
				case -1874854660:
					if (func_164(22125, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -627666528);
					break;
				
				case 768324163:
				case -1379192256:
					if (func_164(22129, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 768324163);
					break;
				
				case -1448761813:
				case 1435106801:
					if (func_164(22131, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1448761813);
					break;
				
				case 868551738:
				case -1252683947:
					if (func_164(22132, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 868551738);
					break;
			}
			switch (iParam1)
			{
				case -1021262861:
				case -1380607703:
					if (func_164(22147, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1021262861);
					break;
				
				case -264447931:
				case 1010167914:
					if (func_164(22148, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -264447931);
					break;
				
				case -652127435:
				case 1059266367:
					if (func_164(22149, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -652127435);
					break;
				
				case -610014599:
				case 1869746711:
					if (func_164(22150, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -610014599);
					break;
				
				case 848073973:
				case 167494616:
					if (func_164(22151, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 848073973);
					break;
				
				case 1561087717:
				case 231256171:
					if (func_164(22152, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1561087717);
					break;
				
				case 2067249852:
				case -2041196288:
					if (func_164(22153, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 2067249852);
					break;
				
				case 1963924398:
				case -231795220:
					if (func_164(22154, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1963924398);
					break;
				
				case -898550276:
				case -1207463639:
					if (func_164(22155, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -898550276);
					break;
				
				case -1074178691:
				case 2023442158:
					if (func_164(22156, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1074178691);
					break;
				
				case -368616744:
				case -1293194083:
					if (func_164(22157, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -368616744);
					break;
				
				case -78566501:
				case 767365246:
					if (func_164(22158, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -78566501);
					break;
				
				case 1623651387:
				case -318042939:
					if (func_164(22159, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1623651387);
					break;
				
				case -1229980240:
				case -740608006:
					if (func_164(22160, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1229980240);
					break;
				
				case -1558321426:
				case 126660566:
					if (func_164(22161, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1558321426);
					break;
				
				case 518190097:
				case -252733393:
					if (func_164(22162, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 518190097);
					break;
				
				case -1996043294:
				case -1044136613:
					if (func_164(22163, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1996043294);
					break;
				
				case 1720844546:
				case -891762294:
					if (func_164(22164, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1720844546);
					break;
				
				case -20709979:
				case 1410738248:
					if (func_164(22165, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -20709979);
					break;
				
				case -1617383579:
				case -1978727490:
					if (func_164(22166, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1617383579);
					break;
				
				case -525135065:
				case 1684642458:
					if (func_164(22167, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -525135065);
					break;
				
				case 1796039054:
				case -147490340:
					if (func_164(22168, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1796039054);
					break;
				
				case 1250030109:
				case -1422117996:
					if (func_164(22169, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1250030109);
					break;
				
				case -1195876295:
				case -313931425:
					if (func_164(22170, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1195876295);
					break;
				
				case 672890092:
				case 211076563:
					if (func_164(22171, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 672890092);
					break;
				
				case 413298313:
				case 355035035:
					if (func_164(22172, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 413298313);
					break;
				
				case 1157302328:
				case -1447308868:
					if (func_164(22173, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1157302328);
					break;
				
				case -1564457471:
				case 1802655618:
					if (func_164(22174, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1564457471);
					break;
				
				case 1152621988:
				case -1063742156:
					if (func_164(22175, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1152621988);
					break;
				
				case -1961291349:
				case 1988028531:
					if (func_164(22176, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1961291349);
					break;
				
				case -1912591074:
				case 73898487:
					if (func_164(22177, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1912591074);
					break;
				
				case 1049766626:
				case -1041813118:
					if (func_164(22178, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1049766626);
					break;
			}
			break;
		
		case 1616273011:
			switch (iParam1)
			{
				case -2123485438:
				case 1457900554:
					if (func_164(15426, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2123485438);
					break;
				
				case -815706791:
				case -1066127505:
					if (func_164(15422, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -815706791);
					break;
				
				case -1318802347:
				case -1366750043:
					if (func_164(15423, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1318802347);
					break;
				
				case 306110040:
				case 1944822196:
					if (func_164(15421, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 306110040);
					break;
				
				case 1828101251:
				case -1639289459:
					if (func_164(15427, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1828101251);
					break;
				
				case -919314748:
				case 1282565442:
					if (func_164(15419, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -919314748);
					break;
				
				case 1971111649:
				case -884280700:
					if (func_164(15420, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1971111649);
					break;
			}
			switch (iParam1)
			{
				case 1029334921:
				case -322091380:
					if (func_164(15394, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1029334921);
					break;
				
				case -534855486:
				case -1168575065:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -534855486);
					break;
				
				case -516333262:
				case 756873456:
					if (func_164(15406, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -516333262);
					break;
				
				case 485135095:
				case -730037708:
					if (func_164(15395, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 485135095);
					break;
				
				case 1713551997:
				case -970458486:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1713551997);
					break;
				
				case -1490658501:
				case 975601953:
					if (func_164(15410, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1490658501);
					break;
				
				case -1735635238:
				case 1614208560:
					if (func_164(15407, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1735635238);
					break;
				
				case 1931303956:
				case -726032561:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1931303956);
					break;
				
				case -1931617488:
				case -1824987162:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1931617488);
					break;
				
				case -1726332301:
				case 417579524:
					if (func_164(15414, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1726332301);
					break;
				
				case -1382922530:
				case 734151492:
					if (func_164(15415, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1382922530);
					break;
				
				case 452778672:
				case -1766862320:
					if (func_164(15399, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 452778672);
					break;
				
				case -1776790350:
				case 579562906:
					if (func_164(15404, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1776790350);
					break;
				
				case -1988057295:
				case -619754931:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1988057295);
					break;
				
				case 816707921:
				case 1424441799:
					if (func_164(15392, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 816707921);
					break;
				
				case 744446190:
				case -1405036369:
					if (func_164(15390, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 744446190);
					break;
				
				case 917772807:
				case 1929056908:
					if (func_164(15402, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 917772807);
					break;
				
				case -292922355:
				case -34538790:
					if (func_164(15416, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -292922355);
					break;
				
				case -1495432685:
				case 1898518287:
					if (func_81(209, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1495432685);
					break;
			}
			break;
		
		case -240234547:
			switch (iParam1)
			{
				case 769964545:
				case 1916093085:
					if (func_164(9366, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 769964545);
					break;
				
				case 1424500982:
				case -701486200:
					if (func_164(9367, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1424500982);
					break;
				
				case -1810785185:
				case 1951718630:
					if (func_164(9369, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1810785185);
					break;
				
				case 837990279:
				case -1981978861:
					if (func_164(9368, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 837990279);
					break;
				
				case 1752551314:
				case 468661890:
					if (func_164(9365, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1752551314);
					break;
				
				case 735155845:
				case 1907925586:
					if (func_164(9364, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 735155845);
					break;
				
				case 1863251462:
				case 646243571:
					if (func_164(27078, -1, -1))
					{
						return 0;
					}
					if (func_164(9363, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1863251462);
					break;
				
				case -2142058763:
				case 1953935161:
					if (func_164(9362, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2142058763);
					break;
				
				case -207591105:
				case 874867224:
					if (func_164(9370, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -207591105);
					break;
				
				case -932813887:
				case 1344008898:
					if (func_164(9371, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -932813887);
					break;
				
				case -313503199:
				case 1297781304:
					if (func_164(9372, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -313503199);
					break;
				
				case 718936417:
				case 1977233252:
					if (func_164(9373, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 718936417);
					break;
				
				case -1107649605:
				case -194410344:
					if (func_164(9374, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1107649605);
					break;
				
				case 39090475:
				case 392012609:
					if (func_164(9384, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 39090475);
					break;
				
				case 1628251208:
				case 705148450:
					if (func_164(9385, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1628251208);
					break;
			}
			break;
		
		case -1194930348:
			switch (iParam1)
			{
				case -621355603:
				case -46521805:
					if (func_164(7551, -1, -1) || func_79(3789, -1, 0) >= Global_262145.f_16296)
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -621355603);
					break;
				
				case -1006202521:
				case -1549217620:
					if (func_164(7467, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1006202521);
					break;
				
				case -1834049539:
				case 1674429052:
					if (func_164(7468, -1, -1))
					{
						return 0;
					}
					if (iParam1 == -1834049539)
					{
						if (func_164(27083, -1, -1))
						{
							return 0;
						}
					}
					else if (func_164(27086, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1834049539);
					break;
				
				case -2060372580:
				case -254669596:
					if (func_164(7469, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2060372580);
					break;
				
				case 1057304170:
				case 1802602254:
					if (func_164(7470, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1057304170);
					break;
				
				case 1421572640:
				case -941072260:
					if (func_164(7471, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1421572640);
					break;
				
				case 481259621:
				case -1844749517:
					if (func_164(7472, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 481259621);
					break;
				
				case 1227497670:
				case 82745424:
					if (func_164(7473, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1227497670);
					break;
				
				case 319276780:
				case -673460083:
					if (func_164(7474, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 319276780);
					break;
				
				case 2070827921:
				case -99954496:
					if (func_164(7475, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 2070827921);
					break;
				
				case 1433629991:
				case 2078163456:
					if (func_164(7476, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1433629991);
					break;
				
				case -1712994650:
				case 1362343227:
					if (func_164(7477, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1712994650);
					break;
				
				case 2125094286:
				case 1176005743:
					if (func_164(7478, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 2125094286);
					break;
				
				case 712298404:
				case -1504557219:
					if (func_164(7479, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 712298404);
					break;
				
				case 1998072324:
				case 367912881:
					if (func_164(7480, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1998072324);
					break;
				
				case 1249206960:
				case -836343280:
					if (func_164(7481, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1249206960);
					break;
			}
			break;
		
		case -1907832850:
			switch (iParam1)
			{
				case 2062186390:
				case 283190173:
					if (func_164(4260, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 283190173);
					break;
				
				case -60867780:
				case 1528527015:
					if (func_164(4257, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1528527015);
					break;
				
				case 926967912:
				case -1690029966:
					if (func_164(4269, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1690029966);
					break;
				
				case -1886278590:
				case -1685994466:
					if (func_164(4261, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1685994466);
					break;
				
				case -1314959708:
				case 255166927:
					if (func_164(4259, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 255166927);
					break;
				
				case -1696774529:
				case -271257487:
					if (func_164(4268, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -271257487);
					break;
				
				case -356446484:
				case 1885215284:
					if (func_164(4265, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1885215284);
					break;
				
				case 857810380:
				case -1935156988:
					if (func_164(4258, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1935156988);
					break;
				
				case -629676646:
				case 1061465906:
					if (func_164(4264, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 1061465906);
					break;
				
				case -1879530481:
				case -871031729:
					if (func_164(4267, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -871031729);
					break;
				
				case -1265847311:
				case -101171485:
					if (func_164(4262, -1, -1))
					{
						return 0;
					}
					if (func_164(27079, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -101171485);
					break;
				
				case 32094424:
				case -1590298770:
					if (func_164(4263, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -1590298770);
					break;
				
				case 1969286744:
				case 303441856:
					if (func_164(4266, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == 303441856);
					break;
			}
			break;
		
		case 62137527:
			switch (iParam1)
			{
				case 386581472:
				case 1466454525:
					if (func_79(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == 1466454525)
					{
						if (func_164(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_161(iParam2, iParam1, 1);
					break;
				
				case 979307144:
				case -473732439:
					if (func_79(2931, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == -473732439)
					{
						if (func_164(27068, -1, -1))
						{
							return 0;
						}
					}
					return !func_161(iParam2, iParam1, 0);
					break;
			}
			break;
		
		case -1542189594:
			switch (iParam1)
			{
				case -2049689650:
				case 560620683:
					if (func_164(113, -1, -1))
					{
						return 0;
					}
					return !func_161(iParam2, iParam1, iParam1 == -2049689650);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam1)
			{
				case -627999265:
				case 1682346315:
				case 1021952654:
				case 1319396867:
				case 560794517:
				case 858697496:
				case -30981230:
				case -328032215:
				case -1451681225:
				case 267904819:
					if (iParam1 == -627999265)
					{
						if (func_164(27082, -1, -1))
						{
							return 0;
						}
						if (func_164(3770, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1682346315)
					{
						if (func_164(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1021952654)
					{
						if (func_164(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 1319396867)
					{
						if (func_164(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 560794517)
					{
						if (func_164(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 858697496)
					{
						if (func_164(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -30981230)
					{
						if (func_164(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -328032215)
					{
						if (func_164(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1451681225)
					{
						if (func_164(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 267904819)
					{
						if (func_164(3779, -1, -1) || func_164(27084, -1, -1))
						{
							return 0;
						}
					}
					return !func_161(iParam2, iParam1, 1);
					break;
				
				case -1864998224:
				case -2140814897:
				case 223468453:
				case -83970305:
				case -406843262:
				case -954740942:
				case -1675526854:
				case 2111717556:
				case -415395003:
				case 427521984:
					if (iParam1 == -1864998224)
					{
						if (func_164(3770, -1, -1))
						{
							return 0;
						}
						if (func_164(27082, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -2140814897)
					{
						if (func_164(3771, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 223468453)
					{
						if (func_164(3772, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -83970305)
					{
						if (func_164(3773, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -406843262)
					{
						if (func_164(3774, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -954740942)
					{
						if (func_164(3775, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -1675526854)
					{
						if (func_164(3776, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2111717556)
					{
						if (func_164(3777, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == -415395003)
					{
						if (func_164(3778, -1, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == 427521984)
					{
						if (func_164(3779, -1, -1) || func_164(27083, -1, -1))
						{
							return 0;
						}
					}
					return !func_161(iParam2, iParam1, 0);
					break;
				
				case -863391184:
				case 671171671:
				case 1675446188:
				case 1911627074:
					if ((((func_164(3765, -1, -1) && func_164(3766, -1, -1)) && func_164(3767, -1, -1)) && func_164(3768, -1, -1)) && func_164(3769, -1, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		
		case 243848076:
			switch (iParam1)
			{
				case 632918673:
				case 1525246127:
					return !func_164(3593, -1, -1);
					break;
			}
			break;
		
		case -1398869298:
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				
				case 196632624:
				case -1644428107:
				case 1108198688:
				case 810099095:
					return 1;
					break;
				
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				
				case 1980445908:
				case -1882429354:
				case -1235341889:
				case -1544517404:
					return 1;
					break;
				
				case -1450406320:
				case 1412653072:
					return (!func_81(152, -1) && !func_164(9440, -1, -1));
					break;
				
				case 210195800:
				case 7463306:
					return (!func_81(151, -1) && !func_164(9430, -1, -1));
					break;
				
				case 953986562:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9426, -1, -1));
					break;
				
				case 585335312:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9427, -1, -1));
					break;
				
				case 489617063:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9428, -1, -1));
					break;
				
				case 1843402776:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9431, -1, -1));
					break;
				
				case -1600520821:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9432, -1, -1));
					break;
				
				case 1399087889:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9433, -1, -1));
					break;
				
				case 1169344430:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9439, -1, -1));
					break;
				
				case -2028647818:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9434, -1, -1));
					break;
				
				case -1335845620:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9435, -1, -1));
					break;
				
				case -1209849091:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9436, -1, -1));
					break;
				
				case 2065609077:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9429, -1, -1));
					break;
				
				case -664245241:
					return (!func_147(func_152(iParam1, 3), -1) && !func_164(9437, -1, -1));
					break;
				
				case 1531057961:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9426, -1, -1));
					break;
				
				case 1986678137:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9427, -1, -1));
					break;
				
				case 2142789653:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9428, -1, -1));
					break;
				
				case 308053343:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9431, -1, -1));
					break;
				
				case 753842819:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9432, -1, -1));
					break;
				
				case 1052794406:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9433, -1, -1));
					break;
				
				case -695726661:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9439, -1, -1));
					break;
				
				case -1001821890:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9434, -1, -1));
					break;
				
				case -1425459522:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9435, -1, -1));
					break;
				
				case 1163510365:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9436, -1, -1));
					break;
				
				case 933242602:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9429, -1, -1));
					break;
				
				case -1347021116:
					return (!func_147(func_152(iParam1, 4), -1) && !func_164(9437, -1, -1));
					break;
				
				case 1676130538:
				case -1730534702:
				case -1767432596:
				case 1297354841:
				case -839806574:
				case -542100209:
					return !func_146();
					break;
			}
			break;
		
		case -1684351737:
			switch (iParam1)
			{
				case -190040148:
				case -11341151:
					return !func_164(3608, -1, -1);
					break;
			}
			break;
		
		case -1677471575:
			switch (iParam1)
			{
				case 42936837:
				case 516055815:
					return (!func_164(3615, -1, -1) && !func_164(9438, -1, -1));
					break;
			}
			break;
		
		case -1056335443:
			if (iParam1 == -963164512)
			{
				return 1;
			}
			switch (iParam1)
			{
				case 670952414:
				case -1544625218:
					return !func_164(3783, -1, -1);
					break;
				
				case -282875325:
				case 1185175875:
					return !func_164(3784, -1, -1);
					break;
				
				case 2079623104:
				case 155591269:
					return !func_164(3785, -1, -1);
					break;
				
				case 1088443427:
				case -1057958846:
					return !func_164(3786, -1, -1);
					break;
				
				case 200001600:
				case -1853795495:
					return !func_164(3787, -1, -1);
					break;
				
				case 1620729159:
				case -1860485560:
					return !func_164(3788, -1, -1);
					break;
				
				case -1713274238:
				case 499288642:
					if (func_164(27081, -1, -1))
					{
						return 0;
					}
					return !func_164(3789, -1, -1);
					break;
				
				case -1571590969:
				case -7887054:
					return !func_164(3790, -1, -1);
					break;
				
				case -457639374:
				case -1553041502:
					return !func_164(3791, -1, -1);
					break;
				
				case 64160805:
				case -1080591445:
					return !func_164(3792, -1, -1);
					break;
				
				case 776078819:
				case -1303573005:
					if (iParam1 == 776078819)
					{
						iVar0 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == -1303573005)
					{
						iVar1 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar1, 18))
						{
							return 0;
						}
					}
					return !func_164(3793, -1, -1);
					break;
				
				case -1069464482:
				case 2085207152:
					if (iParam1 == -1069464482)
					{
						iVar2 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == 2085207152)
					{
						iVar3 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar3, 19))
						{
							return 0;
						}
					}
					return !func_164(3794, -1, -1);
					break;
				
				case -1342875239:
				case 857137150:
					if (iParam1 == -1342875239)
					{
						iVar4 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == 857137150)
					{
						iVar5 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar5, 20))
						{
							return 0;
						}
					}
					return !func_164(3795, -1, -1);
					break;
				
				case 1967892405:
				case 535952639:
					if (iParam1 == 1967892405)
					{
						iVar6 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == 535952639)
					{
						iVar7 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar7, 21))
						{
							return 0;
						}
					}
					return !func_164(3796, -1, -1);
					break;
				
				case 642864781:
				case -1974657401:
					if (iParam1 == 642864781)
					{
						iVar8 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == -1974657401)
					{
						iVar9 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar9, 22))
						{
							return 0;
						}
					}
					return !func_164(3797, -1, -1);
					break;
				
				case 1270860039:
				case 129909013:
					if (iParam1 == 1270860039)
					{
						iVar10 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == 129909013)
					{
						iVar11 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar11, 23))
						{
							return 0;
						}
					}
					return !func_164(3798, -1, -1);
					break;
				
				case -1290780406:
				case -1499060170:
					if (iParam1 == -1290780406)
					{
						iVar12 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == -1499060170)
					{
						iVar13 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar13, 24))
						{
							return 0;
						}
					}
					return !func_164(3799, -1, -1);
					break;
				
				case 1127641545:
				case 412032123:
					if (iParam1 == 1127641545)
					{
						iVar14 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == 412032123)
					{
						iVar15 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar15, 25))
						{
							return 0;
						}
					}
					return !func_164(3800, -1, -1);
					break;
				
				case -1221948530:
				case 915049044:
					if (iParam1 == -1221948530)
					{
						iVar16 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == 915049044)
					{
						iVar17 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar17, 26))
						{
							return 0;
						}
					}
					return !func_164(3801, -1, -1);
					break;
				
				case 1954153055:
				case 456478679:
					if (iParam1 == 1954153055)
					{
						iVar18 = func_79(2442, -1, 0);
						if (MISC::IS_BIT_SET(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == 456478679)
					{
						iVar19 = func_79(2422, -1, 0);
						if (MISC::IS_BIT_SET(iVar19, 27))
						{
							return 0;
						}
					}
					return !func_164(3802, -1, -1);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam1)
			{
				case -588549683:
				case 464027076:
					return 1;
					break;
				
				case -965491494:
				case 939374190:
					return 1;
					break;
			}
			break;
		
		case 598190139:
			switch (iParam1)
			{
				case -1458541976:
				case -606014753:
				case -613376371:
				case -446291501:
				case -1034642040:
				case 1022637316:
				case -1677156418:
				case -1130213300:
					return !func_145();
					break;
			}
			break;
	}
	return 0;
}

int func_145()//Position - 0x1AEA6
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

bool func_146()//Position - 0x1AF61
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_147(int iParam0, int iParam1)//Position - 0x1AF72
{
	int iVar0;
	int iVar1;
	
	if (func_150(iParam0) == 10999)
	{
		return 0;
	}
	iVar0 = func_149(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_148(iVar1));
}

int func_148(int iParam0)//Position - 0x1AFA4
{
	return (iParam0 % 32);
}

int func_149(var uParam0, int iParam1)//Position - 0x1AFB1
{
	int iVar0;
	
	iVar0 = func_79(func_150(uParam0), iParam1, 0);
	return iVar0;
}

int func_150(var uParam0)//Position - 0x1AFCA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_151(iVar0);
	if ((func_49() == 0 || func_48() == 0) || (func_49() == 999 && func_48() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1756;
				break;
			
			case 7:
				return 1950;
				break;
			
			case 8:
				return 1951;
				break;
			
			case 9:
				return 1952;
				break;
			
			case 10:
				return 1953;
				break;
			
			case 11:
				return 1954;
				break;
			
			case 12:
				return 1955;
				break;
			
			case 13:
				return 2422;
				break;
			
			case 14:
				return 2442;
				break;
			
			case 15:
				return 2445;
				break;
			
			case 16:
				return 2448;
				break;
			
			case 17:
				return 2611;
				break;
			
			case 18:
				return 2614;
				break;
			
			case 19:
				return 2617;
				break;
			
			case 20:
				return 3783;
				break;
			
			case 21:
				return 3786;
				break;
			
			case 22:
				return 3861;
				break;
			
			case 23:
				return 3864;
				break;
			
			case 24:
				return 3867;
				break;
			
			case 25:
				return 3870;
				break;
			
			case 26:
				return 5361;
				break;
			
			case 27:
				return 5364;
				break;
			
			case 28:
				return 5466;
				break;
			
			case 29:
				return 5469;
				break;
			
			case 30:
				return 6428;
				break;
			
			case 31:
				return 6431;
				break;
			
			case 32:
				return 7252;
				break;
			
			case 33:
				return 7255;
				break;
			
			case 34:
				return 7258;
				break;
			
			case 35:
				return 7967;
				break;
			
			case 36:
				return 7970;
				break;
			
			case 37:
				return 7973;
				break;
			
			case 38:
				return 7976;
				break;
			
			case 39:
				return 8498;
				break;
			
			case 40:
				return 8501;
				break;
			
			case 41:
				return 8504;
				break;
			
			case 42:
				return 8507;
				break;
			
			case 43:
				return 8901;
				break;
			
			case 44:
				return 8904;
				break;
			
			case 45:
				return 8907;
				break;
			}
	}
	return 10999;
}

int func_151(int iParam0)//Position - 0x1B2CA
{
	return (iParam0 / 32);
}

int func_152(int iParam0, int iParam1)//Position - 0x1B2D7
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_154(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_153(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = FILES::_GET_NUM_DECORATIONS(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (FILES::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return (129 + iVar1);
			}
		}
		iVar1++;
	}
	return -1;
}

int func_153(int iParam0, var uParam1)//Position - 0x1B348
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
		
		case 1647997020:
			iVar0 = 482;
			break;
		
		case -1405854945:
			iVar0 = 483;
			break;
		
		case -1171294997:
			iVar0 = 484;
			break;
		
		case -77076350:
			iVar0 = 485;
			break;
		
		case 775569873:
			iVar0 = 486;
			break;
		
		case 330569485:
			iVar0 = 487;
			break;
		
		case -1549217620:
			iVar0 = 488;
			break;
		
		case 1674429052:
			iVar0 = 489;
			break;
		
		case -254669596:
			iVar0 = 490;
			break;
		
		case 1802602254:
			iVar0 = 491;
			break;
		
		case -941072260:
			iVar0 = 492;
			break;
		
		case -1844749517:
			iVar0 = 493;
			break;
		
		case 82745424:
			iVar0 = 494;
			break;
		
		case -673460083:
			iVar0 = 495;
			break;
		
		case -99954496:
			iVar0 = 496;
			break;
		
		case 2078163456:
			iVar0 = 497;
			break;
		
		case 1362343227:
			iVar0 = 498;
			break;
		
		case 1176005743:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1504557219:
			iVar0 = 500;
			break;
		
		case 367912881:
			iVar0 = 501;
			break;
		
		case -836343280:
			iVar0 = 502;
			break;
		
		case -46521805:
			iVar0 = 503;
			break;
		
		case -743048780:
			iVar0 = 504;
			break;
		
		case 1294865118:
			iVar0 = 505;
			break;
		
		case -1479686374:
			iVar0 = 506;
			break;
		
		case 256017193:
			iVar0 = 507;
			break;
		
		case 1232443120:
			iVar0 = 508;
			break;
		
		case -803282271:
			iVar0 = 509;
			break;
		
		case 1788600442:
			iVar0 = 510;
			break;
		
		case 1439605343:
			iVar0 = 511;
			break;
		
		case -1094679264:
			iVar0 = 512;
			break;
		
		case 1230482241:
			iVar0 = 513;
			break;
		
		case 2054714291:
			iVar0 = 514;
			break;
		
		case 192117676:
			iVar0 = 515;
			break;
		
		case -2071204405:
			iVar0 = 516;
			break;
		
		case -1618181476:
			iVar0 = 517;
			break;
		
		case -1408253665:
			iVar0 = 518;
			break;
		
		case -134185391:
			iVar0 = 519;
			break;
		
		case -785783411:
			iVar0 = 520;
			break;
		
		case -633466710:
			iVar0 = 521;
			break;
		
		case -2072487372:
			iVar0 = 522;
			break;
		
		case 1211025296:
			iVar0 = 523;
			break;
		
		case 742659337:
			iVar0 = 524;
			break;
		
		case 1365533160:
			iVar0 = 525;
			break;
		
		case 1213205618:
			iVar0 = 526;
			break;
		
		case -164052103:
			iVar0 = 527;
			break;
		
		case -1306490297:
			iVar0 = 528;
			break;
		
		case -994802645:
			iVar0 = 529;
			break;
		
		case 637406209:
			iVar0 = 530;
			break;
		
		case -170855031:
			iVar0 = 531;
			break;
		
		case 1333098305:
			iVar0 = 532;
			break;
		
		case 119103934:
			iVar0 = 533;
			break;
		
		case -141369051:
			iVar0 = 534;
			break;
		
		case -593355218:
			iVar0 = 535;
			break;
		
		case 316832763:
			iVar0 = 536;
			break;
		
		case -393713544:
			iVar0 = 537;
			break;
		
		case -1876234625:
			iVar0 = 538;
			break;
		
		case -1453082334:
			iVar0 = 539;
			break;
		
		case -1397705983:
			iVar0 = 540;
			break;
		
		case -1278086171:
			iVar0 = 541;
			break;
		
		case -1510892268:
			iVar0 = 542;
			break;
		
		case 204876084:
			iVar0 = 543;
			break;
		
		case -988359492:
			iVar0 = 544;
			break;
		
		case 975745281:
			iVar0 = 545;
			break;
		
		case 591099372:
			iVar0 = 546;
			break;
		
		case -1014948306:
			iVar0 = 547;
			break;
		
		case -1866439788:
			iVar0 = 548;
			break;
		
		case -1265767186:
			iVar0 = 549;
			break;
		
		case 2070931859:
			iVar0 = 550;
			break;
		
		case 413611416:
			iVar0 = 551;
			break;
		
		case 765001063:
			iVar0 = 552;
			break;
		
		case -686624622:
			iVar0 = 553;
			break;
		
		case -937548349:
			iVar0 = 554;
			break;
		
		case 212584159:
			iVar0 = 555;
			break;
		
		case -328340062:
			iVar0 = 556;
			break;
		
		case 1657725123:
			iVar0 = 557;
			break;
		
		case -1517964336:
			iVar0 = 558;
			break;
		
		case -785490239:
			iVar0 = 559;
			break;
		
		case -11769229:
			iVar0 = 560;
			break;
		
		case 745912106:
			iVar0 = 561;
			break;
		
		case -2064265098:
			iVar0 = 562;
			break;
		
		case -1515892875:
			iVar0 = 563;
			break;
		
		case 1368234729:
			iVar0 = 564;
			break;
		
		case 1960230923:
			iVar0 = 565;
			break;
		
		case -860169810:
			iVar0 = 566;
			break;
		
		case -177882114:
			iVar0 = 567;
			break;
		
		case 661384509:
			iVar0 = 568;
			break;
		
		case 1221860095:
			iVar0 = 569;
			break;
		
		case 698192473:
			iVar0 = 570;
			break;
		
		case -817251083:
			iVar0 = 571;
			break;
		
		case -1108876323:
			iVar0 = 572;
			break;
		
		case 1274482696:
			iVar0 = 573;
			break;
		
		case 468009056:
			iVar0 = 574;
			break;
		
		case 2063732427:
			iVar0 = 575;
			break;
		
		case -764016411:
			iVar0 = 576;
			break;
		
		case -1530816149:
			iVar0 = 577;
			break;
		
		case 1189996018:
			iVar0 = 578;
			break;
		
		case -210110115:
			iVar0 = 579;
			break;
		
		case -207110256:
			iVar0 = 580;
			break;
		
		case 1801308144:
			iVar0 = 581;
			break;
		
		case 320631086:
			iVar0 = 582;
			break;
		
		case 1022560466:
			iVar0 = 583;
			break;
		
		case -952946041:
			iVar0 = 584;
			break;
		
		case 1321460664:
			iVar0 = 585;
			break;
		
		case -781625914:
			iVar0 = 586;
			break;
		
		case -1522247835:
			iVar0 = 587;
			break;
		
		case -1531245231:
			iVar0 = 588;
			break;
		
		case -1070472994:
			iVar0 = 589;
			break;
		
		case -2113341060:
			iVar0 = 590;
			break;
		
		case 965047293:
			iVar0 = 591;
			break;
		
		case 2114285045:
			iVar0 = 592;
			break;
		
		case -1635032213:
			iVar0 = 593;
			break;
		
		case 1310864345:
			iVar0 = 594;
			break;
		
		case -973977633:
			iVar0 = 595;
			break;
		
		case -1439643329:
			iVar0 = 596;
			break;
		
		case 434150104:
			iVar0 = 597;
			break;
		
		case 1243301688:
			iVar0 = 598;
			break;
		
		case -1233567982:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case 1262886680:
			iVar0 = 600;
			break;
		
		case 283135569:
			iVar0 = 601;
			break;
		
		case -548917969:
			iVar0 = 602;
			break;
		
		case 153465812:
			iVar0 = 603;
			break;
		
		case 1916093085:
			iVar0 = 604;
			break;
		
		case -701486200:
			iVar0 = 605;
			break;
		
		case 1951718630:
			iVar0 = 606;
			break;
		
		case -1981978861:
			iVar0 = 607;
			break;
		
		case -1998094267:
			iVar0 = 608;
			break;
		
		case -718445629:
			iVar0 = 609;
			break;
		
		case -35697399:
			iVar0 = 610;
			break;
		
		case -899081349:
			iVar0 = 611;
			break;
		
		case 1123547916:
			iVar0 = 612;
			break;
		
		case -1139893782:
			iVar0 = 613;
			break;
		
		case 1446511785:
			iVar0 = 614;
			break;
		
		case 1234256191:
			iVar0 = 615;
			break;
		
		case 413901048:
			iVar0 = 616;
			break;
		
		case 1527450164:
			iVar0 = 617;
			break;
		
		case -1786525476:
			iVar0 = 618;
			break;
		
		case 1439516635:
			iVar0 = 619;
			break;
		
		case 733800794:
			iVar0 = 620;
			break;
		
		case -399223540:
			iVar0 = 621;
			break;
		
		case -1894392230:
			iVar0 = 622;
			break;
		
		case 229993415:
			iVar0 = 623;
			break;
		
		case -620189683:
			iVar0 = 624;
			break;
		
		case 1846617794:
			iVar0 = 625;
			break;
		
		case -1142479347:
			iVar0 = 626;
			break;
		
		case -512960025:
			iVar0 = 627;
			break;
		
		case -759812557:
			iVar0 = 628;
			break;
		
		case 468661890:
			iVar0 = 629;
			break;
		
		case 1907925586:
			iVar0 = 630;
			break;
		
		case 646243571:
			iVar0 = 631;
			break;
		
		case 1953935161:
			iVar0 = 632;
			break;
		
		case 874867224:
			iVar0 = 633;
			break;
		
		case 1344008898:
			iVar0 = 634;
			break;
		
		case 1297781304:
			iVar0 = 635;
			break;
		
		case 1977233252:
			iVar0 = 636;
			break;
		
		case -194410344:
			iVar0 = 637;
			break;
		
		case 392012609:
			iVar0 = 638;
			break;
		
		case 705148450:
			iVar0 = 639;
			break;
		
		case 1677522529:
			iVar0 = 640;
			break;
		
		case -1362677538:
			iVar0 = 641;
			break;
		
		case 863458948:
			iVar0 = 642;
			break;
		
		case 9874621:
			iVar0 = 643;
			break;
		
		case 1809338990:
			iVar0 = 644;
			break;
		
		case -346939959:
			iVar0 = 645;
			break;
		
		case -934753544:
			iVar0 = 646;
			break;
		
		case 1604986209:
			iVar0 = 647;
			break;
		
		case -1514700421:
			iVar0 = 648;
			break;
		
		case 1177361060:
			iVar0 = 649;
			break;
		
		case -937529288:
			iVar0 = 650;
			break;
		
		case 547723644:
			iVar0 = 651;
			break;
		
		case 1750314531:
			iVar0 = 652;
			break;
		
		case -988332613:
			iVar0 = 653;
			break;
		
		case 80720443:
			iVar0 = 654;
			break;
		
		case -1220194634:
			iVar0 = 655;
			break;
		
		case -925735153:
			iVar0 = 656;
			break;
		
		case -1403745446:
			iVar0 = 657;
			break;
		
		case -1084626028:
			iVar0 = 658;
			break;
		
		case 2060572320:
			iVar0 = 659;
			break;
		
		case 1064377095:
			iVar0 = 660;
			break;
		
		case -1985597576:
			iVar0 = 661;
			break;
		
		case -2003189104:
			iVar0 = 662;
			break;
		
		case 1452329956:
			iVar0 = 663;
			break;
		
		case 1928573506:
			iVar0 = 664;
			break;
		
		case -185753722:
			iVar0 = 665;
			break;
		
		case -1580916109:
			iVar0 = 666;
			break;
		
		case -1077059973:
			iVar0 = 667;
			break;
		
		case 131755133:
			iVar0 = 668;
			break;
		
		case -253351038:
			iVar0 = 669;
			break;
		
		case 1332845224:
			iVar0 = 670;
			break;
		
		case -685051870:
			iVar0 = 671;
			break;
		
		case 2122847199:
			iVar0 = 672;
			break;
		
		case -149940744:
			iVar0 = 673;
			break;
		
		case -147741130:
			iVar0 = 674;
			break;
		
		case 302211868:
			iVar0 = 675;
			break;
		
		case -1361568592:
			iVar0 = 676;
			break;
		
		case -156600218:
			iVar0 = 677;
			break;
		
		case 1592739450:
			iVar0 = 678;
			break;
		
		case -633744004:
			iVar0 = 679;
			break;
		
		case -1467745952:
			iVar0 = 680;
			break;
		
		case 1129961041:
			iVar0 = 681;
			break;
		
		case -1221180772:
			iVar0 = 682;
			break;
		
		case 1957517559:
			iVar0 = 683;
			break;
		
		case -335233377:
			iVar0 = 684;
			break;
		
		case 2146762380:
			iVar0 = 685;
			break;
		
		case 427236107:
			iVar0 = 686;
			break;
		
		case -49636427:
			iVar0 = 687;
			break;
		
		case 1988133312:
			iVar0 = 688;
			break;
		
		case 40044091:
			iVar0 = 689;
			break;
		
		case -1189893809:
			iVar0 = 690;
			break;
		
		case 1182549017:
			iVar0 = 691;
			break;
		
		case 1403255481:
			iVar0 = 692;
			break;
		
		case 821579887:
			iVar0 = 693;
			break;
		
		case 1975948161:
			iVar0 = 694;
			break;
		
		case -953362234:
			iVar0 = 695;
			break;
		
		case 1521494915:
			iVar0 = 696;
			break;
		
		case 84635211:
			iVar0 = 697;
			break;
		
		case 2074655231:
			iVar0 = 698;
			break;
		
		case 1742494019:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case 1841934566:
			iVar0 = 700;
			break;
		
		case 1648222412:
			iVar0 = 701;
			break;
		
		case 1019312748:
			iVar0 = 702;
			break;
		
		case -1218730541:
			iVar0 = 703;
			break;
		
		case -88186884:
			iVar0 = 704;
			break;
		
		case 1428588096:
			iVar0 = 705;
			break;
		
		case -1788493673:
			iVar0 = 706;
			break;
		
		case -241894528:
			iVar0 = 707;
			break;
		
		case -1425414573:
			iVar0 = 708;
			break;
		
		case 1797163947:
			iVar0 = 709;
			break;
		
		case 823191231:
			iVar0 = 710;
			break;
		
		case 894133321:
			iVar0 = 711;
			break;
		
		case 1889485313:
			iVar0 = 712;
			break;
		
		case 687338866:
			iVar0 = 713;
			break;
		
		case 1827923343:
			iVar0 = 714;
			break;
		
		case -1893751733:
			iVar0 = 715;
			break;
		
		case 1739151647:
			iVar0 = 716;
			break;
		
		case 1361186211:
			iVar0 = 717;
			break;
		
		case -188624940:
			iVar0 = 718;
			break;
		
		case -1097074643:
			iVar0 = 719;
			break;
		
		case -609708185:
			iVar0 = 720;
			break;
		
		case 1295911115:
			iVar0 = 721;
			break;
		
		case -1694728829:
			iVar0 = 722;
			break;
		
		case -322091380:
			iVar0 = 723;
			break;
		
		case -1168575065:
			iVar0 = 724;
			break;
		
		case 756873456:
			iVar0 = 725;
			break;
		
		case -730037708:
			iVar0 = 726;
			break;
		
		case -970458486:
			iVar0 = 727;
			break;
		
		case 975601953:
			iVar0 = 728;
			break;
		
		case 1614208560:
			iVar0 = 729;
			break;
		
		case -726032561:
			iVar0 = 730;
			break;
		
		case -1824987162:
			iVar0 = 731;
			break;
		
		case 417579524:
			iVar0 = 732;
			break;
		
		case 734151492:
			iVar0 = 733;
			break;
		
		case -1766862320:
			iVar0 = 734;
			break;
		
		case 579562906:
			iVar0 = 735;
			break;
		
		case -619754931:
			iVar0 = 736;
			break;
		
		case 1424441799:
			iVar0 = 737;
			break;
		
		case -1405036369:
			iVar0 = 738;
			break;
		
		case 1929056908:
			iVar0 = 739;
			break;
		
		case -34538790:
			iVar0 = 740;
			break;
		
		case 1898518287:
			iVar0 = 741;
			break;
		
		case -893104650:
			iVar0 = 742;
			break;
		
		case -553814424:
			iVar0 = 743;
			break;
		
		case 201431212:
			iVar0 = 744;
			break;
		
		case 528695215:
			iVar0 = 745;
			break;
		
		case -1266435389:
			iVar0 = 746;
			break;
		
		case 980213248:
			iVar0 = 747;
			break;
		
		case 1019119277:
			iVar0 = 748;
			break;
		
		case 1187710323:
			iVar0 = 749;
			break;
		
		case 382848971:
			iVar0 = 750;
			break;
		
		case -1567832243:
			iVar0 = 751;
			break;
		
		case 2049506430:
			iVar0 = 752;
			break;
		
		case 92806870:
			iVar0 = 753;
			break;
		
		case -628203424:
			iVar0 = 754;
			break;
		
		case 2125178682:
			iVar0 = 755;
			break;
		
		case 399660858:
			iVar0 = 756;
			break;
		
		case -624842093:
			iVar0 = 757;
			break;
		
		case 282885412:
			iVar0 = 758;
			break;
		
		case 1599917585:
			iVar0 = 759;
			break;
		
		case -703540963:
			iVar0 = 760;
			break;
		
		case 904358018:
			iVar0 = 761;
			break;
		
		case 560877895:
			iVar0 = 762;
			break;
		
		case 2145953489:
			iVar0 = 763;
			break;
		
		case -87437351:
			iVar0 = 764;
			break;
		
		case -187239215:
			iVar0 = 765;
			break;
		
		case 1481255878:
			iVar0 = 766;
			break;
		
		case 1805700785:
			iVar0 = 767;
			break;
		
		case -368780168:
			iVar0 = 768;
			break;
		
		case 1457900554:
			iVar0 = 769;
			break;
		
		case -1066127505:
			iVar0 = 770;
			break;
		
		case -1366750043:
			iVar0 = 771;
			break;
		
		case 1944822196:
			iVar0 = 772;
			break;
		
		case -1639289459:
			iVar0 = 773;
			break;
		
		case 1282565442:
			iVar0 = 774;
			break;
		
		case -884280700:
			iVar0 = 775;
			break;
		
		case -1047313079:
			iVar0 = 776;
			break;
		
		case 1849315700:
			iVar0 = 777;
			break;
		
		case -2129853791:
			iVar0 = 778;
			break;
		
		case -643974508:
			iVar0 = 779;
			break;
		
		case 614424236:
			iVar0 = 780;
			break;
		
		case 2059836334:
			iVar0 = 781;
			break;
		
		case 221447729:
			iVar0 = 782;
			break;
		
		case 1965910391:
			iVar0 = 783;
			break;
		
		case 1822250244:
			iVar0 = 784;
			break;
		
		case 2144765713:
			iVar0 = 785;
			break;
		
		case 280971002:
			iVar0 = 786;
			break;
		
		case -1869294378:
			iVar0 = 787;
			break;
		
		case -869172334:
			iVar0 = 788;
			break;
		
		case -1028499109:
			iVar0 = 789;
			break;
		
		case 1076096084:
			iVar0 = 790;
			break;
		
		case -636780127:
			iVar0 = 791;
			break;
		
		case 603013184:
			iVar0 = 792;
			break;
		
		case 1351256035:
			iVar0 = 793;
			break;
		
		case 49108481:
			iVar0 = 794;
			break;
		
		case 354124980:
			iVar0 = 795;
			break;
		
		case -962894007:
			iVar0 = 796;
			break;
		
		case 1617075313:
			iVar0 = 797;
			break;
		
		case -635749278:
			iVar0 = 798;
			break;
		
		case -1208904204:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 414914435:
			iVar0 = 800;
			break;
		
		case -2100006249:
			iVar0 = 801;
			break;
		
		case 424018111:
			iVar0 = 802;
			break;
		
		case 849119336:
			iVar0 = 803;
			break;
		
		case 1807228945:
			iVar0 = 804;
			break;
		
		case -1119071247:
			iVar0 = 805;
			break;
		
		case -1146714704:
			iVar0 = 806;
			break;
		
		case -288852985:
			iVar0 = 807;
			break;
		
		case -562029507:
			iVar0 = 808;
			break;
		
		case -470534615:
			iVar0 = 809;
			break;
		
		case 371389080:
			iVar0 = 810;
			break;
		
		case -521204587:
			iVar0 = 811;
			break;
		
		case 1685732560:
			iVar0 = 812;
			break;
		
		case -1386443378:
			iVar0 = 813;
			break;
		
		case -1706648281:
			iVar0 = 814;
			break;
		
		case -519957866:
			iVar0 = 815;
			break;
		
		case 653935582:
			iVar0 = 816;
			break;
		
		case 2111779395:
			iVar0 = 817;
			break;
		
		case 428988289:
			iVar0 = 818;
			break;
		
		case -1903962822:
			iVar0 = 819;
			break;
		
		case 1365770911:
			iVar0 = 820;
			break;
		
		case 42029862:
			iVar0 = 821;
			break;
		
		case 438631811:
			iVar0 = 822;
			break;
		
		case -1478715891:
			iVar0 = 823;
			break;
		
		case -1395531229:
			iVar0 = 824;
			break;
		
		case 30333135:
			iVar0 = 825;
			break;
		
		case 1783341339:
			iVar0 = 826;
			break;
		
		case -16077126:
			iVar0 = 827;
			break;
		
		case -833643184:
			iVar0 = 828;
			break;
		
		case 163330499:
			iVar0 = 829;
			break;
		
		case 667415171:
			iVar0 = 830;
			break;
		
		case 242101919:
			iVar0 = 831;
			break;
		
		case 163238890:
			iVar0 = 832;
			break;
		
		case 1859431148:
			iVar0 = 833;
			break;
		
		case -1736964311:
			iVar0 = 834;
			break;
		
		case 843062770:
			iVar0 = 835;
			break;
		
		case -1233797068:
			iVar0 = 836;
			break;
		
		case 1480738976:
			iVar0 = 837;
			break;
		
		case -960020839:
			iVar0 = 838;
			break;
		
		case 444195464:
			iVar0 = 839;
			break;
		
		case 1370108117:
			iVar0 = 840;
			break;
		
		case -88227822:
			iVar0 = 841;
			break;
		
		case 239540513:
			iVar0 = 842;
			break;
		
		case 1420328020:
			iVar0 = 843;
			break;
		
		case 621404024:
			iVar0 = 844;
			break;
		
		case -1918622460:
			iVar0 = 845;
			break;
		
		case -947347525:
			iVar0 = 846;
			break;
		
		case 292920241:
			iVar0 = 847;
			break;
		
		case 720930282:
			iVar0 = 848;
			break;
		
		case 143213281:
			iVar0 = 849;
			break;
		
		case -164042492:
			iVar0 = 850;
			break;
		
		case -1370021995:
			iVar0 = 851;
			break;
		
		case 1397178481:
			iVar0 = 852;
			break;
		
		case -716829520:
			iVar0 = 853;
			break;
		
		case -478457952:
			iVar0 = 854;
			break;
		
		case 1825323565:
			iVar0 = 855;
			break;
		
		case -1122655717:
			iVar0 = 856;
			break;
		
		case -356634497:
			iVar0 = 857;
			break;
		
		case -1346341418:
			iVar0 = 858;
			break;
		
		case -1214222467:
			iVar0 = 859;
			break;
		
		case -1079776812:
			iVar0 = 860;
			break;
		
		case -948990166:
			iVar0 = 861;
			break;
		
		case 1382201813:
			iVar0 = 862;
			break;
		
		case 1576375706:
			iVar0 = 863;
			break;
		
		case -1356500517:
			iVar0 = 864;
			break;
		
		case 1838019927:
			iVar0 = 865;
			break;
		
		case 618955885:
			iVar0 = 866;
			break;
		
		case 909858453:
			iVar0 = 867;
			break;
		
		case 1809389163:
			iVar0 = 868;
			break;
		
		case -382370447:
			iVar0 = 869;
			break;
		
		case -290949038:
			iVar0 = 870;
			break;
		
		case 381474823:
			iVar0 = 871;
			break;
		
		case 570088958:
			iVar0 = 872;
			break;
		
		case 1093167087:
			iVar0 = 873;
			break;
		
		case -1327397746:
			iVar0 = 874;
			break;
		
		case 655777349:
			iVar0 = 875;
			break;
		
		case -1496905620:
			iVar0 = 876;
			break;
		
		case -1043010182:
			iVar0 = 877;
			break;
		
		case -1326077011:
			iVar0 = 878;
			break;
		
		case -1120323372:
			iVar0 = 879;
			break;
		
		case -1583620927:
			iVar0 = 880;
			break;
		
		case 1407674396:
			iVar0 = 881;
			break;
		
		case -244079832:
			iVar0 = 882;
			break;
		
		case 1055951410:
			iVar0 = 883;
			break;
		
		case 1092910333:
			iVar0 = 884;
			break;
		
		case -1874854660:
			iVar0 = 885;
			break;
		
		case -1379192256:
			iVar0 = 886;
			break;
		
		case 1435106801:
			iVar0 = 887;
			break;
		
		case -1252683947:
			iVar0 = 888;
			break;
		
		case -1380607703:
			iVar0 = 889;
			break;
		
		case 1010167914:
			iVar0 = 890;
			break;
		
		case 1059266367:
			iVar0 = 891;
			break;
		
		case 1869746711:
			iVar0 = 892;
			break;
		
		case 167494616:
			iVar0 = 893;
			break;
		
		case 231256171:
			iVar0 = 894;
			break;
		
		case -2041196288:
			iVar0 = 895;
			break;
		
		case -231795220:
			iVar0 = 896;
			break;
		
		case -1207463639:
			iVar0 = 897;
			break;
		
		case 2023442158:
			iVar0 = 898;
			break;
		
		case -1293194083:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 767365246:
			iVar0 = 900;
			break;
		
		case -318042939:
			iVar0 = 901;
			break;
		
		case -740608006:
			iVar0 = 902;
			break;
		
		case 126660566:
			iVar0 = 903;
			break;
		
		case -252733393:
			iVar0 = 904;
			break;
		
		case -1044136613:
			iVar0 = 905;
			break;
		
		case -891762294:
			iVar0 = 906;
			break;
		
		case 1410738248:
			iVar0 = 907;
			break;
		
		case -1978727490:
			iVar0 = 908;
			break;
		
		case 1684642458:
			iVar0 = 909;
			break;
		
		case -147490340:
			iVar0 = 910;
			break;
		
		case -1422117996:
			iVar0 = 911;
			break;
		
		case -313931425:
			iVar0 = 912;
			break;
		
		case 211076563:
			iVar0 = 913;
			break;
		
		case 355035035:
			iVar0 = 914;
			break;
		
		case -1447308868:
			iVar0 = 915;
			break;
		
		case 1802655618:
			iVar0 = 916;
			break;
		
		case -1063742156:
			iVar0 = 917;
			break;
		
		case 1988028531:
			iVar0 = 918;
			break;
		
		case 73898487:
			iVar0 = 919;
			break;
		
		case -1041813118:
			iVar0 = 920;
			break;
		
		case -964420554:
			iVar0 = 921;
			break;
		
		case 1817749559:
			iVar0 = 922;
			break;
		
		case 1403640225:
			iVar0 = 923;
			break;
		
		case 1306937694:
			iVar0 = 924;
			break;
		
		case -95533995:
			iVar0 = 925;
			break;
		
		case -1871451886:
			iVar0 = 926;
			break;
		
		case -1120843246:
			iVar0 = 927;
			break;
		
		case 2081997561:
			iVar0 = 928;
			break;
		
		case -1339214923:
			iVar0 = 929;
			break;
		
		case 9807447:
			iVar0 = 930;
			break;
		
		case -236005319:
			iVar0 = 931;
			break;
		
		case -1470794594:
			iVar0 = 932;
			break;
		
		case -2100868384:
			iVar0 = 933;
			break;
		
		case 805626890:
			iVar0 = 934;
			break;
		
		case -438487729:
			iVar0 = 935;
			break;
		
		case 1258452311:
			iVar0 = 936;
			break;
		
		case -1387587887:
			iVar0 = 937;
			break;
		
		case 390131826:
			iVar0 = 938;
			break;
		
		case -933865090:
			iVar0 = 939;
			break;
		
		case 42888304:
			iVar0 = 940;
			break;
		
		case -1512618189:
			iVar0 = 941;
			break;
		
		case 1805955770:
			iVar0 = 942;
			break;
		
		case 2040741242:
			iVar0 = 943;
			break;
		
		case -1572115827:
			iVar0 = 944;
			break;
		
		case -2101278774:
			iVar0 = 945;
			break;
		
		case -2006216868:
			iVar0 = 946;
			break;
		
		case 1445470992:
			iVar0 = 947;
			break;
		
		case 31459402:
			iVar0 = 948;
			break;
		
		case 850282323:
			iVar0 = 949;
			break;
		
		case 1518409673:
			iVar0 = 950;
			break;
		
		case 576453072:
			iVar0 = 951;
			break;
		
		case 1343575520:
			iVar0 = 952;
			break;
		
		case -1244055789:
			iVar0 = 953;
			break;
		
		case 1650491806:
			iVar0 = 954;
			break;
		
		case 507754313:
			iVar0 = 955;
			break;
		
		case -1168735793:
			iVar0 = 956;
			break;
		
		case 539301314:
			iVar0 = 957;
			break;
		
		case 485114319:
			iVar0 = 958;
			break;
		
		case 1397146165:
			iVar0 = 959;
			break;
		
		case -922912500:
			iVar0 = 960;
			break;
		
		case 898093918:
			iVar0 = 961;
			break;
		
		case -513817029:
			iVar0 = 962;
			break;
		
		case 134762953:
			iVar0 = 963;
			break;
		
		case 252404144:
			iVar0 = 964;
			break;
		
		case 168579849:
			iVar0 = 965;
			break;
		
		case 1888095634:
			iVar0 = 966;
			break;
		
		case -1046236786:
			iVar0 = 967;
			break;
		
		case 33901453:
			iVar0 = 968;
			break;
		
		case -2043232938:
			iVar0 = 969;
			break;
		
		case 1113927554:
			iVar0 = 970;
			break;
		
		case -1602559301:
			iVar0 = 971;
			break;
		
		case -1167812298:
			iVar0 = 972;
			break;
		
		case 1912961832:
			iVar0 = 973;
			break;
		
		case 647456058:
			iVar0 = 974;
			break;
		
		case -717523161:
			iVar0 = 975;
			break;
		
		case -1641870267:
			iVar0 = 976;
			break;
		
		case 1857030685:
			iVar0 = 977;
			break;
		
		case -1074922646:
			iVar0 = 978;
			break;
		
		case -1544308671:
			iVar0 = 979;
			break;
		
		case -480375220:
			iVar0 = 980;
			break;
		
		case -1158306419:
			iVar0 = 981;
			break;
		
		case 808115088:
			iVar0 = 982;
			break;
		
		case 1544542048:
			iVar0 = 983;
			break;
		
		case 212713658:
			iVar0 = 984;
			break;
		
		case -537477127:
			iVar0 = 985;
			break;
		
		case -2067132678:
			iVar0 = 986;
			break;
		
		case 1060051174:
			iVar0 = 987;
			break;
		
		case 2038375002:
			iVar0 = 988;
			break;
		
		case -256374303:
			iVar0 = 989;
			break;
		
		case -2088960010:
			iVar0 = 990;
			break;
		
		case 53750878:
			iVar0 = 991;
			break;
		
		case -162426614:
			iVar0 = 992;
			break;
		
		case 764954331:
			iVar0 = 993;
			break;
		
		case -111852222:
			iVar0 = 994;
			break;
		
		case -2132895820:
			iVar0 = 995;
			break;
		
		case -1693221374:
			iVar0 = 996;
			break;
		
		case 1413331587:
			iVar0 = 997;
			break;
		
		case -955872734:
			iVar0 = 998;
			break;
		
		case -858057022:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case 848913252:
			iVar0 = 1000;
			break;
		
		case -437731710:
			iVar0 = 1001;
			break;
		
		case -1554819122:
			iVar0 = 1002;
			break;
		
		case 160748074:
			iVar0 = 1003;
			break;
		
		case -1994066555:
			iVar0 = 1004;
			break;
		
		case 1529932499:
			iVar0 = 1005;
			break;
		
		case -768319839:
			iVar0 = 1006;
			break;
		
		case 514923246:
			iVar0 = 1007;
			break;
		
		case 2095668450:
			iVar0 = 1008;
			break;
		
		case -1360851461:
			iVar0 = 1009;
			break;
		
		case -1204294910:
			iVar0 = 1010;
			break;
		
		case 825438363:
			iVar0 = 1011;
			break;
		
		case 1442163504:
			iVar0 = 1012;
			break;
		
		case -518038969:
			iVar0 = 1013;
			break;
		
		case -1562358717:
			iVar0 = 1014;
			break;
		
		case -1942234381:
			iVar0 = 1015;
			break;
		
		case 1848637041:
			iVar0 = 1016;
			break;
		
		case -1724314576:
			iVar0 = 1017;
			break;
		
		case 1610788609:
			iVar0 = 1018;
			break;
		
		case 438240239:
			iVar0 = 1019;
			break;
		
		case -532184873:
			iVar0 = 1020;
			break;
		
		case -176418916:
			iVar0 = 1021;
			break;
		
		case -255254961:
			iVar0 = 1022;
			break;
		
		case -1575657225:
			iVar0 = 1023;
			break;
		
		case 712387083:
			iVar0 = 1024;
			break;
		
		case 1409023355:
			iVar0 = 1025;
			break;
		
		case 1855924338:
			iVar0 = 1026;
			break;
		
		case -851809867:
			iVar0 = 1027;
			break;
		
		case -710322017:
			iVar0 = 1028;
			break;
		
		case 1830521267:
			iVar0 = 1029;
			break;
		
		case 171269136:
			iVar0 = 1030;
			break;
		
		case 13553741:
			iVar0 = 1031;
			break;
		
		case 798116039:
			iVar0 = 1032;
			break;
		
		case 899953426:
			iVar0 = 1033;
			break;
		
		case -1781084925:
			iVar0 = 1034;
			break;
		
		case -1001719981:
			iVar0 = 1035;
			break;
		
		case -849489038:
			iVar0 = 1036;
			break;
		
		case 789088101:
			iVar0 = 1037;
			break;
		
		case -899132837:
			iVar0 = 1038;
			break;
		
		case -1844999955:
			iVar0 = 1039;
			break;
		
		case 701640495:
			iVar0 = 1040;
			break;
		
		case -1582889838:
			iVar0 = 1041;
			break;
		
		case -242968503:
			iVar0 = 1042;
			break;
		
		case 914325248:
			iVar0 = 1043;
			break;
		
		case 1925867880:
			iVar0 = 1044;
			break;
		
		case 1100261909:
			iVar0 = 1045;
			break;
		
		case -689792496:
			iVar0 = 1046;
			break;
		
		case 987747946:
			iVar0 = 1047;
			break;
		
		case 65224538:
			iVar0 = 1048;
			break;
		
		case 1579550559:
			iVar0 = 1049;
			break;
		
		case -464415589:
			iVar0 = 1050;
			break;
		
		case -445972364:
			iVar0 = 1051;
			break;
		
		case -654499627:
			iVar0 = 1052;
			break;
		
		case -736721263:
			iVar0 = 1053;
			break;
		
		case -568649369:
			iVar0 = 1054;
			break;
		
		case 879556831:
			iVar0 = 1055;
			break;
		
		case -1606449893:
			iVar0 = 1056;
			break;
		
		case 552957998:
			iVar0 = 1057;
			break;
		
		case -45830165:
			iVar0 = 1058;
			break;
		
		case -1681032345:
			iVar0 = 1059;
			break;
		
		case 1852583670:
			iVar0 = 1060;
			break;
		
		case -2051866149:
			iVar0 = 1061;
			break;
		
		case -2022674987:
			iVar0 = 1062;
			break;
		
		case 1212064605:
			iVar0 = 1063;
			break;
		
		case 284091254:
			iVar0 = 1064;
			break;
		
		case 1123523612:
			iVar0 = 1065;
			break;
		
		case 209576694:
			iVar0 = 1066;
			break;
		
		case 1852311340:
			iVar0 = 1067;
			break;
		
		case -1681829257:
			iVar0 = 1068;
			break;
		
		case -1902030573:
			iVar0 = 1069;
			break;
		
		case -1172040354:
			iVar0 = 1070;
			break;
		
		case 1896190035:
			iVar0 = 1071;
			break;
		
		case 1253892786:
			iVar0 = 1072;
			break;
		
		case 1619815742:
			iVar0 = 1073;
			break;
		
		case -203379302:
			iVar0 = 1074;
			break;
		
		case -1888601473:
			iVar0 = 1075;
			break;
		
		case -145302944:
			iVar0 = 1076;
			break;
		
		case 1793368599:
			iVar0 = 1077;
			break;
		
		case -524815620:
			iVar0 = 1078;
			break;
		
		case -667753083:
			iVar0 = 1079;
			break;
		
		case 1867381326:
			iVar0 = 1080;
			break;
		
		case 1389004292:
			iVar0 = 1081;
			break;
		
		case 459577145:
			iVar0 = 1082;
			break;
		
		case 697971620:
			iVar0 = 1083;
			break;
		
		case -157037136:
			iVar0 = 1084;
			break;
		
		case 70412493:
			iVar0 = 1085;
			break;
		
		case -861963864:
			iVar0 = 1086;
			break;
		
		case -496458438:
			iVar0 = 1087;
			break;
		
		case -1356579150:
			iVar0 = 1088;
			break;
		
		case -1125721545:
			iVar0 = 1089;
			break;
		
		case -2065044930:
			iVar0 = 1090;
			break;
		
		case -346765569:
			iVar0 = 1091;
			break;
		
		case -734816067:
			iVar0 = 1092;
			break;
		
		case -961282630:
			iVar0 = 1093;
			break;
		
		case 1134491538:
			iVar0 = 1094;
			break;
		
		case 842421441:
			iVar0 = 1095;
			break;
		
		case 523316919:
			iVar0 = 1096;
			break;
		
		case 158466873:
			iVar0 = 1097;
			break;
		
		case 1789019544:
			iVar0 = 1098;
			break;
		
		case 1426332252:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case 1178893529:
			iVar0 = 1100;
			break;
		
		case -1101107129:
			iVar0 = 1101;
			break;
		
		case -1790763503:
			iVar0 = 1102;
			break;
		
		case -1550271812:
			iVar0 = 1103;
			break;
		
		case -384612940:
			iVar0 = 1104;
			break;
		
		case -45257176:
			iVar0 = 1105;
			break;
		
		case -866087857:
			iVar0 = 1106;
			break;
		
		case -623761102:
			iVar0 = 1107;
			break;
		
		case 1075770310:
			iVar0 = 1108;
			break;
		
		case 342137938:
			iVar0 = 1109;
			break;
		
		case 599407357:
			iVar0 = 1110;
			break;
		
		case 335056082:
			iVar0 = 1111;
			break;
		
		case 1164668855:
			iVar0 = 1112;
			break;
		
		case -424365493:
			iVar0 = 1113;
			break;
		
		case -1995737350:
			iVar0 = 1114;
			break;
		
		case 2052610452:
			iVar0 = 1115;
			break;
		
		case 745160145:
			iVar0 = 1116;
			break;
		
		case 238944633:
			iVar0 = 1117;
			break;
		
		case -1894874368:
			iVar0 = 1118;
			break;
		
		case -1050515545:
			iVar0 = 1119;
			break;
		
		case -1296283045:
			iVar0 = 1120;
			break;
		
		case -254061820:
			iVar0 = 1121;
			break;
		
		case -482822209:
			iVar0 = 1122;
			break;
		
		case -1148622755:
			iVar0 = 1123;
			break;
		
		case 499821790:
			iVar0 = 1124;
			break;
		
		case 132940066:
			iVar0 = 1125;
			break;
		
		case -503061408:
			iVar0 = 1126;
			break;
		
		case -511607931:
			iVar0 = 1127;
			break;
		
		case -1252323352:
			iVar0 = 1128;
			break;
		
		case -1836767787:
			iVar0 = 1129;
			break;
		
		case 2104165007:
			iVar0 = 1130;
			break;
		
		case -1020450678:
			iVar0 = 1131;
			break;
		
		case 361610929:
			iVar0 = 1132;
			break;
		
		case -1060893559:
			iVar0 = 1133;
			break;
		
		case -1918931165:
			iVar0 = 1134;
			break;
		
		case 516389880:
			iVar0 = 1135;
			break;
		
		case 2047957618:
			iVar0 = 1136;
			break;
		
		case -1461327573:
			iVar0 = 1137;
			break;
		
		case -1710764657:
			iVar0 = 1138;
			break;
		
		case -815856869:
			iVar0 = 1139;
			break;
		
		case 1293748604:
			iVar0 = 1140;
			break;
		
		case -906850579:
			iVar0 = 1141;
			break;
		
		case -504902857:
			iVar0 = 1142;
			break;
		
		case -1891206996:
			iVar0 = 1143;
			break;
		
		case -6720974:
			iVar0 = 1144;
			break;
		
		case -2069848364:
			iVar0 = 1145;
			break;
		
		case 778786183:
			iVar0 = 1146;
			break;
		
		case -1337421708:
			iVar0 = 1147;
			break;
		
		case -1890546602:
			iVar0 = 1148;
			break;
		
		case 218123795:
			iVar0 = 1149;
			break;
		
		case -636242520:
			iVar0 = 1150;
			break;
		
		case -1180398682:
			iVar0 = 1151;
			break;
		
		case 1694157857:
			iVar0 = 1152;
			break;
		
		case -1696611500:
			iVar0 = 1153;
			break;
		
		case 1988941728:
			iVar0 = 1154;
			break;
		
		case -1693251432:
			iVar0 = 1155;
			break;
		
		case -1235260480:
			iVar0 = 1156;
			break;
		
		case -2013104967:
			iVar0 = 1157;
			break;
		
		case -1763320016:
			iVar0 = 1158;
			break;
		
		case 1141954591:
			iVar0 = 1159;
			break;
		
		case 24176579:
			iVar0 = 1160;
			break;
		
		case 501566279:
			iVar0 = 1161;
			break;
		
		case -909438267:
			iVar0 = 1162;
			break;
		
		case -1286663634:
			iVar0 = 1163;
			break;
		
		case -1840235222:
			iVar0 = 1164;
			break;
		
		case -888873465:
			iVar0 = 1165;
			break;
		
		case -1426756926:
			iVar0 = 1166;
			break;
		
		case 2130054214:
			iVar0 = 1167;
			break;
		
		case 836015556:
			iVar0 = 1168;
			break;
		
		case -502214028:
			iVar0 = 1169;
			break;
		
		case -1838365509:
			iVar0 = 1170;
			break;
		
		case -547605203:
			iVar0 = 1171;
			break;
		
		case 1848216712:
			iVar0 = 1172;
			break;
		
		case 223413431:
			iVar0 = 1173;
			break;
		
		case -432155816:
			iVar0 = 1174;
			break;
		
		case -104345338:
			iVar0 = 1175;
			break;
		
		case 1184426490:
			iVar0 = 1176;
			break;
		
		case 47527010:
			iVar0 = 1177;
			break;
		
		case -1576036346:
			iVar0 = 1178;
			break;
		
		case -809444617:
			iVar0 = 1179;
			break;
		
		case -1643354138:
			iVar0 = 1180;
			break;
		
		case -73524046:
			iVar0 = 1181;
			break;
		
		case -1843193891:
			iVar0 = 1182;
			break;
		
		case -1224204417:
			iVar0 = 1183;
			break;
		
		case 921109652:
			iVar0 = 1184;
			break;
		
		case -1009122462:
			iVar0 = 1185;
			break;
		
		case -2143877160:
			iVar0 = 1186;
			break;
		
		case 985961343:
			iVar0 = 1187;
			break;
		
		case 906071982:
			iVar0 = 1188;
			break;
		
		case 566663142:
			iVar0 = 1189;
			break;
		
		case 764251611:
			iVar0 = 1190;
			break;
		
		case -1575240476:
			iVar0 = 1191;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_154(int iParam0, var uParam1)//Position - 0x1F3B8
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
		
		case -441419962:
			iVar0 = 470;
			break;
		
		case -841238543:
			iVar0 = 471;
			break;
		
		case 1644315794:
			iVar0 = 472;
			break;
		
		case 1964334039:
			iVar0 = 473;
			break;
		
		case -1168614925:
			iVar0 = 474;
			break;
		
		case -56760095:
			iVar0 = 475;
			break;
		
		case -1006202521:
			iVar0 = 476;
			break;
		
		case -1834049539:
			iVar0 = 477;
			break;
		
		case -2060372580:
			iVar0 = 478;
			break;
		
		case 1057304170:
			iVar0 = 479;
			break;
		
		case 1421572640:
			iVar0 = 480;
			break;
		
		case 481259621:
			iVar0 = 481;
			break;
		
		case 1227497670:
			iVar0 = 482;
			break;
		
		case 319276780:
			iVar0 = 483;
			break;
		
		case 2070827921:
			iVar0 = 484;
			break;
		
		case 1433629991:
			iVar0 = 485;
			break;
		
		case -1712994650:
			iVar0 = 486;
			break;
		
		case 2125094286:
			iVar0 = 487;
			break;
		
		case 712298404:
			iVar0 = 488;
			break;
		
		case 1998072324:
			iVar0 = 489;
			break;
		
		case 1249206960:
			iVar0 = 490;
			break;
		
		case -621355603:
			iVar0 = 491;
			break;
		
		case 1570835960:
			iVar0 = 492;
			break;
		
		case -1254202543:
			iVar0 = 493;
			break;
		
		case -956136061:
			iVar0 = 494;
			break;
		
		case -1925480683:
			iVar0 = 495;
			break;
		
		case 220143168:
			iVar0 = 496;
			break;
		
		case -1021851577:
			iVar0 = 497;
			break;
		
		case -773345516:
			iVar0 = 498;
			break;
		
		case 1091795205:
			iVar0 = 499;
			break;
	}
	switch (iParam0)
	{
		case -1159824040:
			iVar0 = 500;
			break;
		
		case 1448723789:
			iVar0 = 501;
			break;
		
		case -488127340:
			iVar0 = 502;
			break;
		
		case -1964967283:
			iVar0 = 503;
			break;
		
		case -1635180127:
			iVar0 = 504;
			break;
		
		case -10501563:
			iVar0 = 505;
			break;
		
		case 933419071:
			iVar0 = 506;
			break;
		
		case 1362374839:
			iVar0 = 507;
			break;
		
		case 488078687:
			iVar0 = 508;
			break;
		
		case -1869054624:
			iVar0 = 509;
			break;
		
		case -1817642831:
			iVar0 = 510;
			break;
		
		case 482472119:
			iVar0 = 511;
			break;
		
		case -1736839817:
			iVar0 = 512;
			break;
		
		case 415527077:
			iVar0 = 513;
			break;
		
		case -907440189:
			iVar0 = 514;
			break;
		
		case -2099454789:
			iVar0 = 515;
			break;
		
		case -1719543542:
			iVar0 = 516;
			break;
		
		case 1848661824:
			iVar0 = 517;
			break;
		
		case -2018029706:
			iVar0 = 518;
			break;
		
		case -717212544:
			iVar0 = 519;
			break;
		
		case -594210450:
			iVar0 = 520;
			break;
		
		case 1520437442:
			iVar0 = 521;
			break;
		
		case 374349467:
			iVar0 = 522;
			break;
		
		case 1533123503:
			iVar0 = 523;
			break;
		
		case -1832780872:
			iVar0 = 524;
			break;
		
		case 130721536:
			iVar0 = 525;
			break;
		
		case 195356001:
			iVar0 = 526;
			break;
		
		case -556915722:
			iVar0 = 527;
			break;
		
		case -1930562696:
			iVar0 = 528;
			break;
		
		case 941227127:
			iVar0 = 529;
			break;
		
		case -842699589:
			iVar0 = 530;
			break;
		
		case 1654019571:
			iVar0 = 531;
			break;
		
		case 224191803:
			iVar0 = 532;
			break;
		
		case -1996796255:
			iVar0 = 533;
			break;
		
		case -1850715440:
			iVar0 = 534;
			break;
		
		case 1603163718:
			iVar0 = 535;
			break;
		
		case 1567227108:
			iVar0 = 536;
			break;
		
		case -1630649997:
			iVar0 = 537;
			break;
		
		case -25727072:
			iVar0 = 538;
			break;
		
		case -1363418653:
			iVar0 = 539;
			break;
		
		case 1878229535:
			iVar0 = 540;
			break;
		
		case 1531050226:
			iVar0 = 541;
			break;
		
		case 1246243345:
			iVar0 = 542;
			break;
		
		case 463561930:
			iVar0 = 543;
			break;
		
		case 1431846777:
			iVar0 = 544;
			break;
		
		case -460168116:
			iVar0 = 545;
			break;
		
		case -2015343582:
			iVar0 = 546;
			break;
		
		case 2051301469:
			iVar0 = 547;
			break;
		
		case 1887452986:
			iVar0 = 548;
			break;
		
		case -1551331969:
			iVar0 = 549;
			break;
		
		case 682382693:
			iVar0 = 550;
			break;
		
		case 765481743:
			iVar0 = 551;
			break;
		
		case 1094179010:
			iVar0 = 552;
			break;
		
		case 1906582382:
			iVar0 = 553;
			break;
		
		case 1923135102:
			iVar0 = 554;
			break;
		
		case -964908188:
			iVar0 = 555;
			break;
		
		case -1145896773:
			iVar0 = 556;
			break;
		
		case -776248682:
			iVar0 = 557;
			break;
		
		case 872613482:
			iVar0 = 558;
			break;
		
		case 1049060638:
			iVar0 = 559;
			break;
		
		case -927135334:
			iVar0 = 560;
			break;
		
		case -445820043:
			iVar0 = 561;
			break;
		
		case 1610045630:
			iVar0 = 562;
			break;
		
		case -1070800165:
			iVar0 = 563;
			break;
		
		case -589592162:
			iVar0 = 564;
			break;
		
		case 1723966869:
			iVar0 = 565;
			break;
		
		case 402539085:
			iVar0 = 566;
			break;
		
		case 873283678:
			iVar0 = 567;
			break;
		
		case -883161109:
			iVar0 = 568;
			break;
		
		case -1764919154:
			iVar0 = 569;
			break;
		
		case -2050352513:
			iVar0 = 570;
			break;
		
		case 1114188021:
			iVar0 = 571;
			break;
		
		case 1798282399:
			iVar0 = 572;
			break;
		
		case 1944820428:
			iVar0 = 573;
			break;
		
		case 100210893:
			iVar0 = 574;
			break;
		
		case -1699022511:
			iVar0 = 575;
			break;
		
		case 466917406:
			iVar0 = 576;
			break;
		
		case -349746245:
			iVar0 = 577;
			break;
		
		case 715904570:
			iVar0 = 578;
			break;
		
		case 281777035:
			iVar0 = 579;
			break;
		
		case 1511283406:
			iVar0 = 580;
			break;
		
		case -241337647:
			iVar0 = 581;
			break;
		
		case 748393780:
			iVar0 = 582;
			break;
		
		case 709511536:
			iVar0 = 583;
			break;
		
		case -652535466:
			iVar0 = 584;
			break;
		
		case -1148900842:
			iVar0 = 585;
			break;
		
		case -271863310:
			iVar0 = 586;
			break;
		
		case 35654857:
			iVar0 = 587;
			break;
		
		case 1894813304:
			iVar0 = 588;
			break;
		
		case 1184660438:
			iVar0 = 589;
			break;
		
		case -1461750963:
			iVar0 = 590;
			break;
		
		case 769964545:
			iVar0 = 591;
			break;
		
		case 1424500982:
			iVar0 = 592;
			break;
		
		case -1810785185:
			iVar0 = 593;
			break;
		
		case 837990279:
			iVar0 = 594;
			break;
		
		case -1357788003:
			iVar0 = 595;
			break;
		
		case -8210327:
			iVar0 = 596;
			break;
		
		case 1186553524:
			iVar0 = 597;
			break;
		
		case 1174934203:
			iVar0 = 598;
			break;
		
		case -984449089:
			iVar0 = 599;
			break;
	}
	switch (iParam0)
	{
		case -49570837:
			iVar0 = 600;
			break;
		
		case -1680371785:
			iVar0 = 601;
			break;
		
		case -1850912390:
			iVar0 = 602;
			break;
		
		case -1740038087:
			iVar0 = 603;
			break;
		
		case -619541947:
			iVar0 = 604;
			break;
		
		case 294240494:
			iVar0 = 605;
			break;
		
		case -765542196:
			iVar0 = 606;
			break;
		
		case -1420662645:
			iVar0 = 607;
			break;
		
		case 331918356:
			iVar0 = 608;
			break;
		
		case 204953755:
			iVar0 = 609;
			break;
		
		case 1764172461:
			iVar0 = 610;
			break;
		
		case 1462870109:
			iVar0 = 611;
			break;
		
		case -2071014467:
			iVar0 = 612;
			break;
		
		case 478439238:
			iVar0 = 613;
			break;
		
		case 796489219:
			iVar0 = 614;
			break;
		
		case 843279688:
			iVar0 = 615;
			break;
		
		case 1752551314:
			iVar0 = 616;
			break;
		
		case 735155845:
			iVar0 = 617;
			break;
		
		case 1863251462:
			iVar0 = 618;
			break;
		
		case -2142058763:
			iVar0 = 619;
			break;
		
		case -207591105:
			iVar0 = 620;
			break;
		
		case -932813887:
			iVar0 = 621;
			break;
		
		case -313503199:
			iVar0 = 622;
			break;
		
		case 718936417:
			iVar0 = 623;
			break;
		
		case -1107649605:
			iVar0 = 624;
			break;
		
		case 39090475:
			iVar0 = 625;
			break;
		
		case 1628251208:
			iVar0 = 626;
			break;
		
		case -311245907:
			iVar0 = 627;
			break;
		
		case -942031335:
			iVar0 = 628;
			break;
		
		case -1285040537:
			iVar0 = 629;
			break;
		
		case -606706891:
			iVar0 = 630;
			break;
		
		case -1719095858:
			iVar0 = 631;
			break;
		
		case 1725502681:
			iVar0 = 632;
			break;
		
		case 609583888:
			iVar0 = 633;
			break;
		
		case -1172383155:
			iVar0 = 634;
			break;
		
		case -3492404:
			iVar0 = 635;
			break;
		
		case -1006004645:
			iVar0 = 636;
			break;
		
		case -1937311482:
			iVar0 = 637;
			break;
		
		case -2065604094:
			iVar0 = 638;
			break;
		
		case 2028818254:
			iVar0 = 639;
			break;
		
		case 1624012067:
			iVar0 = 640;
			break;
		
		case -1877817141:
			iVar0 = 641;
			break;
		
		case -911576192:
			iVar0 = 642;
			break;
		
		case -2038013276:
			iVar0 = 643;
			break;
		
		case -901986542:
			iVar0 = 644;
			break;
		
		case 1792492176:
			iVar0 = 645;
			break;
		
		case -86485329:
			iVar0 = 646;
			break;
		
		case -1083434268:
			iVar0 = 647;
			break;
		
		case 613606704:
			iVar0 = 648;
			break;
		
		case -394853815:
			iVar0 = 649;
			break;
		
		case -1103127620:
			iVar0 = 650;
			break;
		
		case -1565650506:
			iVar0 = 651;
			break;
		
		case 1845793118:
			iVar0 = 652;
			break;
		
		case 105835401:
			iVar0 = 653;
			break;
		
		case 874268443:
			iVar0 = 654;
			break;
		
		case 2088424900:
			iVar0 = 655;
			break;
		
		case -786732051:
			iVar0 = 656;
			break;
		
		case 2054090970:
			iVar0 = 657;
			break;
		
		case 1878368697:
			iVar0 = 658;
			break;
		
		case 569662133:
			iVar0 = 659;
			break;
		
		case -792802958:
			iVar0 = 660;
			break;
		
		case 2006001399:
			iVar0 = 661;
			break;
		
		case 1785762805:
			iVar0 = 662;
			break;
		
		case 737220320:
			iVar0 = 663;
			break;
		
		case 1396060544:
			iVar0 = 664;
			break;
		
		case -1964728736:
			iVar0 = 665;
			break;
		
		case 1593302778:
			iVar0 = 666;
			break;
		
		case 84849272:
			iVar0 = 667;
			break;
		
		case -402776165:
			iVar0 = 668;
			break;
		
		case -221660734:
			iVar0 = 669;
			break;
		
		case 1648112645:
			iVar0 = 670;
			break;
		
		case 2066668749:
			iVar0 = 671;
			break;
		
		case -4424163:
			iVar0 = 672;
			break;
		
		case -173288591:
			iVar0 = 673;
			break;
		
		case 253771760:
			iVar0 = 674;
			break;
		
		case -1431574022:
			iVar0 = 675;
			break;
		
		case 959314664:
			iVar0 = 676;
			break;
		
		case 1670479428:
			iVar0 = 677;
			break;
		
		case 1779534675:
			iVar0 = 678;
			break;
		
		case -1268204471:
			iVar0 = 679;
			break;
		
		case -1937668252:
			iVar0 = 680;
			break;
		
		case -192802570:
			iVar0 = 681;
			break;
		
		case 1200380295:
			iVar0 = 682;
			break;
		
		case -644503216:
			iVar0 = 683;
			break;
		
		case 496410473:
			iVar0 = 684;
			break;
		
		case 462780886:
			iVar0 = 685;
			break;
		
		case 211198653:
			iVar0 = 686;
			break;
		
		case -504012739:
			iVar0 = 687;
			break;
		
		case 34276608:
			iVar0 = 688;
			break;
		
		case -2088223199:
			iVar0 = 689;
			break;
		
		case 2056773549:
			iVar0 = 690;
			break;
		
		case 962023066:
			iVar0 = 691;
			break;
		
		case 893288510:
			iVar0 = 692;
			break;
		
		case 1963590204:
			iVar0 = 693;
			break;
		
		case 919272855:
			iVar0 = 694;
			break;
		
		case 413754974:
			iVar0 = 695;
			break;
		
		case -1862916472:
			iVar0 = 696;
			break;
		
		case -1184732039:
			iVar0 = 697;
			break;
		
		case -143503455:
			iVar0 = 698;
			break;
		
		case -1119221482:
			iVar0 = 699;
			break;
	}
	switch (iParam0)
	{
		case -1642199958:
			iVar0 = 700;
			break;
		
		case 133895676:
			iVar0 = 701;
			break;
		
		case -2040228203:
			iVar0 = 702;
			break;
		
		case -783643150:
			iVar0 = 703;
			break;
		
		case 291473683:
			iVar0 = 704;
			break;
		
		case -545474062:
			iVar0 = 705;
			break;
		
		case 1013405919:
			iVar0 = 706;
			break;
		
		case 673922718:
			iVar0 = 707;
			break;
		
		case -1707377523:
			iVar0 = 708;
			break;
		
		case 1029334921:
			iVar0 = 709;
			break;
		
		case -534855486:
			iVar0 = 710;
			break;
		
		case -516333262:
			iVar0 = 711;
			break;
		
		case 485135095:
			iVar0 = 712;
			break;
		
		case 1713551997:
			iVar0 = 713;
			break;
		
		case -1490658501:
			iVar0 = 714;
			break;
		
		case -1735635238:
			iVar0 = 715;
			break;
		
		case 1931303956:
			iVar0 = 716;
			break;
		
		case -1931617488:
			iVar0 = 717;
			break;
		
		case -1726332301:
			iVar0 = 718;
			break;
		
		case -1382922530:
			iVar0 = 719;
			break;
		
		case 452778672:
			iVar0 = 720;
			break;
		
		case -1776790350:
			iVar0 = 721;
			break;
		
		case -1988057295:
			iVar0 = 722;
			break;
		
		case 816707921:
			iVar0 = 723;
			break;
		
		case 744446190:
			iVar0 = 724;
			break;
		
		case 917772807:
			iVar0 = 725;
			break;
		
		case -292922355:
			iVar0 = 726;
			break;
		
		case -1495432685:
			iVar0 = 727;
			break;
		
		case -811147717:
			iVar0 = 728;
			break;
		
		case -851111149:
			iVar0 = 729;
			break;
		
		case 1404205290:
			iVar0 = 730;
			break;
		
		case -1365916084:
			iVar0 = 731;
			break;
		
		case -422913369:
			iVar0 = 732;
			break;
		
		case -892793487:
			iVar0 = 733;
			break;
		
		case -1795208156:
			iVar0 = 734;
			break;
		
		case 573261452:
			iVar0 = 735;
			break;
		
		case 2111374302:
			iVar0 = 736;
			break;
		
		case 1832021545:
			iVar0 = 737;
			break;
		
		case 209273925:
			iVar0 = 738;
			break;
		
		case -54254731:
			iVar0 = 739;
			break;
		
		case 112211142:
			iVar0 = 740;
			break;
		
		case 1306824915:
			iVar0 = 741;
			break;
		
		case -1841627189:
			iVar0 = 742;
			break;
		
		case -1814153457:
			iVar0 = 743;
			break;
		
		case -46260381:
			iVar0 = 744;
			break;
		
		case -303409019:
			iVar0 = 745;
			break;
		
		case -1521133289:
			iVar0 = 746;
			break;
		
		case -648193607:
			iVar0 = 747;
			break;
		
		case 820296726:
			iVar0 = 748;
			break;
		
		case 2025651359:
			iVar0 = 749;
			break;
		
		case 1082588124:
			iVar0 = 750;
			break;
		
		case -457752320:
			iVar0 = 751;
			break;
		
		case 1173525590:
			iVar0 = 752;
			break;
		
		case -2123485438:
			iVar0 = 753;
			break;
		
		case -815706791:
			iVar0 = 754;
			break;
		
		case -1318802347:
			iVar0 = 755;
			break;
		
		case 306110040:
			iVar0 = 756;
			break;
		
		case 1828101251:
			iVar0 = 757;
			break;
		
		case -919314748:
			iVar0 = 758;
			break;
		
		case 1971111649:
			iVar0 = 759;
			break;
		
		case -1477471726:
			iVar0 = 760;
			break;
		
		case -650926235:
			iVar0 = 761;
			break;
		
		case -618318124:
			iVar0 = 762;
			break;
		
		case -1820938681:
			iVar0 = 763;
			break;
		
		case -1532633409:
			iVar0 = 764;
			break;
		
		case 1605199232:
			iVar0 = 765;
			break;
		
		case 113768799:
			iVar0 = 766;
			break;
		
		case -267657422:
			iVar0 = 767;
			break;
		
		case -543540488:
			iVar0 = 768;
			break;
		
		case 146774245:
			iVar0 = 769;
			break;
		
		case -439062355:
			iVar0 = 770;
			break;
		
		case -187785912:
			iVar0 = 771;
			break;
		
		case 654127400:
			iVar0 = 772;
			break;
		
		case -2031558195:
			iVar0 = 773;
			break;
		
		case -1071879097:
			iVar0 = 774;
			break;
		
		case 2048147896:
			iVar0 = 775;
			break;
		
		case -1545551839:
			iVar0 = 776;
			break;
		
		case -1811149087:
			iVar0 = 777;
			break;
		
		case -256036523:
			iVar0 = 778;
			break;
		
		case -247186222:
			iVar0 = 779;
			break;
		
		case -355946577:
			iVar0 = 780;
			break;
		
		case 181399885:
			iVar0 = 781;
			break;
		
		case -1219430710:
			iVar0 = 782;
			break;
		
		case 928781515:
			iVar0 = 783;
			break;
		
		case -1757440846:
			iVar0 = 784;
			break;
		
		case -887356639:
			iVar0 = 785;
			break;
		
		case -162415909:
			iVar0 = 786;
			break;
		
		case -1822176783:
			iVar0 = 787;
			break;
		
		case -131581709:
			iVar0 = 788;
			break;
		
		case -969415240:
			iVar0 = 789;
			break;
		
		case 1482211094:
			iVar0 = 790;
			break;
		
		case 1942093304:
			iVar0 = 791;
			break;
		
		case 1376322385:
			iVar0 = 792;
			break;
		
		case 1678423640:
			iVar0 = 793;
			break;
		
		case 1321477520:
			iVar0 = 794;
			break;
		
		case -670835215:
			iVar0 = 795;
			break;
		
		case -32315658:
			iVar0 = 796;
			break;
		
		case -715501640:
			iVar0 = 797;
			break;
		
		case 812138662:
			iVar0 = 798;
			break;
		
		case -1950509905:
			iVar0 = 799;
			break;
	}
	switch (iParam0)
	{
		case 1850969667:
			iVar0 = 800;
			break;
		
		case 997671095:
			iVar0 = 801;
			break;
		
		case -1526467268:
			iVar0 = 802;
			break;
		
		case -881852779:
			iVar0 = 803;
			break;
		
		case -570992218:
			iVar0 = 804;
			break;
		
		case -1075500139:
			iVar0 = 805;
			break;
		
		case -791689054:
			iVar0 = 806;
			break;
		
		case 699980662:
			iVar0 = 807;
			break;
		
		case -583230088:
			iVar0 = 808;
			break;
		
		case 1922201848:
			iVar0 = 809;
			break;
		
		case -767702908:
			iVar0 = 810;
			break;
		
		case 1979813112:
			iVar0 = 811;
			break;
		
		case -2056272592:
			iVar0 = 812;
			break;
		
		case 909368414:
			iVar0 = 813;
			break;
		
		case -940321245:
			iVar0 = 814;
			break;
		
		case -2018521849:
			iVar0 = 815;
			break;
		
		case 1113883376:
			iVar0 = 816;
			break;
		
		case 296940654:
			iVar0 = 817;
			break;
		
		case 388715677:
			iVar0 = 818;
			break;
		
		case 2121965551:
			iVar0 = 819;
			break;
		
		case -1233846590:
			iVar0 = 820;
			break;
		
		case -1448569917:
			iVar0 = 821;
			break;
		
		case 257911811:
			iVar0 = 822;
			break;
		
		case 1945550351:
			iVar0 = 823;
			break;
		
		case 1745422723:
			iVar0 = 824;
			break;
		
		case 1031130678:
			iVar0 = 825;
			break;
		
		case -416717212:
			iVar0 = 826;
			break;
		
		case -1228169566:
			iVar0 = 827;
			break;
		
		case 1472355612:
			iVar0 = 828;
			break;
		
		case 19369937:
			iVar0 = 829;
			break;
		
		case 662247816:
			iVar0 = 830;
			break;
		
		case -1572191963:
			iVar0 = 831;
			break;
		
		case -791841628:
			iVar0 = 832;
			break;
		
		case -1531355431:
			iVar0 = 833;
			break;
		
		case 2040691909:
			iVar0 = 834;
			break;
		
		case -2114317157:
			iVar0 = 835;
			break;
		
		case -2085191627:
			iVar0 = 836;
			break;
		
		case 946610385:
			iVar0 = 837;
			break;
		
		case 1384666834:
			iVar0 = 838;
			break;
		
		case -1850499077:
			iVar0 = 839;
			break;
		
		case 1599340952:
			iVar0 = 840;
			break;
		
		case -911004337:
			iVar0 = 841;
			break;
		
		case 1896039464:
			iVar0 = 842;
			break;
		
		case 1588676114:
			iVar0 = 843;
			break;
		
		case -861144593:
			iVar0 = 844;
			break;
		
		case -29907878:
			iVar0 = 845;
			break;
		
		case 1886796781:
			iVar0 = 846;
			break;
		
		case -862474356:
			iVar0 = 847;
			break;
		
		case 1495413374:
			iVar0 = 848;
			break;
		
		case 370906922:
			iVar0 = 849;
			break;
		
		case 531742637:
			iVar0 = 850;
			break;
		
		case -225805790:
			iVar0 = 851;
			break;
		
		case -624586952:
			iVar0 = 852;
			break;
		
		case 915144902:
			iVar0 = 853;
			break;
		
		case -242746043:
			iVar0 = 854;
			break;
		
		case 1620048835:
			iVar0 = 855;
			break;
		
		case -1097603268:
			iVar0 = 856;
			break;
		
		case -660672539:
			iVar0 = 857;
			break;
		
		case -4642188:
			iVar0 = 858;
			break;
		
		case 1855977539:
			iVar0 = 859;
			break;
		
		case 1537270222:
			iVar0 = 860;
			break;
		
		case -1226569770:
			iVar0 = 861;
			break;
		
		case 1641457991:
			iVar0 = 862;
			break;
		
		case 1366312361:
			iVar0 = 863;
			break;
		
		case -1557113221:
			iVar0 = 864;
			break;
		
		case -1690570414:
			iVar0 = 865;
			break;
		
		case -507204255:
			iVar0 = 866;
			break;
		
		case -1804897639:
			iVar0 = 867;
			break;
		
		case -1375233423:
			iVar0 = 868;
			break;
		
		case 490066935:
			iVar0 = 869;
			break;
		
		case 1193725595:
			iVar0 = 870;
			break;
		
		case 628493116:
			iVar0 = 871;
			break;
		
		case -2112155518:
			iVar0 = 872;
			break;
		
		case 1511337702:
			iVar0 = 873;
			break;
		
		case -627666528:
			iVar0 = 874;
			break;
		
		case 768324163:
			iVar0 = 875;
			break;
		
		case -1448761813:
			iVar0 = 876;
			break;
		
		case 868551738:
			iVar0 = 877;
			break;
		
		case -1021262861:
			iVar0 = 878;
			break;
		
		case -264447931:
			iVar0 = 879;
			break;
		
		case -652127435:
			iVar0 = 880;
			break;
		
		case -610014599:
			iVar0 = 881;
			break;
		
		case 848073973:
			iVar0 = 882;
			break;
		
		case 1561087717:
			iVar0 = 883;
			break;
		
		case 2067249852:
			iVar0 = 884;
			break;
		
		case 1963924398:
			iVar0 = 885;
			break;
		
		case -898550276:
			iVar0 = 886;
			break;
		
		case -1074178691:
			iVar0 = 887;
			break;
		
		case -368616744:
			iVar0 = 888;
			break;
		
		case -78566501:
			iVar0 = 889;
			break;
		
		case 1623651387:
			iVar0 = 890;
			break;
		
		case -1229980240:
			iVar0 = 891;
			break;
		
		case -1558321426:
			iVar0 = 892;
			break;
		
		case 518190097:
			iVar0 = 893;
			break;
		
		case -1996043294:
			iVar0 = 894;
			break;
		
		case 1720844546:
			iVar0 = 895;
			break;
		
		case -20709979:
			iVar0 = 896;
			break;
		
		case -1617383579:
			iVar0 = 897;
			break;
		
		case -525135065:
			iVar0 = 898;
			break;
		
		case 1796039054:
			iVar0 = 899;
			break;
	}
	switch (iParam0)
	{
		case 1250030109:
			iVar0 = 900;
			break;
		
		case -1195876295:
			iVar0 = 901;
			break;
		
		case 672890092:
			iVar0 = 902;
			break;
		
		case 413298313:
			iVar0 = 903;
			break;
		
		case 1157302328:
			iVar0 = 904;
			break;
		
		case -1564457471:
			iVar0 = 905;
			break;
		
		case 1152621988:
			iVar0 = 906;
			break;
		
		case -1961291349:
			iVar0 = 907;
			break;
		
		case -1912591074:
			iVar0 = 908;
			break;
		
		case 1049766626:
			iVar0 = 909;
			break;
		
		case 450544862:
			iVar0 = 910;
			break;
		
		case -1015392647:
			iVar0 = 911;
			break;
		
		case 1742471685:
			iVar0 = 912;
			break;
		
		case 408116861:
			iVar0 = 913;
			break;
		
		case -1855327598:
			iVar0 = 914;
			break;
		
		case 1578402908:
			iVar0 = 915;
			break;
		
		case -1423366674:
			iVar0 = 916;
			break;
		
		case 1611107047:
			iVar0 = 917;
			break;
		
		case 742927305:
			iVar0 = 918;
			break;
		
		case -1578833665:
			iVar0 = 919;
			break;
		
		case 773738667:
			iVar0 = 920;
			break;
		
		case 213007702:
			iVar0 = 921;
			break;
		
		case 432208089:
			iVar0 = 922;
			break;
		
		case 35817542:
			iVar0 = 923;
			break;
		
		case -1786080093:
			iVar0 = 924;
			break;
		
		case -215923306:
			iVar0 = 925;
			break;
		
		case 1275581512:
			iVar0 = 926;
			break;
		
		case -1214009019:
			iVar0 = 927;
			break;
		
		case 1639713863:
			iVar0 = 928;
			break;
		
		case 529311368:
			iVar0 = 929;
			break;
		
		case -1033895864:
			iVar0 = 930;
			break;
		
		case 924043677:
			iVar0 = 931;
			break;
		
		case -574749266:
			iVar0 = 932;
			break;
		
		case 519463901:
			iVar0 = 933;
			break;
		
		case -643353187:
			iVar0 = 934;
			break;
		
		case 1571011017:
			iVar0 = 935;
			break;
		
		case -94540936:
			iVar0 = 936;
			break;
		
		case 1884218662:
			iVar0 = 937;
			break;
		
		case -345261869:
			iVar0 = 938;
			break;
		
		case -1022859058:
			iVar0 = 939;
			break;
		
		case -1786322924:
			iVar0 = 940;
			break;
		
		case 2085269022:
			iVar0 = 941;
			break;
		
		case 1511882653:
			iVar0 = 942;
			break;
		
		case -506986385:
			iVar0 = 943;
			break;
		
		case -874081588:
			iVar0 = 944;
			break;
		
		case -2043405937:
			iVar0 = 945;
			break;
		
		case 59038842:
			iVar0 = 946;
			break;
		
		case 1101237057:
			iVar0 = 947;
			break;
		
		case -657535677:
			iVar0 = 948;
			break;
		
		case -2093585025:
			iVar0 = 949;
			break;
		
		case 908383468:
			iVar0 = 950;
			break;
		
		case -1608760399:
			iVar0 = 951;
			break;
		
		case 1373660540:
			iVar0 = 952;
			break;
		
		case 1854316713:
			iVar0 = 953;
			break;
		
		case -119951196:
			iVar0 = 954;
			break;
		
		case -1649842228:
			iVar0 = 955;
			break;
		
		case -1640764925:
			iVar0 = 956;
			break;
		
		case 1787927716:
			iVar0 = 957;
			break;
		
		case 104283481:
			iVar0 = 958;
			break;
		
		case 378263500:
			iVar0 = 959;
			break;
		
		case -1061215309:
			iVar0 = 960;
			break;
		
		case 1034166199:
			iVar0 = 961;
			break;
		
		case 1828057305:
			iVar0 = 962;
			break;
		
		case -1486297381:
			iVar0 = 963;
			break;
		
		case -540767159:
			iVar0 = 964;
			break;
		
		case -1235960692:
			iVar0 = 965;
			break;
		
		case -329316995:
			iVar0 = 966;
			break;
		
		case -581880272:
			iVar0 = 967;
			break;
		
		case -1807345434:
			iVar0 = 968;
			break;
		
		case -1018409435:
			iVar0 = 969;
			break;
		
		case -136011898:
			iVar0 = 970;
			break;
		
		case -2069494727:
			iVar0 = 971;
			break;
		
		case -642887005:
			iVar0 = 972;
			break;
		
		case -1810837638:
			iVar0 = 973;
			break;
		
		case 1034484576:
			iVar0 = 974;
			break;
		
		case 1979445594:
			iVar0 = 975;
			break;
		
		case -1533877336:
			iVar0 = 976;
			break;
		
		case -892254987:
			iVar0 = 977;
			break;
		
		case -654222260:
			iVar0 = 978;
			break;
		
		case -152607027:
			iVar0 = 979;
			break;
		
		case 1211414106:
			iVar0 = 980;
			break;
		
		case -1178363901:
			iVar0 = 981;
			break;
		
		case -170830010:
			iVar0 = 982;
			break;
		
		case 1571032538:
			iVar0 = 983;
			break;
		
		case -975101512:
			iVar0 = 984;
			break;
		
		case 1710494656:
			iVar0 = 985;
			break;
		
		case 1298803936:
			iVar0 = 986;
			break;
		
		case 669174749:
			iVar0 = 987;
			break;
		
		case 1344478544:
			iVar0 = 988;
			break;
		
		case -737204659:
			iVar0 = 989;
			break;
		
		case 1519364050:
			iVar0 = 990;
			break;
		
		case -1470963239:
			iVar0 = 991;
			break;
		
		case 1768755677:
			iVar0 = 992;
			break;
		
		case -428330966:
			iVar0 = 993;
			break;
		
		case -532155133:
			iVar0 = 994;
			break;
		
		case 717197242:
			iVar0 = 995;
			break;
		
		case -1103242747:
			iVar0 = 996;
			break;
		
		case 95120204:
			iVar0 = 997;
			break;
		
		case 1478647927:
			iVar0 = 998;
			break;
		
		case -1996321684:
			iVar0 = 999;
			break;
	}
	switch (iParam0)
	{
		case -1232815296:
			iVar0 = 1000;
			break;
		
		case -942600475:
			iVar0 = 1001;
			break;
		
		case -157448893:
			iVar0 = 1002;
			break;
		
		case 1273306186:
			iVar0 = 1003;
			break;
		
		case -393833589:
			iVar0 = 1004;
			break;
		
		case 1108909619:
			iVar0 = 1005;
			break;
		
		case -1547493052:
			iVar0 = 1006;
			break;
		
		case -558224274:
			iVar0 = 1007;
			break;
		
		case 2039104212:
			iVar0 = 1008;
			break;
		
		case 269443194:
			iVar0 = 1009;
			break;
		
		case -1335458450:
			iVar0 = 1010;
			break;
		
		case -538608496:
			iVar0 = 1011;
			break;
		
		case 760412020:
			iVar0 = 1012;
			break;
		
		case -1423594652:
			iVar0 = 1013;
			break;
		
		case -749306822:
			iVar0 = 1014;
			break;
		
		case -1357502125:
			iVar0 = 1015;
			break;
		
		case -1697184517:
			iVar0 = 1016;
			break;
		
		case 2069079025:
			iVar0 = 1017;
			break;
		
		case 165790469:
			iVar0 = 1018;
			break;
		
		case -1996334680:
			iVar0 = 1019;
			break;
		
		case -1718451770:
			iVar0 = 1020;
			break;
		
		case -1351890796:
			iVar0 = 1021;
			break;
		
		case -708316325:
			iVar0 = 1022;
			break;
		
		case 343427644:
			iVar0 = 1023;
			break;
		
		case 997385641:
			iVar0 = 1024;
			break;
		
		case 829594522:
			iVar0 = 1025;
			break;
		
		case -755577025:
			iVar0 = 1026;
			break;
		
		case 1130349640:
			iVar0 = 1027;
			break;
		
		case 235241707:
			iVar0 = 1028;
			break;
		
		case 177991867:
			iVar0 = 1029;
			break;
		
		case 632622256:
			iVar0 = 1030;
			break;
		
		case 1897109337:
			iVar0 = 1031;
			break;
		
		case -1277167165:
			iVar0 = 1032;
			break;
		
		case -2040688458:
			iVar0 = 1033;
			break;
		
		case 2053577657:
			iVar0 = 1034;
			break;
		
		case 1475157023:
			iVar0 = 1035;
			break;
		
		case -599666460:
			iVar0 = 1036;
			break;
		
		case 2137077332:
			iVar0 = 1037;
			break;
		
		case -563836962:
			iVar0 = 1038;
			break;
		
		case 1757650301:
			iVar0 = 1039;
			break;
		
		case -1926213636:
			iVar0 = 1040;
			break;
		
		case 636926663:
			iVar0 = 1041;
			break;
		
		case 1864088729:
			iVar0 = 1042;
			break;
		
		case 373164468:
			iVar0 = 1043;
			break;
		
		case -1181875417:
			iVar0 = 1044;
			break;
		
		case 2125316672:
			iVar0 = 1045;
			break;
		
		case 1505585597:
			iVar0 = 1046;
			break;
		
		case -1563329786:
			iVar0 = 1047;
			break;
		
		case -546372951:
			iVar0 = 1048;
			break;
		
		case -276745962:
			iVar0 = 1049;
			break;
		
		case 98665018:
			iVar0 = 1050;
			break;
		
		case 1968556432:
			iVar0 = 1051;
			break;
		
		case -1559144195:
			iVar0 = 1052;
			break;
		
		case -1332960577:
			iVar0 = 1053;
			break;
		
		case 652305392:
			iVar0 = 1054;
			break;
		
		case 1894755292:
			iVar0 = 1055;
			break;
		
		case 1126903931:
			iVar0 = 1056;
			break;
		
		case -914706967:
			iVar0 = 1057;
			break;
		
		case -214853054:
			iVar0 = 1058;
			break;
		
		case -346130454:
			iVar0 = 1059;
			break;
		
		case 1352224647:
			iVar0 = 1060;
			break;
		
		case -1388894295:
			iVar0 = 1061;
			break;
		
		case 1928040960:
			iVar0 = 1062;
			break;
		
		case -721653798:
			iVar0 = 1063;
			break;
		
		case 1424803201:
			iVar0 = 1064;
			break;
		
		case 2024824081:
			iVar0 = 1065;
			break;
		
		case -822973907:
			iVar0 = 1066;
			break;
		
		case 1857392409:
			iVar0 = 1067;
			break;
		
		case -978468741:
			iVar0 = 1068;
			break;
		
		case -811517193:
			iVar0 = 1069;
			break;
		
		case -725236090:
			iVar0 = 1070;
			break;
		
		case -485989621:
			iVar0 = 1071;
			break;
		
		case 711356870:
			iVar0 = 1072;
			break;
		
		case 111487556:
			iVar0 = 1073;
			break;
		
		case 588276502:
			iVar0 = 1074;
			break;
		
		case -3335024:
			iVar0 = 1075;
			break;
		
		case 1184770609:
			iVar0 = 1076;
			break;
		
		case 359647189:
			iVar0 = 1077;
			break;
		
		case 1545327916:
			iVar0 = 1078;
			break;
		
		case 954502846:
			iVar0 = 1079;
			break;
		
		case -893208491:
			iVar0 = 1080;
			break;
		
		case -1661674318:
			iVar0 = 1081;
			break;
		
		case -1624645348:
			iVar0 = 1082;
			break;
		
		case 620358850:
			iVar0 = 1083;
			break;
		
		case 122204512:
			iVar0 = 1084;
			break;
		
		case -645147161:
			iVar0 = 1085;
			break;
		
		case -375556598:
			iVar0 = 1086;
			break;
		
		case 1841102407:
			iVar0 = 1087;
			break;
		
		case 831620593:
			iVar0 = 1088;
			break;
		
		case 1129884031:
			iVar0 = 1089;
			break;
		
		case 2092301321:
			iVar0 = 1090;
			break;
		
		case 580667351:
			iVar0 = 1091;
			break;
		
		case 1538832911:
			iVar0 = 1092;
			break;
		
		case -1355259635:
			iVar0 = 1093;
			break;
		
		case -1583168030:
			iVar0 = 1094;
			break;
		
		case -1831032746:
			iVar0 = 1095;
			break;
		
		case -2060448515:
			iVar0 = 1096;
			break;
		
		case -50365286:
			iVar0 = 1097;
			break;
		
		case -364095692:
			iVar0 = 1098;
			break;
		
		case -606979520:
			iVar0 = 1099;
			break;
	}
	switch (iParam0)
	{
		case -1057062007:
			iVar0 = 1100;
			break;
		
		case -1253872621:
			iVar0 = 1101;
			break;
		
		case -1525625938:
			iVar0 = 1102;
			break;
		
		case 603801989:
			iVar0 = 1103;
			break;
		
		case 432289043:
			iVar0 = 1104;
			break;
		
		case 176592536:
			iVar0 = 1105;
			break;
		
		case -126291331:
			iVar0 = 1106;
			break;
		
		case 2093415191:
			iVar0 = 1107;
			break;
		
		case 1383966341:
			iVar0 = 1108;
			break;
		
		case 1061027846:
			iVar0 = 1109;
			break;
		
		case 610754913:
			iVar0 = 1110;
			break;
		
		case 1856271834:
			iVar0 = 1111;
			break;
		
		case 151235226:
			iVar0 = 1112;
			break;
		
		case 1292317344:
			iVar0 = 1113;
			break;
		
		case 1592055387:
			iVar0 = 1114;
			break;
		
		case 1048452439:
			iVar0 = 1115;
			break;
		
		case 211084:
			iVar0 = 1116;
			break;
		
		case -1009472289:
			iVar0 = 1117;
			break;
		
		case 156013410:
			iVar0 = 1118;
			break;
		
		case 2061696383:
			iVar0 = 1119;
			break;
		
		case -1462570018:
			iVar0 = 1120;
			break;
		
		case -1873628095:
			iVar0 = 1121;
			break;
		
		case -770265298:
			iVar0 = 1122;
			break;
		
		case 820753849:
			iVar0 = 1123;
			break;
		
		case -914435716:
			iVar0 = 1124;
			break;
		
		case -1170154756:
			iVar0 = 1125;
			break;
		
		case -880824798:
			iVar0 = 1126;
			break;
		
		case -249693258:
			iVar0 = 1127;
			break;
		
		case 1489278440:
			iVar0 = 1128;
			break;
		
		case -1512326404:
			iVar0 = 1129;
			break;
		
		case -1378330859:
			iVar0 = 1130;
			break;
		
		case 1459074393:
			iVar0 = 1131;
			break;
		
		case 1273491948:
			iVar0 = 1132;
			break;
		
		case -1406186689:
			iVar0 = 1133;
			break;
		
		case 2124190452:
			iVar0 = 1134;
			break;
		
		case -1740822263:
			iVar0 = 1135;
			break;
		
		case -969884576:
			iVar0 = 1136;
			break;
		
		case 335386038:
			iVar0 = 1137;
			break;
		
		case -1150178569:
			iVar0 = 1138;
			break;
		
		case 1521235675:
			iVar0 = 1139;
			break;
		
		case 1623611883:
			iVar0 = 1140;
			break;
		
		case 1329111213:
			iVar0 = 1141;
			break;
		
		case -1537321295:
			iVar0 = 1142;
			break;
		
		case -1628166034:
			iVar0 = 1143;
			break;
		
		case -132693345:
			iVar0 = 1144;
			break;
		
		case 874964805:
			iVar0 = 1145;
			break;
		
		case -1512427408:
			iVar0 = 1146;
			break;
		
		case 923836315:
			iVar0 = 1147;
			break;
		
		case -1580952699:
			iVar0 = 1148;
			break;
		
		case 1152609891:
			iVar0 = 1149;
			break;
		
		case -1637725121:
			iVar0 = 1150;
			break;
		
		case 1760547084:
			iVar0 = 1151;
			break;
		
		case -2138723176:
			iVar0 = 1152;
			break;
		
		case 1730799330:
			iVar0 = 1153;
			break;
		
		case -280222071:
			iVar0 = 1154;
			break;
		
		case 2067499855:
			iVar0 = 1155;
			break;
		
		case -1635988673:
			iVar0 = 1156;
			break;
		
		case -1849502305:
			iVar0 = 1157;
			break;
		
		case -1413356029:
			iVar0 = 1158;
			break;
		
		case -2062177771:
			iVar0 = 1159;
			break;
		
		case 2077453849:
			iVar0 = 1160;
			break;
		
		case -965460704:
			iVar0 = 1161;
			break;
		
		case -1917254263:
			iVar0 = 1162;
			break;
		
		case 1777785544:
			iVar0 = 1163;
			break;
		
		case 1505693935:
			iVar0 = 1164;
			break;
		
		case -1551981580:
			iVar0 = 1165;
			break;
		
		case 1572497951:
			iVar0 = 1166;
			break;
		
		case 585832887:
			iVar0 = 1167;
			break;
		
		case -498335731:
			iVar0 = 1168;
			break;
		
		case -137061435:
			iVar0 = 1169;
			break;
		
		case 1921321590:
			iVar0 = 1170;
			break;
		
		case -822177429:
			iVar0 = 1171;
			break;
		
		case -531271155:
			iVar0 = 1172;
			break;
		
		case 412829693:
			iVar0 = 1173;
			break;
		
		case -1411787934:
			iVar0 = 1174;
			break;
		
		case 653645139:
			iVar0 = 1175;
			break;
		
		case 1848048195:
			iVar0 = 1176;
			break;
		
		case -781400442:
			iVar0 = 1177;
			break;
		
		case 1507919906:
			iVar0 = 1178;
			break;
		
		case -1381102054:
			iVar0 = 1179;
			break;
		
		case 565394453:
			iVar0 = 1180;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = (129 + iVar0);
		return 1;
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x235C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (17 - 1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!func_158(iVar2) || iParam0)
		{
			if (!func_156(PLAYER::PLAYER_ID(), iVar2))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_156(int iParam0, int iParam1)//Position - 0x23612
{
	int iVar0;
	
	if (iParam0 != func_157())
	{
		iVar0 = iParam1;
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_395, iVar0);
	}
	return 0;
}

int func_157()//Position - 0x23640
{
	return -1;
}

int func_158(int iParam0)//Position - 0x23649
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 16:
			return 1;
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2)//Position - 0x23672
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 98:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24726;
				
				case 3:
					return Global_262145.f_24727;
				
				case 4:
					return Global_262145.f_24728;
				
				case 5:
					return Global_262145.f_24729;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24726;
				
				case 3:
					return Global_262145.f_24727;
				
				case 4:
					return Global_262145.f_24728;
				
				case 5:
					return Global_262145.f_24729;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24726;
				
				case 3:
					return Global_262145.f_24727;
				
				case 4:
					return Global_262145.f_24728;
				
				case 5:
					return Global_262145.f_24729;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_24726;
				
				case 3:
					return Global_262145.f_24727;
				
				case 4:
					return Global_262145.f_24728;
				
				case 5:
					return Global_262145.f_24729;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27819;
				
				case 3:
					return Global_262145.f_27820;
				
				case 4:
					return Global_262145.f_27821;
				
				case 5:
					return Global_262145.f_27822;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27986;
				
				case 3:
					return Global_262145.f_27987;
				
				case 4:
					return Global_262145.f_27988;
				
				case 5:
					return Global_262145.f_27989;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28020;
				
				case 3:
					return Global_262145.f_28021;
				
				case 4:
					return Global_262145.f_28022;
				
				case 5:
					return Global_262145.f_28023;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28024;
				
				case 3:
					return Global_262145.f_28025;
				
				case 4:
					return Global_262145.f_28026;
				
				case 5:
					return Global_262145.f_28027;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27715;
				
				case 3:
					return Global_262145.f_27716;
				
				case 4:
					return Global_262145.f_27717;
				
				case 5:
					return Global_262145.f_27718;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_27990;
				
				case 3:
					return Global_262145.f_27991;
				
				case 4:
					return Global_262145.f_27992;
				
				case 5:
					return Global_262145.f_27993;
				
				default:
			}
			break;
	}
	return 999;
}

int func_160(int iParam0, int iParam1)//Position - 0x25AB4
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_161(int iParam0, int iParam1, bool bParam2)//Position - 0x25AE0
{
	if (iParam0 == -1)
	{
		if (bParam2)
		{
			iParam0 = func_152(iParam1, 3);
		}
		else
		{
			iParam0 = func_152(iParam1, 4);
		}
	}
	return (func_147(iParam0, -1) || func_162(iParam0, -1));
}

int func_162(int iParam0, int iParam1)//Position - 0x25B1C
{
	return func_164(func_163(iParam0), iParam1, -1);
}

int func_163(int iParam0)//Position - 0x25B31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 480)
	{
		iVar1 = iParam0;
		iVar0 = (3112 + iVar1);
	}
	else if (iParam0 < 864)
	{
		iVar1 = (iParam0 - 480);
		iVar0 = (6029 + iVar1);
	}
	else if (iParam0 < 1248)
	{
		iVar1 = (iParam0 - 864);
		iVar0 = (15562 + iVar1);
	}
	else if (iParam0 < 1372)
	{
		iVar1 = (iParam0 - 1248);
		iVar0 = (28355 + iVar1);
	}
	else
	{
		iVar2 = iParam0;
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1, int iParam2)//Position - 0x25BA7
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar1 = func_166(iParam0, iParam1);
	uVar2 = func_165(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_165(int iParam0)//Position - 0x25BE4
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

int func_166(int iParam0, int iParam1)//Position - 0x25F80
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
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

int func_167(int iParam0, int iParam1)//Position - 0x262F9
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2578198[iParam0 /*3*/][func_80(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_168(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x26325
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam4 == 0)
	{
		iVar1 = func_170(iVar0, sParam1, iParam4);
		iParam4 = MISC::GET_HASH_KEY(func_169(iVar1));
	}
	if (iParam3 == 449512698)
	{
		return 0;
	}
	switch (iParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
			{
				return 0;
			}
			if ((((iParam4 == -793495770 || (iParam4 == -1409061796 && iVar0 == joaat("mp_f_freemode_01"))) || iParam4 == -2066166276) || iParam4 == 849089063) || iParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(13, -1))
							{
								return 0;
							}
							else if (func_178(14, -1))
							{
								return 0;
							}
							else if (func_178(15, -1))
							{
								return 0;
							}
							else if (func_178(16, -1))
							{
								return 0;
							}
							else if (func_178(71, -1))
							{
								return 0;
							}
							else if (func_178(72, -1))
							{
							}
						}
					}
					else if (Global_4268092 == 13)
					{
						return 0;
					}
					else if (Global_4268092 == 14)
					{
						return 0;
					}
					else if (Global_4268092 == 15)
					{
						return 0;
					}
					else if (Global_4268092 == 16)
					{
						return 0;
					}
					else if (Global_4268092 == 71)
					{
						return 0;
					}
					else if (Global_4268092 == 72)
					{
					}
				}
			}
			else if (iParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(13, -1))
							{
								return 0;
							}
							else if (func_178(14, -1))
							{
								return 0;
							}
							else if (func_178(15, -1))
							{
								return 0;
							}
							else if (func_178(16, -1))
							{
								return 0;
							}
							else if (func_178(71, -1))
							{
								return 0;
							}
							else if (func_178(72, -1))
							{
							}
						}
					}
					else if (Global_4268092 == 13)
					{
						return 0;
					}
					else if (Global_4268092 == 14)
					{
						return 0;
					}
					else if (Global_4268092 == 15)
					{
						return 0;
					}
					else if (Global_4268092 == 16)
					{
						return 0;
					}
					else if (Global_4268092 == 71)
					{
						return 0;
					}
					else if (Global_4268092 == 72)
					{
					}
				}
			}
			else if ((iParam4 == 129912816 || iParam4 == 1361645381) || iParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(13, -1))
							{
							}
							else if (func_178(14, -1))
							{
								return 0;
							}
							else if (func_178(15, -1))
							{
								return 0;
							}
							else if (func_178(16, -1))
							{
							}
							else if (func_178(71, -1))
							{
								return 0;
							}
							else if (func_178(72, -1))
							{
							}
						}
					}
					else if (Global_4268092 == 13)
					{
					}
					else if (Global_4268092 == 14)
					{
						return 0;
					}
					else if (Global_4268092 == 15)
					{
						return 0;
					}
					else if (Global_4268092 == 16)
					{
					}
					else if (Global_4268092 == 71)
					{
						return 0;
					}
					else if (Global_4268092 == 72)
					{
					}
				}
			}
			else if (iParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(13, -1))
							{
							}
							else if (func_178(14, -1))
							{
							}
							else if (func_178(15, -1))
							{
							}
							else if (func_178(16, -1))
							{
							}
							else if (func_178(71, -1))
							{
							}
							else if (func_178(72, -1))
							{
							}
						}
					}
					else if (Global_4268092 == 13)
					{
					}
					else if (Global_4268092 == 14)
					{
					}
					else if (Global_4268092 == 15)
					{
					}
					else if (Global_4268092 == 16)
					{
					}
					else if (Global_4268092 == 71)
					{
					}
					else if (Global_4268092 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
			{
				return 0;
			}
			if (!bParam6)
			{
				if (Global_4268092 == -1)
				{
					if (!Global_98721.f_1513)
					{
						if (func_178(13, -1))
						{
						}
						else if (func_178(14, -1))
						{
						}
						else if (func_178(15, -1))
						{
							return 0;
						}
						else if (func_178(16, -1))
						{
						}
						else if (func_178(71, -1))
						{
						}
						else if (func_178(72, -1))
						{
							return 0;
						}
					}
				}
				else if (Global_4268092 == 13)
				{
				}
				else if (Global_4268092 == 14)
				{
				}
				else if (Global_4268092 == 15)
				{
					return 0;
				}
				else if (Global_4268092 == 16)
				{
				}
				else if (Global_4268092 == 71)
				{
				}
				else if (Global_4268092 == 72)
				{
					return 0;
				}
			}
			break;
		
		case 1019352240:
			if (bParam8)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(15, -1))
							{
								return 0;
							}
						}
					}
					else if (Global_4268092 == 15)
					{
						return 0;
					}
				}
			}
			if (bParam6)
			{
				return 0;
			}
			if (bParam5)
			{
				if (Global_4268092 == -1)
				{
					if (!Global_98721.f_1513)
					{
						if (func_178(13, -1))
						{
							return 0;
						}
						else if (func_178(14, -1))
						{
							return 0;
						}
						else if (func_178(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
							{
								return 0;
							}
						}
						else if (func_178(16, -1))
						{
						}
						else if (func_178(71, -1))
						{
						}
						else if (func_178(72, -1))
						{
						}
					}
				}
				else if (Global_4268092 == 13)
				{
					return 0;
				}
				else if (Global_4268092 == 14)
				{
					return 0;
				}
				else if (Global_4268092 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, "TAT_FMM_CLB"))
					{
						return 0;
					}
				}
				else if (Global_4268092 == 16)
				{
				}
				else if (Global_4268092 == 71)
				{
				}
				else if (Global_4268092 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return 0;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4268092 == -1)
					{
						if (!Global_98721.f_1513)
						{
							if (func_178(13, -1))
							{
							}
							else if (func_178(14, -1))
							{
							}
							else if (func_178(15, -1))
							{
							}
							else if (func_178(16, -1))
							{
							}
							else if (func_178(71, -1))
							{
							}
							else if (func_178(72, -1))
							{
							}
						}
					}
					else if (Global_4268092 == 13)
					{
						return 0;
					}
					else if (Global_4268092 == 14)
					{
					}
					else if (Global_4268092 == 15)
					{
						return 0;
					}
					else if (Global_4268092 == 16)
					{
					}
					else if (Global_4268092 == 71)
					{
					}
					else if (Global_4268092 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (bParam7)
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_169(int iParam0)//Position - 0x26B4D
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
			break;
		
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
			break;
		
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
			break;
		
		case 3:
			return "ARM_LEFT_LOWER_INNER";
			break;
		
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
			break;
		
		case 5:
			return "ARM_LEFT_WRIST";
			break;
		
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
			break;
		
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
			break;
		
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
			break;
		
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
			break;
		
		case 10:
			return "ARM_LEFT_SHOULDER";
			break;
		
		case 11:
			return "ARM_LEFT_ELBOW";
			break;
		
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
			break;
		
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
			break;
		
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
			break;
		
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
			break;
		
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
			break;
		
		case 17:
			return "ARM_RIGHT_WRIST";
			break;
		
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
			break;
		
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
			break;
		
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
			break;
		
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
			break;
		
		case 22:
			return "ARM_RIGHT_SHOULDER";
			break;
		
		case 23:
			return "ARM_RIGHT_ELBOW";
			break;
		
		case 24:
			return "HAND_LEFT";
			break;
		
		case 25:
			return "HAND_RIGHT";
			break;
		
		case 26:
			return "BACK_FULL";
			break;
		
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
			break;
		
		case 28:
			return "BACK_FULL_SHORT";
			break;
		
		case 29:
			return "BACK_MID";
			break;
		
		case 30:
			return "BACK_UPPER";
			break;
		
		case 31:
			return "BACK_UPPER_LEFT";
			break;
		
		case 32:
			return "BACK_UPPER_RIGHT";
			break;
		
		case 33:
			return "BACK_LOWER";
			break;
		
		case 34:
			return "BACK_LOWER_LEFT";
			break;
		
		case 35:
			return "BACK_LOWER_MID";
			break;
		
		case 36:
			return "BACK_LOWER_RIGHT";
			break;
		
		case 37:
			return "CHEST_FULL";
			break;
		
		case 38:
			return "CHEST_STOM";
			break;
		
		case 39:
			return "CHEST_STOM_FULL";
			break;
		
		case 40:
			return "CHEST_LEFT";
			break;
		
		case 41:
			return "CHEST_UPPER_LEFT";
			break;
		
		case 42:
			return "CHEST_RIGHT";
			break;
		
		case 43:
			return "CHEST_UPPER_RIGHT";
			break;
		
		case 44:
			return "CHEST_MID";
			break;
		
		case 45:
			return "TORSO_SIDE_RIGHT";
			break;
		
		case 46:
			return "TORSO_SIDE_LEFT";
			break;
		
		case 47:
			return "STOMACH_FULL";
			break;
		
		case 48:
			return "STOMACH_UPPER";
			break;
		
		case 49:
			return "STOMACH_UPPER_LEFT";
			break;
		
		case 50:
			return "STOMACH_UPPER_RIGHT";
			break;
		
		case 51:
			return "STOMACH_LOWER";
			break;
		
		case 52:
			return "STOMACH_LOWER_LEFT";
			break;
		
		case 53:
			return "STOMACH_LOWER_RIGHT";
			break;
		
		case 54:
			return "STOMACH_LEFT";
			break;
		
		case 55:
			return "STOMACH_RIGHT";
			break;
		
		case 56:
			return "FACE";
			break;
		
		case 57:
			return "HEAD_LEFT";
			break;
		
		case 58:
			return "HEAD_RIGHT";
			break;
		
		case 59:
			return "NECK_FRONT";
			break;
		
		case 60:
			return "NECK_BACK";
			break;
		
		case 61:
			return "NECK_LEFT_FULL";
			break;
		
		case 62:
			return "NECK_LEFT_BACK";
			break;
		
		case 63:
			return "NECK_RIGHT_FULL";
			break;
		
		case 64:
			return "NECK_RIGHT_BACK";
			break;
		
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
			break;
		
		case 66:
			return "LEG_LEFT_FULL_FRONT";
			break;
		
		case 67:
			return "LEG_LEFT_FULL_BACK";
			break;
		
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
			break;
		
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
			break;
		
		case 70:
			return "LEG_LEFT_UPPER_BACK";
			break;
		
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
			break;
		
		case 72:
			return "LEG_LEFT_UPPER_INNER";
			break;
		
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
			break;
		
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
			break;
		
		case 75:
			return "LEG_LEFT_LOWER_BACK";
			break;
		
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
			break;
		
		case 77:
			return "LEG_LEFT_LOWER_INNER";
			break;
		
		case 78:
			return "LEG_LEFT_KNEE";
			break;
		
		case 79:
			return "LEG_LEFT_ANKLE";
			break;
		
		case 80:
			return "LEG_LEFT_CALF";
			break;
		
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
			break;
		
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
			break;
		
		case 83:
			return "LEG_RIGHT_FULL_BACK";
			break;
		
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
			break;
		
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
			break;
		
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
			break;
		
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
			break;
		
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
			break;
		
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
			break;
		
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
			break;
		
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
			break;
		
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
			break;
		
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
			break;
		
		case 94:
			return "LEG_RIGHT_KNEE";
			break;
		
		case 95:
			return "LEG_RIGHT_ANKLE";
			break;
		
		case 96:
			return "LEG_RIGHT_CALF";
			break;
		
		case 97:
			return "FOOT_LEFT";
			break;
		
		case 98:
			return "FOOT_RIGHT";
			break;
	}
	return "";
}

int func_170(int iParam0, char* sParam1, int iParam2)//Position - 0x2718F
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
			break;
	}
	switch (iParam2)
	{
		case -1775023605:
			return 0;
			break;
		
		case 917950949:
			return 1;
			break;
		
		case -1684314297:
			return 2;
			break;
		
		case -1546663824:
			return 3;
			break;
		
		case -2119253768:
			return 4;
			break;
		
		case 1639951086:
			return 5;
			break;
		
		case 1372660034:
			return 6;
			break;
		
		case -1524227787:
			return 7;
			break;
		
		case -311742370:
			return 8;
			break;
		
		case -2057190659:
			return 9;
			break;
		
		case -686545645:
			return 10;
			break;
		
		case -80377674:
			return 11;
			break;
		
		case -1055976551:
			return 12;
			break;
		
		case 1963750528:
			return 13;
			break;
		
		case 796226384:
			return 14;
			break;
		
		case 123428314:
			return 15;
			break;
		
		case 1944550961:
			return 16;
			break;
		
		case 2136911405:
			return 17;
			break;
		
		case -1309595991:
			return 18;
			break;
		
		case 1470319061:
			return 19;
			break;
		
		case -1716562576:
			return 20;
			break;
		
		case -1940582056:
			return 21;
			break;
		
		case 1089807219:
			return 22;
			break;
		
		case -1073830579:
			return 23;
			break;
		
		case 1071134407:
			return 24;
			break;
		
		case 1455567330:
			return 25;
			break;
		
		case 711089605:
			return 26;
			break;
		
		case 1206993109:
			return 27;
			break;
		
		case 32564956:
			return 28;
			break;
		
		case 314326195:
			return 29;
			break;
		
		case 1928884106:
			return 30;
			break;
		
		case 1565386395:
			return 31;
			break;
		
		case 2107621060:
			return 32;
			break;
		
		case 1618133209:
			return 33;
			break;
		
		case -951899470:
			return 34;
			break;
		
		case 2048696626:
			return 35;
			break;
		
		case 74017048:
			return 36;
			break;
		
		case -793495770:
			return 37;
			break;
		
		case 849089063:
			return 38;
			break;
		
		case 1192230427:
			return 39;
			break;
		
		case -763917073:
			return 40;
			break;
		
		case 337552605:
			return 41;
			break;
		
		case -2066166276:
			return 42;
			break;
		
		case 100935796:
			return 43;
			break;
		
		case -1409061796:
			return 44;
			break;
		
		case 1548327796:
			return 45;
			break;
		
		case -1459967458:
			return 46;
			break;
		
		case 129912816:
			return 47;
			break;
		
		case 1387715942:
			return 48;
			break;
		
		case -1871804242:
			return 49;
			break;
		
		case 1603728616:
			return 50;
			break;
		
		case -742053244:
			return 51;
			break;
		
		case 1586504577:
			return 52;
			break;
		
		case 1753976524:
			return 53;
			break;
		
		case -1469750959:
			return 54;
			break;
		
		case -388268096:
			return 55;
			break;
		
		case -1538681432:
			return 56;
			break;
		
		case -737856380:
			return 57;
			break;
		
		case 1261643197:
			return 58;
			break;
		
		case 436139458:
			return 59;
			break;
		
		case 1012782925:
			return 60;
			break;
		
		case -277214012:
			return 61;
			break;
		
		case -484264198:
			return 62;
			break;
		
		case 1708200656:
			return 63;
			break;
		
		case 758827473:
			return 64;
			break;
		
		case 1039283199:
			return 65;
			break;
		
		case 325801797:
			return 66;
			break;
		
		case -1946435033:
			return 67;
			break;
		
		case -1917346117:
			return 68;
			break;
		
		case -382139768:
			return 69;
			break;
		
		case 1725561361:
			return 70;
			break;
		
		case -266913369:
			return 71;
			break;
		
		case 511433871:
			return 72;
			break;
		
		case -1399656601:
			return 73;
			break;
		
		case -1560441083:
			return 74;
			break;
		
		case 1034503747:
			return 75;
			break;
		
		case -1170681301:
			return 76;
			break;
		
		case 660577126:
			return 77;
			break;
		
		case -818089340:
			return 78;
			break;
		
		case 1052642087:
			return 79;
			break;
		
		case 134497037:
			return 80;
			break;
		
		case -624267373:
			return 81;
			break;
		
		case -1178847967:
			return 82;
			break;
		
		case -197292861:
			return 83;
			break;
		
		case 730193962:
			return 84;
			break;
		
		case 1469472731:
			return 85;
			break;
		
		case -1918884694:
			return 86;
			break;
		
		case -1670727628:
			return 87;
			break;
		
		case -1389296468:
			return 88;
			break;
		
		case -405262373:
			return 89;
			break;
		
		case -1619609833:
			return 90;
			break;
		
		case 2060550302:
			return 91;
			break;
		
		case -1202647020:
			return 92;
			break;
		
		case 12584588:
			return 93;
			break;
		
		case -1559605744:
			return 94;
			break;
		
		case -88374898:
			return 95;
			break;
		
		case -292219126:
			return 96;
			break;
		
		case -634232984:
			return 97;
			break;
		
		case -1259754598:
			return 98;
			break;
	}
	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return -1;
			break;
		
		case 1099734529:
			return 12;
			break;
		
		case 1875475066:
			return 12;
			break;
		
		case -2027116220:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 75;
			}
			else
			{
				return 65;
			}
			break;
		
		case 973279522:
			return 26;
			break;
		
		case -344656041:
			return 47;
			break;
		
		case 437243648:
			return 1;
			break;
		
		case -1636967950:
			return 75;
			break;
		
		case -1759426263:
			return 1;
			break;
		
		case 1702259548:
			return 89;
			break;
		
		case 1471205329:
			return 73;
			break;
		
		case -33154131:
			return 22;
			break;
		
		case -1364624791:
			return 91;
			break;
		
		case 2048169112:
			return 26;
			break;
		
		case -2132107540:
			return 73;
			break;
		
		case -2097372400:
			return 38;
			break;
		
		case -106785870:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case 1116120433:
			return 31;
			break;
		
		case 118598456:
			return 42;
			break;
		
		case 1480281490:
			return 47;
			break;
		
		case -652292269:
			return 75;
			break;
		
		case -1179283327:
			return 20;
			break;
		
		case 860620540:
			return 32;
			break;
		
		case -880004050:
			return 14;
			break;
		
		case -1386676768:
			return 52;
			break;
		
		case 2104696341:
			return 30;
			break;
		
		case -1952728474:
			return 6;
			break;
		
		case 1464947154:
			return 80;
			break;
		
		case -1134718043:
			return 13;
			break;
		
		case -440373586:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 67;
			}
			else
			{
				return 75;
			}
			break;
		
		case -1282504117:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 40;
			}
			else
			{
				return 42;
			}
			break;
		
		case -1035884623:
			return 73;
			break;
		
		case -1877294236:
			return 47;
			break;
		
		case 1289632992:
			return 73;
			break;
		
		case 1152623695:
			return 10;
			break;
		
		case 1705208746:
			return 26;
			break;
		
		case 1774176944:
			return 42;
			break;
		
		case -2016202731:
			return 89;
			break;
		
		case 474241973:
			return 16;
			break;
		
		case 1549424756:
			return 91;
			break;
		
		case 1915520024:
			return 82;
			break;
		
		case -654914345:
			return 13;
			break;
		
		case -1745115353:
			return 75;
			break;
		
		case 1466027815:
			return 26;
			break;
		
		case -161772432:
			return 10;
			break;
		
		case 74131599:
			return 90;
			break;
		
		case 363383562:
			return 89;
			break;
		
		case 736950162:
			return 38;
			break;
		
		case 1291882802:
			return 20;
			break;
		
		case -281772534:
			return 26;
			break;
		
		case -837798134:
			return 18;
			break;
		
		case 62456:
			return 56;
			break;
		
		case -800320369:
			return 3;
			break;
		
		case 1363941829:
			return 47;
			break;
		
		case 1586377801:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1514257748:
			return 89;
			break;
		
		case -1023836894:
			return 6;
			break;
		
		case -1974105125:
			return 33;
			break;
		
		case -558386018:
			return 16;
			break;
		
		case -328314869:
			return 40;
			break;
		
		case -1903783095:
			return 40;
			break;
		
		case -1674924399:
			return 40;
			break;
		
		case -252323802:
			return 33;
			break;
		
		case 11466648:
			return 6;
			break;
		
		case 927130819:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -978943608:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 452144164:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case 691194019:
			if (iParam0 == joaat("mp_m_freemode_01"))
			{
				return 28;
			}
			else
			{
				return 26;
			}
			break;
		
		case -1516865571:
			return 44;
			break;
		
		case 2130586285:
			return 32;
			break;
		
		case 386521802:
			return 3;
			break;
		
		case 579924440:
			return 33;
			break;
		
		case 741770527:
			return 31;
			break;
		
		case 1173403795:
			return 33;
			break;
		
		case -569087776:
			return 45;
			break;
		
		case -1344959389:
			return 89;
			break;
		
		case -211217527:
			return 64;
			break;
		
		case 86488838:
			return 53;
			break;
		
		case 705494964:
			return 52;
			break;
		
		case -137684175:
			return 30;
			break;
		
		case -979388709:
			return 41;
			break;
		
		case 324653646:
			return 43;
			break;
		
		case -518820414:
			return 52;
			break;
		
		case -1361737401:
			return 20;
			break;
		
		case 2010946386:
			return 8;
			break;
		
		case -894811920:
			return 10;
			break;
		
		case 165068612:
			return 28;
			break;
		
		case 1549427782:
			return 40;
			break;
		
		case -927613913:
			return 42;
			break;
		
		case 385144996:
			return 56;
			break;
		
		case -814626401:
			return 57;
			break;
		
		case -1248225809:
			return 52;
			break;
		
		case 1910378101:
			return 8;
			break;
		
		case -2124501642:
			return 91;
			break;
		
		case -1943747838:
			return 20;
			break;
		
		case -1570115700:
			return 75;
			break;
		
		case 931699147:
			return 62;
			break;
		
		case 1019520067:
			return 63;
			break;
		
		case -859358814:
			return 20;
			break;
		
		case -1157818866:
			return 58;
			break;
		
		case -247856505:
			return 47;
			break;
		
		case -1628534963:
			return 37;
			break;
		
		case -1051898870:
			return 33;
			break;
		
		case 1334929540:
			return 80;
			break;
		
		case 1097124907:
			return 64;
			break;
		
		case 747545215:
			return 62;
			break;
		
		case 61892743:
			return 96;
			break;
		
		case 501548332:
			return 15;
			break;
		
		case -244169717:
			return 48;
			break;
		
		case 421886905:
			return 37;
			break;
		
		case -1398791504:
			return 33;
			break;
		
		case -106152761:
			return 3;
			break;
		
		case 125491300:
			return 41;
			break;
		
		case -1576950557:
			return 52;
			break;
		
		case -1815115649:
			return 53;
			break;
		
		case -1043396870:
			return 59;
			break;
		
		case -1388618285:
			return 3;
			break;
		
		case -948484638:
			return 48;
			break;
		
		case 643387405:
			return 33;
			break;
		
		case 979630098:
			return 64;
			break;
		
		case 211688583:
			return 62;
			break;
		
		case 1343791995:
			return 60;
			break;
		
		case 576309246:
			return 20;
			break;
		
		case 949154944:
			return 40;
			break;
		
		case -622511834:
			return 42;
			break;
		
		case -275651969:
			return 11;
			break;
		
		case -1256283855:
			return 15;
			break;
		
		case 955525350:
			return 40;
			break;
		
		case 1252641873:
			return 22;
			break;
		
		case -2034766264:
			return 40;
			break;
		
		case 1748021562:
			return 22;
			break;
		
		case -657146050:
			return 30;
			break;
		
		case -955835485:
			return 19;
			break;
		
		case -1269959119:
			return 40;
			break;
		
		case -1478763187:
			return 4;
			break;
		
		case -1881592504:
			return 15;
			break;
		
		case 2115996117:
			return 62;
			break;
		
		case 1824417551:
			return 45;
			break;
		
		case 1502068898:
			return 24;
			break;
		
		case -2019287742:
			return 22;
			break;
		
		case -1780827729:
			return 80;
			break;
		
		case -1966497207:
			return 25;
			break;
		
		case -2126999769:
			return 30;
			break;
		
		case 2014772448:
			return 30;
			break;
		
		case 1705760778:
			return 44;
			break;
		
		case 497993745:
			return 15;
			break;
		
		case 1142887665:
			return 9;
			break;
		
		case 22777707:
			return 3;
			break;
		
		case 799173624:
			return 16;
			break;
		
		case -410297401:
			return 17;
			break;
		
		case 214410819:
			return 75;
			break;
		
		case -2098342992:
			return 23;
			break;
		
		case -1280920283:
			return 64;
			break;
		
		case -1501455653:
			return 16;
			break;
		
		case 2117454408:
			return 25;
			break;
		
		case -1945704982:
			return 32;
			break;
		
		case -1581870771:
			return 31;
			break;
		
		case -1350521631:
			return 10;
			break;
		
		case -954508266:
			return 5;
			break;
		
		case -716244867:
			return 4;
			break;
		
		case 185361399:
			return 52;
			break;
		
		case -1208107213:
			return 35;
			break;
		
		case -812421538:
			return 30;
			break;
		
		case -566096965:
			return 32;
			break;
		
		case -316757644:
			return 38;
			break;
		
		case -103496992:
			return 24;
			break;
		
		case 391708136:
			return 52;
			break;
		
		case 616667309:
			return 20;
			break;
		
		case 870102755:
			return 10;
			break;
		
		case 1093030262:
			return 92;
			break;
		
		case 1378218869:
			return 0;
			break;
		
		case 332555747:
			return 80;
			break;
		
		case 1077526193:
			return 34;
			break;
		
		case 1332632858:
			return 91;
			break;
		
		case 1556379590:
			return 10;
			break;
		
		case 1780093553:
			return 22;
			break;
		
		case 2001284303:
			return 14;
			break;
		
		case -2059941716:
			return 30;
			break;
		
		case -1759875983:
			return 40;
			break;
		
		case -1521153818:
			return 24;
			break;
	}
	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return -1;
	}
	switch (iParam2)
	{
		case -518474626:
			return -1;
			break;
	}
	return -1;
}

bool func_171(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x281C1
{
	int iVar0;
	int iVar1;
	
	func_177(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_176() || func_175())
					{
						iVar1 = 400;
						if (func_145() && (func_174() || func_173()))
						{
							iVar1 = 0;
						}
						func_177(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_177(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_172(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_176() || func_175())
					{
						iVar1 = 450;
						if (func_145() && (func_174() || func_173()))
						{
							iVar1 = 0;
						}
						func_177(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_177(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_172(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_176() || func_175())
					{
						iVar1 = 380;
						if (func_145() && (func_174() || func_173()))
						{
							iVar1 = 0;
						}
						func_177(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_177(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_172(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2907)), 0);
					break;
				
				case 1:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2908)), 2);
					break;
				
				case 2:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2909)), 3);
					break;
				
				case 3:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2910)), 0);
					break;
				
				case 4:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2911)), 0);
					break;
				
				case 54:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2912)), 1);
					break;
				
				case 5:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2913)), 0);
					break;
				
				case 6:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2914)), 2);
					break;
				
				case 55:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2915)), 1);
					break;
				
				case 7:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2916)), 0);
					break;
				
				case 8:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2917)), 7);
					break;
				
				case 9:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2918)), 0);
					break;
				
				case 10:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2919)), 0);
					break;
				
				case 11:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2920)), 0);
					break;
				
				case 56:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2921)), 1);
					break;
				
				case 12:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2922)), 2);
					break;
				
				case 57:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2923)), 1);
					break;
				
				case 58:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2924)), 1);
					break;
				
				case 59:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2925)), 1);
					break;
				
				case 60:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2926)), 1);
					break;
				
				case 17:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2931)), 2);
					break;
				
				case 18:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2932)), 2);
					break;
				
				case 19:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2933)), 2);
					break;
				
				case 20:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2934)), 3);
					break;
				
				case 21:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2935)), 3);
					break;
				
				case 22:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2936)), 3);
					break;
				
				case 23:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937)), 3);
					break;
				
				case 24:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2938)), 3);
					break;
				
				case 25:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2939)), 2);
					break;
				
				case 26:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2940)), 3);
					break;
				
				case 27:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2941)), 3);
					break;
				
				case 28:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2942)), 3);
					break;
				
				case 61:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2943)), 1);
					break;
				
				case 62:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2944)), 1);
					break;
				
				case 63:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2945)), 1);
					break;
				
				case 64:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2946)), 1);
					break;
				
				case 65:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2947)), 1);
					break;
				
				case 29:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2948)), 0);
					break;
				
				case 30:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2949)), 0);
					break;
				
				case 31:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2950)), 0);
					break;
				
				case 66:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2951)), 1);
					break;
				
				case 32:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2952)), 2);
					break;
				
				case 33:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2953)), 3);
					break;
				
				case 34:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2954)), 2);
					break;
				
				case 35:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2955)), 0);
					break;
				
				case 36:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2956)), 0);
					break;
				
				case 37:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2957)), 0);
					break;
				
				case 38:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2958)), 3);
					break;
				
				case 39:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2959)), 2);
					break;
				
				case 40:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2960)), 0);
					break;
				
				case 67:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2961)), 1);
					break;
				
				case 41:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2962)), 2);
					break;
				
				case 68:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2963)), 1);
					break;
				
				case 42:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2964)), 0);
					break;
				
				case 43:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2965)), 2);
					break;
				
				case 44:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2966)), 0);
					break;
				
				case 45:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2967)), 0);
					break;
				
				case 46:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2968)), 0);
					break;
				
				case 47:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2969)), 3);
					break;
				
				case 48:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2970)), 3);
					break;
				
				case 49:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2971)), 3);
					break;
				
				case 50:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2972)), 2);
					break;
				
				case 51:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2973)), 3);
					break;
				
				case 52:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2974)), 3);
					break;
				
				case 53:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2975)), 0);
					break;
				
				case 69:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2976)), 1);
					break;
				
				case 70:
					func_177(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2977)), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_177(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2930)), 0);
						break;
					
					case 71:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
					
					case 72:
						func_177(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2978)), 0);
						break;
					
					case 88:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2979)), 0);
						break;
					
					case 89:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2980)), 0);
						break;
					
					case 93:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_177(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2927)), 0);
						break;
					
					case 14:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2928)), 0);
						break;
					
					case 15:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2929)), 2);
						break;
					
					case 16:
						func_177(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2930)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_172(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

void func_172(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2B20A
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = (iParam2 - iParam3);
	iVar1 = FILES::_GET_NUM_DECORATIONS(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (FILES::_GET_TATTOO_COLLECTION_DATA(iParam1, iVar0, &Var2))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				sParam0->f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				sParam0->f_5 = Var2.f_3;
				sParam0->f_4 = Var2.f_2;
				sParam0->f_8 = Var2.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = Var2.f_4;
				sParam0->f_9 = (iParam2 / 32);
				sParam0->f_10 = (iParam2 % 32);
				sParam0->f_12 = Var2.f_5;
			}
		}
	}
}

int func_173()//Position - 0x2B29C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150395.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_174()//Position - 0x2B3F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (MISC::IS_BIT_SET(Global_25, 6))
	{
		if (MISC::IS_BIT_SET(Global_25, 2) || MISC::IS_BIT_SET(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (MISC::IS_BIT_SET(iVar0, 2) || MISC::IS_BIT_SET(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_150395.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 2) || MISC::IS_BIT_SET(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_175()//Position - 0x2B4C1
{
	return 1;
}

int func_176()//Position - 0x2B4CA
{
	return 1;
}

void func_177(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2B4D3
{
	char cVar0[32];
	
	sParam0->f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = (iParam1 / 32);
	sParam0->f_10 = (iParam1 % 32);
	sParam0->f_12 = iParam9;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_INJURED(iParam2))
	{
		if ((sParam0->f_6 == 0 || sParam0->f_6 == 1) || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((sParam0->f_11 == 13 || sParam0->f_11 == 14) || sParam0->f_11 == 15) || sParam0->f_11 == 16) || sParam0->f_11 == 71) || sParam0->f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((sParam0->f_11 == 0 || sParam0->f_11 == 1) || sParam0->f_11 == 2) || sParam0->f_11 == 4) || sParam0->f_11 == 3) || sParam0->f_11 == 54) || sParam0->f_11 == 5) || sParam0->f_11 == 6) || sParam0->f_11 == 55) || sParam0->f_11 == 7) || sParam0->f_11 == 8) || sParam0->f_11 == 9) || sParam0->f_11 == 10) || sParam0->f_11 == 11) || sParam0->f_11 == 56) || sParam0->f_11 == 12) || sParam0->f_11 == 57) || sParam0->f_11 == 58) || sParam0->f_11 == 59) || sParam0->f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam2) == joaat("mp_m_freemode_01") || sParam0->f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			sParam0->f_5 = MISC::GET_HASH_KEY(&cVar0);
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
			{
				sParam0->f_11 = -1;
			}
		}
	}
}

bool func_178(int iParam0, int iParam1)//Position - 0x2B789
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_179(iParam0, iParam1);
	iVar1 = func_148(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(iVar0, iVar1);
}

int func_179(int iParam0, int iParam1)//Position - 0x2B7CB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_180(iParam0);
	if (iVar0 == 10999)
	{
		if (func_49() == 2 && func_48() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = func_79(iVar0, iParam1, 0);
	return iVar1;
}

int func_180(int iParam0)//Position - 0x2B812
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_151(iVar0);
	if ((func_49() == 0 || func_48() == 0) || (func_49() == 999 && func_48() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1947;
				break;
			
			case 11:
				return 1948;
				break;
			
			case 12:
				return 1949;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8499;
				break;
			
			case 40:
				return 8502;
				break;
			
			case 41:
				return 8505;
				break;
			
			case 42:
				return 8508;
				break;
			
			case 43:
				return 8902;
				break;
			
			case 44:
				return 8905;
				break;
			
			case 45:
				return 8908;
				break;
			
			case 46:
				break;
		}
		return 10999;
	}
	if (func_49() == 2 && func_48() == 2)
	{
		return 10999;
	}
	return 10999;
}

int func_181(int iParam0)//Position - 0x2BB3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = func_79(1757, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_221(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = func_207(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return 1;
						}
						if (iVar2 == 1495413374)
						{
							return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1393156190, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = func_79(1757, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_221(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_207(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return 1;
						}
						if (iVar2 == -1214222467)
						{
							return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1393156190, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1237899132, 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x2BD09
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_99.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (func_183(iVar0) != -1 && func_183(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x2BD85
{
	if (func_184(1))
	{
		return Global_1384444;
	}
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2449755.f_6148[iParam0];
}

bool func_184(bool bParam0)//Position - 0x2BDBC
{
	if (bParam0)
	{
		return (MISC::IS_BIT_SET(Global_4456448.f_184550, 12) && func_185());
	}
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

int func_185()//Position - 0x2BDF8
{
	if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0, bool bParam1)//Position - 0x2BE26
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_190(joaat("mp_m_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				case 5:
					if (!bParam1)
					{
						if (func_178(13, -1))
						{
							return 1;
						}
						else if (func_178(14, -1))
						{
							return 1;
						}
						else if (func_178(15, -1))
						{
							return 1;
						}
						else if (func_178(16, -1))
						{
							return 1;
						}
						else if (func_178(71, -1))
						{
							return 1;
						}
						else if (func_178(72, -1))
						{
						}
						else if (func_187(PLAYER::PLAYER_ID(), 1) && Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_75.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_221(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_207(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 362493804, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 153792394, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_221(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_207(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 362493804, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_190(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_221(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_207(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, 362493804, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, 1843965488, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, -672871169, 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_190(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_190(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_221(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_207(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, -1467682989, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, 362493804, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, 1843965488, 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_187(int iParam0, bool bParam1)//Position - 0x2C660
{
	return func_188(iParam0, bParam1, 1);
}

int func_188(int iParam0, bool bParam1, int iParam2)//Position - 0x2C671
{
	int iVar0;
	
	if (iParam0 == func_157())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_189(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_157() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0, int iParam1)//Position - 0x2C6CD
{
	if (iParam0 != func_157())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_157())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C71C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_207(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 362493804, 0))
					{
						iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_152(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_79(1757, -1, 0);
						}
						return func_152(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_207(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 362493804, 0))
					{
						iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_152(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_79(1757, -1, 0);
						}
						return func_152(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_207(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, 362493804, 0))
					{
						iVar13 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							FILES::GET_FORCED_COMPONENT(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_152(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_79(1757, -1, 0);
						}
						return func_152(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_147(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_147(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_207(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 362493804, 0))
					{
						iVar19 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							FILES::GET_FORCED_COMPONENT(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_152(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_79(1757, -1, 0);
						}
						return func_152(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_191(int iParam0)//Position - 0x2CF40
{
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, 1))
	{
		return 0;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_192(int iParam0, int iParam1)//Position - 0x2CFA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_207(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case -1983429828:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
					case 1732051928:
						return 108;
						break;
					
					case -457639650:
					case -94952354:
					case 144031963:
					case 533262145:
					case -1545668757:
					case -905050483:
						return 109;
						break;
					
					case -1625493211:
					case -1112723899:
					case -1432451032:
					case -647502406:
					case -925481833:
						return 110;
						break;
					
					case -1168328595:
					case -1421993424:
					case -576454917:
					case -438399124:
					case 271967258:
						return 111;
						break;
					
					case -1903246936:
					case 1155542604:
					case 2048071857:
					case -1605475033:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case -1619297862:
					case -1878926649:
					case -485850917:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_152(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 80)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 81)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 82)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 83)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 84)
		{
			return func_152(-1261720761, 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_207(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case -1238992735:
					case -1947261901:
					case -771018642:
					case -1486169302:
					case 1159796376:
					case 256274500:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case -2052614252:
					case -1818610823:
					case -1799420756:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case -1099030254:
					case -307724442:
					case -637872117:
						return 110;
						break;
					
					case -663797501:
					case 2088667427:
					case 1779786837:
					case -1609936838:
					case -1880477702:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case -701723290:
					case -119221546:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case -2033029490:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_152(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_193(int iParam0, int iParam1)//Position - 0x2DDBC
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = func_191(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_217(13, 0, Global_76386);
					func_217(14, 0, Global_76386);
					func_217(15, 0, Global_76386);
					func_217(16, 0, Global_76386);
					func_217(71, 0, Global_76386);
					func_217(72, 0, Global_76386);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_217(73, 0, Global_76386);
						func_217(74, 0, Global_76386);
						func_217(75, 0, Global_76386);
						func_217(76, 0, Global_76386);
						func_217(77, 0, Global_76386);
						func_217(78, 0, Global_76386);
						func_217(79, 0, Global_76386);
						func_217(80, 0, Global_76386);
						func_217(81, 0, Global_76386);
						func_217(82, 0, Global_76386);
						func_217(83, 0, Global_76386);
						func_217(84, 0, Global_76386);
						func_217(85, 0, Global_76386);
						func_217(86, 0, Global_76386);
						func_217(90, 0, Global_76386);
						func_217(91, 0, Global_76386);
						func_217(124, 0, Global_76386);
						func_217(125, 0, Global_76386);
						func_217(87, 0, Global_76386);
						func_217(88, 0, Global_76386);
						func_217(89, 0, Global_76386);
						iVar15 = FILES::_GET_NUM_DECORATIONS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::_GET_TATTOO_COLLECTION_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_217((129 + iVar14), 0, Global_76386);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_217(73, 0, Global_76386);
						func_217(74, 0, Global_76386);
						func_217(75, 0, Global_76386);
						func_217(76, 0, Global_76386);
						func_217(77, 0, Global_76386);
						func_217(78, 0, Global_76386);
						func_217(79, 0, Global_76386);
						func_217(80, 0, Global_76386);
						func_217(81, 0, Global_76386);
						func_217(82, 0, Global_76386);
						func_217(83, 0, Global_76386);
						func_217(84, 0, Global_76386);
						func_217(85, 0, Global_76386);
						func_217(92, 0, Global_76386);
						func_217(87, 0, Global_76386);
						func_217(88, 0, Global_76386);
						func_217(89, 0, Global_76386);
						iVar32 = FILES::_GET_NUM_DECORATIONS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::_GET_TATTOO_COLLECTION_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_217((129 + iVar31), 0, Global_76386);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_217(93, 0, Global_76386);
						func_217(94, 0, Global_76386);
						func_217(95, 0, Global_76386);
						func_217(96, 0, Global_76386);
						func_217(97, 0, Global_76386);
						func_217(98, 0, Global_76386);
						func_217(99, 0, Global_76386);
						func_217(100, 0, Global_76386);
						func_217(101, 0, Global_76386);
						func_217(102, 0, Global_76386);
						func_217(103, 0, Global_76386);
						func_217(104, 0, Global_76386);
						func_217(105, 0, Global_76386);
						func_217(106, 0, Global_76386);
						func_217(107, 0, Global_76386);
						func_217(108, 0, Global_76386);
						func_217(109, 0, Global_76386);
						func_217(110, 0, Global_76386);
						func_217(111, 0, Global_76386);
						func_217(112, 0, Global_76386);
						func_217(113, 0, Global_76386);
						func_217(114, 0, Global_76386);
						func_217(115, 0, Global_76386);
						func_217(116, 0, Global_76386);
						func_217(117, 0, Global_76386);
						func_217(123, 0, Global_76386);
						iVar49 = FILES::_GET_NUM_DECORATIONS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::_GET_TATTOO_COLLECTION_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_217((129 + iVar48), 0, Global_76386);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_217(93, 0, Global_76386);
						func_217(94, 0, Global_76386);
						func_217(95, 0, Global_76386);
						func_217(96, 0, Global_76386);
						func_217(97, 0, Global_76386);
						func_217(98, 0, Global_76386);
						func_217(99, 0, Global_76386);
						func_217(100, 0, Global_76386);
						func_217(101, 0, Global_76386);
						func_217(102, 0, Global_76386);
						func_217(103, 0, Global_76386);
						func_217(104, 0, Global_76386);
						func_217(105, 0, Global_76386);
						func_217(106, 0, Global_76386);
						func_217(107, 0, Global_76386);
						func_217(108, 0, Global_76386);
						func_217(109, 0, Global_76386);
						func_217(110, 0, Global_76386);
						func_217(111, 0, Global_76386);
						func_217(112, 0, Global_76386);
						func_217(113, 0, Global_76386);
						func_217(114, 0, Global_76386);
						func_217(115, 0, Global_76386);
						func_217(116, 0, Global_76386);
						func_217(117, 0, Global_76386);
						func_217(118, 0, Global_76386);
						func_217(119, 0, Global_76386);
						func_217(120, 0, Global_76386);
						func_217(121, 0, Global_76386);
						func_217(122, 0, Global_76386);
						func_217(123, 0, Global_76386);
						iVar66 = FILES::_GET_NUM_DECORATIONS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::_GET_TATTOO_COLLECTION_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_217((129 + iVar65), 0, Global_76386);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (func_171(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_217(Var0.f_11, 0, Global_76386);
					}
				}
				iVar82++;
			}
		}
	}
}

int func_194(int iParam0, int iParam1)//Position - 0x2E3B9
{
	int iVar0;
	
	iVar0 = func_220();
	if (iVar0 != -1)
	{
		if (!func_195(iParam0, iParam1, iVar0))
		{
			func_217(iVar0, 0, Global_76386);
			return 1;
		}
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2)//Position - 0x2E3EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_202(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_207(iParam0, iParam1, 11, 3);
				iVar0 = func_198(iVar1);
			}
			if (iVar1 != -1 && func_109(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && func_196(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -497440475, 0))
			{
				return 0;
			}
			if ((iVar1 == -1198378836 || iVar1 == 968798999) || iVar1 == 1283250323)
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_190(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_207(iParam0, iParam1, 11, 4);
				iVar2 = func_198(iVar3);
			}
			if (iVar3 != -1 && func_109(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && func_196(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, -497440475, 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_190(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_190(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, 1113995558, 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_196(int iParam0, int iParam1)//Position - 0x2E75D
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1769225721, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1834446747, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -939525357, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 38465448, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1469891622, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -502321359, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -792359778, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 997614074, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 748799057, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 653048039, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1922736331, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1685128312, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1892460036, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -296738547, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0x2E8A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_207(iParam0, iParam1, 4, 3);
			iVar1 = func_198(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_207(iParam0, iParam2, 11, 3);
			iVar3 = func_198(iVar2);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1855618474, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1420825402, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2017999390, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1625463492, 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 648481062, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 648481062, 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 648481062, 0))
			{
				return 1;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1855618474, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1420825402, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1627756587, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case -439764935:
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106:
				if (((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == 1844077094) || iVar2 == 1672760762) || iVar2 == 339848918) || iVar2 == -625689667) || iVar2 == -924903406) || iVar2 == -149326714) || iVar2 == -443756179) || iVar2 == -1817498197) || iVar2 == -2110289212) || iVar2 == -1333926064) || iVar2 == -1903638278) || iVar2 == 1018832222) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2088146832, 0))
				{
					return 0;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1021189127, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 2044466679, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -1325813684, 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_207(iParam0, iParam1, 4, 4);
			iVar5 = func_198(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_207(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1855618474, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -299089347, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1420825402, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 320460654, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2017999390, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -530089825, 0))
			{
				if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -530089825, 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -530089825, 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1200513218, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 1965569012, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -779835469, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1086258388, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1488441032, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2088146832, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1446333198, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1351486939, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 821147517, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -55550566, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -826135203, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1855618474, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1855618474, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -299089347, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -299089347, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1420825402, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1420825402, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 320460654, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2017999390, 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -530089825, 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -1223513441, 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -33031567, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2102859770, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -747583185, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -747583185, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -33031567, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1325813684, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 2026620439, 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -2119756144, 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 264959411, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 140732128, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1863955539, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -849839091, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2088146832, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1055526375, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1882920022, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1080576805, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1387458490, 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, 947651647, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, -58412562, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_198(int iParam0)//Position - 0x2FB8E
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_199(int iParam0, int iParam1, int iParam2)//Position - 0x2FCFB
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
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_207(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_89(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_207(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_89(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_200(int iParam0, int iParam1, int iParam2)//Position - 0x2FFF2
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_92(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111560.f_2358.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_111560.f_9080.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_111560.f_9080.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111560.f_2358.f_539[1 /*65*/].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_111560.f_2358.f_539[2 /*65*/].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_201(int iParam0, int iParam1)//Position - 0x3040E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_101413 != -99)
	{
		if (Global_101414 == 11)
		{
			Global_76389[1 /*14*/] = { func_236(ENTITY::GET_ENTITY_MODEL(iParam0), 11, Global_101413, -1) };
			iVar0 = func_203(ENTITY::GET_ENTITY_MODEL(iParam0), Global_101413, iParam1, Global_76389[1 /*14*/].f_4);
			if (iVar0 != -99)
			{
				return iVar0;
			}
		}
		else if (Global_101414 == 8)
		{
			iVar1 = func_199(ENTITY::GET_ENTITY_MODEL(iParam0), Global_101413, Global_101415);
			if (iVar1 != -99)
			{
				Global_76389[1 /*14*/] = { func_236(ENTITY::GET_ENTITY_MODEL(iParam0), 11, iVar1, -1) };
				iVar2 = func_203(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, iParam1, Global_76389[1 /*14*/].f_4);
				if (iVar2 != -99)
				{
					return iVar2;
				}
			}
			else
			{
				return Global_101413;
			}
		}
	}
	return -99;
}

int func_202(int iParam0, int iParam1, int iParam2)//Position - 0x304E0
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = func_207(iParam0, iParam1, 11, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = func_207(iParam0, iParam1, 11, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -1393156190, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30639
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	struct<10> Var48;
	int iVar65;
	int iVar66;
	int iVar67;
	bool bVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	bool bVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_207(iParam0, iParam2, 11, 3);
			iVar3 = func_198(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_207(iParam0, iParam1, 11, 3);
			iVar5 = func_198(iVar4);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -491588875, 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1347486026, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1274099003, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1723403459, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1538937264, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1830529185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 481861038, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -549843760, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1830529185, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -89003918, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -747858475, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1208450825, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1407614029, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 481861038, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -828478571, 0))
					{
						return -99;
					}
				}
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1655154167, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1719167561, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1431529976, 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1690933245, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1325813684, 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1625463492, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1719338724, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1237899132, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -491588875, 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -269266203, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 297865853, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_89(iParam0, -1071423629, 8, 3);
							break;
						
						case 1:
							iVar0 = func_89(iParam0, -833094692, 8, 3);
							break;
						
						case 2:
							iVar0 = func_89(iParam0, -1836153782, 8, 3);
							break;
						
						case 3:
							iVar0 = func_89(iParam0, -1598414687, 8, 3);
							break;
						
						case 4:
							iVar0 = func_89(iParam0, 123661793, 8, 3);
							break;
						
						case 5:
							iVar0 = func_89(iParam0, 330958487, 8, 3);
							break;
						
						case 7:
							iVar0 = func_89(iParam0, -646180324, 8, 3);
							break;
						
						case 8:
							iVar0 = func_89(iParam0, -142717408, 8, 3);
							break;
						
						case 11:
							iVar0 = func_89(iParam0, 1290696959, 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 201427653, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_89(iParam0, -1382822784, 8, 3);
							break;
						
						case 1:
							iVar0 = func_89(iParam0, -1731353868, 8, 3);
							break;
						
						case 2:
							iVar0 = func_89(iParam0, -1960638561, 8, 3);
							break;
						
						case 3:
							iVar0 = func_89(iParam0, 147161830, 8, 3);
							break;
						
						case 4:
							iVar0 = func_89(iParam0, -92608943, 8, 3);
							break;
						
						case 5:
							iVar0 = func_89(iParam0, -162931217, 8, 3);
							break;
						
						case 7:
							iVar0 = func_89(iParam0, -537087659, 8, 3);
							break;
						
						case 8:
							iVar0 = func_89(iParam0, 1665087452, 8, 3);
							break;
						
						case 11:
							iVar0 = func_89(iParam0, 1012984348, 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 967829025, 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = func_89(iParam0, 385813134, 8, 3);
							break;
						
						case 1:
							iVar0 = func_89(iParam0, 675392787, 8, 3);
							break;
						
						case 2:
							iVar0 = func_89(iParam0, -238272479, 8, 3);
							break;
						
						case 3:
							iVar0 = func_89(iParam0, 67757212, 8, 3);
							break;
						
						case 4:
							iVar0 = func_89(iParam0, -536372072, 8, 3);
							break;
						
						case 5:
							iVar0 = func_89(iParam0, -247578875, 8, 3);
							break;
						
						case 7:
							iVar0 = func_89(iParam0, -1160588753, 8, 3);
							break;
						
						case 8:
							iVar0 = func_89(iParam0, -854821214, 8, 3);
							break;
						
						case 11:
							iVar0 = func_89(iParam0, -1458295118, 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -269266203, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 297865853, 0))
				{
					iVar6 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 201427653, 0))
				{
					iVar6 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 967829025, 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -641612092, 0))
		{
			bVar7 = true;
			if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 470686834, 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1625463492, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1507532917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 481861038, 0))
			{
				iVar6 = 1;
			}
			else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1625463492, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1351486939, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -168336417, 0)) || (iVar6 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1415000253, 0))) || (iVar6 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1703203608, 0))) || (iVar6 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, 1318819110, 0))) || (iVar6 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1138757583, 0))) || (iVar6 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, 647976134, 0))) || ((((((iVar6 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, 647976134, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1138757583, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, 1318819110, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1703203608, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -1415000253, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, -168336417, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_89(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 490219883, 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 350281921, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 490219883, 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && func_204()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1266557933, 0))
			{
				iVar0 = 34;
				iVar1 = 0;
				FILES::INIT_SHOP_PED_COMPONENT(&Var13);
				if (Global_4266948[1] != 0)
				{
					FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
					FILES::GET_SHOP_PED_QUERY_COMPONENT(Global_4266945[1], &Var13);
					if (Var13.f_1 != Global_4266948[1])
					{
						Global_4266948[1] = 0;
						Global_4266945[1] = 0;
					}
				}
				if (Global_4266948[1] == 0)
				{
					iVar31 = 0;
					iVar32 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
					iVar30 = 0;
					while (iVar30 < iVar32)
					{
						FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar30, &Var13);
						if (!FILES::IS_CONTENT_ITEM_LOCKED(Var13))
						{
							if (MISC::GET_HASH_KEY(&(Var13.f_9)) == -1665616807 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var13.f_1, 647976134, 0))
							{
								Global_4266948[1] = Var13.f_1;
								Global_4266945[1] = iVar31;
								iVar30 = iVar32 + 1;
							}
							iVar31++;
						}
						iVar30++;
					}
				}
				if (Global_4266948[1] != 0)
				{
					iVar0 = (func_90(iParam0, func_69(8)) + Global_4266945[1]);
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar33 = func_207(iParam0, iParam1, 11, 3);
					if ((iVar33 != -1 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, 310957510, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -109983526, 0))
					{
						iVar34 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar33);
						iVar35 = 0;
						while (iVar35 < iVar34)
						{
							FILES::GET_VARIANT_COMPONENT(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
							if (iVar38 == 8)
							{
								if (iVar36 != 0 && iVar36 != 1849449579)
								{
									if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, -1703203608, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, -1415000253, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, -168336417, 0))
									{
										iVar0 = func_89(iParam0, iVar36, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar37;
								}
							}
							iVar35++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar39 = 0;
				if (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 2026620439, 0))
				{
					iVar39 = 1;
				}
				iVar40 = func_207(iParam0, iParam1, 11, 3);
				if (iVar40 != -1)
				{
					iVar41 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar40);
					iVar42 = 0;
					while (iVar42 < iVar41)
					{
						FILES::GET_VARIANT_COMPONENT(iVar40, iVar42, &iVar43, &iVar44, &iVar45);
						if (iVar45 == 8 && iVar39 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, 1680519719, 0))
						{
							if (iVar43 != 0 && iVar43 != 1849449579)
							{
								iVar0 = func_89(iParam0, iVar43, 8, 3);
							}
							else
							{
								iVar0 = iVar44;
							}
							iVar42 = iVar41 + 1;
							iVar1 = 0;
						}
						iVar42++;
					}
				}
				else
				{
					iVar0 = func_89(iParam0, -1739646902, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_204())
			{
				iVar46 = 0;
				iVar47 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 2026620439, 0)))
				{
					iVar46 = 1;
					iVar47 = 1;
				}
				FILES::INIT_SHOP_PED_COMPONENT(&Var48);
				if (Global_4266948[iVar47] != 0)
				{
					FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
					FILES::GET_SHOP_PED_QUERY_COMPONENT(Global_4266945[iVar47], &Var48);
					if (Var48.f_1 != Global_4266948[iVar47])
					{
						Global_4266948[iVar47] = 0;
						Global_4266945[iVar47] = 0;
					}
				}
				if (Global_4266948[iVar47] == 0)
				{
					iVar66 = 0;
					iVar67 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
					iVar65 = 0;
					while (iVar65 < iVar67)
					{
						FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar65, &Var48);
						if (!FILES::IS_CONTENT_ITEM_LOCKED(Var48))
						{
							if (MISC::GET_HASH_KEY(&(Var48.f_9)) == -1665616807 && iVar46 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var48.f_1, 647976134, 0))
							{
								Global_4266948[iVar47] = Var48.f_1;
								Global_4266945[iVar47] = iVar66;
								iVar65 = iVar67 + 1;
							}
							iVar66++;
						}
						iVar65++;
					}
				}
				if (Global_4266948[iVar47] != 0)
				{
					iVar0 = (func_90(iParam0, func_69(8)) + Global_4266945[iVar47]);
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1769225721, 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar68 = false;
			iVar69 = func_207(iParam0, iParam1, 11, 3);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1351486939, 0))
			{
				bVar68 = true;
			}
			if (iVar69 != -1)
			{
				iVar70 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar69);
				iVar71 = 0;
				while (iVar71 < iVar70)
				{
					FILES::GET_VARIANT_COMPONENT(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
					if (iVar74 == 8)
					{
						if (iVar72 != 0 && iVar72 != 1849449579)
						{
							iVar0 = func_89(iParam0, iVar72, 8, 3);
							iVar1 = 0;
							if (!bVar68 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, 647976134, 0))
							{
								iVar71 = iVar70 + 1;
							}
						}
						else
						{
							iVar0 = iVar73;
							iVar71 = iVar70 + 1;
							iVar1 = 0;
						}
					}
					iVar71++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar75 = -1;
		iVar76 = -1;
		if (iParam2 >= 256)
		{
			iVar75 = func_207(iParam0, iParam2, 11, 4);
			iVar76 = func_198(iVar75);
		}
		iVar77 = -1;
		iVar78 = -1;
		if (iParam1 >= 256)
		{
			iVar77 = func_207(iParam0, iParam1, 11, 4);
			iVar78 = func_198(iVar77);
		}
		if (iVar75 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -491588875, 0))
			{
				return -99;
			}
		}
		if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1813210391, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 481861038, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -828478571, 0))
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1719338724, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar78 == 0) || iVar78 == 2) || iVar78 == 4) || iVar78 == 5) || iVar78 == 11) || iVar78 == 12) || iVar78 == 13) || iVar78 == 15) || iVar77 == -221826679) || iVar77 == 1172264892) || iVar77 == 1474853838) || iVar77 == 278369420) || iVar77 == -310817200) || iVar77 == -138976564) || iVar77 == -905541781) || iVar77 == 998321559) || iVar77 == 64401473)
			{
			}
			else
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -849839091, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -2088146832, 0))
		{
			return -99;
		}
		iVar79 = 0;
		bVar80 = false;
		if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -761463976, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -1347486026, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -1119232689, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 1784133476, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 2030343924, 0))
		{
			bVar80 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar76 == 1) || iVar76 == 8)
			{
				iVar79 = 2;
			}
			else if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1769225721, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1834446747, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1248753945, 0))
			{
				iVar79 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar76 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 684992453, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -820724897, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 153792394, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 700658917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1714969731, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 745826556, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1055526375, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 144417099, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 1784133476, 0))
				{
					iVar79 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -1119232689, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 2044466679, 0))
				{
					iVar79 = 1;
				}
				else
				{
					iVar79 = -1;
				}
			}
			else
			{
				iVar79 = 1;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -1351486939, 0))
		{
			bVar80 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar76 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 684992453, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -820724897, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -872449705, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 947651647, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1830529185, 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1769225721, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1834446747, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1248753945, 0))
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = 1;
				}
			}
			else if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 153792394, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1322269404, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 548036233, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 700658917, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1014753511, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1410897066, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -2119756144, 0))
			{
				iVar79 = 0;
			}
			else
			{
				iVar79 = -1;
			}
		}
		switch (iVar77)
		{
			case -221826679:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case -310817200:
			case -138976564:
			case -905541781:
			case 998321559:
			case 64401473:
			case 15269846:
			case -674026069:
			case -904392139:
			case -1135708510:
			case -1360241698:
			case -2130051046:
			case 1935434943:
			case 1704282417:
			case 1472114052:
			case 1169688951:
			case -1193832172:
			case -886884949:
			case -1669539745:
			case -1370260468:
			case -413962745:
			case -238779663:
				bVar80 = true;
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1769225721, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1248753945, 0))
				{
					iVar79 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1834446747, 0))
				{
					iVar79 = 2;
				}
				else if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -870074461, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1719338724, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 947651647, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1830529185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1813210391, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -58412562, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 481861038, 0))
				{
					iVar79 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar76 == 1) || iVar76 == 7) || iVar76 == 8)
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = -1;
				}
				break;
			
			case 619380843:
				bVar80 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar76 == 1) || iVar76 == 8)
				{
					iVar79 = 0;
				}
				else
				{
					iVar79 = -1;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1266557933, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -979468724, 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar78 == 15)
			{
				iVar0 = 120;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 2044466679, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, -2020757158, 0))
			{
				bVar80 = true;
				iVar79 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1237899132, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -491588875, 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -2124629577, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar78 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar78 == 4) || iVar78 == 5) || iVar78 == 11) || iVar78 == 12) || iVar78 == 13) || iVar78 == 15)
			{
				bVar80 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar80 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -269266203, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 297865853, 0))
				{
					iVar79 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 201427653, 0))
				{
					iVar79 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 967829025, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -2124629577, 0))
				{
					iVar79 = 6;
				}
				else
				{
					iVar79 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar80)
		{
			if (iVar79 != -1)
			{
				iVar81 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar77);
				iVar82 = 0;
				while (iVar82 < iVar81)
				{
					FILES::GET_VARIANT_COMPONENT(iVar77, iVar82, &iVar83, &iVar84, &iVar85);
					if (iVar85 == 8)
					{
						if (((((((iVar79 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -168336417, 0)) || (iVar79 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1415000253, 0))) || (iVar79 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1703203608, 0))) || (iVar79 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, 1318819110, 0))) || (iVar79 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1138757583, 0))) || (iVar79 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, 647976134, 0))) || ((((((iVar79 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, 647976134, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1138757583, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, 1318819110, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1703203608, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -1415000253, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, -168336417, 0)))
						{
							if (iVar83 != 0 && iVar83 != 1849449579)
							{
								iVar0 = func_89(iParam0, iVar83, 8, 4);
							}
							else
							{
								iVar0 = iVar84;
							}
							iVar82 = iVar81 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar82++;
				}
			}
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar78 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar76 == 6) || iVar76 == 7)) && func_204()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -416620954, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 947651647, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -549843760, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1830529185, 0))
		{
			if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1813210391, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -58412562, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 481861038, 0))
			{
				return -99;
			}
			iVar86 = iVar77;
			if (iParam1 == 199)
			{
				iVar0 = func_89(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_89(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_89(iParam0, 779636984, 8, 4);
			}
			else if (iVar86 == 948380380)
			{
				iVar0 = func_89(iParam0, -570249206, 8, 4);
			}
			else if (iVar86 == 708412993)
			{
				iVar0 = func_89(iParam0, -876115052, 8, 4);
			}
			else if (iVar86 == 1974869305)
			{
				iVar0 = func_89(iParam0, -108599534, 8, 4);
			}
			else if (iVar86 == 1197916315)
			{
				iVar0 = func_89(iParam0, 200575961, 8, 4);
			}
			else if (iVar86 == 587593690)
			{
				iVar0 = func_89(iParam0, 961930907, 8, 4);
			}
			else if (iVar86 == 323213398)
			{
				iVar0 = func_89(iParam0, -257698508, 8, 4);
			}
			else if (iVar86 == 1050193651)
			{
				iVar0 = func_89(iParam0, 516534659, 8, 4);
			}
			else if (iVar86 == 811438717)
			{
				iVar0 = func_89(iParam0, -1174312584, 8, 4);
			}
			else if (iVar86 == -877868759)
			{
				iVar0 = func_89(iParam0, -1192794304, 8, 4);
			}
			else if (iVar86 == -1108464212)
			{
				iVar0 = func_89(iParam0, -2027256889, 8, 4);
			}
			else if (iVar86 == -467866094)
			{
				iVar0 = func_89(iParam0, -1670074789, 8, 4);
			}
			else if (iVar86 == -673000034)
			{
				iVar0 = func_89(iParam0, -326349175, 8, 4);
			}
			else if (iVar86 == -1984939718)
			{
				iVar0 = func_89(iParam0, -796060021, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, 1248753945, 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar76 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar77 != -1)
			{
				bVar87 = true;
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar77, 1965569012, 0))
				{
					bVar87 = false;
					if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar75, -1200513218, 0))
					{
						bVar87 = true;
					}
				}
				if (bVar87)
				{
					iVar79 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar78 == 12)
						{
							iVar79 = 1;
						}
					}
					iVar88 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar77);
					iVar89 = 0;
					while (iVar89 < iVar88)
					{
						FILES::GET_VARIANT_COMPONENT(iVar77, iVar89, &iVar90, &iVar91, &iVar92);
						if (iVar92 == 8 && ((((((((iVar90 == 0 || iVar90 == 1849449579) || (iVar79 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -168336417, 0))) || (iVar79 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1415000253, 0))) || (iVar79 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1703203608, 0))) || (iVar79 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, 1318819110, 0))) || (iVar79 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1138757583, 0))) || (iVar79 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, 647976134, 0))) || ((((((iVar79 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, 647976134, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1138757583, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, 1318819110, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1703203608, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -1415000253, 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar90, -168336417, 0))))
						{
							if (iVar90 != 0 && iVar90 != 1849449579)
							{
								iVar0 = func_89(iParam0, iVar90, 8, 4);
							}
							else
							{
								iVar0 = iVar91;
							}
							iVar89 = iVar88 + 1;
							iVar1 = 0;
						}
						iVar89++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

bool func_204()//Position - 0x32BF5
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_205(int iParam0, int iParam1, int iParam2)//Position - 0x32C06
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2131039487;
							break;
						
						case 3:
							return 717379468;
							break;
						
						case 4:
							return -331193181;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return -887980266;
							break;
						
						case 7:
							return -306315670;
							break;
						
						case 8:
							return -1154048938;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 1604817400;
							break;
						
						case 16:
							return 1070350465;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1301636615;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return -1315084792;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return -1929503325;
							break;
						
						case 8:
							return -1189128367;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -1787244429;
							break;
						
						case 16:
							return -164625564;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 538171135;
							break;
						
						case 3:
							return -244985062;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return -1385727891;
							break;
						
						case 6:
							return 1309989623;
							break;
						
						case 7:
							return 1191418696;
							break;
						
						case 8:
							return 189293242;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -2053677691;
							break;
						
						case 16:
							return -815345802;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return -1438684756;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return -420901598;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return -596540583;
							break;
						
						case 6:
							return -653786071;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return -2079589815;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 195042046;
							break;
						
						case 16:
							return 1585638009;
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1947098483;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return -208098559;
							break;
						
						case 5:
							return 1256246195;
							break;
						
						case 6:
							return 1605755939;
							break;
						
						case 7:
							return 874748698;
							break;
						
						case 8:
							return -137095372;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -116524123;
							break;
						
						case 16:
							return -2029602031;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1950801119;
							break;
						
						case 3:
							return -1158564771;
							break;
						
						case 4:
							return -69929428;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return -210146735;
							break;
						
						case 8:
							return 336100633;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -372444226;
							break;
						
						case 16:
							return -1181708276;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1148238879;
							break;
						
						case 3:
							return -958872024;
							break;
						
						case 4:
							return 1353141306;
							break;
						
						case 5:
							return 394070886;
							break;
						
						case 6:
							return 255958050;
							break;
						
						case 7:
							return -521728710;
							break;
						
						case 8:
							return 1843470374;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 482576981;
							break;
						
						case 16:
							return -552192905;
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 670760190;
							break;
						
						case 3:
							return 799655540;
							break;
						
						case 4:
							return -99079306;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return -1196262225;
							break;
						
						case 8:
							return -664356399;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -254517089;
							break;
						
						case 16:
							return 249940927;
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1875496913;
							break;
						
						case 3:
							return -1978886808;
							break;
						
						case 4:
							return -1279403197;
							break;
						
						case 5:
							return -1459998821;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return -795005246;
							break;
						
						case 8:
							return -1147008986;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2135611597;
							break;
						
						case 16:
							return -1894776690;
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1925009287;
							break;
						
						case 3:
							return -268733734;
							break;
						
						case 4:
							return -2124412821;
							break;
						
						case 5:
							return -360036697;
							break;
						
						case 6:
							return -926433555;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return -234436397;
							break;
						
						case 9:
							return 1165919867;
							break;
						
						case 10:
							return 1606204151;
							break;
						
						case 11:
							return 1774276352;
							break;
						
						case 12:
							return 1934254610;
							break;
						
						case 13:
							return 980775017;
							break;
						
						case 14:
							return 399321881;
							break;
						
						case 15:
							return 1330460533;
							break;
						
						case 16:
							return 1085725282;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 493536654;
							break;
						
						case 3:
							return -1759053005;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return -707909514;
							break;
						
						case 6:
							return 1254885089;
							break;
						
						case 7:
							return 596977742;
							break;
						
						case 8:
							return 1861540342;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -37756040;
							break;
						
						case 16:
							return -1984260867;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -840276017;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return -893909282;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return -934174767;
							break;
						
						case 8:
							return -1866981918;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -5325525;
							break;
						
						case 16:
							return 532560667;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -591418577;
							break;
						
						case 3:
							return -2029591494;
							break;
						
						case 4:
							return 1293565798;
							break;
						
						case 5:
							return 1230599348;
							break;
						
						case 6:
							return 80125466;
							break;
						
						case 7:
							return 768104686;
							break;
						
						case 8:
							return -1559755280;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 347604073;
							break;
						
						case 16:
							return 824480839;
							break;
					}
					break;
				
				case 352:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1435783799;
							break;
						
						case 3:
							return -935552076;
							break;
						
						case 4:
							return 766407714;
							break;
						
						case 5:
							return 1509946582;
							break;
						
						case 6:
							return -2105033798;
							break;
						
						case 7:
							return 1608018857;
							break;
						
						case 8:
							return -1746944984;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 717365732;
							break;
						
						case 16:
							return -1815322218;
							break;
					}
					break;
				
				case 353:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 640553446;
							break;
						
						case 3:
							return 376036624;
							break;
						
						case 4:
							return -51036152;
							break;
						
						case 5:
							return 1864144311;
							break;
						
						case 6:
							return 875934121;
							break;
						
						case 7:
							return -671105758;
							break;
						
						case 8:
							return -1439393512;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 2063066579;
							break;
						
						case 16:
							return 1248148722;
							break;
					}
					break;
				
				case 354:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1795808405;
							break;
						
						case 3:
							return -583173670;
							break;
						
						case 4:
							return 1309411930;
							break;
						
						case 5:
							return -1097003929;
							break;
						
						case 6:
							return 947491077;
							break;
						
						case 7:
							return -1021187095;
							break;
						
						case 8:
							return -1662421384;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -1456322823;
							break;
						
						case 16:
							return -752003681;
							break;
					}
					break;
				
				case 391:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1866149930;
							break;
						
						case 3:
							return 169817082;
							break;
						
						case 4:
							return 876172205;
							break;
						
						case 5:
							return 2053608242;
							break;
						
						case 6:
							return 720468224;
							break;
						
						case 7:
							return -1755663855;
							break;
						
						case 8:
							return -277654310;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return -491777818;
							break;
						
						case 16:
							return 1956130191;
							break;
					}
					break;
				
				case 404:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1685192020;
							break;
						
						case 3:
							return 447714365;
							break;
						
						case 4:
							return -187478284;
							break;
						
						case 5:
							return 2101575193;
							break;
						
						case 6:
							return 1655151264;
							break;
						
						case 7:
							return -212448586;
							break;
						
						case 8:
							return -575494038;
							break;
						
						case 9:
							break;
						
						case 10:
							break;
						
						case 11:
							break;
						
						case 12:
							break;
						
						case 13:
							break;
						
						case 14:
							break;
						
						case 15:
							return 180304173;
							break;
						
						case 16:
							return 1266107782;
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -414534788;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return -775417853;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return -868636293;
							break;
						
						case 8:
							return -481241218;
							break;
						
						case 9:
							return -1659896370;
							break;
						
						case 10:
							return 1919724703;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 982904848;
							break;
						
						case 3:
							return 1053086051;
							break;
						
						case 4:
							return 1565990968;
							break;
						
						case 5:
							return 869354244;
							break;
						
						case 6:
							return -1137668925;
							break;
						
						case 7:
							return -245327436;
							break;
						
						case 8:
							return -2092735770;
							break;
						
						case 9:
							return 445078583;
							break;
						
						case 10:
							return -181565105;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1286693086;
							break;
						
						case 3:
							return 443095479;
							break;
						
						case 4:
							return -2039335276;
							break;
						
						case 5:
							return 2083407994;
							break;
						
						case 6:
							return 533001127;
							break;
						
						case 7:
							return 1728875992;
							break;
						
						case 8:
							return -1665814217;
							break;
						
						case 9:
							return 372072052;
							break;
						
						case 10:
							return 143449031;
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1402439971;
							break;
						
						case 1:
							return -77210386;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return -2076303403;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return -981246739;
							break;
						
						case 8:
							return 2107613618;
							break;
						
						case 9:
							return 1636528688;
							break;
						
						case 10:
							return 1619141120;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1954830049;
							break;
						
						case 3:
							return 1793062342;
							break;
						
						case 4:
							return -2118725149;
							break;
						
						case 5:
							return -849747283;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return -1675687168;
							break;
						
						case 8:
							return -381889304;
							break;
						
						case 9:
							return 316684696;
							break;
						
						case 10:
							return 1798619938;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1942207698;
							break;
						
						case 3:
							return -743369876;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return -1280288284;
							break;
						
						case 6:
							return -1000105499;
							break;
						
						case 7:
							return -2147200029;
							break;
						
						case 8:
							return -1838714866;
							break;
						
						case 9:
							return -1501536929;
							break;
						
						case 10:
							return -1868660317;
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1187050736;
							break;
						
						case 3:
							return -1420954963;
							break;
						
						case 4:
							return 232453794;
							break;
						
						case 5:
							return 406178867;
							break;
						
						case 6:
							return 739288468;
							break;
						
						case 7:
							return -252997160;
							break;
						
						case 8:
							return -2044888090;
							break;
						
						case 9:
							return 171952701;
							break;
						
						case 10:
							return -142319190;
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1703311969;
							break;
						
						case 3:
							return 1875667738;
							break;
						
						case 4:
							return 1291347593;
							break;
						
						case 5:
							return -713453992;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return -86904022;
							break;
						
						case 9:
							return 1665085600;
							break;
						
						case 10:
							return -802903636;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1858518769;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return -1131137757;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return -233124949;
							break;
						
						case 7:
							return 171345846;
							break;
						
						case 8:
							return 1452902248;
							break;
						
						case 9:
							return 457174457;
							break;
						
						case 10:
							return -1710613996;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 747852506;
							break;
						
						case 3:
							return 216238268;
							break;
						
						case 4:
							return 404894315;
							break;
						
						case 5:
							return 950341895;
							break;
						
						case 6:
							return 1159773017;
							break;
						
						case 7:
							return -957185436;
							break;
						
						case 8:
							return -240960885;
							break;
						
						case 9:
							return 1933094739;
							break;
						
						case 10:
							return 2146821602;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -259688953;
							break;
						
						case 3:
							return -736534114;
							break;
						
						case 4:
							return -1673886961;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return -1794803798;
							break;
						
						case 7:
							return -81887956;
							break;
						
						case 8:
							return 1689176064;
							break;
						
						case 9:
							return -1265405818;
							break;
						
						case 10:
							return 1455856271;
							break;
					}
					break;
				
				case 302:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1835438866;
							break;
						
						case 3:
							return -504887899;
							break;
						
						case 4:
							return -2062205969;
							break;
						
						case 5:
							return 1171204323;
							break;
						
						case 6:
							return 655612525;
							break;
						
						case 7:
							return -739019619;
							break;
						
						case 8:
							return 1371789707;
							break;
						
						case 9:
							return 417256409;
							break;
						
						case 10:
							return -768009060;
							break;
					}
					break;
				
				case 303:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 124374814;
							break;
						
						case 3:
							return 2119944607;
							break;
						
						case 4:
							return -1129482474;
							break;
						
						case 5:
							return 801728466;
							break;
						
						case 6:
							return 1764150402;
							break;
						
						case 7:
							return -43777;
							break;
						
						case 8:
							return -543743869;
							break;
						
						case 9:
							return -971593942;
							break;
						
						case 10:
							return 1482293004;
							break;
					}
					break;
				
				case 304:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1732443055;
							break;
						
						case 3:
							return 1991589117;
							break;
						
						case 4:
							return -1926802042;
							break;
						
						case 5:
							return -1879434956;
							break;
						
						case 6:
							return -582200001;
							break;
						
						case 7:
							return 498117603;
							break;
						
						case 8:
							return 1121585510;
							break;
						
						case 9:
							return 96864554;
							break;
						
						case 10:
							return -878058152;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_206(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34801
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
	
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_207(iParam0, iParam2, 11, 3);
				iVar1 = func_198(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_207(iParam0, iParam1, 8, 3);
				iVar3 = func_198(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2017999390, 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1786447517, 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1010805287, 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1237899132, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -491588875, 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -269266203, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 297865853, 0))
					{
						iVar0 = func_89(iParam0, -189347783, 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 201427653, 0))
					{
						iVar0 = func_89(iParam0, -2124259813, 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 967829025, 0))
					{
						iVar0 = func_89(iParam0, 1522547645, 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -979468724, 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_206(iParam0, -99, func_199(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -316495692, 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -416620954, 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1507532917, 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1719338724, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1939378450, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 264959411, 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -973213642, 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1847239679, 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1914383230, 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -849839091, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2088146832, 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_89(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -7109286, 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1147939952, 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_207(iParam0, iParam2, 11, 4);
				iVar1 = func_198(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_207(iParam0, iParam1, 8, 4);
				iVar3 = func_198(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case -63928837:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case -1777223233:
					case -1991794649:
					case 917309067:
					case -1629661498:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case -1172927021:
					case -174365543:
					case -1450128251:
					case -1811439245:
					case 1578218888:
					case -1193481443:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case -1848319017:
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1237899132, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -491588875, 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == 1389091979) || iVar4 == 442100644) || iVar4 == -1406103725) || iVar4 == -167304449) || iVar4 == 129353308) || iVar4 == 1943510702) || iVar4 == 1963041026) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2044466679, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2020757158, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1064262817, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1419806467, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1053842259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1358888880, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 297865853, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 602650322, 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -269266203, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -685039259, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 297865853, 0))
					{
						iVar0 = func_89(iParam0, -405734992, 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 201427653, 0))
					{
						iVar0 = func_89(iParam0, 1297919831, 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 967829025, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -979468724, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2124629577, 0))
					{
						iVar0 = func_89(iParam0, 440926231, 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -89003918, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 490219883, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_206(iParam0, -99, func_199(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -316495692, 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1965569012, 0)) && !func_202(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 320460654, 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -849839091, 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -2088146832, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -2102859770, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_207(iParam0, iParam3, 4, 4), -33031567, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1119232689, 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1976716889, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1488441032, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 2044466679, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1419806467, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1813210391, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 263623295, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -309899747, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -89003918, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -747858475, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 490219883, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1208450825, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 297865853, 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 602650322, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 2026620439, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1322269404, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 548036233, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -870074461, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1174924468, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -868698159, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1769225721, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1834446747, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1719338724, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -416620954, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 947651647, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -549843760, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1830529185, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1266557933, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -89003918, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -747858475, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1208450825, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -58412562, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1407614029, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1248753945, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 481861038, 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1939378450, 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -870074461, 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1813210391, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -89003918, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -747858475, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 1208450825, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -58412562, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1407614029, 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, 481861038, 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 684992453, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 264959411, 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_89(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, -1719338724, 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 684992453, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 916636514, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1939378450, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 441715397, 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 264959411, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_207(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35AC6
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_91(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_90(iParam0, func_69(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76511.f_26[iParam2] && iParam1 == Global_76511[iParam2]) && Global_76511.f_13[iParam2] != 0)
		{
			return Global_76511.f_13[iParam2];
		}
		iVar41 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_69(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar38, &Var21);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76511.f_13[iParam2] = Var21.f_1;
					Global_76511[iParam2] = iParam1;
					Global_76511.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

void func_208(int iParam0)//Position - 0x35C22
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
	bool bVar14;
	struct<5> Var15;
	int iVar32;
	int iVar33;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, -317649054, 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, -1889900289, 0))
	{
		if (!func_211(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (func_210(iVar9, 0, 0, &iVar32))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar32, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, -1487683087, 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -816428229, 0) && iVar13 != -1104282163)
						{
							FILES::GET_SHOP_PED_COMPONENT(-1104282163, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -521539998, 0) && iVar13 != 326501576)
						{
							FILES::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -420560153, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, 604028170, 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(-1769373731, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, -1487683087, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILES::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							FILES::GET_SHOP_PED_COMPONENT(-521200785, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, -420560153, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar32, 604028170, 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(-66968432, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, -317649054, 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, 1569775397, 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, -219395886, 1))
		{
			if (func_210(iVar9, 1, 0, &iVar33))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar33, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, -1487683087, 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -816428229, 0) && iVar13 != -1104282163)
						{
							FILES::GET_SHOP_PED_COMPONENT(-1104282163, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -521539998, 0) && iVar13 != 326501576)
						{
							FILES::GET_SHOP_PED_COMPONENT(326501576, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -420560153, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, 604028170, 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(-1769373731, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, -1487683087, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -816428229, 0))
					{
						if (iVar13 != 1349944895)
						{
							FILES::GET_SHOP_PED_COMPONENT(1349944895, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -521539998, 0))
					{
						if (iVar13 != -521200785)
						{
							FILES::GET_SHOP_PED_COMPONENT(-521200785, &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, -420560153, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, 604028170, 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(-66968432, &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, 391733089, 0) || func_209(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_211(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("mp_m_freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(1241116144, &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(-972757995, &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(-367850957, &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(555191698, &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_209(int iParam0, int iParam1)//Position - 0x361C7
{
	if (iParam1 == -1)
	{
		iParam1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, 572416369, 0))
		{
			return 1;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, -196114988, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36235
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*iParam3 = -1;
	iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		FILES::GET_VARIANT_COMPONENT(iParam0, iVar1, iParam3, &uVar2, &iVar3);
		if ((((iVar3 == 11 && *iParam3 != 0) && *iParam3 != 1849449579) && iParam1 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, -1889900289, 0)) && iParam2 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(*iParam3, -1325143745, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x362B9
{
	int iVar0;
	
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -317649054, 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 32905942, 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, 605826125, 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 72391838, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1409448021, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, 605826125, 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 629327198, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -692832227, 0))
					{
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
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1188154325, 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 72391838, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1409448021, 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 572416369, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -196114988, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1218048590, 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case -1741098918:
			case -1360388756:
			case -1130579759:
			case -929181485:
			case -564396977:
			case -314533352:
			case 48874858:
			case 335112073:
			case 643009597:
			case 931540642:
			case 1886036076:
			case -1417439587:
			case -1780323493:
			case 955888011:
			case 691999254:
			case 1549695060:
			case 1319689449:
			case -258334499:
			case -498367424:
			case 346089706:
			case 1038236244:
			case 1731071211:
			case 1365303633:
			case 209639294:
			case -422671330:
			case 805478037:
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1409448021, 0) && !func_212(iVar0, 14, func_221(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_212(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x36951
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_207(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x36A1F
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
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_214(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_67(iParam0, 8);
					iVar15 = func_207(iParam1, iVar2, 8, 3);
					iVar16 = func_198(iVar15);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar16 == 6)) || (iVar2 >= 241 && iVar16 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar15, 1965569012, 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						bVar17 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 19149565, 0))
						{
							iVar2 = func_67(iParam0, 8);
							iVar18 = func_207(iParam1, iVar2, 8, 3);
							iVar19 = func_198(iVar18);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar19 == 6)) || (iVar2 >= 241 && iVar19 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar18, 1965569012, 0)))
							{
								bVar17 = false;
							}
						}
						if (bVar17)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 3)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_89(iParam1, iVar5, 3, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar4 = iVar3 + 1;
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_207(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 3, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = func_198(func_207(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_67(iParam0, 8);
					iVar21 = func_207(iParam1, iVar2, 8, 3);
					iVar22 = func_198(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, 1965569012, 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
				else if (iParam2 == 6)
				{
					if (iParam3 >= 256)
					{
						iVar14 = func_207(iParam1, iParam3, 6, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_89(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar23 = -1;
				iVar24 = -1;
				if (iParam3 >= 92)
				{
					iVar24 = func_207(iParam1, iParam3, 7, 3);
					iVar23 = func_198(iVar24);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar23 == 10) || iVar23 == 11) || iVar23 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -1950939707, 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -1371423804, 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -920534092, 0)))
				{
					iVar2 = func_67(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar14 = func_207(iParam1, iVar2, 8, 3);
						iVar25 = func_198(iVar14);
						bVar26 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 651155766, 0);
						if (((iVar25 == 3 || iVar25 == 7) || iVar25 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if ((iVar7 == 8 && !bVar26) || (iVar7 == 10 && bVar26))
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_89(iParam1, iVar5, 8, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -378906828, 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -695703461, 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, -108328099, 0)))
				{
					iVar14 = func_207(iParam1, iVar2, 8, 3);
					iVar27 = func_198(iVar14);
					bVar28 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 651155766, 0);
					if (((iVar27 == 3 || iVar27 == 7) || iVar27 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1553766533, 0))
					{
						if (iVar14 != -1)
						{
							iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
							iVar13 = 0;
							while (iVar13 < iVar12)
							{
								FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
								if ((iVar7 == 8 && !bVar28) || (iVar7 == 10 && bVar28))
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_89(iParam1, iVar5, 8, 3);
									}
									else
									{
										iVar0 = iVar6;
									}
									iVar13 = iVar12 + 1;
								}
								iVar13++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar14 = func_207(iParam1, iParam3, 7, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = func_207(iParam1, iParam3, 7, 3);
					iVar29 = func_198(iVar30);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, -920534092, 0))
				{
					iVar31 = func_67(iParam0, 11);
					if (iVar31 >= 237)
					{
						iVar14 = func_207(iParam1, iVar31, 11, 3);
						if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1847239679, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 282673723, 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1553766533, 0))
						{
							if (iVar14 != -1)
							{
								iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
								iVar13 = 0;
								while (iVar13 < iVar12)
								{
									FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
									if (iVar7 == 11)
									{
										if (iVar5 != 0 && iVar5 != 1849449579)
										{
											iVar0 = func_89(iParam1, iVar5, 11, 3);
										}
										else
										{
											iVar0 = iVar6;
										}
										iVar13 = iVar12 + 1;
									}
									iVar13++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 7)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 11, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar32 = func_67(iParam0, 11);
				if (iVar32 >= 237)
				{
					iVar14 = func_207(iParam1, iVar32, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1847239679, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 282673723, 0)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1553766533, 0))
					{
						iVar14 = func_207(iParam1, iParam3, 11, 3);
						if (iVar14 != -1)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 7)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_89(iParam1, iVar5, 7, 3);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_207(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 7, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 4, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 10, 3);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 4, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 6, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_207(iParam1, iParam3, 14, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 1, 3);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_207(iParam1, iParam3, 1, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 3);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 3);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 3)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 3, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						bVar33 = false;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1943347821, 0))
						{
							iVar2 = func_67(iParam0, 8);
							iVar34 = func_207(iParam1, iVar2, 8, 4);
							if (iVar2 >= 136 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar34, 1965569012, 0))
							{
							}
							else
							{
								iVar0 = func_89(iParam1, -2104689229, 8, 4);
								bVar33 = true;
							}
						}
						if (!bVar33)
						{
							iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
							iVar4 = 0;
							while (iVar4 < iVar3)
							{
								FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
								if (iVar7 == 8)
								{
									if (iVar5 != 0 && iVar5 != 1849449579)
									{
										iVar0 = func_89(iParam1, iVar5, 8, 4);
									}
									else
									{
										iVar0 = iVar6;
										iVar4 = iVar3 + 1;
									}
								}
								iVar4++;
							}
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar35 = -1;
				if (iParam3 >= 55)
				{
					iVar35 = func_207(iParam1, iParam3, 7, 4);
				}
				if ((iVar35 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar35, -920534092, 0)) || (iVar35 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar35, 1537081084, 0)))
				{
					iVar14 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar36 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar35, -378906828, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar35, -108328099, 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, -1914383230, 0))
						{
							bVar36 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, 1553766533, 0))
					{
						bVar36 = true;
					}
					if (bVar36)
					{
						iVar12 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar13 = 0;
						while (iVar13 < iVar12)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar13, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
								}
								iVar13 = iVar12 + 1;
							}
							iVar13++;
						}
					}
				}
			}
			else if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 8)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 8, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 4, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 6)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 6, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 4)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 4, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 10)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 10, 4);
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 10)
			{
				if (iParam3 >= 6)
				{
					iVar14 = func_207(iParam1, iParam3, 10, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 11)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 11, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_207(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 7)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 7, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 1)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar14 = func_207(iParam1, iParam3, 14, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar4 = 0;
						while (iVar4 < iVar3)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar4, &iVar5, &iVar6, &iVar7);
							if (iVar7 == 1)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 1, 4);
								}
								else
								{
									iVar0 = iVar6;
									iVar4 = iVar3 + 1;
								}
							}
							iVar4++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar14 = func_207(iParam1, iParam3, 1, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 11, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
			else if (iParam2 == 6)
			{
				if (iParam3 >= 256)
				{
					iVar14 = func_207(iParam1, iParam3, 6, 4);
					if (iVar14 != -1)
					{
						iVar8 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar14);
						iVar9 = 0;
						while (iVar9 < iVar8)
						{
							FILES::GET_FORCED_PROP(iVar14, iVar9, &iVar5, &iVar10, &iVar11);
							if (iVar11 == iParam5)
							{
								if (iVar5 != 0 && iVar5 != 1849449579)
								{
									iVar0 = func_89(iParam1, iVar5, 14, 4);
									iVar9 = iVar8 + 1;
								}
								else
								{
									iVar0 = iVar10;
									iVar9 = iVar8 + 1;
								}
							}
							iVar9++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x38984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_90(iParam1, 1))
					{
						func_236(iParam1, 1, iParam3, -1);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_67(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_207(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, -1188154325, 0))
						{
							iVar1 = func_207(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_89(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_90(iParam1, 1))
					{
						func_236(iParam1, 1, iParam3, -1);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_67(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_207(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, -1188154325, 0))
						{
							iVar8 = func_207(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_89(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		func_281(753, iParam3, Global_76386, 1, 0);
		func_281(754, iParam2, Global_76386, 1, 0);
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x38C4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_282(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (func_202(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = func_67(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_67(iParam0, 11);
				if (!func_202(iVar0, iVar1, -1))
				{
					return;
				}
			}
			func_193(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_195(iVar0, iParam2, 13) && !func_195(iVar0, iParam2, 14)) && !func_195(iVar0, iParam2, 15)) && !func_195(iVar0, iParam2, 16)) && !func_195(iVar0, iParam2, 71)) && !func_195(iVar0, iParam2, 72))
				{
					func_193(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = func_190(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_216(iParam0, iVar2, 0);
				}
				else
				{
					func_217(iVar2, 1, Global_76386);
				}
			}
		}
	}
}

void func_216(int iParam0, int iParam1, int iParam2)//Position - 0x38D7F
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_191(iParam0);
			if (!func_178(iParam1, -1) || iParam2)
			{
				if (func_171(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					func_143(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_217(int iParam0, bool bParam1, int iParam2)//Position - 0x38DDE
{
	if (bParam1)
	{
		if (!func_178(iParam0, iParam2))
		{
			func_218(iParam0, 1, iParam2);
		}
	}
	else if (func_178(iParam0, iParam2))
	{
		func_218(iParam0, 0, iParam2);
	}
}

void func_218(int iParam0, bool bParam1, int iParam2)//Position - 0x38E17
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_148(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_148(iVar1));
		}
		if (!func_219())
		{
			func_281(func_180(iParam0), iVar0, iParam2, 1, 0);
		}
	}
}

bool func_219()//Position - 0x38E6E
{
	return Global_1312850;
}

int func_220()//Position - 0x38E7A
{
	int iVar0;
	
	iVar0 = Global_76386;
	if (func_178(13, iVar0))
	{
		return 13;
	}
	if (func_178(14, iVar0))
	{
		return 14;
	}
	if (func_178(15, iVar0))
	{
		return 15;
	}
	if (func_178(16, iVar0))
	{
		return 16;
	}
	if (func_178(71, iVar0))
	{
		return 71;
	}
	if (func_178(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_221(int iParam0, int iParam1, int iParam2)//Position - 0x38EE9
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_112(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_112(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_222(iParam0, iParam2);
			}
		}
		else
		{
			return func_67(iParam0, iParam1);
		}
	}
	return -99;
}

int func_222(int iParam0, int iParam1)//Position - 0x38F8A
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_92(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_87(iParam0, iVar0, iVar1, iParam1);
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38FD0
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
		if (iParam1 == 0)
		{
			iVar0 = func_87(iParam0, iParam2, iParam3, iParam1);
			if (func_212(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

struct<10> func_224(int iParam0, int iParam1)//Position - 0x39068
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_226(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_226(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_226(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_226(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_226(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_226(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_226(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_226(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_226(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_226(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_226(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_225(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_226(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_226(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_226(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_226(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_226(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_226(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_226(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_226(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_226(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_226(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_225(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_226(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_226(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_226(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_226(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_226(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_226(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_226(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_226(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_226(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_226(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_225(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_226(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_226(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_226(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_226(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_226(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_226(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_226(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_226(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_226(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_226(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_226(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_226(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_226(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_226(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_226(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_226(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_226(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_226(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_226(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_226(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_226(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_226(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_226(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_226(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_226(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_226(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_225(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_226(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_226(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_226(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_226(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_226(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_226(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_226(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_226(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_226(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_226(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_226(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_226(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_226(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_226(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_226(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_226(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_226(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_226(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_226(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_226(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_226(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_226(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_226(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_226(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_226(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_225(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_225(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39997
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						(*iParam0)[vVar16.z] = func_89(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x39AC1
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_227(int iParam0, int iParam1)//Position - 0x39B09
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_111560.f_9080.f_99.f_58[120])
					{
						func_229(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_229(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_229(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_229(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_229(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_229(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_229(&Var1, -99, -99, Global_111560.f_2358.f_539.f_196[0], Global_111560.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_229(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_229(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_229(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_229(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_229(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_229(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_229(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_229(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_229(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_229(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_229(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_229(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_229(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_229(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_229(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_229(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_229(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_229(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_229(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_229(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_229(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_229(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_229(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_229(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_229(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_229(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_229(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_229(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_229(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_229(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_229(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_229(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_229(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_229(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_229(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_229(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_229(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_229(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_229(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_229(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_229(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_229(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_229(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_229(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_229(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_229(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_229(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_228(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_229(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_229(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_229(&Var1, -99, -99, Global_111560.f_2358.f_539.f_196[1], Global_111560.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_229(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_229(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_229(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_229(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_229(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_229(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_229(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_229(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_229(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_229(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_229(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_229(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_229(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_229(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_229(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_229(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_229(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_229(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_229(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_229(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_229(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_229(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_229(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_229(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_229(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_229(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_229(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_229(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_229(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_229(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_229(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_229(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_229(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_229(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_229(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_229(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_229(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_229(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_229(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_229(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_229(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_229(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_229(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_229(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_228(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_229(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_229(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_229(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_229(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_229(&Var1, -99, -99, Global_111560.f_2358.f_539.f_196[2], Global_111560.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_229(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_229(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_229(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_229(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_229(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_229(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_229(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_229(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_229(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_229(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_229(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_229(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_229(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_229(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_229(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_229(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_229(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_229(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_229(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_229(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_229(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_229(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_229(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_229(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_229(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_229(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_229(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_229(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_229(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_229(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_229(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_229(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_229(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_229(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_229(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_229(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_229(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_229(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_229(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_229(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_229(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_229(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_229(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_228(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_229(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_229(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_229(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_229(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_229(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_229(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_229(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_229(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_229(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_229(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_229(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_229(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_229(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_229(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_229(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_229(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_229(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_229(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_229(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_229(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_229(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_229(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_229(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_229(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_229(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_229(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_228(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_229(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_229(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_229(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_229(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_229(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_229(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_229(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_229(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_229(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_229(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_229(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_229(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_229(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_229(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_229(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_229(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_229(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_229(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_229(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_229(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_229(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_229(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_229(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_229(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_229(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_229(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_229(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_229(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_228(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B951
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::_0xF3FBE2D50A6A8C28(iVar0, 0);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar36, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var19);
						FILES::GET_SHOP_PED_COMPONENT(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_70(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_70(vVar16.z)] = func_89(iParam1, vVar16.x, func_70(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					(*uParam0)[func_70(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

void func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3BB3B
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

void func_230(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3BBAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[2];
	struct<2> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	struct<2> Var34;
	int iVar51;
	int iVar52;
	int iVar53;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_76386 != func_74() || iParam2 == -99)
		{
			return;
		}
		Global_76389[2 /*14*/] = { func_236(iParam0, iParam1, iParam2, -1) };
		if (MISC::IS_BIT_SET(Global_76389[2 /*14*/].f_6, 1) && MISC::IS_BIT_SET(Global_76389[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_233(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_233(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				func_233(Global_2621444, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2621444);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4266978)
					{
						Global_4266978[iVar5] = -1;
						Global_4266989[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, -1223513441, 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != 1849449579)
						{
							func_233(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4266978)
							{
								Global_4266978[iVar5] = iVar2;
								Global_4266989[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_230(iParam0, func_70(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4266977++;
				if (Global_4266977 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4266978)
						{
							if (Global_4266978[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_230(iParam0, func_70(Global_4266989[iVar1]), func_89(iParam0, Global_4266978[iVar1], func_70(Global_4266989[iVar1]), 3), 1);
								}
								else
								{
									func_230(iParam0, func_70(Global_4266989[iVar1]), func_89(iParam0, Global_4266978[iVar1], func_70(Global_4266989[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4266977 = (Global_4266977 - 1);
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_76389[2 /*14*/].f_6, 1) && !MISC::IS_BIT_SET(Global_76389[2 /*14*/].f_6, 6))
		{
			if (func_232(iParam1, Global_76389[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = func_79(iVar6, Global_76386, 0);
				MISC::SET_BIT(&iVar7, Global_76389[2 /*14*/].f_1);
				func_281(iVar6, iVar7, Global_76386, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar10[0] = 691352495;
									iVar10[1] = 691352495;
									break;
								
								case 221:
									iVar10[0] = 451909412;
									iVar10[1] = 451909412;
									break;
								
								case 222:
									iVar10[0] = -206550874;
									iVar10[1] = -206550874;
									break;
								
								case 223:
									iVar10[0] = -445797343;
									iVar10[1] = -445797343;
									break;
								
								case 224:
									iVar10[0] = -173716332;
									iVar10[1] = -173716332;
									break;
								
								case 225:
									iVar10[0] = -538304226;
									iVar10[1] = -538304226;
									break;
								
								case 226:
									iVar10[0] = -592242000;
									iVar10[1] = -592242000;
									break;
								
								case 227:
									iVar10[0] = -831095241;
									iVar10[1] = -831095241;
									break;
								
								case 228:
									iVar10[0] = -1092100326;
									iVar10[1] = -1092100326;
									break;
								
								case 229:
									iVar10[0] = -1465994616;
									iVar10[1] = -1465994616;
									break;
								
								case 230:
									iVar10[0] = 507503642;
									iVar10[1] = 507503642;
									break;
								
								case 231:
									iVar10[0] = -1392082519;
									iVar10[1] = -1392082519;
									break;
								
								case 232:
									iVar10[0] = -88859389;
									iVar10[1] = -88859389;
									break;
								
								case 233:
									iVar10[0] = 157858412;
									iVar10[1] = 157858412;
									break;
								
								case 234:
									iVar10[0] = -513152401;
									iVar10[1] = -513152401;
									break;
								
								case 235:
									iVar10[0] = 2004948615;
									iVar10[1] = 2004948615;
									break;
							}
							FILES::INIT_SHOP_PED_COMPONENT(&Var13);
							iVar32 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(3, 7, -1, 0, -1, 8);
							iVar30 = 0;
							while (iVar30 < iVar32)
							{
								FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar30, &Var13);
								if (!FILES::IS_CONTENT_ITEM_LOCKED(Var13))
								{
									if (Var13.f_1 == iVar10[0] || Var13.f_1 == iVar10[1])
									{
										func_230(iParam0, 8, (241 + iVar31), 0);
										iVar30 = iVar32 + 1;
									}
									iVar31++;
								}
								iVar30++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_76389[2 /*14*/].f_4)
							{
								case 0:
									func_230(iParam0, 7, func_89(iParam0, -1893758670, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 221276858, 7, 3), 0);
									break;
								
								case 1:
									func_230(iParam0, 7, func_89(iParam0, -1596052305, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 576886046, 7, 3), 0);
									break;
								
								case 2:
									func_230(iParam0, 7, func_89(iParam0, 1233059274, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -392978047, 7, 3), 0);
									break;
								
								case 3:
									func_230(iParam0, 7, func_89(iParam0, 232228476, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -33764269, 7, 3), 0);
									break;
								
								case 4:
									func_230(iParam0, 7, func_89(iParam0, -454445919, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1510704243, 7, 3), 0);
									break;
								
								case 5:
									func_230(iParam0, 7, func_89(iParam0, 925653285, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1800939276, 7, 3), 0);
									break;
								
								case 6:
									func_230(iParam0, 7, func_89(iParam0, -2104856604, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 833565623, 7, 3), 0);
									break;
								
								case 7:
									func_230(iParam0, 7, func_89(iParam0, 1657483366, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1201823645, 7, 3), 0);
									break;
								
								case 8:
									func_230(iParam0, 7, func_89(iParam0, 501294735, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 2132496022, 7, 3), 0);
									break;
								
								case 9:
									func_230(iParam0, 7, func_89(iParam0, 1882573627, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1939019463, 7, 3), 0);
									break;
								
								case 10:
									func_230(iParam0, 7, func_89(iParam0, 206035418, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1713491273, 7, 3), 0);
									break;
								
								case 11:
									func_230(iParam0, 7, func_89(iParam0, -642943834, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -156668318, 7, 3), 0);
									break;
								
								case 12:
									func_230(iParam0, 7, func_89(iParam0, -388295935, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 106696135, 7, 3), 0);
									break;
								
								case 13:
									func_230(iParam0, 7, func_89(iParam0, 927641567, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -802905767, 7, 3), 0);
									break;
								
								case 14:
									func_230(iParam0, 7, func_89(iParam0, 1147226636, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -505527092, 7, 3), 0);
									break;
								
								case 15:
									func_230(iParam0, 7, func_89(iParam0, 312665744, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1144129332, 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_76389[2 /*14*/].f_4)
							{
								case 0:
									func_230(iParam0, 7, func_89(iParam0, -335266079, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -925989020, 7, 3), 0);
									break;
								
								case 1:
									func_230(iParam0, 7, func_89(iParam0, -1379548555, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 244486895, 7, 3), 0);
									break;
								
								case 2:
									func_230(iParam0, 7, func_89(iParam0, -1402159165, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1095104597, 7, 3), 0);
									break;
								
								case 3:
									func_230(iParam0, 7, func_89(iParam0, 1357351098, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1787874026, 7, 3), 0);
									break;
								
								case 4:
									func_230(iParam0, 7, func_89(iParam0, -1097178082, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 476163725, 7, 3), 0);
									break;
								
								case 5:
									func_230(iParam0, 7, func_89(iParam0, -179482237, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1223952305, 7, 3), 0);
									break;
								
								case 6:
									func_230(iParam0, 7, func_89(iParam0, -750514831, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 2049796643, 7, 3), 0);
									break;
								
								case 7:
									func_230(iParam0, 7, func_89(iParam0, -1724573356, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1013547784, 7, 3), 0);
									break;
								
								case 8:
									func_230(iParam0, 7, func_89(iParam0, 94106144, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1456972664, 7, 3), 0);
									break;
								
								case 9:
									func_230(iParam0, 7, func_89(iParam0, 1070524041, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1670762848, 7, 3), 0);
									break;
								
								case 10:
									func_230(iParam0, 7, func_89(iParam0, -1644577318, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, 1428867383, 7, 3), 0);
									break;
								
								case 11:
									func_230(iParam0, 7, func_89(iParam0, 1865900118, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1664165762, 7, 3), 0);
									break;
								
								case 12:
									func_230(iParam0, 7, func_89(iParam0, 1611776523, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1962101510, 7, 3), 0);
									break;
								
								case 13:
									func_230(iParam0, 7, func_89(iParam0, 1381115532, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1270511757, 7, 3), 0);
									break;
								
								case 14:
									func_230(iParam0, 7, func_89(iParam0, 1636484345, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -1571626106, 7, 3), 0);
									break;
								
								case 15:
									func_230(iParam0, 7, func_89(iParam0, 1422633851, 7, 3), 0);
									func_230(iParam0, 7, func_89(iParam0, -698332248, 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_76389[2 /*14*/].f_4);
							func_230(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_76389[2 /*14*/] = { func_236(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = func_231(iParam0, iParam2, Global_76389[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_230(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar33 = 331193219;
								break;
							
							case 200:
								iVar33 = 1115060468;
								break;
							
							case 201:
								iVar33 = 779636984;
								break;
						}
						FILES::INIT_SHOP_PED_COMPONENT(&Var34);
						iVar53 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(4, 7, -1, 0, -1, 8);
						iVar51 = 0;
						while (iVar51 < iVar53)
						{
							FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar51, &Var34);
							if (!FILES::IS_CONTENT_ITEM_LOCKED(Var34))
							{
								if (Var34.f_1 == iVar33)
								{
									func_230(iParam0, 8, (136 + iVar52), 0);
									iVar51 = iVar53 + 1;
								}
								iVar52++;
							}
							iVar51++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = func_199(iParam0, iParam2, Global_76389[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_230(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_231(int iParam0, int iParam1, int iParam2)//Position - 0x3CADC
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
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_207(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_89(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_207(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_89(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

bool func_232(int iParam0, int iParam1, var uParam2)//Position - 0x3CDD1
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

void func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x3D1D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76386;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_234(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_79(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_281(iVar2, iVar3, iVar0, 1, 0);
	}
}

bool func_234(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x3D220
{
	int iVar0;
	
	*uParam2 = 10999;
	if ((bParam4 && Global_4266944) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4266944)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
				
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
				
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 10999;
}

int func_235(int iParam0)//Position - 0x3F087
{
	if (!MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_76389[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_236(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3F0D8
{
	func_276();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_260(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_237(iParam1, iParam2, iParam3);
	}
	return Global_76389[0 /*14*/];
}

void func_237(int iParam0, int iParam1, int iParam2)//Position - 0x3F119
{
	switch (iParam0)
	{
		case 2:
			func_259(iParam1, iParam2);
			break;
		
		case 11:
			func_258(iParam1, iParam2);
			break;
		
		case 8:
			func_257(iParam1, iParam2);
			break;
		
		case 9:
			func_256(iParam1, iParam2);
			break;
		
		case 3:
			func_255(iParam1, iParam2);
			break;
		
		case 4:
			func_254(iParam1, iParam2);
			break;
		
		case 6:
			func_253(iParam1, iParam2);
			break;
		
		case 1:
			func_252(iParam1, iParam2);
			break;
		
		case 7:
			func_251(iParam1, iParam2);
			break;
		
		case 10:
			func_250(iParam1, iParam2);
			break;
		
		case 14:
			func_249(iParam1, iParam2);
			break;
		
		case 12:
			func_248(iParam1, iParam2);
			break;
		
		case 5:
			func_247(iParam1, iParam2);
			break;
		
		case 0:
			func_245(iParam1, iParam2);
			break;
		
		case 13:
			func_238(iParam1);
			break;
	}
}

void func_238(int iParam0)//Position - 0x3F225
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_239(&(Global_76389[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_239(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3F3E0
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_244(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_27(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, 1827025211, 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_243(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_243(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_243(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_243(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_242(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_242(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_242(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_79(func_241(iParam1, uParam0->f_2), Global_76386, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_79(func_240(iParam1, uParam0->f_2), Global_76386, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_232(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_79(iVar1, Global_76386, 0);
				if (!MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

int func_240(int iParam0, int iParam1)//Position - 0x3F771
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_241(int iParam0, int iParam1)//Position - 0x3FB6C
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3FF67
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_111560.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_111560.f_2358[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x40E86
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76386;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_234(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_79(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x40EC8
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_245(int iParam0, int iParam1)//Position - 0x40F9C
{
	int iVar0;
	
	iVar0 = 0;
	Global_76389[0 /*14*/].f_5 = 4;
	func_246(iVar0, iParam0, 0, iParam1);
}

void func_246(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x40FBC
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76389[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = FILES::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_239(&(Global_76389[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_239(&(Global_76389[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var20);
		iVar39 = 0;
		iVar40 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar38, &Var20);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_239(&(Global_76389[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var41);
		if (iParam3 != -1 && Global_76558)
		{
			FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var41);
			Global_2621444 = Var41.f_1;
			Global_2621445 = Var41;
			func_239(&(Global_76389[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
			return;
		}
		iVar59 = 0;
		iVar60 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 7, -1, 0, -1, func_69(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar58, &Var41);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var41))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_239(&(Global_76389[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_247(int iParam0, int iParam1)//Position - 0x41295
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_76389[0 /*14*/].f_5 = 4;
			func_246(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_239(&(Global_76389[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0, int iParam1)//Position - 0x41398
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_76389[0 /*14*/].f_5 = 4;
			func_246(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_239(&(Global_76389[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0, int iParam1)//Position - 0x41677
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		
		
