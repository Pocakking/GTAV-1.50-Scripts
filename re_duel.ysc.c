#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<5> Local_49[8];
	struct<4> Local_90[8];
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	vector3 vLocal_141 = { 0f, 0f, 0f };
	float fLocal_144 = 0f;
	vector3 vLocal_145 = { 0f, 0f, 0f };
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
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
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
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
	vLocal_123 = { 0f, 0f, 0f };
	vLocal_129 = { 1064.871f, 2670.857f, 38.5511f };
	vLocal_132 = { 926.3422f, 2708.926f, 39.5394f };
	vLocal_135 = { 1140.03f, 2698.027f, 37.1568f };
	vLocal_138 = { vLocal_123 };
	fLocal_164 = 0f;
	iLocal_165 = joaat("dukes2");
	iLocal_166 = joaat("phantom");
	iLocal_167 = joaat("trailers2");
	iLocal_168 = joaat("rancherxl");
	iLocal_169 = joaat("a_m_m_hillbilly_01");
	iLocal_170 = joaat("a_m_m_hillbilly_02");
	iLocal_173 = 3;
	vLocal_126 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (func_225(Local_90[0 /*4*/]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
		}
		func_198(1, 0);
	}
	if (func_156(vLocal_126, 31, 0, 0, 0))
	{
		func_153(31);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || func_152(1)) || iLocal_155 > 2)
		{
			if (func_152(13))
			{
				func_121();
			}
			switch (iLocal_47)
			{
				case 0:
					func_59();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			if (func_225(Local_90[0 /*4*/]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
			}
			func_198(1, 0);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1AD
{
	switch (iLocal_48)
	{
		case 0:
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_155)
			{
				case 0:
					iLocal_48 = 2;
					break;
			}
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1F1
{
	func_56(64, 1);
	func_56(65, 1);
	func_32(Local_90[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_198(1, 0);
}

void func_3()//Position - 0x222
{
	func_4();
}

int func_4()//Position - 0x22F
{
	if (func_5(0))
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

bool func_5(bool bParam0)//Position - 0x27A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_6(int iParam0, int iParam1)//Position - 0x2A5
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_29(iParam0))
	{
		func_28(iParam0, iParam1);
		if (!func_27(51))
		{
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322)
		{
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_7(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_7(7);
			}
			else
			{
				func_7(1);
			}
		}
	}
}

void func_7(int iParam0)//Position - 0x3A7
{
	Global_111546 = iParam0;
}

void func_8(int iParam0, var uParam1, var uParam2)//Position - 0x3B5
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
		func_12((891 + iParam0), 1, -1, 1);
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
		func_9();
	}
}

void func_9()//Position - 0x49D
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
		func_11(13, SYSTEM::FLOOR(Global_111560.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76577)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_4();
				}
			}
		}
	}
}

int func_10()//Position - 0x95E
{
	return Global_30736;
}

int func_11(int iParam0, int iParam1)//Position - 0x969
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9BA
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
		iParam2 = func_13();
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

int func_13()//Position - 0xFFD
{
	return Global_1312745;
}

int func_14(int iParam0, int iParam1)//Position - 0x1009
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

int func_15(int iParam0)//Position - 0x137D
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

void func_16(int iParam0)//Position - 0x13AC
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

void func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x13EE
{
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_18(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1410
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
		func_19();
	}
}

void func_19()//Position - 0x15E4
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

int func_20()//Position - 0x1704
{
	func_21();
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

void func_21()//Position - 0x174A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_22(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111560.f_2358.f_539.f_4321))
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

bool func_22(int iParam0)//Position - 0x1847
{
	return Global_41396 == iParam0;
}

bool func_23(int iParam0)//Position - 0x1855
{
	return iParam0 < 3;
}

int func_24(int iParam0)//Position - 0x1861
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)//Position - 0x189E
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)//Position - 0x18C3
{
	return Global_1798[iParam0 /*29*/];
}

int func_27(int iParam0)//Position - 0x18D2
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

void func_28(int iParam0, int iParam1)//Position - 0x1915
{
	MISC::SET_BIT(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_29(int iParam0)//Position - 0x1930
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

int func_30()//Position - 0x19E1
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_31(Var0);
	return uVar16;
}

int func_31(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x19FE
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

void func_32(int iParam0, int iParam1)//Position - 0x1BD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_38(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_33(iParam0, &(Global_111560.f_32744.f_5510));
}

void func_33(int iParam0, var uParam1)//Position - 0x1DDA
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_37(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_36(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_35(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_34(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_34(int iParam0)//Position - 0x2085
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_35(int iParam0, var uParam1, var uParam2)//Position - 0x2135
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)//Position - 0x2328
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_37(var uParam0)//Position - 0x2348
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_38(int iParam0)//Position - 0x23F9
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_54(iParam0, 0, 0)) || func_54(iParam0, 1, 0)) || func_54(iParam0, 2, 0)) || func_53(iParam0) != 145) || func_52(iParam0)) || func_51(iParam0)) || func_50(iParam0)) || func_49(iParam0)) || !func_39(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_51(iParam0))
		{
		}
		if (func_51(iParam0))
		{
		}
		if (func_54(iParam0, 0, 0))
		{
		}
		if (func_54(iParam0, 1, 0))
		{
		}
		if (func_54(iParam0, 2, 0))
		{
		}
		if (func_53(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_39(int iParam0)//Position - 0x24D6
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_40(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_40(int iParam0, bool bParam1)//Position - 0x2687
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_48())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_47() && !func_46()) && !func_45()) && !func_44()) && !func_48())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_45())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_43(iParam0))
		{
			return 0;
		}
	}
	if (!func_41(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_41(int iParam0)//Position - 0x2807
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_42())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_42()//Position - 0x28D3
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_43(int iParam0)//Position - 0x28EA
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_44()//Position - 0x4DB8
{
	return 0;
}

int func_45()//Position - 0x4DC1
{
	return 1;
}

int func_46()//Position - 0x4DCA
{
	return 1;
}

int func_47()//Position - 0x4DD3
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_48()//Position - 0x4DEC
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

int func_49(int iParam0)//Position - 0x4EA7
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_40(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x4EED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96060[iVar0]))
		{
			if (Global_96060[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x4F28
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96030[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x4FA4
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x508C
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_54(int iParam0, int iParam1, bool bParam2)//Position - 0x50EF
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_55(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111560.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x5160
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_56(int iParam0, bool bParam1)//Position - 0x5239
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_58(iParam0, 0))
		{
			func_57(iParam0, 1, 0);
			func_57(iParam0, 2, 0);
			func_57(iParam0, 3, 0);
			func_57(iParam0, 4, 0);
			func_57(iParam0, 0, 1);
			Global_75396[iParam0] = 1;
		}
	}
	else
	{
		func_57(iParam0, 0, 0);
	}
}

void func_57(int iParam0, int iParam1, bool bParam2)//Position - 0x5296
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_111560.f_32744[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_32744[iParam0]), iParam1);
	}
}

bool func_58(int iParam0, int iParam1)//Position - 0x52D1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_111560.f_32744[iParam0], iParam1);
}

void func_59()//Position - 0x52F4
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	float fVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	
	switch (iLocal_48)
	{
		case 0:
			func_110();
			func_109(13);
			STREAMING::REQUEST_MODEL(iLocal_165);
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_155)
			{
				case 0:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_165))
					{
						func_105(0, vLocal_123, -1f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
						STREAMING::REQUEST_MODEL(iLocal_166);
						STREAMING::REQUEST_MODEL(iLocal_169);
						STREAMING::REQUEST_MODEL(iLocal_167);
						func_95(1);
						iLocal_155++;
					}
					break;
				
				case 1:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_166) && STREAMING::HAS_MODEL_LOADED(iLocal_169)) && STREAMING::HAS_MODEL_LOADED(iLocal_167))
					{
						func_109(9);
						iLocal_155++;
					}
					break;
				
				case 2:
					if ((func_225(Local_90[3 /*4*/]) && func_225(Local_49[0 /*5*/])) && func_94())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[3 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (vVar0.x <= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 953.5052f, 2665.587f, 38.61237f, 955.0941f, 2716.872f, 50.67046f, 71f, 0, true, 0))
						{
							if ((((func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 10f, 0f), 1.25f) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 12.5f, 0f), 1.5f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 15f, 0f), 1.75f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 17.5f, 0f), 2f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[3 /*4*/], 0f, 20f, 0f), 2.25f))
							{
								func_88(3, 0, 4, 1);
								iLocal_155 = 4;
							}
						}
					}
					if (((!func_152(8) && func_225(Local_90[4 /*4*/])) && func_225(Local_49[1 /*5*/])) && func_94())
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[4 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
						if (vVar0.x >= 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.712f, 2695.67f, 36.77993f, 1109.166f, 2665.531f, 48.50355f, 71f, 0, true, 0))
						{
							if ((((func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 10f, 0f), 1.5f) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 12.5f, 0f), 1.75f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 15f, 0f), 2f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 17.5f, 0f), 2.25f)) || func_93(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[4 /*4*/], 0f, 20f, 0f), 2.5f))
							{
								func_88(4, 1, 3, 0);
								iLocal_155 = 4;
							}
						}
					}
					if (!func_152(8) && func_86())
					{
						func_109(6);
						if (func_225(Local_49[0 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[0 /*5*/].f_3 = 3;
						}
						if (func_225(Local_49[1 /*5*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[1 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[1 /*5*/].f_3 = 3;
						}
						if (func_225(Local_90[3 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[3 /*4*/], 1);
						}
						if (func_225(Local_90[4 /*4*/]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[4 /*4*/], 1);
						}
						iLocal_155++;
					}
					break;
				
				case 3:
					if ((!func_225(Local_49[0 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1)) && (!func_225(Local_49[1 /*5*/]) || HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1)))
					{
						iLocal_155++;
					}
					break;
				
				case 4:
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_171);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, 1862763509);
					if (func_225(Local_90[3 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[3 /*4*/], 1);
					}
					if (func_225(Local_90[4 /*4*/]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[4 /*4*/], 1);
					}
					STREAMING::REQUEST_MODEL(iLocal_168);
					SYSTEM::SETTIMERA(0);
					iLocal_155++;
					break;
				
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_168))
					{
						STREAMING::REQUEST_MODEL(iLocal_169);
						iLocal_155++;
					}
					break;
				
				case 6:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_169))
					{
						STREAMING::REQUEST_MODEL(iLocal_170);
						iLocal_155++;
					}
					break;
				
				case 7:
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_168) && STREAMING::HAS_MODEL_LOADED(iLocal_169)) && STREAMING::HAS_MODEL_LOADED(iLocal_170))
					{
						func_105(5, vLocal_123, -1082130432, 0);
						func_105(6, vLocal_123, -1082130432, 0);
						func_105(7, vLocal_123, -1082130432, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
						func_81(2, 0, vLocal_123, -1082130432);
						func_81(3, 0, vLocal_123, -1082130432);
						func_81(4, 0, vLocal_123, -1082130432);
						func_81(5, 0, vLocal_123, -1082130432);
						func_81(6, 0, vLocal_123, -1082130432);
						func_81(7, 0, vLocal_123, -1082130432);
						if (func_152(10) && func_152(11))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_170);
						iLocal_155++;
					}
					break;
				
				case 8:
					if (!func_225(Local_49[0 /*5*/]) && !func_225(Local_49[1 /*5*/]))
					{
						if (SYSTEM::TIMERA() < 16000)
						{
							SYSTEM::SETTIMERA(16000);
						}
					}
					if (SYSTEM::TIMERA() > 20000 && func_80(PLAYER::PLAYER_PED_ID(), vLocal_129, 1) >= 150f)
					{
						iLocal_155++;
					}
					break;
				
				case 9:
					if (func_94() || (func_225(Local_90[0 /*4*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) <= 35f))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(6, 10);
						if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar3, iVar15, &vVar6, 1, 5f, 0))
						{
							PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar6, &uVar17, &uVar18);
							if (((uVar18 & 4 == 0 && (!func_78() || uVar18 & 8 == 0)) && (func_77() || uVar18 & 1 == 0)) && !func_76(vVar6, 1084227584))
							{
								fVar16 = func_75(vVar6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
								vVar9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar6, fVar16, 6f, -6f, 0f) };
								vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar6, fVar16, -6f, -6f, 0f) };
								if ((((!CAM::IS_SPHERE_VISIBLE(vVar6, 7f) && !CAM::IS_SPHERE_VISIBLE(vVar9, 7f)) && !CAM::IS_SPHERE_VISIBLE(vVar12, 7f)) && !func_76(vVar9, 1084227584)) && !func_76(vVar12, 1084227584))
								{
									func_74(Local_90[5 /*4*/], vVar6);
									func_74(Local_90[6 /*4*/], vVar9);
									func_74(Local_90[7 /*4*/], vVar12);
									iLocal_149 = MISC::GET_GAME_TIMER();
									iVar19 = 2;
									while (iVar19 <= 7)
									{
										if (func_225(Local_49[iVar19 /*5*/]))
										{
											Local_49[iVar19 /*5*/].f_1 = func_71(Local_49[iVar19 /*5*/], 1, 145);
											if (PED::IS_PED_IN_ANY_VEHICLE(Local_49[iVar19 /*5*/], 0))
											{
												if (func_70(Local_49[iVar19 /*5*/], 0) == -1)
												{
													HUD::SET_BLIP_SCALE(Local_49[iVar19 /*5*/].f_1, 1f);
												}
												else
												{
													HUD::SET_BLIP_ALPHA(Local_49[iVar19 /*5*/].f_1, 0);
													HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar19 /*5*/].f_1, 1);
												}
											}
										}
										iVar19++;
									}
									func_109(2);
									func_109(7);
									iLocal_159 = (MISC::GET_GAME_TIMER() + 60000);
									func_69(6);
									iLocal_155++;
								}
							}
						}
					}
					break;
				
				case 10:
					if (((((func_225(Local_49[2 /*5*/]) || func_225(Local_49[3 /*5*/])) || func_225(Local_49[4 /*5*/])) || func_225(Local_49[5 /*5*/])) || func_225(Local_49[6 /*5*/])) || func_225(Local_49[7 /*5*/]))
					{
						if (func_152(7))
						{
							if (func_225(Local_90[5 /*4*/]))
							{
								func_62(5, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_150);
							}
							if (func_225(Local_90[6 /*4*/]))
							{
								func_62(6, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_151);
							}
							if (func_225(Local_90[7 /*4*/]))
							{
								func_62(7, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_152);
							}
						}
					}
					else if (!func_225(Local_49[0 /*5*/]) && !func_225(Local_49[1 /*5*/]))
					{
						if (func_225(Local_90[0 /*4*/]))
						{
							iLocal_48 = 2;
						}
						else
						{
							func_61();
						}
					}
					break;
			}
			break;
		
		case 2:
			func_60(1);
			break;
	}
}

void func_60(int iParam0)//Position - 0x5BB9
{
	iLocal_155 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

void func_61()//Position - 0x5BCB
{
	if (func_225(Local_90[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[0 /*4*/], 2);
	}
	func_198(1, 0);
}

void func_62(int iParam0, int iParam1, var uParam2)//Position - 0x5BEF
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
	{
		if ((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && Local_90[iParam0 /*4*/] != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && func_68(Local_90[iParam0 /*4*/]))
		{
			if (iParam0 == 3 || iParam0 == 4)
			{
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else
			{
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_80(iParam1, vLocal_141, 1) >= fVar0 && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1))
			{
				vLocal_145 = { vLocal_141 };
				fLocal_148 = fLocal_144;
				vLocal_141 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
				fLocal_144 = ENTITY::GET_ENTITY_HEADING(iParam1);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(Local_90[iParam0 /*4*/]))
			{
				*uParam2 = MISC::GET_GAME_TIMER();
			}
			else if (((((((((((MISC::GET_GAME_TIMER() - *uParam2) > iVar2 && (MISC::GET_GAME_TIMER() - iLocal_149) > 1500) && func_79(Local_90[iParam0 /*4*/], iParam1, 1) > func_80(iParam1, vLocal_145, 1)) && func_67(iParam0)) && func_80(iParam1, vLocal_145, 1) >= fVar0) && func_79(Local_90[iParam0 /*4*/], iParam1, 1) >= fVar1) && func_66(Local_90[iParam0 /*4*/], vLocal_145, 1153138688)) && func_65(Local_90[iParam0 /*4*/], iParam1, vLocal_145)) && !func_64(vLocal_145)) && !CAM::IS_SPHERE_VISIBLE(vLocal_145, 4f)) && !func_76(vLocal_145, 1084227584))
			{
				MISC::CLEAR_AREA_OF_PEDS(vLocal_145, 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(vLocal_145, 5f, 0, 0, 0, 0, false, 0);
				if (iParam0 == 3 || iParam0 == 4)
				{
					VEHICLE::DETACH_VEHICLE_FROM_TRAILER(Local_90[iParam0 /*4*/]);
					if (iParam0 == 3)
					{
						func_63(0, 3);
					}
					else
					{
						func_63(1, 3);
					}
				}
				ENTITY::SET_ENTITY_COORDS(Local_90[iParam0 /*4*/], vLocal_145, 1, false, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_90[iParam0 /*4*/], 1084227584);
				ENTITY::SET_ENTITY_HEADING(Local_90[iParam0 /*4*/], fLocal_148);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iParam0 /*4*/], true, true, 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], (ENTITY::GET_ENTITY_SPEED(iParam1) * 1.2f));
				*uParam2 = MISC::GET_GAME_TIMER();
				Local_90[iParam0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
				iLocal_149 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			*uParam2 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x5E85
{
	MISC::SET_BIT(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

int func_64(vector3 vParam0)//Position - 0x5E9B
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0, int iParam1, vector3 vParam2)//Position - 0x5EC5
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, vParam2) };
	if ((vVar0.y > 0f && vVar3.y > 0f) || (vVar0.y < 0f && vVar3.y < 0f))
	{
		return 1;
	}
	if (iParam0 == Local_90[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_90[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, vector3 vParam1, float fParam4)//Position - 0x5F5C
{
	if (func_80(iParam0, vParam1, 1) <= fParam4)
	{
		return 1;
	}
	if (iParam0 == Local_90[3 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[0 /*5*/].f_1))
	{
		return 1;
	}
	if (iParam0 == Local_90[4 /*4*/] && !HUD::DOES_BLIP_EXIST(Local_49[1 /*5*/].f_1))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x5FBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	
	if (func_152(6))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 5;
	}
	if (func_152(7))
	{
		iVar1 = 7;
	}
	else if (func_152(6))
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (func_225(Local_90[iVar2 /*4*/]))
		{
			if (IntToFloat(iVar3) == -1f || (MISC::GET_GAME_TIMER() - Local_90[iVar2 /*4*/].f_2) > iVar3)
			{
				iVar3 = (MISC::GET_GAME_TIMER() - Local_90[iVar2 /*4*/].f_2);
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_79(Local_90[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1) > fVar5)
			{
				fVar5 = func_79(Local_90[iVar2 /*4*/], PLAYER::PLAYER_PED_ID(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6)
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x6099
{
	int iVar0;
	
	if (func_225(iParam0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (func_225(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0)//Position - 0x60D0
{
	MISC::CLEAR_BIT(&iLocal_156, iParam0);
}

int func_70(int iParam0, int iParam1)//Position - 0x60E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_71(int iParam0, bool bParam1, int iParam2)//Position - 0x6165
{
	int iVar0;
	
	iVar0 = func_72(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)//Position - 0x61AF
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_73(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_73(bool bParam0, float fParam1, float fParam2)//Position - 0x6253
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_74(int iParam0, vector3 vParam1)//Position - 0x626A
{
	if (func_225(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		MISC::CLEAR_AREA_OF_PEDS(vParam1, 1.5f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(vParam1, 3f, 0, 0, 0, 0, false, 0);
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 1084227584);
		ENTITY::SET_ENTITY_HEADING(iParam0, func_75(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
		if (func_225(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_VEHICLE_CHASE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0), iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
			}
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 1.2f));
	}
}

float func_75(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5)//Position - 0x6334
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_76(vector3 vParam0, float fParam3)//Position - 0x634E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar1 /*4*/]) && ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar1 /*4*/], vParam0, fParam3, fParam3, fParam3, false, true, 0))
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_77()//Position - 0x639A
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar4, &uVar3))
		{
			return uVar3 & 1 == 1;
		}
	}
	return 0;
}

int func_78()//Position - 0x63D4
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &vVar0, 1, 1077936128, 0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar0, &uVar4, &uVar3))
		{
			return uVar3 & 8 == 0;
		}
	}
	return 0;
}

float func_79(int iParam0, int iParam1, bool bParam2)//Position - 0x640F
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

float func_80(int iParam0, vector3 vParam1, bool bParam4)//Position - 0x646D
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam4);
}

int func_81(int iParam0, bool bParam1, vector3 vParam2, float fParam5)//Position - 0x64A7
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	int iVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	int iVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	bool bVar58;
	int iVar59;
	bool bVar60;
	int iVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	int iVar71;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*5*/]))
	{
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		vVar9 = { vLocal_123 };
		vVar12 = { vLocal_123 };
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_171;
		bVar28 = true;
		bVar29 = true;
		bVar30 = false;
		bVar31 = true;
		iVar32 = 1;
		bVar33 = true;
		bVar34 = false;
		bVar35 = true;
		bVar36 = false;
		bVar37 = true;
		bVar38 = true;
		bVar39 = false;
		bVar40 = false;
		bVar41 = true;
		bVar42 = false;
		bVar43 = true;
		bVar44 = true;
		bVar45 = false;
		iVar46 = 1;
		bVar47 = true;
		bVar48 = true;
		bVar49 = false;
		bVar50 = false;
		bVar51 = false;
		bVar52 = false;
		bVar53 = false;
		bVar54 = false;
		bVar55 = true;
		iVar56 = 0;
		bVar57 = false;
		bVar58 = false;
		iVar59 = 1;
		bVar60 = true;
		iVar61 = 0;
		bVar62 = false;
		bVar63 = false;
		bVar64 = false;
		bVar65 = false;
		bVar66 = false;
		bVar67 = false;
		bVar68 = true;
		bVar69 = true;
		bVar70 = false;
		switch (iParam0)
		{
			case 0:
				iVar4 = iLocal_169;
				iVar6 = Local_90[3 /*4*/];
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			
			case 1:
				iVar4 = iLocal_169;
				iVar6 = Local_90[4 /*4*/];
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				bVar34 = true;
				bVar70 = true;
				break;
			
			case 2:
				iVar4 = iLocal_170;
				iVar6 = Local_90[5 /*4*/];
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 3:
				iVar4 = iLocal_169;
				iVar6 = Local_90[5 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 4:
				iVar4 = iLocal_169;
				iVar6 = Local_90[6 /*4*/];
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 5:
				iVar4 = iLocal_170;
				iVar6 = Local_90[6 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 6:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			case 7:
				iVar4 = iLocal_170;
				iVar6 = Local_90[7 /*4*/];
				iVar7 = 0;
				iVar5 = joaat("weapon_pistol");
				bVar36 = true;
				bVar33 = false;
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_85(vParam2, vLocal_123, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				vVar0 = { vParam2 };
			}
			else
			{
				vVar9 = { vParam2 };
			}
		}
		if (fParam5 != -1f)
		{
			fVar3 = fParam5;
		}
		if (func_225(iVar6))
		{
			Local_49[iParam0 /*5*/] = PED::CREATE_PED_INSIDE_VEHICLE(iVar6, 26, iVar4, iVar7, 1, true);
		}
		else
		{
			Local_49[iParam0 /*5*/] = PED::CREATE_PED(26, iVar4, vVar0, fVar3, 1, true);
			ENTITY::SET_ENTITY_COLLISION(Local_49[iParam0 /*5*/], bVar41, 0);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_49[iParam0 /*5*/], !bVar65, 0);
		}
		if (bVar40)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_49[iParam0 /*5*/], vVar0, 0, 0, 1);
		}
		if (bParam1)
		{
			if (iVar27 == iLocal_171)
			{
				Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
			}
			else
			{
				Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 0, 145);
			}
		}
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_49[iParam0 /*5*/], iVar59);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 213, bVar28);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 212, bVar29);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam0 /*5*/], bVar30);
		PED::SET_PED_KEEP_TASK(Local_49[iParam0 /*5*/], bVar31);
		PED::SET_PED_DIES_WHEN_INJURED(Local_49[iParam0 /*5*/], iVar32);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 188, bVar55);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 42, !bVar33);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 9, bVar35);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 3, bVar37);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 342, bVar57);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[iParam0 /*5*/], bVar36, 1);
		PED::SET_PED_ARMOUR(Local_49[iParam0 /*5*/], iVar18);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 8, bVar39);
		ENTITY::SET_ENTITY_VISIBLE(Local_49[iParam0 /*5*/], bVar38, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_49[iParam0 /*5*/], bVar42);
		WEAPON::GIVE_WEAPON_TO_PED(Local_49[iParam0 /*5*/], iVar5, -1, bVar34, bVar34);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 2, bVar43);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 1, bVar44);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 52, bVar45);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 13, bVar68);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_49[iParam0 /*5*/], iVar46);
		PED::SET_PED_CAN_BE_TARGETTED(Local_49[iParam0 /*5*/], bVar47);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 118, bVar48);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 115, bVar49);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 12, bVar50);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 36, bVar51);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 35, bVar52);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 29, bVar53);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 185, bVar54);
		PED::SET_PED_TO_LOAD_COVER(Local_49[iParam0 /*5*/], iVar56);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_49[iParam0 /*5*/], 17, bVar62);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_49[iParam0 /*5*/], bVar63);
		AUDIO::STOP_PED_SPEAKING(Local_49[iParam0 /*5*/], bVar58);
		func_84(Local_49[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		ENTITY::FREEZE_ENTITY_POSITION(Local_49[iParam0 /*5*/], bVar66);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 203, bVar67);
		PED::_0xA9B61A329BFDCBEA(Local_49[iParam0 /*5*/], !bVar67);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 366, bVar69);
		PED::SET_PED_CONFIG_FLAG(Local_49[iParam0 /*5*/], 134, bVar70);
		if (!bVar60)
		{
			func_63(iParam0, 2);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar71))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_49[iParam0 /*5*/], iVar71, -1, 0);
		}
		if (iVar17 > 0)
		{
			if (iVar17 > ENTITY::GET_ENTITY_MAX_HEALTH(Local_49[iParam0 /*5*/]) || iVar61)
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_49[iParam0 /*5*/], iVar17);
			}
			ENTITY::SET_ENTITY_HEALTH(Local_49[iParam0 /*5*/], iVar17, 0);
		}
		if (iVar19 > 0)
		{
			PED::SET_PED_ACCURACY(Local_49[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f)
		{
			WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_49[iParam0 /*5*/], fVar20, fVar21);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_49[iParam0 /*5*/], iVar27);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_49[iParam0 /*5*/], iVar8, -1, vVar9, vVar12, 1, 1, 1, 0, 2, 1);
			PED::SET_PED_CAN_RAGDOLL(Local_49[iParam0 /*5*/], 0);
			func_63(iParam0, 1);
		}
		func_83(iParam0);
		func_82(iParam0);
		if (iVar15 != 0)
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_49[iParam0 /*5*/], iVar5, iVar15);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_49[iParam0 /*5*/], iVar5, true);
		}
		PED::SET_PED_COMBAT_ABILITY(Local_49[iParam0 /*5*/], iVar16);
		if (bVar64)
		{
			PED::SET_PED_STEALTH_MOVEMENT(Local_49[iParam0 /*5*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

void func_82(int iParam0)//Position - 0x6AE1
{
	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 2:
				break;
			}
	}
}

void func_83(int iParam0)//Position - 0x6B06
{
	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 1:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 1, 1, 0);
				break;
			
			case 2:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			
			case 3:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 4:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
				break;
			
			case 5:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 6:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
				break;
			
			case 7:
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
				break;
			}
	}
}

void func_84(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6D2A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
	}
}

bool func_85(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x6D66
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_86()//Position - 0x6DAD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((func_225(Local_49[0 /*5*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_49[0 /*5*/], 1) >= 200f) && (func_225(Local_49[1 /*5*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_49[1 /*5*/], 1) >= 200f))
	{
		return 1;
	}
	if ((func_152(10) && !func_225(Local_49[0 /*5*/])) || (func_152(11) && !func_225(Local_49[1 /*5*/])))
	{
		return 1;
	}
	if ((func_225(Local_49[0 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_49[0 /*5*/], 0))) || (func_225(Local_49[1 /*5*/]) && (PED::IS_PED_IN_COMBAT(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID()) || !PED::IS_PED_IN_ANY_VEHICLE(Local_49[1 /*5*/], 0))))
	{
		return 1;
	}
	if ((func_225(Local_90[1 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_90[1 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) || (func_225(Local_90[2 /*4*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_90[2 /*4*/], PLAYER::PLAYER_PED_ID(), 1)))
	{
		return 1;
	}
	if (func_87(Local_90[3 /*4*/]) || func_87(Local_90[4 /*4*/]))
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (func_225(iVar0))
	{
		fLocal_164 = ENTITY::GET_ENTITY_SPEED(iVar0);
	}
	else
	{
		fLocal_164 = 0f;
	}
	if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(PLAYER::PLAYER_PED_ID());
		iVar1 = iVar2;
		if ((iVar1 == Local_90[3 /*4*/] && func_225(Local_49[0 /*5*/])) || (iVar1 == Local_90[4 /*4*/] && func_225(Local_49[1 /*5*/])))
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x6F75
{
	int iVar0;
	float fVar1;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((func_225(iParam0) && func_225(iVar0)) && fLocal_164 != 0f) && fLocal_164 >= 9f)
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iVar0) && fVar1 <= (fLocal_164 * 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FD5
{
	func_109(8);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], 5f);
	Local_49[iParam1 /*5*/].f_1 = func_71(Local_49[iParam1 /*5*/], 1, 145);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam1 /*5*/], true);
	func_92();
	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_90[iParam0 /*4*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_90[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f, -1f);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_91(Local_49[iParam1 /*5*/]);
	func_89(Local_49[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_49[iParam1 /*5*/].f_3 = 3;
	if (func_225(Local_90[iParam2 /*4*/]))
	{
		if (iParam0 == 3)
		{
			vLocal_138 = { 1031.986f, 2693.441f, 38.6861f };
		}
		else
		{
			vLocal_138 = { 1027.001f, 2686.89f, 37.8987f };
		}
		iLocal_161 = MISC::GET_GAME_TIMER() + 1000;
		if (func_225(Local_49[iParam3 /*5*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam3 /*5*/], true);
			TASK::TASK_VEHICLE_MISSION(Local_49[iParam3 /*5*/], Local_90[iParam2 /*4*/], Local_90[0 /*4*/], 2, 30f, 262144, -1f, -1f, 1);
		}
		Local_49[iParam3 /*5*/].f_3++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_171, 1862763509);
}

void func_89(int iParam0, char* sParam1, int iParam2)//Position - 0x7119
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_90(iParam2), 1);
}

int func_90(int iParam0)//Position - 0x7130
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

void func_91(int iParam0)//Position - 0x7325
{
	if (func_152(0))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_172);
		func_69(0);
	}
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_172);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
}

void func_92()//Position - 0x734E
{
	if (!func_152(0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_172);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_172);
		func_109(0);
	}
}

int func_93(vector3 vParam0, float fParam3)//Position - 0x7370
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	fVar1 = func_80(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar5 = { vVar2 + ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
	if ((fVar1 / fVar0) <= fParam3 && MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vParam0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vParam0, true))
	{
		return 1;
	}
	return 0;
}

bool func_94()//Position - 0x73E2
{
	return (func_225(Local_90[0 /*4*/]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 0));
}

int func_95(int iParam0)//Position - 0x7406
{
	if (func_99())
	{
		Global_111550 = 1;
		Global_111547 = MISC::GET_GAME_TIMER();
		if (func_15(Global_111549))
		{
			func_96(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_15(Global_111549))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_96(int iParam0)//Position - 0x7459
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_97(func_98(iParam0), -1);
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
					func_97(func_98(iParam0), -1);
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
					func_97(func_98(iParam0), -1);
					Global_111560.f_24990.f_4++;
					MISC::SET_BIT(&Global_111556, 2);
				}
			}
			break;
	}
}

void func_97(char[4] cParam0, int iParam1)//Position - 0x753A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_98(int iParam0)//Position - 0x7551
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

int func_99()//Position - 0x7595
{
	switch (func_100(&Global_30795, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_100(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x75CB
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
		if (func_104(0))
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
		if (!func_102(iParam2))
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
			func_101(uParam0, iParam4);
		}
	}
	return 2;
}

void func_101(var uParam0, int iParam1)//Position - 0x7702
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

bool func_102(int iParam0)//Position - 0x7751
{
	return func_103(iParam0, Global_41396);
}

int func_103(int iParam0, int iParam1)//Position - 0x7762
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

int func_104(int iParam0)//Position - 0x7943
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_102(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_105(int iParam0, vector3 vParam1, float fParam4, bool bParam5)//Position - 0x7965
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	vector3 vVar30;
	char* sVar33;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[iParam0 /*4*/]))
	{
		iVar5 = 0;
		bVar6 = true;
		bVar7 = true;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
		bVar11 = false;
		bVar12 = true;
		bVar13 = false;
		bVar14 = false;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		bVar18 = true;
		bVar19 = false;
		bVar20 = true;
		iVar21 = 0;
		bVar22 = false;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0)
		{
			case 0:
				vVar0 = { vLocal_129 };
				fVar3 = 89.7263f;
				iVar4 = iLocal_165;
				bVar12 = false;
				iVar17 = 1;
				bVar18 = false;
				iVar21 = 1;
				bVar8 = true;
				bVar20 = false;
				iVar5 = 7;
				break;
			
			case 3:
				vVar0 = { vLocal_132 };
				fVar3 = 175.3714f;
				iVar4 = iLocal_166;
				bVar10 = true;
				iVar17 = 1;
				bVar18 = false;
				sVar33 = "96NWO218";
				iVar5 = 2;
				break;
			
			case 4:
				vVar0 = { vLocal_135 };
				fVar3 = 171f;
				iVar4 = iLocal_166;
				bVar10 = true;
				iVar17 = 1;
				bVar18 = false;
				sVar33 = "01DTS039";
				iVar5 = 2;
				break;
			
			case 1:
				vVar0 = { 930.46f, 2719.65f, 42.41f };
				fVar3 = 180.53f;
				iVar4 = iLocal_167;
				break;
			
			case 2:
				vVar0 = { 1141.17f, 2711.97f, 40.04f };
				fVar3 = 176.67f;
				iVar4 = iLocal_167;
				break;
			
			case 5:
				vVar0 = { 514.5844f, -649.9937f, 23.7512f };
				fVar3 = 182.0097f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "18NJM316";
				break;
			
			case 6:
				vVar0 = { 507.3959f, -653.6174f, 23.7512f };
				fVar3 = 177.8055f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "28HDT291";
				break;
			
			case 7:
				vVar0 = { 1200.547f, -1553.607f, 38.4019f };
				fVar3 = 0.0001f;
				iVar4 = iLocal_168;
				bVar9 = true;
				bVar10 = true;
				bVar20 = false;
				sVar33 = "23DJT162";
				break;
			
			default:
				break;
		}
		if (!STREAMING::HAS_MODEL_LOADED(iVar4))
		{
			return 0;
		}
		if (!func_85(vParam1, vLocal_123, 0))
		{
			vVar0 = { vParam1 };
		}
		if (fParam4 != -1f)
		{
			fVar3 = fParam4;
		}
		Local_90[iParam0 /*4*/] = VEHICLE::CREATE_VEHICLE(iVar4, vVar0, fVar3, true, true, false);
		func_108(iParam0);
		func_107(iParam0);
		ENTITY::SET_ENTITY_VISIBLE(Local_90[iParam0 /*4*/], bVar7, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar26))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_90[iParam0 /*4*/], iVar26, -1, vVar27, vVar30, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(Local_90[iParam0 /*4*/], bVar6, 0);
		}
		VEHICLE::SET_VEHICLE_STRONG(Local_90[iParam0 /*4*/], bVar8);
		ENTITY::FREEZE_ENTITY_POSITION(Local_90[iParam0 /*4*/], bVar9);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iParam0 /*4*/], bVar10, true, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_90[iParam0 /*4*/], bVar13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_90[iParam0 /*4*/], bVar14, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_90[iParam0 /*4*/], iVar15);
		VEHICLE::_0x4D9D109F63FEE1D4(Local_90[iParam0 /*4*/], iVar16);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_90[iParam0 /*4*/], bVar18, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_90[iParam0 /*4*/], iVar17);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_90[iParam0 /*4*/], bVar19);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_90[iParam0 /*4*/], bVar20);
		VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Local_90[iParam0 /*4*/], iVar21);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_90[iParam0 /*4*/], !bVar22, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar33))
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_90[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f)
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iParam0 /*4*/], fVar23);
		}
		if (bVar11)
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_90[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f)
		{
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(Local_90[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f)
		{
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_90[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_90[iParam0 /*4*/], iVar5);
		}
		if (bParam5)
		{
			Local_90[iParam0 /*4*/].f_1 = func_106(Local_90[iParam0 /*4*/], bVar12, 0);
		}
	}
	return 1;
}

int func_106(int iParam0, bool bParam1, bool bParam2)//Position - 0x7D00
{
	return func_72(iParam0, !bParam1, bParam2);
}

void func_107(int iParam0)//Position - 0x7D13
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
			case 6:
			case 7:
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_90[iParam0 /*4*/], 15f);
				break;
			}
	}
}

void func_108(int iParam0)//Position - 0x7D5F
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 48, 48);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 58, 58);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 94, 94);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 8, 156);
				break;
			
			case 3:
			case 4:
				VEHICLE::SET_VEHICLE_COLOURS(Local_90[iParam0 /*4*/], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_90[iParam0 /*4*/], 61, 156);
				break;
			}
	}
}

void func_109(int iParam0)//Position - 0x7E0C
{
	MISC::SET_BIT(&iLocal_156, iParam0);
}

void func_110()//Position - 0x7E1C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_120(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_171, iLocal_171);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_171, 1862763509);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	func_111(1);
}

void func_111(bool bParam0)//Position - 0x7E92
{
	func_112(39, bParam0);
	func_112(40, bParam0);
	func_112(41, bParam0);
	func_112(42, bParam0);
	func_112(43, bParam0);
	func_112(44, bParam0);
}

void func_112(int iParam0, bool bParam1)//Position - 0x7ECA
{
	if (bParam1)
	{
		if (!func_119(iParam0, 2, 1))
		{
			func_118(iParam0, 2, 1);
		}
	}
	else if (func_119(iParam0, 2, 1))
	{
		func_113(iParam0, 2, 1);
	}
}

void func_113(int iParam0, int iParam1, bool bParam2)//Position - 0x7F01
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
		if (func_10() == 0)
		{
			iVar0 = func_116(func_117(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_114(func_117(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7F73
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_115(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_115(var uParam0)//Position - 0x7FA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x7FD7
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_115(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x8009
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

void func_118(int iParam0, int iParam1, bool bParam2)//Position - 0x8339
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
		if (func_10() == 0)
		{
			iVar0 = func_116(func_117(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_114(func_117(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_119(int iParam0, int iParam1, bool bParam2)//Position - 0x83AB
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
		if (func_10() == 0)
		{
			return MISC::IS_BIT_SET(func_116(func_117(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_120(bool bParam0)//Position - 0x8415
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_168, bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_166, bParam0);
}

void func_121()//Position - 0x842D
{
	if (!func_151())
	{
		if (func_138())
		{
			func_198(1, 0);
		}
	}
	RECORDING::_0x208784099002BC30("RE_DUEL", 0);
	func_136();
	func_131();
	func_127();
	func_122();
	if ((func_152(5) && func_225(Local_90[iLocal_173 /*4*/])) && MISC::GET_GAME_TIMER() < iLocal_157)
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_90[iLocal_173 /*4*/]);
	}
	if (func_152(6))
	{
		if (iLocal_158 == 0)
		{
			if (func_80(PLAYER::PLAYER_PED_ID(), vLocal_129, 1) >= 150f)
			{
				iLocal_158 = MISC::GET_GAME_TIMER() + 30000;
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_158)
		{
			func_69(6);
		}
	}
	if (func_152(7))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_159)
		{
			func_69(7);
		}
	}
	if ((func_152(9) && func_225(Local_90[0 /*4*/])) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) <= 35f)
	{
		if (!func_152(10))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_132, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_162) >= 1000 && !func_76(vLocal_132, 7f)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_132, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_132, 7f, 1, 0, 0, false);
					func_105(3, vLocal_123, -1082130432, 0);
					func_105(1, vLocal_123, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_90[3 /*4*/], Local_90[1 /*4*/], 1065353216);
					func_81(0, 0, vLocal_123, -1082130432);
					func_109(10);
					if (iLocal_155 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[0 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_49[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_49[0 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_162 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_152(11))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_135, 7f))
			{
				if (((MISC::GET_GAME_TIMER() - iLocal_163) >= 1000 && !func_76(vLocal_135, 7f)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_135, 1) >= 50f)
				{
					MISC::CLEAR_AREA(vLocal_135, 7f, 1, 0, 0, false);
					func_105(4, vLocal_123, -1082130432, 0);
					func_105(2, vLocal_123, -1082130432, 0);
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_90[4 /*4*/], Local_90[2 /*4*/], 1065353216);
					func_81(1, 0, vLocal_123, -1082130432);
					func_109(11);
					if (iLocal_155 > 2)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[1 /*5*/], false);
						TASK::TASK_COMBAT_PED(Local_49[1 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						Local_49[1 /*5*/].f_3 = 3;
					}
				}
			}
			else
			{
				iLocal_163 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_152(10) && func_152(11))
		{
			func_69(9);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
		}
	}
	if (func_152(8))
	{
		if (iLocal_160 == 0)
		{
			iLocal_160 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_160)
		{
			func_69(8);
			func_109(6);
		}
	}
}

void func_122()//Position - 0x8715
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_49[iVar0 /*5*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_49[iVar0 /*5*/], 0))
			{
				if (!func_126(iVar0, 0))
				{
					HUD::SET_BLIP_SCALE(Local_49[iVar0 /*5*/].f_1, 1f);
					func_63(iVar0, 0);
				}
				if (func_70(Local_49[iVar0 /*5*/], 0) != -1)
				{
					if (func_125(iVar0))
					{
						if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 0);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, 1);
						}
					}
					else if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) == 0)
					{
						HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 255);
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, 0);
					}
				}
			}
			else if (func_126(iVar0, 0))
			{
				HUD::SET_BLIP_SCALE(Local_49[iVar0 /*5*/].f_1, 0.7f);
				func_124(iVar0, 0);
				if (HUD::GET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1) == 0)
				{
					HUD::SET_BLIP_ALPHA(Local_49[iVar0 /*5*/].f_1, 255);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_49[iVar0 /*5*/].f_1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_49[iVar0 /*5*/]))
			{
				func_123(&(Local_49[iVar0 /*5*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar0 /*4*/]) && HUD::DOES_BLIP_EXIST(Local_90[iVar0 /*4*/].f_1))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iVar0 /*4*/], 0))
			{
				func_123(&(Local_90[iVar0 /*4*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_123(int iParam0)//Position - 0x88A0
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_124(int iParam0, int iParam1)//Position - 0x88C0
{
	MISC::CLEAR_BIT(&(Local_49[iParam0 /*5*/].f_2), iParam1);
}

int func_125(int iParam0)//Position - 0x88D6
{
	if (iParam0 == 3)
	{
		if (!func_225(Local_49[2 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 5)
	{
		if (!func_225(Local_49[4 /*5*/]))
		{
			return 0;
		}
	}
	if (iParam0 == 7)
	{
		if (!func_225(Local_49[6 /*5*/]))
		{
			return 0;
		}
	}
	return 1;
}

bool func_126(int iParam0, int iParam1)//Position - 0x8924
{
	return MISC::IS_BIT_SET(Local_49[iParam0 /*5*/].f_2, iParam1);
}

void func_127()//Position - 0x893A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[iVar0 /*4*/]))
		{
			func_128(iVar0);
		}
		iVar0++;
	}
}

void func_128(int iParam0)//Position - 0x8968
{
	if (func_225(Local_90[iParam0 /*4*/]))
	{
		switch (iParam0)
		{
			case 5:
				if ((!func_225(Local_49[2 /*5*/]) && !func_225(Local_49[3 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
				{
					func_129(iParam0, 0);
				}
				break;
			
			case 6:
				if ((!func_225(Local_49[4 /*5*/]) && !func_225(Local_49[5 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
				{
					func_129(iParam0, 0);
				}
				break;
			
			case 7:
				if ((!func_225(Local_49[6 /*5*/]) && !func_225(Local_49[7 /*5*/])) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
				{
					func_129(iParam0, 0);
				}
				break;
			
			case 3:
				if (!func_225(Local_49[0 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
				{
					if (func_79(PLAYER::PLAYER_PED_ID(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_129(iParam0, 0);
					}
				}
				if (func_152(6))
				{
					func_62(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_153);
				}
				break;
			
			case 4:
				if (!func_225(Local_49[1 /*5*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_90[iParam0 /*4*/], 0))
				{
					if (func_79(PLAYER::PLAYER_PED_ID(), Local_90[iParam0 /*4*/], 1) >= 50f)
					{
						func_129(iParam0, 0);
					}
				}
				if (func_152(6))
				{
					func_62(iParam0, PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_154);
				}
				break;
			
			case 1:
				if (!func_225(Local_90[3 /*4*/]) || func_79(Local_90[3 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_129(iParam0, 0);
				}
				break;
			
			case 2:
				if (!func_225(Local_90[4 /*4*/]) || func_79(Local_90[4 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f)
				{
					func_129(iParam0, 0);
				}
				break;
			
			case 0:
				switch (Local_90[iParam0 /*4*/].f_3)
				{
					case 0:
						if (func_94())
						{
							func_109(1);
							func_123(&(Local_90[iParam0 /*4*/].f_1));
							Local_90[iParam0 /*4*/].f_3++;
						}
						break;
				}
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_VISIBLE(Local_90[iParam0 /*4*/]))
	{
		func_129(iParam0, 0);
	}
	else
	{
		func_129(iParam0, 1);
	}
}

void func_129(int iParam0, bool bParam1)//Position - 0x8BD8
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_90[iParam0 /*4*/]))
	{
		func_123(&(Local_90[iParam0 /*4*/].f_1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_90[iParam0 /*4*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_90[iParam0 /*4*/]);
		}
		if (func_130(&(Local_90[iParam0 /*4*/])))
		{
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_90[iParam0 /*4*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_90[iParam0 /*4*/]));
			}
		}
		Local_90[iParam0 /*4*/] = 0;
		Local_90[iParam0 /*4*/].f_2 = 0;
		Local_90[iParam0 /*4*/].f_3 = 0;
	}
}

int func_130(var uParam0)//Position - 0x8C52
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_131()//Position - 0x8C6E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*5*/]))
		{
			func_132(iVar0);
		}
		iVar0++;
	}
}

void func_132(int iParam0)//Position - 0x8C9C
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	
	if (func_225(Local_49[iParam0 /*5*/]))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (iParam0 == 0)
				{
					iVar0 = 3;
					iVar1 = 4;
				}
				else
				{
					iVar0 = 4;
					iVar1 = 3;
				}
				switch (Local_49[iParam0 /*5*/].f_3)
				{
					case 0:
						Local_49[iParam0 /*5*/].f_4 = MISC::GET_GAME_TIMER();
						if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
						{
							PED::SET_IK_TARGET(Local_49[iParam0 /*5*/], 1, PLAYER::PLAYER_PED_ID(), 31086, vLocal_123, 0, -1, -1);
						}
						break;
					
					case 1:
						if (func_225(Local_90[iVar0 /*4*/]))
						{
							VEHICLE::_0x88BC673CA9E0AE99(Local_90[iVar0 /*4*/], 1);
							if (func_225(Local_90[0 /*4*/]) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_90[iVar0 /*4*/], Local_90[0 /*4*/]))
							{
								if ((((((MISC::GET_GAME_TIMER() >= iLocal_161 && !func_152(12)) && !ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0)) && func_80(PLAYER::PLAYER_PED_ID(), vLocal_138, 1) < func_79(Local_90[iVar0 /*4*/], PLAYER::PLAYER_PED_ID(), 1)) && !CAM::IS_SPHERE_VISIBLE(vLocal_138, 7f)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_90[iVar0 /*4*/], true), 7f)) && !func_76(vLocal_138, 8f))
								{
									fVar5 = func_75(vLocal_138, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									MISC::CLEAR_AREA_OF_VEHICLES(vLocal_138, 8f, 0, 0, 0, 0, false, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_138, fVar5, 0f, -8f, 0f), 8f, 0, 0, 0, 0, false, 0);
									ENTITY::SET_ENTITY_COORDS(Local_90[iVar0 /*4*/], vLocal_138, 1, false, 0, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_90[iVar0 /*4*/], 1084227584);
									ENTITY::SET_ENTITY_HEADING(Local_90[iVar0 /*4*/], fVar5);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_90[iVar0 /*4*/], true, true, 0);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iVar0 /*4*/], 30f);
									func_109(5);
									iLocal_173 = iVar0;
									iLocal_157 = MISC::GET_GAME_TIMER() + 5000;
								}
								if (!func_152(12) && ENTITY::IS_ENTITY_AT_COORD(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, false, true, 0))
								{
									func_109(12);
								}
								if (((MISC::GET_GAME_TIMER() >= iLocal_161 && ENTITY::IS_ENTITY_OCCLUDED(Local_90[iVar0 /*4*/])) && func_225(Local_90[iVar1 /*4*/])) && func_79(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) >= 20f)
								{
									vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_90[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (vVar2.x < -3.5f || vVar2.x > 3.5f)
									{
										fVar6 = ENTITY::GET_ENTITY_SPEED(Local_90[iVar0 /*4*/]);
										fVar6 = func_135(fVar6, 20f, 50f);
										ENTITY::SET_ENTITY_HEADING(Local_90[iVar0 /*4*/], func_75(ENTITY::GET_ENTITY_COORDS(Local_90[iVar0 /*4*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_90[iVar0 /*4*/], fVar6);
									}
								}
								if ((func_126(iParam0, 3) || func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f) || (func_225(Local_90[iVar1 /*4*/]) && func_79(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) <= 15f))
								{
									if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) <= 15f)
									{
										if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
										{
											Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
											func_89(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
										}
									}
									Local_49[iParam0 /*5*/].f_3++;
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
								{
									Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
									func_89(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
								Local_49[iParam0 /*5*/].f_3++;
							}
						}
						break;
					
					case 2:
						if (func_225(Local_90[iVar0 /*4*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_49[iParam0 /*5*/], false);
							TASK::TASK_COMBAT_PED(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_49[iParam0 /*5*/].f_3++;
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(Local_49[iParam0 /*5*/].f_1))
						{
							if (func_79(PLAYER::PLAYER_PED_ID(), Local_49[iParam0 /*5*/], 1) <= 85f)
							{
								Local_49[iParam0 /*5*/].f_1 = func_71(Local_49[iParam0 /*5*/], 1, 145);
							}
						}
						if (func_152(6) || func_152(8))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], 0) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
							{
								func_134(iParam0, 0);
							}
						}
						else if (func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
						{
							func_134(iParam0, 0);
						}
						break;
				}
				break;
			
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				if (func_152(7))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID()) && !func_133(Local_49[iParam0 /*5*/], 579380604, 1))
					{
						TASK::TASK_COMBAT_PED(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				if (func_152(7))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], 0) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
					{
						func_134(iParam0, 0);
					}
				}
				else if (func_152(2) && func_79(Local_49[iParam0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 250f)
				{
					func_134(iParam0, 0);
				}
				break;
		}
	}
	else
	{
		if (func_126(iParam0, 1))
		{
			PED::SET_PED_CAN_RAGDOLL(Local_49[iParam0 /*5*/], 1);
			ENTITY::DETACH_ENTITY(Local_49[iParam0 /*5*/], 1, false);
			func_124(iParam0, 1);
		}
		if (!func_126(iParam0, 2))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_49[iParam0 /*5*/]))
			{
				func_134(iParam0, 0);
			}
			else
			{
				func_134(iParam0, 1);
			}
		}
	}
}

int func_133(int iParam0, int iParam1, bool bParam2)//Position - 0x9290
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_134(int iParam0, bool bParam1)//Position - 0x92D6
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_49[iParam0 /*5*/]))
	{
		func_123(&(Local_49[iParam0 /*5*/].f_1));
		if ((((func_225(Local_49[iParam0 /*5*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_49[iParam0 /*5*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/], 1)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_49[iParam0 /*5*/])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_49[iParam0 /*5*/]))
		{
			ENTITY::DETACH_ENTITY(Local_49[iParam0 /*5*/], 1, true);
		}
		if (bParam1)
		{
			PED::DELETE_PED(&(Local_49[iParam0 /*5*/]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_49[iParam0 /*5*/]));
		}
		Local_49[iParam0 /*5*/].f_2 = 0;
	}
}

float func_135(float fParam0, float fParam1, float fParam2)//Position - 0x9375
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

void func_136()//Position - 0x939C
{
	if ((func_152(1) || iLocal_155 > 2) && func_137())
	{
		if (func_225(Local_90[0 /*4*/]) && func_79(PLAYER::PLAYER_PED_ID(), Local_90[0 /*4*/], 1) >= 250f)
		{
			func_61();
		}
	}
	if (func_137())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*4*/]) && !func_225(Local_90[0 /*4*/]))
		{
			func_61();
		}
	}
}

int func_137()//Position - 0x940E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_225(Local_49[iVar1 /*5*/]) && HUD::DOES_BLIP_EXIST(Local_49[iVar1 /*5*/].f_1))
		{
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

int func_138()//Position - 0x9453
{
	if (!func_102(5))
	{
		return 1;
	}
	if (func_147())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_146())
		{
			return 0;
		}
	}
	if (func_139(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_139(float fParam0, bool bParam1)//Position - 0x94B5
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
		if (func_23(func_145()))
		{
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_140(iVar32, &Var0);
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

void func_140(int iParam0, var uParam1)//Position - 0x956C
{
	switch (iParam0)
	{
		case 0:
			func_141(uParam1, "Abigail1", func_143(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 1:
			func_141(uParam1, "Abigail2", func_143(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 2:
			func_141(uParam1, "Barry1", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 3:
			func_141(uParam1, "Barry2", func_143(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 4:
			func_141(uParam1, "Barry3", func_143(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 5:
			func_141(uParam1, "Barry3A", func_143(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 6:
			func_141(uParam1, "Barry3C", func_143(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 7:
			func_141(uParam1, "Barry4", func_143(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_142(iParam0), 0, 0);
			break;
		
		case 8:
			func_141(uParam1, "Dreyfuss1", func_143(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 9:
			func_141(uParam1, "Epsilon1", func_143(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 10:
			func_141(uParam1, "Epsilon2", func_143(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 11:
			func_141(uParam1, "Epsilon3", func_143(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 12:
			func_141(uParam1, "Epsilon4", func_143(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 13:
			func_141(uParam1, "Epsilon5", func_143(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 14:
			func_141(uParam1, "Epsilon6", func_143(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 15:
			func_141(uParam1, "Epsilon7", func_143(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 16:
			func_141(uParam1, "Epsilon8", func_143(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 17:
			func_141(uParam1, "Extreme1", func_143(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 18:
			func_141(uParam1, "Extreme2", func_143(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 19:
			func_141(uParam1, "Extreme3", func_143(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 20:
			func_141(uParam1, "Extreme4", func_143(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 21:
			func_141(uParam1, "Fanatic1", func_143(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_142(iParam0), 1, 0);
			break;
		
		case 22:
			func_141(uParam1, "Fanatic2", func_143(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_142(iParam0), 1, 0);
			break;
		
		case 23:
			func_141(uParam1, "Fanatic3", func_143(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_142(iParam0), 0, 1);
			break;
		
		case 24:
			func_141(uParam1, "Hao1", func_143(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_142(iParam0), 0, 1);
			break;
		
		case 25:
			func_141(uParam1, "Hunting1", func_143(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 26:
			func_141(uParam1, "Hunting2", func_143(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 27:
			func_141(uParam1, "Josh1", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 28:
			func_141(uParam1, "Josh2", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 29:
			func_141(uParam1, "Josh3", func_143(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 30:
			func_141(uParam1, "Josh4", func_143(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 31:
			func_141(uParam1, "Maude1", func_143(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 32:
			func_141(uParam1, "Minute1", func_143(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 33:
			func_141(uParam1, "Minute2", func_143(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 34:
			func_141(uParam1, "Minute3", func_143(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 35:
			func_141(uParam1, "MrsPhilips1", func_143(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 36:
			func_141(uParam1, "MrsPhilips2", func_143(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 37:
			func_141(uParam1, "Nigel1", func_143(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 38:
			func_141(uParam1, "Nigel1A", func_143(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 39:
			func_141(uParam1, "Nigel1B", func_143(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 40:
			func_141(uParam1, "Nigel1C", func_143(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 41:
			func_141(uParam1, "Nigel1D", func_143(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_142(iParam0), 1, 1);
			break;
		
		case 42:
			func_141(uParam1, "Nigel2", func_143(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 43:
			func_141(uParam1, "Nigel3", func_143(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 1);
			break;
		
		case 44:
			func_141(uParam1, "Omega1", func_143(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 45:
			func_141(uParam1, "Omega2", func_143(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 46:
			func_141(uParam1, "Paparazzo1", func_143(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 47:
			func_141(uParam1, "Paparazzo2", func_143(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 48:
			func_141(uParam1, "Paparazzo3", func_143(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 49:
			func_141(uParam1, "Paparazzo3A", func_143(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 50:
			func_141(uParam1, "Paparazzo3B", func_143(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 51:
			func_141(uParam1, "Paparazzo4", func_143(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 52:
			func_141(uParam1, "Rampage1", func_143(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 54:
			func_141(uParam1, "Rampage3", func_143(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 55:
			func_141(uParam1, "Rampage4", func_143(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 56:
			func_141(uParam1, "Rampage5", func_143(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_142(iParam0), 0, 0);
			break;
		
		case 53:
			func_141(uParam1, "Rampage2", func_143(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_142(iParam0), 1, 0);
			break;
		
		case 57:
			func_141(uParam1, "TheLastOne", func_143(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 58:
			func_141(uParam1, "Tonya1", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 59:
			func_141(uParam1, "Tonya2", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 60:
			func_141(uParam1, "Tonya3", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 61:
			func_141(uParam1, "Tonya4", func_143(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		case 62:
			func_141(uParam1, "Tonya5", func_143(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_142(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_141(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xA7B3
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

int func_142(int iParam0)//Position - 0xA844
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

struct<2> func_143(int iParam0)//Position - 0xAB8A
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_144(iParam0) };
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

struct<2> func_144(int iParam0)//Position - 0xABC2
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

int func_145()//Position - 0xB00F
{
	func_21();
	return Global_111560.f_2358.f_539.f_4321;
}

int func_146()//Position - 0xB028
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

int func_147()//Position - 0xB045
{
	if (func_150() && !func_146())
	{
		return 1;
	}
	if (func_149() && func_148())
	{
		return 1;
	}
	return 0;
}

bool func_148()//Position - 0xB077
{
	return Global_111278 > 0;
}

int func_149()//Position - 0xB085
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_150()//Position - 0xB09A
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_151()//Position - 0xB0C0
{
	if ((Global_111549 == func_30() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

bool func_152(int iParam0)//Position - 0xB0EB
{
	return MISC::IS_BIT_SET(iLocal_156, iParam0);
}

void func_153(int iParam0)//Position - 0xB0FB
{
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_155(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111546 = 0;
	func_154();
}

void func_154()//Position - 0xB131
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

void func_155(int iParam0)//Position - 0xB16E
{
	Global_111549 = iParam0;
}

int func_156(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xB17C
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
		iParam3 = func_30();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_48())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_5(0))
		{
			return 0;
		}
		if (func_147())
		{
			return 0;
		}
		if (func_197())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_23(func_145()))
		{
			if (func_139(100f, 1) != -1)
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
		if (!func_196(iParam3))
		{
			return 0;
		}
		if (func_23(func_145()))
		{
			if (func_195(func_145()) == 4 || func_195(func_145()) == 5)
			{
				return 0;
			}
		}
		if (func_23(func_145()))
		{
			if (!func_194(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_193(Global_111560.f_24990.f_43[iParam3]))
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
		if (func_191())
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
		if (!func_181(4))
		{
			return 0;
		}
		if (!func_102(5))
		{
			return 0;
		}
		if (func_180(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_180(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_196(30) && !func_180(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_23(func_145()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_179(iVar8))
				{
					if (func_157(iVar4))
					{
						if (!func_85(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_145() != iVar4)
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

bool func_157(int iParam0)//Position - 0xB516
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_158(iVar0);
}

int func_158(int iParam0)//Position - 0xB537
{
	return func_159(iParam0, 1);
}

int func_159(int iParam0, int iParam1)//Position - 0xB546
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_179(iParam0))
	{
		return 0;
	}
	func_160(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xB599
{
	func_161(func_172(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_161(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xB5B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_171(iParam0, iParam1))
	{
		iVar0 = func_170(iParam1);
		iVar1 = func_168(iParam0);
		iVar2 = (func_168(iParam0) - func_168(iParam1));
		iVar3 = (func_170(iParam0) - func_170(iParam1));
		iVar4 = (func_167(iParam0) - func_167(iParam1));
		iVar5 = (func_166(iParam0) - func_166(iParam1));
		iVar6 = (func_165(iParam0) - func_165(iParam1));
		iVar7 = (func_164(iParam0) - func_164(iParam1));
	}
	else
	{
		iVar0 = func_170(iParam0);
		iVar1 = func_168(iParam1);
		iVar2 = (func_168(iParam1) - func_168(iParam0));
		iVar3 = (func_170(iParam1) - func_170(iParam0));
		iVar4 = (func_167(iParam1) - func_167(iParam0));
		iVar5 = (func_166(iParam1) - func_166(iParam0));
		iVar6 = (func_165(iParam1) - func_165(iParam0));
		iVar7 = (func_164(iParam1) - func_164(iParam0));
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
		iVar4 = (iVar4 + func_163(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_162(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_162(float fParam0, float fParam1, float fParam2)//Position - 0xB7B8
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

int func_163(int iParam0, int iParam1)//Position - 0xB7FA
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

int func_164(int iParam0)//Position - 0xB89C
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_165(int iParam0)//Position - 0xB8AF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_166(int iParam0)//Position - 0xB8C2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_167(int iParam0)//Position - 0xB8D5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_168(int iParam0)//Position - 0xB8E7
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_169(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_169(bool bParam0, int iParam1, int iParam2)//Position - 0xB90C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_170(int iParam0)//Position - 0xB923
{
	return iParam0 & 15;
}

int func_171(int iParam0, int iParam1)//Position - 0xB930
{
	int iVar0;
	int iVar1;
	
	if (!func_179(iParam1) || !func_179(iParam0))
	{
		return 1;
	}
	iVar0 = func_168(iParam0);
	iVar1 = func_168(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	iVar1 = func_170(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_167(iParam0);
	iVar1 = func_167(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0xBA3C
{
	var uVar0;
	
	func_178(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_177(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_176(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_175(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_174(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_173(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_173(var uParam0, int iParam1)//Position - 0xBA82
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

void func_174(var uParam0, int iParam1)//Position - 0xBB08
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_175(var uParam0, int iParam1)//Position - 0xBB3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_170(*uParam0);
	iVar1 = func_168(*uParam0);
	if (iParam1 < 1 || iParam1 > func_163(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_176(var uParam0, int iParam1)//Position - 0xBB8C
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_177(var uParam0, int iParam1)//Position - 0xBBC6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_178(var uParam0, int iParam1)//Position - 0xBC01
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_179(int iParam0)//Position - 0xBC3D
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
	iVar0 = func_164(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_165(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_166(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_168(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_170(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_167(iParam0);
	if (iVar5 < 1 || iVar5 > func_163(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0, int iParam1)//Position - 0xBD19
{
	if (MISC::IS_BIT_SET(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0)//Position - 0xBD3C
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_145();
				if (!func_23(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110607) || Global_30738) || func_189()) || func_188(8, -1)) || func_187()) || func_186()) || func_185()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_190()) || Global_30738) || func_189()) || func_188(8, -1)) || func_185()) || func_187()) || func_186()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110607) || Global_30738) || func_189()) || func_188(8, -1)) || func_185()) || func_187()) || func_186()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_190()) || Global_110607) || Global_30738) || func_189()) || func_188(8, -1)) || func_187()) || func_186()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_190() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_188(8, -1)) || func_184()) || func_183()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_188(8, -1) || func_187()) || func_186()) || func_183()) || func_182())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_190()) || Global_30738) || func_189()) || func_188(8, -1)) || func_186()) || func_185()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_190()) || func_186()) || Global_110607) || Global_30738) || func_189()) || Global_42561) || func_188(8, -1)) || func_185()) || func_183()) || func_184()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_190()) || Global_110607) || Global_30738) || func_189()) || func_188(8, -1)) || func_185()) || func_183()) || func_187()) || func_186()) || func_184())
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

var func_182()//Position - 0xC45A
{
	return Global_98708.f_1;
}

int func_183()//Position - 0xC468
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_184()//Position - 0xC48E
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_185()//Position - 0xC4A8
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

bool func_186()//Position - 0xC4D2
{
	return Global_98721.f_346 > 0;
}

bool func_187()//Position - 0xC4E3
{
	return Global_98721.f_345 > 0;
}

bool func_188(int iParam0, int iParam1)//Position - 0xC4F4
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

var func_189()//Position - 0xC52F
{
	return Global_1312873;
}

int func_190()//Position - 0xC53B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_191()//Position - 0xC557
{
	func_192();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_192()//Position - 0xC57F
{
	if (func_22(14))
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
		Global_19486 = func_145();
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

bool func_193(int iParam0)//Position - 0xC621
{
	return func_171(func_172(), iParam0);
}

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xC633
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_145();
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

int func_195(int iParam0)//Position - 0xC717
{
	if (!func_23(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_196(int iParam0)//Position - 0xC73B
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_48())
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

int func_197()//Position - 0xC799
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

void func_198(bool bParam0, bool bParam1)//Position - 0xC7DD
{
	func_224();
	func_223();
	func_120(0);
	func_221(1, 1, 1, 0);
	func_219(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	func_218();
	func_217();
	func_216();
	if (func_225(Local_90[0 /*4*/]))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_90[0 /*4*/], true);
	}
	func_215(bParam1);
	func_214(bParam1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_171);
	func_212();
	func_210();
	func_111(0);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (bParam0)
	{
		func_199(-1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_199(int iParam0)//Position - 0xC872
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_151())
	{
		func_203(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111551 = MISC::GET_GAME_TIMER();
		func_202(30000);
		StringCopy(&cVar0, func_201(Global_111549, 1), 64);
		if (func_29(Global_111549) > 0)
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
	func_200(&Global_30795);
	Global_111550 = 0;
	func_155(-1);
}

void func_200(var uParam0)//Position - 0xC927
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

char* func_201(int iParam0, bool bParam1)//Position - 0xC964
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

void func_202(int iParam0)//Position - 0xCBAD
{
	Global_41947 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_203(int iParam0)//Position - 0xCBBF
{
	func_204(iParam0, 0, func_209(iParam0));
}

void func_204(int iParam0, int iParam1, int iParam2)//Position - 0xCBD4
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_172();
	func_207(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_206(iParam0, &uVar0);
	Var1 = { func_205(&uVar0) };
}

struct<16> func_205(var uParam0)//Position - 0xCC03
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_166(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_165(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_164(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_167(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_170(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_168(*uParam0), 64);
	return Var0;
}

void func_206(int iParam0, var uParam1)//Position - 0xCCD4
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_207(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xCCEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_168(*uParam0);
	iVar1 = func_170(*uParam0);
	iVar2 = func_167(*uParam0);
	iVar3 = func_166(*uParam0);
	iVar4 = func_165(*uParam0);
	iVar5 = func_164(*uParam0);
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
	iVar6 = func_163(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_163(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_208(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xCE6E
{
	func_178(uParam0, iParam1);
	func_177(uParam0, iParam2);
	func_176(uParam0, iParam3);
	func_174(uParam0, iParam5);
	func_175(uParam0, iParam4);
	func_173(uParam0, iParam6);
}

int func_209(int iParam0)//Position - 0xCEA6
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

void func_210()//Position - 0xD049
{
	Global_19671 = 0;
	func_211();
}

void func_211()//Position - 0xD059
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

void func_212()//Position - 0xD0B0
{
	Global_19671 = 0;
	func_213();
}

void func_213()//Position - 0xD0C0
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_214(bool bParam0)//Position - 0xD0E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_129(iVar0, bParam0);
		iVar0++;
	}
}

void func_215(bool bParam0)//Position - 0xD104
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_134(iVar0, bParam0);
		iVar0++;
	}
}

void func_216()//Position - 0xD127
{
}

void func_217()//Position - 0xD12F
{
}

void func_218()//Position - 0xD137
{
}

void func_219(bool bParam0)//Position - 0xD13F
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_220(9, 1);
		func_220(8, 1);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
		PED::SET_CREATE_RANDOM_COPS(1);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		func_220(9, 0);
		func_220(8, 0);
	}
}

void func_220(int iParam0, bool bParam1)//Position - 0xD212
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_30981, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_30981, iParam0);
	}
}

void func_221(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xD234
{
	if (bParam0)
	{
		func_210();
	}
	if (bParam1)
	{
		if (!func_222() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_222()//Position - 0xD274
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_223()//Position - 0xD296
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_123(&(Local_49[iVar0 /*5*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_123(&(Local_90[iVar0 /*4*/].f_1));
		iVar0++;
	}
}

void func_224()//Position - 0xD2DC
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_155 = 0;
	iLocal_156 = 0;
}

int func_225(int iParam0)//Position - 0xD2F0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

