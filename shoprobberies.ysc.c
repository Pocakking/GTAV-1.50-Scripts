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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<487> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	bool bLocal_574 = 0;
	int iLocal_575 = 0;
	bool bLocal_576 = 0;
	int iLocal_577 = 0;
	char* sLocal_578 = NULL;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	bool bLocal_582 = 0;
	int iLocal_583 = 0;
	struct<33> Local_584 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_617 = 1;
	int iLocal_618[3] = { 0, 0, 0 };
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	int iLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_630 = 3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(98))
	{
		func_321();
	}
	if (func_318(0))
	{
		bLocal_574 = true;
		iLocal_571 = PLAYER::GET_MAX_WANTED_LEVEL();
	}
	if (Global_3)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_317(14))
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_316(&Local_584, 3);
	func_307(&uScriptParam_0);
	vVar0 = { 24.088f, -1345.623f, 29.5082f };
	vVar3 = { 24.94562f, -1344.954f, 29.49f };
	vVar6 = { vVar0 - vVar3 };
	vVar6 = { vVar3 - vVar0 };
	fVar12 = 147.297f;
	vVar9 = { -1228.443f, -905.3416f, 13.523f };
	vVar6 = { vVar9 - Vector(12.31f, -907.8234f, -1222.331f) };
	vVar6 = { func_306(vVar6, fVar12) };
	if ((((func_305() && !func_304()) || Global_111504) || Global_30738) || Global_111549 != -1)
	{
		if (func_305() && !func_304())
		{
		}
		else if (Global_111504)
		{
		}
		else if (Global_30738)
		{
		}
		else if (Global_111549 != -1)
		{
		}
		if (!func_303())
		{
			func_301(&(Local_68.f_470), 64);
			func_299(1);
		}
		else
		{
			func_299(0);
		}
		func_321();
	}
	else if (Global_111560.f_20030[iLocal_568] > 0)
	{
		if (func_298())
		{
			func_296(iLocal_568, Local_68.f_486.f_9.f_2, &vVar13, &vVar16);
			MISC::CLEAR_AREA_OF_PEDS(Local_68.f_181, 15f, 0);
			iLocal_567 = PED::ADD_SCENARIO_BLOCKING_AREA(vVar13, vVar16, 0, 1, 1, 1);
			if (!func_303())
			{
				func_299(1);
			}
			else
			{
				func_299(0);
				func_294(&(Local_68.f_470), 512);
			}
			iLocal_67 = 2;
		}
		else
		{
			func_299(0);
		}
		if (!func_293())
		{
			iLocal_64 = 10;
			iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar19 == 0)
			{
				Local_68.f_2.f_12 = 1;
			}
			else
			{
				Local_68.f_2.f_12 = 0;
			}
		}
	}
	else
	{
		func_299(0);
	}
	while (true)
	{
		func_290(&Local_584);
		if (func_285())
		{
			func_321();
		}
		if (!bLocal_574)
		{
			if (func_318(0))
			{
				func_284();
				bLocal_574 = true;
			}
		}
		switch (iLocal_67)
		{
			case 0:
				func_255();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_303())
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_568)) && !func_3(PLAYER::PLAYER_ID()))
						{
							HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
							func_2("SHOP_CLOSED", func_5(iLocal_568));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_568)))
					{
						HUD::CLEAR_HELP(1);
					}
					if (func_1(Local_68.f_470, 512))
					{
						func_299(1);
						func_301(&(Local_68.f_470), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)//Position - 0x36C
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char[4] cParam0, char* sParam1)//Position - 0x37B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_3(int iParam0)//Position - 0x397
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2508348;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_4(char* sParam0, char* sParam1)//Position - 0x403
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_5(int iParam0)//Position - 0x41C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case -2:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()//Position - 0x4C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_252();
	func_249();
	func_244();
	func_238();
	func_220();
	func_198();
	func_192();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_68))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_68, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_576 = false;
	if (!PED::IS_PED_INJURED(Local_68.f_2) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_68.f_2, 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_2)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68.f_2))
				{
					if (!func_26() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
					{
						bLocal_576 = true;
					}
				}
			}
		}
	}
	if (bLocal_576)
	{
		if (!iLocal_577 && func_1(Local_68.f_470, 4))
		{
			iVar2 = func_25(PLAYER::PLAYER_PED_ID());
			iVar3 = WEAPON::GET_WEAPONTYPE_GROUP(iVar2);
			if (iVar3 == 416676503)
			{
				sLocal_578 = "hold_up_head_additive_pistol";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == 1159398588 || iVar3 == 970310034) || iVar3 == 860033945) || iVar3 == -1212426201) || iVar3 == -957766203)
			{
				sLocal_578 = "hold_up_head_additive_rifle";
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_578 = "";
			}
			iLocal_577 = 1;
		}
	}
	else if (iLocal_577)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_578))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_578, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_578, -8f);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64)
	{
		case 0:
			if (func_303())
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_64 = 12;
				}
				else
				{
					iLocal_52 = 2;
					iLocal_59 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68, 0))
						{
							if ((func_25(Local_68) == joaat("weapon_unarmed") || func_25(Local_68) == joaat("object")) || func_25(Local_68) == joaat("weapon_briefcase"))
							{
								iLocal_62 = 1;
								iLocal_64 = 1;
							}
							else if (!func_1(Local_68.f_470, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_62 = 2;
									iLocal_64 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_62 = 3;
									iLocal_64 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_62 = 4;
									iLocal_64 = 5;
								}
								else
								{
									iLocal_64 = 2;
								}
								func_294(&(Local_68.f_470), 1);
							}
						}
						else
						{
							iLocal_64 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_52 = 2;
				iLocal_64 = 3;
			}
			else if (!func_303() && func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1))
			{
				iLocal_64 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_68.f_470, 2))
			{
				iLocal_53 = 1;
				iLocal_58 = 1;
				func_294(&(Local_68.f_470), 2);
			}
			iLocal_64 = 5;
			break;
		
		case 2:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_64 = 5;
			break;
		
		case 3:
			iLocal_53 = 6;
			iLocal_58 = 4;
			iLocal_64 = 5;
			break;
		
		case 5:
			if (!func_303() && !func_1(Local_68.f_470, 1))
			{
				iLocal_64 = 0;
			}
			break;
		
		case 6:
			if (iLocal_53 >= 13)
			{
				if (Local_68.f_2.f_12)
				{
					if (!func_20())
					{
						iLocal_64 = 7;
					}
				}
				else
				{
					iLocal_64 = 8;
				}
				iLocal_54 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_68.f_470, 256))
			{
				func_19();
				MISC::CLEAR_BIT(&Global_94550, 3);
				iLocal_64 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_68.f_470, 16))
			{
				if (func_17())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
					{
						if (!PED::IS_PED_RAGDOLL(Local_68.f_2))
						{
							if (func_303())
							{
								if (Local_68.f_486 >= 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
									{
										TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1, 0, 0, 0, 0);
										iLocal_60 = 10;
									}
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Local_68.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
								iLocal_60 = 10;
							}
						}
					}
					MISC::CLEAR_BIT(&Global_94550, 3);
					iLocal_64 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_61 = 7;
			if (iLocal_65 == 1)
			{
				iLocal_64 = 8;
			}
			else
			{
				iLocal_64 = 13;
			}
			break;
		
		case 10:
			if (func_303())
			{
				iLocal_64 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_68.f_477)))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 28;
				}
				else
				{
					iLocal_53 = 29;
				}
				func_12(&(Local_68.f_477));
			}
			else if (func_9(&(Local_68.f_477)) > 5f)
			{
				func_16(1, 0);
				iLocal_64 = 13;
			}
			else if (func_9(&(Local_68.f_477)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_60 != 12)
					{
						iLocal_60 = 12;
						if (!Local_68.f_2.f_12)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_68.f_477)))
			{
				func_7();
				iLocal_53 = 30;
				iLocal_60 = 12;
				func_12(&(Local_68.f_477));
			}
			else if (func_9(&(Local_68.f_477)) > 3f)
			{
				iLocal_64 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()//Position - 0xA9F
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	TASK::TASK_COWER(0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_68.f_2, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	func_294(&(Local_68.f_470), 128);
}

void func_8()//Position - 0xAFE
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_566);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_566);
		TASK::TASK_COWER(0, 5000);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_566);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_2, iLocal_566);
	}
}

float func_9(int iParam0)//Position - 0xB4C
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)//Position - 0xB8B
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_11(int iParam0)//Position - 0xBE3
{
	return MISC::IS_BIT_SET(*iParam0, 2);
}

void func_12(int iParam0)//Position - 0xBF3
{
	if (!func_15(iParam0))
	{
		func_13(iParam0);
	}
}

void func_13(int iParam0)//Position - 0xC0B
{
	func_14(iParam0, 0f);
}

void func_14(int iParam0, float fParam1)//Position - 0xC1A
{
	iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_15(int iParam0)//Position - 0xC48
{
	return MISC::IS_BIT_SET(*iParam0, 1);
}

void func_16(int iParam0, bool bParam1)//Position - 0xC58
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < iParam0 && (!bLocal_574 || (bLocal_574 && iParam0 < iLocal_571)))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), iParam0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
		Local_68.f_158 = 1;
		if (bParam1)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(iParam0);
		}
		else
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
	else if (bLocal_574 && iParam0 > iLocal_571)
	{
	}
}

int func_17()//Position - 0xCCB
{
	func_18();
	switch (iLocal_56)
	{
		case 0:
			Local_68.f_486 = PED::CREATE_SYNCHRONIZED_SCENE(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
			if (!PED::IS_PED_DEAD_OR_DYING(Local_68.f_2, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0))
				{
					if (Local_68.f_486 >= 0)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_68.f_28, true, 0);
						ENTITY::SET_ENTITY_DYNAMIC(Local_68.f_28, 1);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_57 = 1;
					iLocal_60 = 5;
					iLocal_56 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_68.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.478f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0))
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4, Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
							Local_68.f_28.f_7 = { Local_68.f_28.f_7, Local_68.f_28.f_7.f_1, (Local_68.f_28.f_7.f_2 + 0.2f) };
						}
						iLocal_56 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.447f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0))
						{
							if (!ENTITY::IS_ENTITY_VISIBLE(Local_68.f_28))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_68.f_28, true, 0);
							}
						}
					}
					if (Local_68.f_467)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_RATE(Local_68.f_486) != 1.45f)
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(Local_68.f_486, 1.45f);
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.894f)
					{
						iLocal_56 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0))
			{
				if (Local_68.f_486 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
					{
						if (iLocal_55 >= 4)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.871f)
							{
								iLocal_57 = 4;
							}
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_68.f_28, -16f, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_68.f_28);
						}
					}
				}
			}
			iLocal_56 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()//Position - 0xF70
{
	if (Local_68.f_486 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) >= 0f)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.117f)
				{
					iLocal_55 = 1;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.154f)
				{
					iLocal_55 = 2;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.477f)
				{
					iLocal_55 = 3;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.487f)
				{
					iLocal_55 = 4;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.809f)
				{
					iLocal_55 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.871f)
				{
					iLocal_55 = 6;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.894f)
				{
					iLocal_55 = 7;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) < 0.999f)
				{
					iLocal_55 = 8;
				}
				else if (iLocal_55 == 9)
				{
				}
			}
			else
			{
				iLocal_55 = 0;
			}
		}
		else if (iLocal_55 == 0)
		{
		}
	}
	else
	{
		iLocal_55 = 0;
	}
}

void func_19()//Position - 0x1078
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_68.f_2, joaat("weapon_pumpshotgun"), false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_68.f_2, -2065892691);
		TASK::OPEN_SEQUENCE_TASK(&(Local_68.f_2.f_22));
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_68, 2000, 0);
		TASK::TASK_SHOOT_AT_ENTITY(0, Local_68, 4000, -957453492);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 25f, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_68.f_2.f_22);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_2, Local_68.f_2.f_22);
	}
}

int func_20()//Position - 0x1100
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1122
{
	vector3 vVar0;
	int iVar3;
	
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	if (MISC::IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_22(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x129B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x1369
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

int func_24()//Position - 0x13C7
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_68, 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_68, 0);
			bVar0 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, true, 0))
			{
				return 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, true, 0))
			{
				return 1;
			}
			else if (Local_68.f_199 != -1f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0x14AF
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()//Position - 0x14C3
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()//Position - 0x14E0
{
	switch (iLocal_52)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_111560.f_20030.f_20, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_111560.f_20030.f_20), 1);
								iLocal_52 = 1;
								break;
						}
						if (iLocal_65 > 0)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 1);
								iLocal_52 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_52 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_111560.f_20030.f_20, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_111560.f_20030.f_20), 2);
								iLocal_52 = 4;
								break;
						}
					}
					else
					{
						iLocal_52 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_111560.f_20030.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_111560.f_20030.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_52 = 4;
			break;
		
		case 4:
			if ((!func_303() && func_33("SHR_HOLDUP_1")) && !func_1(Global_111560.f_20030.f_20, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_52 = 2;
			}
			if ((!func_303() && func_33("SHR_SNK_TUT")) && !func_1(Global_111560.f_20030.f_20, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_52 = 2;
			}
			break;
	}
}

int func_28(char* sParam0)//Position - 0x170D
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_29(char* sParam0, int iParam1)//Position - 0x1720
{
	int iVar0;
	int iVar1;
	
	if (Global_110200 && iParam1)
	{
		if (func_28(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_111560.f_20405[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111560.f_20405.f_145 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_111560.f_20405.f_145 - 1));
			Global_111560.f_20405.f_145 = (Global_111560.f_20405.f_145 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()//Position - 0x17CD
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

void func_31(int iParam0)//Position - 0x18ED
{
	StringCopy(&(Global_111560.f_20405[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_111560.f_20405[iParam0 /*16*/].f_4), "", 16);
	Global_111560.f_20405[iParam0 /*16*/].f_8 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_9 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_11 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_10 = -1;
	Global_111560.f_20405[iParam0 /*16*/].f_12 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_13 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_14 = 0;
	Global_111560.f_20405[iParam0 /*16*/].f_15 = 0;
}

void func_32(int iParam0, int iParam1)//Position - 0x1987
{
	Global_111560.f_20405[iParam0 /*16*/] = { Global_111560.f_20405[iParam1 /*16*/] };
	Global_111560.f_20405[iParam0 /*16*/].f_4 = { Global_111560.f_20405[iParam1 /*16*/].f_4 };
	Global_111560.f_20405[iParam0 /*16*/].f_8 = Global_111560.f_20405[iParam1 /*16*/].f_8;
	Global_111560.f_20405[iParam0 /*16*/].f_10 = Global_111560.f_20405[iParam1 /*16*/].f_10;
	Global_111560.f_20405[iParam0 /*16*/].f_9 = Global_111560.f_20405[iParam1 /*16*/].f_9;
	Global_111560.f_20405[iParam0 /*16*/].f_11 = Global_111560.f_20405[iParam1 /*16*/].f_11;
	Global_111560.f_20405[iParam0 /*16*/].f_12 = Global_111560.f_20405[iParam1 /*16*/].f_12;
	Global_111560.f_20405[iParam0 /*16*/].f_13 = Global_111560.f_20405[iParam1 /*16*/].f_13;
	Global_111560.f_20405[iParam0 /*16*/].f_14 = Global_111560.f_20405[iParam1 /*16*/].f_14;
	Global_111560.f_20405[iParam0 /*16*/].f_15 = Global_111560.f_20405[iParam1 /*16*/].f_15;
}

int func_33(char* sParam0)//Position - 0x1A97
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_111560.f_20405[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1AD2
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x1AF3
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
		func_30();
	}
}

int func_36(char* sParam0)//Position - 0x1CC6
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_110203))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()//Position - 0x1CED
{
	if (func_303())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
		{
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
	}
	switch (iLocal_53)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_GREET", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, func_46(bLocal_582, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_53 = 14;
			break;
		
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_53 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "BUMP", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_579)
					{
						iLocal_53 = 7;
						iLocal_579 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_580)
					{
						iLocal_53 = 8;
						iLocal_580 = 1;
					}
				}
				if (!func_15(&(Local_68.f_483)))
				{
					func_12(&(Local_68.f_483));
				}
				else if (func_11(&(Local_68.f_483)))
				{
					func_43(&(Local_68.f_483));
				}
				else if (func_9(&(Local_68.f_483)) > 10f)
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_294(&(Local_68.f_470), 32);
					}
				}
			}
			else if (func_15(&(Local_68.f_483)) && !func_11(&(Local_68.f_483)))
			{
				func_42(&(Local_68.f_483));
			}
			break;
		
		case 12:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_68.f_471));
				if (Local_68.f_2.f_11)
				{
					iLocal_53 = 37;
				}
				else
				{
					iLocal_53 = 13;
				}
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 13:
			if (func_41(&(Local_68.f_471)) > 3f)
			{
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else if (Local_68.f_458)
				{
					iLocal_53 = 17;
				}
				else if (Local_68.f_459)
				{
					iLocal_53 = 18;
				}
				else if (Local_68.f_460)
				{
					iLocal_53 = 19;
				}
				else if (Local_68.f_461)
				{
					iLocal_53 = 20;
				}
				else if (Local_68.f_462)
				{
					iLocal_53 = 21;
				}
				else
				{
					iLocal_53 = 16;
				}
				func_40(&(Local_68.f_471));
			}
			break;
		
		case 16:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 17:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 18:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 20:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 21:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_SCARED", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 22:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_BRAVE", 8);
				}
				func_294(&(Local_68.f_470), 256);
				iLocal_53 = 37;
			}
			break;
		
		case 23:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (Local_68.f_28.f_14)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
					{
						func_48(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_53 = 37;
			}
			else
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 24:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68.f_46.f_4[0], 0))
			{
				VEHICLE::SET_VEHICLE_SIREN(Local_68.f_46.f_4[0], false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[0], 0))
			{
				func_48(Local_68.f_46[0], "SURROUNDED", 15);
			}
			iLocal_53 = 25;
			break;
		
		case 25:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_48(PLAYER::PLAYER_PED_ID(), "SPOT_POLICE", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 26:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_53 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 29:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_53 = 37;
			break;
		
		case 30:
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				func_48(Local_68.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_53 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_53 = 37;
			}
			break;
		
		case 33:
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_68.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_48(PLAYER::PLAYER_PED_ID(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_68.f_471));
				iLocal_53 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_68.f_471)) > 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_SELL", 3);
				}
				iLocal_53 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
				{
					func_48(Local_68.f_2, "SHOP_STEAL", 3);
				}
				iLocal_53 = 37;
			}
			break;
	}
}

void func_38()//Position - 0x252C
{
	Global_19671 = 0;
	func_39();
}

void func_39()//Position - 0x253C
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_40(int iParam0)//Position - 0x255D
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_41(var uParam0)//Position - 0x2573
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(int iParam0)//Position - 0x25AF
{
	if (func_15(iParam0))
	{
		if (!func_11(iParam0))
		{
			iParam0->f_2 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

void func_43(int iParam0)//Position - 0x25E9
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			iParam0->f_1 = (func_10(MISC::IS_BIT_SET(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			MISC::CLEAR_BIT(iParam0, 2);
		}
	}
}

int func_44()//Position - 0x2627
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()//Position - 0x265B
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)//Position - 0x268F
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()//Position - 0x26A6
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)//Position - 0x26C7
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)//Position - 0x26DE
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

bool func_50()//Position - 0x28D3
{
	return Global_22209;
}

void func_51()//Position - 0x28DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_303() && iLocal_66 != 3)
	{
		iVar2 = 0;
		while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
			switch (iVar0)
			{
				case 142:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_294(&(Local_68.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_294(&(Local_68.f_470), 8);
						}
					}
					break;
				
				case 141:
					SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar1))
						{
							if (iVar1 != func_52(Local_68.f_2) && iVar1 != func_52(PLAYER::PLAYER_PED_ID()))
							{
								func_294(&(Local_68.f_470), 8);
							}
						}
						if (!ENTITY::IS_ENTITY_A_PED(iVar1) && !ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							func_294(&(Local_68.f_470), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)//Position - 0x29FC
{
	return iParam0;
}

int func_53(int iParam0)//Position - 0x2A06
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Local_68.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()//Position - 0x2AC3
{
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_303())
		{
			if (!MISC::IS_BIT_SET(Local_68.f_162.f_18, 0))
			{
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_68.f_162)
				{
					Local_68.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12)
				{
					if (iVar0 < Local_68.f_162)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(uVar1[iVar13]) && !PED::IS_PED_INJURED(uVar1[iVar13])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar13], 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uVar1[iVar13], PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar13], true) };
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				MISC::SET_BIT(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_68.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_68.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_162[iVar0], 0))
				{
					if (MISC::IS_BIT_SET(Local_68.f_162.f_18, 1))
					{
						if ((MISC::GET_GAME_TIMER() % 1500) < 50)
						{
						}
						ENTITY::SET_ENTITY_VISIBLE(Local_68.f_162[iVar0], false, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_68.f_162[iVar0], false, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_162[iVar0], true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_68.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_68.f_162[iVar0], true, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_68.f_162[iVar0], true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (MISC::IS_BIT_SET(Local_68.f_162.f_18, 0))
			{
				MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_68.f_162[iVar0]) && !PED::IS_PED_INJURED(Local_68.f_162[iVar0])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_162[iVar0], 0))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_68.f_162[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_68.f_162[iVar0], true, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_68.f_162[iVar0], true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_162[iVar0], false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()//Position - 0x2D74
{
	switch (iLocal_622)
	{
		case 0:
			if (func_303())
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
				STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
				STREAMING::REQUEST_ANIM_DICT("misscommon@response");
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_64(iLocal_568), false);
				STREAMING::REQUEST_MODEL(joaat("prop_choc_ego"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_meto"));
				STREAMING::REQUEST_MODEL(joaat("prop_choc_pq"));
				if (!bLocal_574)
				{
					STREAMING::REQUEST_MODEL(Local_68.f_46.f_26);
					STREAMING::REQUEST_MODEL(Local_68.f_46.f_27);
				}
				iLocal_622 = 1;
			}
			break;
		
		case 1:
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER", false, -1))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_574)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_68.f_46.f_26))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(Local_68.f_46.f_27))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_568, 0))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 4))
			{
				if (!func_1(Local_68.f_470, 1024))
				{
					iLocal_618[0] = OBJECT::CREATE_OBJECT(func_61(0), func_60(0), true, true, false);
					iLocal_618[1] = OBJECT::CREATE_OBJECT(func_61(1), func_60(1), true, true, false);
					iLocal_618[2] = OBJECT::CREATE_OBJECT(func_61(2), func_60(2), true, true, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_618[0], false, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_618[1], false, 0);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_618[2], false, 0);
					func_294(&(Local_68.f_470), 1024);
				}
				func_294(&(Local_68.f_470), 4);
				iLocal_622 = 2;
			}
			break;
		
		case 2:
			if (!func_303())
			{
				func_56();
				func_301(&(Local_68.f_470), 4);
				iLocal_622 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 4))
			{
				func_56();
				func_301(&(Local_68.f_470), 4);
			}
			break;
	}
}

void func_56()//Position - 0x2F7E
{
	STREAMING::REMOVE_ANIM_DICT("oddjobs@shop_robbery@rob_till");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\MARKET_CASH_REGISTER");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_64(iLocal_568));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_ego"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_meto"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_choc_pq"));
	func_57(1, iLocal_568);
	if (!bLocal_574)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_68.f_46.f_26);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_68.f_46.f_27);
	}
}

void func_57(bool bParam0, int iParam1)//Position - 0x2FE7
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8385 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22350.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_58(int iParam0)//Position - 0x30A5
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)//Position - 0x30CE
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

Vector3 func_60(int iParam0)//Position - 0x316B
{
	switch (iParam0)
	{
		case 0:
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_68.f_486.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)//Position - 0x31D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)//Position - 0x3213
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)//Position - 0x3309
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_64(int iParam0)//Position - 0x33AB
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()//Position - 0x3457
{
	switch (iLocal_623)
	{
		case 0:
			if (func_303())
			{
				STREAMING::REQUEST_ANIM_DICT(Local_68.f_486.f_1);
				iLocal_623 = 1;
			}
			break;
		
		case 1:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_68.f_486.f_1))
			{
				return;
			}
			if (!func_1(Local_68.f_470, 16))
			{
				func_294(&(Local_68.f_470), 16);
				iLocal_623 = 2;
			}
			break;
		
		case 2:
			if (!func_303() && iLocal_65 != 1)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_68.f_486.f_1);
				func_301(&(Local_68.f_470), 16);
				iLocal_623 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_68.f_470, 16))
			{
				STREAMING::REMOVE_ANIM_DICT(Local_68.f_486.f_1);
				func_301(&(Local_68.f_470), 16);
			}
			break;
	}
}

void func_66()//Position - 0x3520
{
	switch (iLocal_642)
	{
		case 0:
			if (Local_68.f_158)
			{
				iLocal_642 = 1;
			}
			break;
		
		case 1:
			if (func_303())
			{
				if (func_15(&(Local_68.f_158.f_1)))
				{
					func_40(&(Local_68.f_158.f_1));
				}
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				func_13(&(Local_68.f_158.f_1));
				iLocal_642 = 2;
			}
			break;
		
		case 2:
			if (func_303())
			{
				iLocal_642 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()//Position - 0x35BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	char* sVar7;
	var uVar8;
	
	func_191();
	if (((((iLocal_60 == 1 || iLocal_60 == 2) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && !PED::IS_PED_INJURED(Local_68)) && !func_190(-1082130432)) && !PED::IS_PED_INJURED(Local_68.f_2))
	{
		iVar1 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		if (((iLocal_66 != 2 && iLocal_66 != 3) && iLocal_66 != 4) && func_303())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		iVar6 = 0;
		switch (iLocal_66)
		{
			case 0:
				if (func_1(Local_68.f_470, 4) && func_25(Local_68) == joaat("weapon_unarmed"))
				{
					if (func_189(iLocal_568, &(Local_68.f_486.f_6), Local_68.f_486.f_9.f_2, &(Local_68.f_102.f_26[0 /*3*/]), &(Local_68.f_102.f_26[1 /*3*/]), &(Local_68.f_102.f_33), &(Local_68.f_102.f_36)))
					{
						vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Local_68.f_102.f_33, true) < 5f)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_68.f_102.f_26[0 /*3*/], Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0, true, 0))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_68.f_102.f_33, 135f))
								{
									if ((MISC::GET_GAME_TIMER() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_188())
									{
										func_187("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_186(&(Local_68.f_469), 4, "SHR_MENU", 0, 0, 0, 0);
									MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
									MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 0);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_68.f_102.f_33, 135f) || !func_25(Local_68) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						HUD::CLEAR_HELP(1);
					}
					Local_68.f_102.f_22 = -1;
					func_185(&(Local_68.f_469));
					iLocal_66 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_188()) && !func_184(Local_68.f_469, 0))
				{
					func_187("SHR_MENU");
				}
				if ((!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_182(Local_68.f_469, 1))
					{
						if (func_28("SHR_MENU"))
						{
							HUD::CLEAR_HELP(1);
						}
						MISC::SET_BIT(&(Local_68.f_162.f_18), 1);
						func_13(&(Local_68.f_102.f_53));
						func_185(&(Local_68.f_469));
						func_181(23, 1);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_68.f_2))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;
			
			case 2:
				if (!CAM::DOES_CAM_EXIST(iLocal_641))
				{
					iLocal_641 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_180(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &(Local_68.f_102), &(Local_68.f_102.f_3), &uVar8);
				CAM::SET_CAM_COORD(iLocal_641, Local_68.f_102);
				CAM::SET_CAM_ROT(iLocal_641, Local_68.f_102.f_3, 2);
				CAM::SET_CAM_FOV(iLocal_641, 35f);
				CAM::SHAKE_CAM(iLocal_641, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_641, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					func_294(&(Local_68.f_470), 2048);
				}
				Local_68.f_102.f_46 = func_64(iLocal_568);
				Local_68.f_102.f_23 = 0;
				Local_68.f_102.f_24 = 3;
				func_179(0, 0);
				func_178(1, 1, 0, 0, 0);
				func_177(1, 2, 1, 1, 1);
				func_176(func_5(iLocal_568));
				func_174(1, Local_68.f_102.f_46, Local_68.f_102.f_46);
				func_173();
				func_169(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_169(0, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(0), 0);
				func_169(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_169(1, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(1), 0);
				func_169(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_169(2, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(2), 0);
				func_164(0);
				func_163(Local_68.f_102.f_23, 1, 1);
				func_162("SNK_ITEM1_D", 0, 0);
				func_161(201, "ITEM_SELECT", -1, 0);
				func_161(202, "ITEM_BACK", -1, 0);
				func_161(203, "SNK_LIFT", -1, 0);
				iLocal_66 = 3;
				break;
			
			case 3:
				iVar6 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_INPUT_JUST_DISABLED(2))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
						PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_158(0, 0, 0, 1);
						func_157(0, -1, 1);
						if (func_156())
						{
							if (Global_4268347 != Local_68.f_102.f_23)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_68.f_102.f_23 = Global_4268347;
								func_163(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_155(Local_68.f_102.f_23);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar7))
								{
									func_162(sVar7, 0, 0);
								}
							}
							else
							{
								iVar6 = 1;
							}
						}
					}
				}
				func_116(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0, -1);
				func_112();
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201) || iVar6 == 1)
				{
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43)
					{
						Local_68.f_102.f_44 = 1;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else
					{
						Local_68.f_102.f_44 = 0;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 203))
				{
					iLocal_66 = 6;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_111();
				}
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					iLocal_66 = 7;
					Local_68.f_102.f_45 = MISC::GET_GAME_TIMER();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_111();
				}
				break;
			
			case 4:
				func_116(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0, -1);
				switch (Local_68.f_102.f_23)
				{
					case 0:
						iVar0 = func_168(Local_68.f_102.f_23);
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_168(Local_68.f_102.f_23);
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_168(Local_68.f_102.f_23);
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				func_69(func_105(), 98, iVar0);
				if (!Local_68.f_102.f_39)
				{
					iLocal_53 = 34;
					Local_68.f_102.f_39 = 1;
				}
				func_13(&(Local_68.f_102.f_53));
				iLocal_66 = 3;
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_574)
					{
					}
					iLocal_66 = 6;
				}
				break;
			
			case 6:
				switch (Local_68.f_102.f_23)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar2, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar1 + 15, 0);
						}
						break;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				func_181(23, 0);
				iLocal_53 = 35;
				if (!PED::IS_PED_INJURED(Local_68.f_2) && func_1(Local_68.f_470, 4))
				{
					TASK::TASK_PLAY_ANIM(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_66 = 8;
				break;
			
			case 7:
				if ((MISC::GET_GAME_TIMER() - Local_68.f_102.f_45) > 1000)
				{
					iLocal_66 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2, 193);
					PAD::SET_INPUT_EXCLUSIVE(2, 202);
					PAD::SET_INPUT_EXCLUSIVE(2, 188);
					PAD::SET_INPUT_EXCLUSIVE(2, 187);
					PAD::SET_INPUT_EXCLUSIVE(2, 189);
					PAD::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_66 != 8 && func_1(Local_68.f_470, 4))
		{
			if ((iLocal_66 == 3 || iLocal_66 == 2) || iLocal_66 == 4)
			{
				func_111();
			}
			iLocal_66 = 8;
		}
		if (func_28("SHR_SNACKS"))
		{
			HUD::CLEAR_HELP(1);
			func_185(&(Local_68.f_469));
		}
		if (func_28("SHR_MENU"))
		{
			HUD::CLEAR_HELP(1);
			func_185(&(Local_68.f_469));
		}
		if (MISC::IS_BIT_SET(Local_68.f_162.f_18, 1) && iLocal_624 < 2)
		{
			MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
		}
		if (func_1(Local_68.f_470, 4))
		{
			func_68();
		}
	}
}

void func_68()//Position - 0x3F4F
{
	if (func_1(Local_68.f_470, 2048))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_301(&(Local_68.f_470), 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_641))
	{
		CAM::DESTROY_CAM(iLocal_641, 0);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)//Position - 0x3FC0
{
	if (func_104(iParam0) == 3)
	{
		return 0;
	}
	if (func_104(iParam0) == 4)
	{
		return 0;
	}
	return func_70(func_104(iParam0), 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3FF4
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
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
					func_102(99, 1);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_81(5))
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
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_property"), iParam3);
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
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
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
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
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
	func_72(iParam0);
	if (Global_41396 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)//Position - 0x45F4
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

void func_72(int iParam0)//Position - 0x4876
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

void func_73(int iParam0)//Position - 0x48D0
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_79(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_79(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_79(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_79(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_76(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_76(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_76(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_76(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_76(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_76(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_75() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_75() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_74(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(int iParam0)//Position - 0x4A60
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

int func_75()//Position - 0x4B5C
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4B69
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)//Position - 0x4B99
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
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

int func_78()//Position - 0x4BCD
{
	return Global_1312745;
}

int func_79(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4BD9
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
		iParam2 = func_78();
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

void func_80(int iParam0)//Position - 0x522B
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_81(int iParam0)//Position - 0x524B
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
		return func_83(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_83(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_83(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_83(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_82(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_82(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_82(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_82(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_82(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_82(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_75() /*10828*/].f_6168.f_10, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x53FB
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_77(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x542D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_78();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)//Position - 0x546A
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

int func_85(int iParam0, int iParam1)//Position - 0x5806
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_78();
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

int func_86(bool bParam0)//Position - 0x5B7F
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
		func_100(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)//Position - 0x5C36
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)//Position - 0x5C51
{
	if (func_317(14) && !func_99(iParam0))
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
	if (func_98(&Global_4269915))
	{
		if (func_96(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_4269915, iParam0))
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

int func_89(var uParam0, int iParam1)//Position - 0x5CEE
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)//Position - 0x5D9F
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)//Position - 0x5E1A
{
	return (*uParam0)[iParam1] == 78;
}

void func_92(var uParam0)//Position - 0x5E2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_4269914 - 0.5f));
}

void func_93(var uParam0, int iParam1)//Position - 0x5E5F
{
	(*uParam0)[iParam1] = 78;
}

void func_94(var uParam0, float fParam1)//Position - 0x5E6F
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

float func_95(var uParam0)//Position - 0x5E8C
{
	return uParam0->f_80;
}

bool func_96(var uParam0, int iParam1)//Position - 0x5E98
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(var uParam0, int iParam1)//Position - 0x5EAA
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

bool func_98(var uParam0)//Position - 0x5ED7
{
	return uParam0->f_79 == 1;
}

int func_99(int iParam0)//Position - 0x5EE5
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

int func_100(int iParam0, int iParam1)//Position - 0x5F35
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

void func_101(int iParam0, int iParam1)//Position - 0x5F86
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)//Position - 0x5FA9
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

void func_103()//Position - 0x6006
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

int func_104(int iParam0)//Position - 0x607B
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_105()//Position - 0x608C
{
	func_106();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_106()//Position - 0x60A5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_109(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_108(PLAYER::PLAYER_PED_ID());
			if (func_107(iVar0) && (!func_317(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_107(Global_111560.f_2358.f_539.f_4321))
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

bool func_107(int iParam0)//Position - 0x61A2
{
	return iParam0 < 3;
}

int func_108(int iParam0)//Position - 0x61AE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_109(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_109(int iParam0)//Position - 0x61EB
{
	if (func_107(iParam0))
	{
		return func_110(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_110(int iParam0)//Position - 0x6210
{
	return Global_1798[iParam0 /*29*/];
}

void func_111()//Position - 0x621F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_301(&(Local_68.f_470), 2048);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	func_181(23, 0);
	Local_68.f_102.f_37 = 0;
	MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
	if (CAM::DOES_CAM_EXIST(iLocal_641))
	{
		CAM::DESTROY_CAM(iLocal_641, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
}

void func_112()//Position - 0x6297
{
	char* sVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 193);
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (func_115())
	{
		Local_68.f_102.f_37 = 0;
		func_40(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23 = (Local_68.f_102.f_23 - 1);
		if (Local_68.f_102.f_23 < 0)
		{
			Local_68.f_102.f_23 = (Local_68.f_102.f_24 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_163(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_155(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (func_114())
	{
		Local_68.f_102.f_37 = 0;
		func_40(&(Local_68.f_102.f_53));
		Local_68.f_102.f_23++;
		if (Local_68.f_102.f_23 > (Local_68.f_102.f_24 - 1))
		{
			Local_68.f_102.f_23 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_163(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_155(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41)
	{
		Local_68.f_102.f_40 = func_113(func_108(PLAYER::PLAYER_PED_ID())) >= func_168(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42)
	{
		Local_68.f_102.f_43 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
		Local_68.f_102.f_42 = 1;
	}
	if (Local_68.f_102.f_37)
	{
		if (func_41(&(Local_68.f_102.f_53)) < 3f)
		{
			if (Local_68.f_102.f_44)
			{
				func_162("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_68.f_102.f_40)
			{
				func_162("SNK_AFFORD", 0, 0);
			}
			else if (!Local_68.f_102.f_43)
			{
				func_162("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_68.f_102.f_37 = 0;
			Local_68.f_102.f_44 = 0;
			func_40(&(Local_68.f_102.f_53));
			sVar0 = func_155(Local_68.f_102.f_23);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_162(sVar0, 0, 0);
			}
		}
	}
}

int func_113(int iParam0)//Position - 0x64B6
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_114()//Position - 0x650E
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_15(&iLocal_638))
		{
			func_12(&iLocal_638);
			return 1;
		}
		else if (func_9(&iLocal_638) > 0.25f)
		{
			func_13(&iLocal_638);
			return 1;
		}
	}
	else if (func_15(&iLocal_638))
	{
		func_40(&iLocal_638);
	}
	return 0;
}

int func_115()//Position - 0x658D
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_15(&iLocal_635))
		{
			func_12(&iLocal_635);
			return 1;
		}
		else if (func_9(&iLocal_635) > 0.25f)
		{
			func_13(&iLocal_635);
			return 1;
		}
	}
	else if (func_15(&iLocal_635))
	{
		func_40(&iLocal_635);
	}
	return 0;
}

void func_116(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x660C
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_152(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_150(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_149())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_149())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_169(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_148(29), 64);
					StringCopy(&cVar81, func_145(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_22350.f_7013[29 /*16*/])) == -1487683087)
					{
						func_144(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8355)
				{
					iVar1 = Global_22350.f_8351;
					iVar2 = Global_22350.f_8352;
					iVar3 = Global_22350.f_8353;
					iVar4 = Global_22350.f_8354;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_144(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_143();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_143();
					func_141((((Global_22347 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_143();
						func_141((((Global_22347 + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8365)
			{
				iVar1 = Global_22350.f_8361;
				iVar2 = Global_22350.f_8362;
				iVar3 = Global_22350.f_8363;
				iVar4 = Global_22350.f_8364;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8370)
				{
					iVar1 = Global_22350.f_8366;
					iVar2 = Global_22350.f_8367;
					iVar3 = Global_22350.f_8368;
					iVar4 = Global_22350.f_8369;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_144(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.y = (vVar38.y * (0.5f / fVar62));
				if (Global_22350.f_8383)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_150(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_150(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4768), func_145(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4268271.f_21)) != 0 && Global_4268271.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268271.f_67 != 0)
				{
					func_150(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar42);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268271.f_67 != 0)
				{
					func_150(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_4268271.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_148(Global_4268271.f_67), func_145(Global_4268271.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268271.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4268271.f_66) > Global_4268271.f_65)
					{
						StringCopy(&(Global_4268271.f_21), "", 16);
						Global_4268271.f_65 = -1;
					}
				}
			}
			func_132(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8006[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8377)
					{
						HUD::GET_HUD_COLOUR(Global_22350.f_8376, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (MISC::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_150(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 50) || Global_22350.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_129(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 50) || Global_22350.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_150(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_150(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_139(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[(iVar22 + iVar28)]), func_145(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[(iVar22 + iVar28)]), func_145(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_128() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_130(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 50) && Global_22350.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_150(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_150(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_139(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[(iVar22 + iVar14)]), func_145(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[(iVar22 + iVar14)]), func_145(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[(iVar22 + iVar14)]), func_145(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_129(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_127((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_129(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_130(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_126((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_150(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_148(26), func_145(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_148(27), func_145(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_150(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_148(Global_22350.f_4433[iVar22]), func_145(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_125(Global_22350.f_4433[iVar22])), (fVar37 * func_125(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8006[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_22350.f_5876);
	if (!Global_22350.f_8350)
	{
		func_118(0);
	}
	Global_22350.f_8350 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_117(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_117(int iParam0)//Position - 0x93AC
{
	Global_1375006.f_1100 = iParam0;
}

void func_118(int iParam0)//Position - 0x93BD
{
	if (func_124())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_123(0))
		{
			func_119(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_119(int iParam0)//Position - 0x93F0
{
	if (func_124())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_122())
		{
			func_121(1, 1);
		}
		else
		{
			func_121(0, 0);
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
	if (!func_120())
	{
		Global_19486.f_1 = 3;
	}
}

int func_120()//Position - 0x947A
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_121(bool bParam0, bool bParam1)//Position - 0x94A1
{
	if (bParam0)
	{
		if (func_123(0))
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

bool func_122()//Position - 0x9515
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_123(int iParam0)//Position - 0x9526
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

bool func_124()//Position - 0x9580
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

float func_125(int iParam0)//Position - 0x9592
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_126(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x9601
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_127(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x9620
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_128()//Position - 0x963E
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_129(bool bParam0)//Position - 0x964F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8378[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_22350.f_8378[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x9695
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_131(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9843
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x9ACD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_152(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_135(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_134(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_134(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_133(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 359 && MISC::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4268271.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22350.f_4769);
				func_134(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_133(&(Global_4268271.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268271.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8385)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8385 = 1;
			}
		}
		else if (Global_22350.f_8385)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8385 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_133(char* sParam0)//Position - 0x9FD4
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_134(char* sParam0)//Position - 0x9FE6
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_135(int iParam0, int iParam1)//Position - 0x9FF4
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_136(-1, 0) == 8;
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

int func_136(int iParam0, bool bParam1)//Position - 0xA03F
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_137()//Position - 0xA080
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_138())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_138()//Position - 0xA0EE
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA108
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 61:
			*iParam5 = 100;
			break;
		
		case 54:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_140(float fParam0)//Position - 0xA21D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_141(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xA27C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_142(char* sParam0, int iParam1, int iParam2)//Position - 0xA29F
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_143();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_143()//Position - 0xA2E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8360)
	{
		iVar0 = Global_22350.f_8356;
		iVar1 = Global_22350.f_8357;
		iVar2 = Global_22350.f_8358;
		iVar3 = Global_22350.f_8359;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_144(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xA36B
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_145(int iParam0, bool bParam1)//Position - 0xA39A
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7013[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_7013[iParam0 /*16*/])) == -1487683087)
		{
			Var19 = { func_147(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_146(&uVar3);
			}
		}
		else
		{
			return func_146(&(Global_22350.f_7013[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_146(var uParam0)//Position - 0xA8C2
{
	return uParam0;
}

struct<13> func_147(int iParam0)//Position - 0xA8CC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_148(int iParam0)//Position - 0xA8E3
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var16 = { func_147(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_146(&uVar0);
		}
		else
		{
			return func_146(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_149()//Position - 0xA958
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xA98A
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	
	StringCopy(&cVar0, func_148(iParam0), 64);
	StringCopy(&cVar16, func_145(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_149())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_149())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		vVar37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_151(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_151(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22350.f_7013[29 /*16*/])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_151(int iParam0)//Position - 0xAB3B
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 61:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_152(bool bParam0, bool bParam1)//Position - 0xAC0F
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_154(8, -1) && func_153() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76837) || Global_22350.f_8384) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_153()//Position - 0xACAC
{
	return Global_1312808;
}

bool func_154(int iParam0, int iParam1)//Position - 0xACB8
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

char* func_155(int iParam0)//Position - 0xACF3
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_156()//Position - 0xAD2C
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268347 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, bool bParam2)//Position - 0xAD53
{
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	if (Global_4268347 == -6)
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268347 = -1;
			return 0;
		}
	}
	if (((Global_4268347 > -1 || Global_4268347 == -3) || Global_4268347 == -2) || HUD::_0x3D9ACB1EB139E702())
	{
		HUD::_SET_MOUSE_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4268347 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(4);
			Global_4268347 = -6;
			return 1;
		}
		else
		{
			HUD::_SET_MOUSE_CURSOR_SPRITE(3);
			return 0;
		}
	}
	HUD::_SET_MOUSE_CURSOR_SPRITE(1);
	return 0;
}

void func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xAE33
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_4268347 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_160();
	if (Global_4268347 == -6)
	{
		return;
	}
	Global_4268347 = -1;
	fVar7 = Global_4268341;
	fVar8 = Global_4268342;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268341 >= fVar0 && Global_4268341 <= fVar2) && Global_4268342 >= fVar3) && Global_4268342 < (fVar3 + fVar6))
		{
			Global_4268347 = -2;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
		if (((Global_4268341 >= fVar0 && Global_4268341 <= fVar2) && Global_4268342 >= (fVar3 + fVar6)) && Global_4268342 < (fVar3 + 0.034722f))
		{
			Global_4268347 = -3;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268347 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_144(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268347 = Global_22350.f_8006[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268347 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268347 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268347 = -4;
		return;
	}
	Global_4268347 = -1;
}

void func_159(bool bParam0)//Position - 0xB0DF
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268347 == -2)
	{
		func_144(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268347 == -3)
	{
		func_144(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_160()//Position - 0xB168
{
	Global_4268343 = Global_4268341;
	Global_4268344 = Global_4268342;
	Global_4268341 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268342 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268345 = (Global_4268341 - Global_4268343);
	Global_4268346 = (Global_4268342 - Global_4268344);
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xB1B0
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_162(char* sParam0, int iParam1, int iParam2)//Position - 0xB265
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = MISC::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_163(var uParam0, bool bParam1, int iParam2)//Position - 0xB2CA
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268271.f_21), "", 16);
	}
}

void func_164(int iParam0)//Position - 0xB41A
{
	Global_22350.f_5738 = iParam0;
}

void func_165(var uParam0, bool bParam1)//Position - 0xB42A
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = uParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_167();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_150(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_166();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_166()//Position - 0xB565
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_150(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_167()//Position - 0xB618
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_130(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_150(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_168(int iParam0)//Position - 0xBA5F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_169(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xBA8D
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_172(Global_22350.f_5218, 1);
	}
	else
	{
		func_172(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_171(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_150(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_170(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_170(char* sParam0)//Position - 0xBC99
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_171(char* sParam0)//Position - 0xBCB5
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_172(int iParam0, bool bParam1)//Position - 0xBCF2
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_173()//Position - 0xBD3E
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_174(int iParam0, char* sParam1, char* sParam2)//Position - 0xBD5C
{
	Global_22350 = iParam0;
	func_175(29, sParam1, sParam2);
}

void func_175(int iParam0, char* sParam1, char* sParam2)//Position - 0xBD73
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7013[iParam0 /*16*/]), sParam2, 64);
}

void func_176(char* sParam0)//Position - 0xBD97
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBDE2
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBE21
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_179(bool bParam0, bool bParam1)//Position - 0xBECB
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459539[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7013[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268271.f_21), "", 16);
	Global_4268271.f_61 = 0;
	Global_4268271.f_62 = 0;
	Global_4268271.f_63 = 0;
	Global_4268271.f_64 = 0;
	Global_4268271.f_65 = 0;
	Global_4268271.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268271.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268271.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8381 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8360 = 0;
	Global_22350.f_8355 = 0;
	Global_22350.f_8365 = 0;
	Global_22350.f_8370 = 0;
	Global_22350.f_8375 = 0;
	Global_22350.f_8377 = 0;
	Global_22350.f_8383 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

int func_180(int iParam0, vector3 vParam1, float fParam4, var uParam5, var uParam6, var uParam7)//Position - 0xC3C3
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 2.40015f, -7.75244f, 1.0825f) };
			*uParam6 = -4.2069f;
			uParam6->f_1 = -0.027f;
			uParam6->f_2 = (fParam4 + 22.8175f);
			*uParam7 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 3.80296f, -5.391f, 1.213f) };
			*uParam6 = -9.3866f;
			uParam6->f_1 = -0.0011f;
			uParam6->f_2 = (fParam4 + 46.9866f);
			*uParam7 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam4, 2.97963f, -3.39452f, 0.934498f) };
			*uParam6 = -8.483f;
			uParam6->f_1 = 0.0149f;
			uParam6->f_2 = (fParam4 + 53.5519f);
			*uParam7 = 35f;
			break;
		
		case -2:
			*uParam5 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam6 = { -3.6091f, 0.022f, -8.6461f };
			*uParam7 = 35f;
			break;
	}
	return 1;
}

void func_181(int iParam0, bool bParam1)//Position - 0xC54B
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

int func_182(int iParam0, bool bParam1)//Position - 0xC56D
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_123(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/] == 1 && Global_42116[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42116[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42116[iVar0 /*32*/].f_5 = 1;
			Global_42116[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42116[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42116[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0xC625
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1)//Position - 0xC660
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_183(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_42116[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	iVar1 = 0;
	if (!Global_42116[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_42116[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_42311);
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_42116[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_42311);
		if (Global_42116[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_42116[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_42116[iVar0 /*32*/].f_13));
		}
		iVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return iVar1;
}

void func_185(var uParam0)//Position - 0xC715
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_183(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

void func_186(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xC76C
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_185(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/] = 1;
			Global_42116[iVar0 /*32*/].f_1 = Global_42317;
			Global_42317++;
			Global_42116[iVar0 /*32*/].f_4 = 0;
			Global_42116[iVar0 /*32*/].f_29 = 0;
			Global_42116[iVar0 /*32*/].f_5 = 0;
			Global_42116[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42116[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42116[iVar0 /*32*/].f_6 = iParam3;
			Global_42116[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42116[iVar0 /*32*/].f_7 = 0;
			Global_42116[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42116[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42116[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42116[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42116[iVar0 /*32*/].f_12 = 0;
				Global_42116[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42116[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_187(char[4] cParam0)//Position - 0xC897
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_188()//Position - 0xC8AD
{
	if (Global_111560.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xC8CA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_190(float fParam0)//Position - 0xCAB0
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_191()//Position - 0xCB02
{
	if (iLocal_631)
	{
		if (iLocal_630 == 3)
		{
			iLocal_630 = 0;
		}
		iLocal_631 = 0;
	}
	switch (iLocal_630)
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(iLocal_618[iLocal_634], true, 0);
			iLocal_632 = PED::CREATE_SYNCHRONIZED_SCENE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_68.f_486.f_9, 2);
			if (!PED::IS_PED_INJURED(Local_68.f_2))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_68.f_2, iLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_618[iLocal_634], iLocal_632, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
				iLocal_630 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_632))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_632) == 1f)
				{
					if (!PED::IS_PED_INJURED(Local_68.f_2))
					{
						TASK::CLEAR_PED_TASKS(Local_68.f_2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_618[iLocal_634]))
					{
						ENTITY::SET_ENTITY_DYNAMIC(iLocal_618[iLocal_634], 1);
					}
					iLocal_633 = MISC::GET_GAME_TIMER();
					iLocal_630 = 2;
				}
			}
			else
			{
				iLocal_633 = MISC::GET_GAME_TIMER();
				iLocal_630 = 2;
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_633) > 1000)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_618[iLocal_634]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_618[iLocal_634], false, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_618[iLocal_634], func_60(iLocal_634), 1, false, 0, 1);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_618[iLocal_634], 0);
				}
				iLocal_630 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_192()//Position - 0xCC9F
{
	if (iLocal_54 != 6)
	{
		switch (iLocal_54)
		{
			case 1:
				if (func_197())
				{
					iLocal_54 = 2;
				}
				else
				{
					iLocal_54 = 6;
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_86, 0))
				{
					func_196();
					func_12(&(Local_68.f_86.f_7));
					iLocal_54 = 3;
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_86, 0))
				{
					if ((func_195(&(Local_68.f_86.f_7), 5f) || func_193(Local_68.f_2, &(Local_68.f_451))) || PED::IS_PED_RAGDOLL(Local_68.f_86))
					{
						iLocal_54 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_86, 0))
				{
					iLocal_53 = 31;
					TASK::TASK_SMART_FLEE_PED(Local_68.f_86, Local_68, 500f, -1, 0, 0);
					iLocal_54 = 5;
				}
				func_40(&(Local_68.f_86.f_7));
				break;
			}
	}
}

int func_193(int iParam0, var uParam1)//Position - 0xCD75
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_194(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_194(int iParam0, bool bParam1)//Position - 0xCDFA
{
	return func_23(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, bParam1);
}

int func_195(var uParam0, float fParam1)//Position - 0xCE12
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_196()//Position - 0xCE34
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_86, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&(Local_68.f_86.f_6));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_68, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_68, 2500, 0, 2);
		TASK::TASK_HANDS_UP(0, 2500, 0, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_68.f_86.f_6);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_86, Local_68.f_86.f_6);
	}
}

int func_197()//Position - 0xCE8A
{
	PED::GET_CLOSEST_PED(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &(Local_68.f_86), 0, 1, -1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_86, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(Local_68.f_86) == Local_68.f_86.f_1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_68.f_86, true, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_86, true);
			return 1;
		}
	}
	return 0;
}

void func_198()//Position - 0xCEEA
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_624 > 1 && iLocal_624 < 5)
	{
		if (func_219())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624)
	{
		case 0:
			if ((((ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0) || !func_218()) || func_1(Local_68.f_470, 128)) && iLocal_57 < 3) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_68.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !func_217(0))
				{
					func_216("SHR_ROBTILL", -1);
					Local_68.f_469 = -1;
					func_186(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
					MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 0);
					iLocal_624 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_68.f_2))
			{
			}
			else if (iLocal_57 == 7)
			{
			}
			else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_68.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_182(Local_68.f_469, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar3, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, false, 0, 1);
							}
						}
					}
					MISC::SET_BIT(&(Local_68.f_162.f_18), 1);
					if (func_28("SHR_ROBTILL"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_185(&(Local_68.f_469));
					bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_628, 1);
					if (bVar2)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
					CUTSCENE::_0xC61B86C9F61EB404(0);
					func_119(0);
					func_210(1, 1, 1, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					func_181(23, 1);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_68.f_2.f_1, 3f, 0);
					iLocal_624 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (Local_68.f_469 <= 0)
					{
						Local_68.f_469 = -1;
						func_186(&(Local_68.f_469), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_185(&(Local_68.f_469));
				iLocal_624 = 0;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_68.f_2, false, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_2, true);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_68.f_2.f_4);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_566);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_566);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_566);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_566);
				if (!CAM::DOES_CAM_EXIST(iLocal_625))
				{
					iLocal_625 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_625, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_625, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_625, 35f);
				CAM::SHAKE_CAM(iLocal_625, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_625, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			}
			iLocal_624 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_626))
				{
					iLocal_626 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_626, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(iLocal_626, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(iLocal_626, 35f);
				CAM::SHAKE_CAM(iLocal_626, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_626, iLocal_625, 8000, 1, 1);
			}
			iLocal_629 = MISC::GET_GAME_TIMER();
			iLocal_624 = 4;
			break;
		
		case 4:
			if (((MISC::GET_GAME_TIMER() - iLocal_629) > 4800 || (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_68.f_2.f_1, 3f) > 0)
			{
				iLocal_624 = 5;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_629) > 4500)
			{
				if (func_209())
				{
					if (!iLocal_583)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_583 = 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_627)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 51);
						func_208(func_105(), 1, iVar1, 0, 0);
						iLocal_569 = (iLocal_569 + iVar1);
						Local_68.f_28.f_6 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_627 = 1;
					}
				}
				else if (iLocal_627)
				{
					iLocal_627 = 0;
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_68.f_2, true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_2, false);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(iLocal_625))
			{
				CAM::DESTROY_CAM(iLocal_625, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_626))
			{
				CAM::DESTROY_CAM(iLocal_626, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true) };
			}
			if (iLocal_628 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_628, true);
			}
			if (MISC::IS_BIT_SET(Local_68.f_162.f_18, 1))
			{
				MISC::CLEAR_BIT(&(Local_68.f_162.f_18), 1);
			}
			func_207(1, 1, 1);
			func_16(1, 0);
			iLocal_62 = 12;
			func_204();
			func_199(297, 0, 0);
			Local_68.f_468 = 1;
			iLocal_624 = 7;
			break;
		
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_CAM_ACTIVE(iLocal_626, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (iLocal_569 < 15)
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(25, 65);
					func_208(func_105(), 1, iVar1, 0, 0);
					iLocal_569 = (iLocal_569 + iVar1);
				}
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_624 = 5;
			}
			break;
	}
}

void func_199(int iParam0, int iParam1, int iParam2)//Position - 0xD613
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
		func_79((891 + iParam0), 1, -1, 1);
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
		Global_111560.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = iParam2;
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
		func_200();
	}
}

void func_200()//Position - 0xD6FB
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
		func_100(13, SYSTEM::FLOOR(Global_111560.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76577)
		{
			if (func_203() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_201();
				}
			}
		}
	}
}

int func_201()//Position - 0xDBBC
{
	if (func_202(0))
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

bool func_202(bool bParam0)//Position - 0xDC07
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

int func_203()//Position - 0xDC32
{
	return Global_30736;
}

void func_204()//Position - 0xDC3D
{
	if (!iLocal_575)
	{
		Global_111560.f_20030[iLocal_568]++;
		Global_111560.f_20030.f_62[iLocal_568] = Local_68.f_1;
		if (func_105() == 0)
		{
			func_205(5);
		}
		iLocal_575 = 1;
	}
}

void func_205(int iParam0)//Position - 0xDC8C
{
	switch (iParam0)
	{
		case 0:
			func_206(&Global_95167, 1);
			break;
		
		case 1:
			func_206(&Global_95169, 3);
			break;
		
		case 2:
			func_206(&Global_95173, 1);
			break;
		
		case 3:
			func_206(&Global_95175, 1);
			break;
		
		case 4:
			func_206(&Global_95177, 1);
			break;
		
		case 5:
			func_206(&Global_95179, 1);
			break;
		
		case 6:
			func_206(&Global_95181, 1);
			break;
		
		case 7:
			func_206(&Global_95183, 2);
			break;
		
		case 8:
			func_206(&Global_95186, 1);
			break;
		
		case 9:
			func_206(&Global_95188, 1);
			break;
	}
}

void func_206(var uParam0, int iParam1)//Position - 0xDD4F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_207(bool bParam0, bool bParam1, int iParam2)//Position - 0xDD8E
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_210(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	func_181(23, 0);
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDDCB
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0) == 3)
	{
		return;
	}
	if (func_104(iParam0) == 4)
	{
		return;
	}
	func_70(func_104(iParam0), 1, iParam1, iParam2, 0);
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

int func_209()//Position - 0xDE9D
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_210(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xDEB6
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_215(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_120())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_214(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_215(0);
		HUD::THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_214(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_212(PLAYER::PLAYER_ID())) && !func_135(PLAYER::PLAYER_ID(), 0)) && !func_211()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_212(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_76575 = 0;
	}
}

bool func_211()//Position - 0xDFEF
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

int func_212(int iParam0)//Position - 0xE00C
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_213())
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

bool func_213()//Position - 0xE04E
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_214(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xE05F
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

void func_215(int iParam0)//Position - 0xE092
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

void func_216(char[4] cParam0, int iParam1)//Position - 0xE0B5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_217(int iParam0)//Position - 0xE0CC
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
			{
				if (Global_19485 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_19485 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19486.f_1 > 3)
	{
		if (Global_19485 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218()//Position - 0xE150
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_68.f_2) == Local_68.f_185)
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_219()//Position - 0xE216
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_220()//Position - 0xE248
{
	int iVar0;
	
	func_237();
	func_234();
	if (ENTITY::DOES_ENTITY_EXIST(Local_68))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_68, &iVar0, 1);
		if ((iLocal_60 == 1 && iLocal_622 == 2) && ((PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()) || func_233()) || func_232()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_16(1, 0);
			iLocal_60 = 9;
		}
	}
	else
	{
		return;
	}
	func_229();
	if (!bLocal_574)
	{
		func_228();
	}
	switch (iLocal_60)
	{
		case 1:
			if (func_303())
			{
				if ((func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1) || (func_193(Local_68.f_2, &(Local_68.f_451)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_227();
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					MISC::SET_BIT(&Global_94550, 3);
					func_226();
				}
				if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_303())
			{
				if (func_193(Local_68.f_2, &(Local_68.f_451)) && iVar0 != joaat("weapon_unarmed"))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					Local_68.f_2.f_11 = 1;
					func_204();
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_62 = 11;
					iLocal_60 = 3;
					MISC::SET_BIT(&Global_94550, 3);
					func_226();
				}
				else if (func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1))
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
					func_225();
					func_227();
					iLocal_53 = 12;
					iLocal_60 = 5;
					func_226();
				}
				else if (func_1(Local_68.f_470, 8))
				{
					if (!func_1(Local_68.f_470, 32))
					{
						if (!PED::IS_PED_INJURED(Local_68.f_2) && func_1(Local_68.f_470, 4))
						{
							TASK::TASK_PLAY_ANIM(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
						}
						iLocal_53 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_68.f_470), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_53 >= 13)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_68.f_2))
				{
					iLocal_53 = 15;
					iLocal_58 = 5;
					iLocal_62 = 12;
					iLocal_60 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1) && func_303())
			{
				func_227();
				if (Local_68.f_2.f_12)
				{
					iLocal_53 = 22;
				}
				else
				{
					iLocal_53 = 16;
				}
				iLocal_60 = 5;
			}
			break;
		
		case 5:
			if (Local_68.f_486 >= 0)
			{
				if (func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1) && func_303())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486) && !Local_68.f_467)
					{
						iLocal_53 = 33;
						Local_68.f_467 = 1;
					}
				}
			}
			if (iLocal_55 >= 1 && iLocal_55 < 7)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
				if (func_223(Local_68.f_2, 0, 1, 0, 1, 1) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
				{
					iLocal_60 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_56 != 3 && iLocal_56 != 4)
			{
				iLocal_56 = 4;
			}
			MISC::CLEAR_BIT(&Global_94550, 3);
			if (!PED::IS_PED_RAGDOLL(Local_68.f_2))
			{
				func_7();
				iLocal_60 = 0;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_RAGDOLL(Local_68.f_2))
			{
				func_222();
				iLocal_53 = 36;
				func_16(1, 0);
				func_294(&(Local_68.f_470), 32);
				iLocal_58 = 7;
				iLocal_60 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1) || func_193(Local_68.f_2, &(Local_68.f_451))) && func_303()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_68.f_2.f_12)
				{
					iLocal_53 = 10;
					iLocal_60 = 9;
				}
				else
				{
					func_19();
					iLocal_53 = 11;
					iLocal_60 = 0;
				}
				Local_68.f_2.f_13 = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_60 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1) || func_193(Local_68.f_2, &(Local_68.f_451))) && func_303()) && iVar0 != joaat("weapon_unarmed")) && !func_15(&(Local_68.f_480)))
			{
				func_12(&(Local_68.f_480));
				if (PED::IS_PED_RAGDOLL(Local_68.f_2))
				{
					func_7();
				}
				iLocal_53 = 23;
			}
			else if (func_41(&(Local_68.f_480)) > 10f)
			{
				if (!PED::IS_PED_INJURED(Local_68.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_68.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				iLocal_60 = 12;
			}
			break;
		
		case 11:
			func_221();
			iLocal_60 = 12;
			break;
	}
}

void func_221()//Position - 0xE75A
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_2, false);
	}
}

void func_222()//Position - 0xE778
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_68.f_2, Local_68, -1, 0, 2);
	}
}

int func_223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE79A
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_224(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_194(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1)//Position - 0xE962
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225()//Position - 0xE9B7
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_303())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_68.f_2) && !PED::IS_PED_INJURED(uVar0[iVar4])) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4])) && !PED::IS_PED_IN_COMBAT(uVar0[iVar4], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], true, 1);
				TASK::TASK_SMART_FLEE_PED(uVar0[iVar4], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			iVar4++;
		}
	}
}

void func_226()//Position - 0xEA6E
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && func_303())
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if ((uVar0[iVar4] != PLAYER::PLAYER_PED_ID() && uVar0[iVar4] != Local_68.f_2) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar4]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0[iVar4], true, 1);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_566);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_566);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_566);
				TASK::TASK_PERFORM_SEQUENCE(uVar0[iVar4], iLocal_566);
			}
			iVar4++;
		}
	}
}

void func_227()//Position - 0xEB29
{
	if (func_25(Local_68) == joaat("weapon_rpg"))
	{
		Local_68.f_458 = 1;
	}
	else if (func_25(Local_68) == joaat("weapon_knife"))
	{
		Local_68.f_459 = 1;
	}
	else if (((func_25(Local_68) == joaat("weapon_hammer") || func_25(Local_68) == joaat("weapon_crowbar")) || func_25(Local_68) == joaat("weapon_bat")) || func_25(Local_68) == joaat("weapon_bottle"))
	{
		Local_68.f_460 = 1;
	}
	else if ((func_25(Local_68) == joaat("weapon_grenade") || func_25(Local_68) == joaat("weapon_smokegrenade")) || func_25(Local_68) == joaat("weapon_molotov"))
	{
		Local_68.f_461 = 1;
	}
	else if (func_25(Local_68) == joaat("weapon_stickybomb"))
	{
		Local_68.f_462 = 1;
	}
	iLocal_62 = 12;
	func_204();
	iLocal_61 = 2;
	iLocal_65 = 1;
	iLocal_64 = 6;
	Local_68.f_2.f_13 = 0;
}

void func_228()//Position - 0xEC15
{
	if (iLocal_55 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
		{
			switch (iLocal_58)
			{
				case 1:
					iLocal_58 = 0;
					break;
				
				case 2:
					TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 3:
					TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 4:
					TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 5:
					TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				
				case 6:
					iLocal_58 = 0;
					break;
				
				case 7:
					TASK::TASK_PLAY_ANIM(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_58 = 0;
					break;
				}
			}
	}
}

void func_229()//Position - 0xED3F
{
	switch (iLocal_59)
	{
		case 1:
			func_222();
			iLocal_59 = 2;
			break;
		
		case 2:
			if (iLocal_55 == 2)
			{
				func_231();
				Local_68.f_2.f_13 = 0;
				iLocal_59 = 3;
			}
			if ((func_45() || func_44()) && !Local_68.f_2.f_13)
			{
				Local_68.f_2.f_13 = 1;
			}
			if (!Local_68.f_2.f_14)
			{
				if (!PED::IS_PED_INJURED(Local_68.f_2) && PED::IS_PED_FLEEING(Local_68.f_2))
				{
					Local_68.f_2.f_14 = 1;
				}
			}
			if ((Local_68.f_2.f_13 && !PED::IS_PED_INJURED(Local_68.f_2)) && !iLocal_60 == 12)
			{
				func_230();
			}
			break;
		
		case 3:
			if (iLocal_55 >= 7)
			{
				func_222();
				iLocal_59 = 4;
			}
			break;
	}
}

void func_230()//Position - 0xEE05
{
	if ((MISC::GET_GAME_TIMER() - Local_68.f_2.f_10) > 5000)
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_68.f_2.f_24));
		TASK::OPEN_SEQUENCE_TASK(&(Local_68.f_2.f_24));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_68, 0);
		TASK::TASK_LOOK_AT_ENTITY(0, Local_68, -1, 0, 2);
		TASK::CLOSE_SEQUENCE_TASK(Local_68.f_2.f_24);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = MISC::GET_GAME_TIMER();
	}
}

void func_231()//Position - 0xEE66
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_68.f_2);
	}
}

int func_232()//Position - 0xEE83
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1))
	{
		return 1;
	}
	return 0;
}

int func_233()//Position - 0xEEA8
{
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192))
	{
		return 1;
	}
	return 0;
}

void func_234()//Position - 0xEECD
{
	if (!Local_68.f_465)
	{
		if (func_235())
		{
			if (!func_15(&(Local_68.f_474)))
			{
				func_12(&(Local_68.f_474));
			}
			else if (func_195(&(Local_68.f_474), 1f))
			{
				Local_68.f_465 = 1;
				iLocal_53 = 26;
				if (!PED::IS_PED_INJURED(Local_68.f_2))
				{
					TASK::TASK_SMART_FLEE_PED(Local_68.f_2, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_68.f_474)))
		{
			func_40(&(Local_68.f_474));
		}
	}
}

int func_235()//Position - 0xEF53
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (func_236())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Local_68, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (PED::IS_PED_SHOOTING(Local_68))
				{
					if (PED::IS_PED_FACING_PED(Local_68.f_2, Local_68, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_236()//Position - 0xEFA1
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_237()//Position - 0xEFD5
{
	if (iLocal_60 != 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
		{
			if (PED::IS_PED_FLEEING(Local_68.f_2))
			{
				TASK::TASK_SMART_FLEE_PED(Local_68.f_2, Local_68, 100f, -1, 0, 0);
				iLocal_60 = 12;
				iLocal_59 = 4;
				iLocal_58 = 8;
				iLocal_62 = 15;
				if (iLocal_65 == 1)
				{
					iLocal_65 = 2;
				}
				else
				{
					iLocal_65 = 3;
				}
				iLocal_64 = 13;
				iLocal_53 = 27;
				if (!Local_68.f_2.f_14)
				{
					Local_68.f_2.f_14 = 1;
				}
			}
		}
	}
}

void func_238()//Position - 0xF045
{
	switch (iLocal_57)
	{
		case 1:
			if (Local_68.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.876f)
					{
						iLocal_57 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_68.f_486 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_68.f_486))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.894f || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_68.f_486) > 0.871f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_68.f_28, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1f))
					{
						iLocal_57 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_239(0);
			OBJECT::_0x92AEFB5F6E294023(Local_68.f_28, false, 0);
			iLocal_57 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_239(1);
			ENTITY::SET_ENTITY_VISIBLE(Local_68.f_28, false, 0);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_68.f_28, PLAYER::PLAYER_PED_ID()))
			{
				func_208(func_105(), 1, iLocal_569, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(Local_68.f_28, false, 0);
				if (HUD::DOES_BLIP_EXIST(Local_68.f_28.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_68.f_28.f_2));
				}
				if (iLocal_62 != 12)
				{
					iLocal_62 = 12;
				}
				func_199(297, 0, 0);
				Local_68.f_468 = 1;
				Local_68.f_28.f_6 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_13(&(Local_68.f_28.f_15));
				iLocal_57 = 6;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0) && ENTITY::IS_ENTITY_VISIBLE(Local_68.f_28))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_68.f_28.f_15)) > 2.5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_28) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_68.f_28, PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, true);
					OBJECT::DELETE_OBJECT(&(Local_68.f_28));
				}
				iLocal_57 = 7;
			}
			break;
	}
}

void func_239(bool bParam0)//Position - 0xF21E
{
	Local_68.f_28.f_3 = 0;
	MISC::SET_BIT(&(Local_68.f_28.f_3), 3);
	MISC::SET_BIT(&(Local_68.f_28.f_3), 4);
	if (!bParam0)
	{
		iLocal_569 = MISC::GET_RANDOM_INT_IN_RANGE(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!HUD::DOES_BLIP_EXIST(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_242(Local_68.f_28);
			HUD::SET_BLIP_COLOUR(Local_68.f_28.f_2, 2);
		}
		OBJECT::_0xA08FE5E49BDC39DD(Local_68.f_28, -0.2f, 1);
	}
	else
	{
		iLocal_569 = MISC::GET_RANDOM_INT_IN_RANGE(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 = OBJECT::CREATE_PICKUP(joaat("pickup_money_variable"), ENTITY::GET_ENTITY_COORDS(Local_68.f_28, true), Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!HUD::DOES_BLIP_EXIST(Local_68.f_28.f_2))
		{
			Local_68.f_28.f_2 = func_240(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

int func_240(int iParam0)//Position - 0xF2EB
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_241(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_241(bool bParam0, float fParam1, float fParam2)//Position - 0xF323
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_242(int iParam0)//Position - 0xF33A
{
	return func_243(iParam0, 1, 0);
}

int func_243(int iParam0, bool bParam1, bool bParam2)//Position - 0xF34A
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_241(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_241(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_241(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_244()//Position - 0xF3EE
{
	int iVar0;
	int iVar1;
	
	if (Local_68.f_464)
	{
		switch (iLocal_61)
		{
			case 2:
				if (func_1(Local_68.f_470, 4))
				{
					func_248();
					Local_68.f_46.f_39 = MISC::GET_GAME_TIMER();
					iLocal_61 = 3;
				}
				break;
			
			case 3:
				if (MISC::GET_GAME_TIMER() - Local_68.f_46.f_39) > MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68.f_46.f_4[0], 0))
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_68.f_46.f_4[0], true);
					}
					iLocal_61 = 4;
				}
				break;
			
			case 4:
				if (func_247() && func_246())
				{
					iLocal_61 = 5;
				}
				break;
			
			case 5:
				iLocal_53 = 24;
				func_16(1, 0);
				iLocal_61 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((PED::IS_PED_INJURED(Local_68.f_46[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_68.f_46[iVar0], 0, 2))) || PED::IS_PED_INJURED(Local_68.f_2)) || (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_68.f_2, 0, 2))) || func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!PED::IS_PED_INJURED(Local_68.f_46[iVar1]))
							{
								TASK::TASK_COMBAT_PED(Local_68.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_46[iVar1], false);
							}
							iVar1++;
						}
						iLocal_61 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_245();
				iLocal_61 = 0;
				break;
			}
	}
}

void func_245()//Position - 0xF590
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_46[iVar0], false);
		}
		iVar0++;
	}
}

int func_246()//Position - 0xF5C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68.f_46[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_247()//Position - 0xF609
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_68.f_46[iVar0]))
				{
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46.f_4[iVar0], 0))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_68.f_46.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_248()//Position - 0xF67D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_68.f_46[iVar0] = PED::CREATE_PED(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_68.f_46[iVar0], true, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_46[iVar0], true);
		Local_68.f_46.f_4[iVar0] = VEHICLE::CREATE_VEHICLE(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], true, true, false);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_68.f_46.f_4[iVar0], true, 0);
		if (!(ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0) && ENTITY::IS_ENTITY_DEAD(Local_68.f_46.f_4[iVar0], 0)))
		{
			PED::SET_PED_INTO_VEHICLE(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, false, true);
		}
		TASK::OPEN_SEQUENCE_TASK(&(Local_68.f_46.f_35[iVar0]));
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(Local_68.f_46.f_4[iVar0]) - 8f), 1, Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_68, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_68.f_46.f_35[iVar0]);
		TASK::TASK_PERFORM_SEQUENCE(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

void func_249()//Position - 0xF7EA
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_68))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_68, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_62)
	{
		case 1:
			iLocal_62 = 6;
			break;
		
		case 2:
			iLocal_53 = 2;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_53 = 3;
			iLocal_62 = 5;
			break;
		
		case 4:
			iLocal_53 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_68) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_303())
			{
				iLocal_62 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_68) != joaat("weapon_unarmed") && func_303())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_62 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_62 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_62 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_62 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_53 = 5;
			iLocal_58 = 3;
			iLocal_62 = 15;
			break;
		
		case 8:
			iLocal_53 = 2;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 9:
			iLocal_53 = 3;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 10:
			iLocal_53 = 4;
			iLocal_58 = 2;
			iLocal_62 = 5;
			break;
		
		case 11:
			if (func_21(Local_68, Local_68.f_2, &(Local_68.f_451), 1))
			{
				func_227();
				iLocal_60 = 5;
			}
			break;
		
		case 12:
			if (!func_303())
			{
				if (!Local_68.f_464)
				{
					iLocal_64 = 9;
					iLocal_62 = 15;
				}
				else
				{
					iLocal_62 = 13;
				}
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(Local_68) < 0.1f && !func_251())
			{
				func_250();
				iLocal_62 = 14;
			}
			else if (func_251() && !func_303())
			{
				iLocal_62 = 14;
			}
			break;
		
		case 14:
			if (func_251() && !func_303())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!PED::IS_PED_INJURED(Local_68.f_46[iVar1]))
					{
						TASK::TASK_COMBAT_PED(Local_68.f_46[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_46[iVar1], false);
					}
					iVar1++;
				}
				iLocal_64 = 9;
				iLocal_62 = 15;
			}
			break;
	}
}

void func_250()//Position - 0xFA7A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], 0))
		{
			if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_68.f_46[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(Local_68.f_46[iVar0]);
				TASK::TASK_ARREST_PED(Local_68.f_46[iVar0], Local_68);
			}
		}
		iVar0++;
	}
}

int func_251()//Position - 0xFACF
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_252()//Position - 0xFB09
{
	switch (iLocal_65)
	{
		case 0:
			if (!iLocal_581)
			{
				if (func_253())
				{
					iLocal_53 = 9;
					iLocal_60 = 7;
					iLocal_52 = 3;
					iLocal_64 = 13;
					iLocal_65 = 3;
					iLocal_581 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_253()//Position - 0xFB4D
{
	int iVar0;
	vector3 vVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_68))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Local_68, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_68.f_470, 128))
	{
		if ((PED::IS_PED_RAGDOLL(Local_68.f_2) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_68.f_2, Local_68, 1) && iVar0 == joaat("weapon_unarmed"))) || func_254(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
		{
			if (PED::IS_PED_RAGDOLL(Local_68.f_2))
			{
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_68.f_2, Local_68, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_254(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_68.f_2, true) };
				vVar1 = { Local_68.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_254(int iParam0, vector3 vParam1, bool bParam4)//Position - 0xFC44
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

void func_255()//Position - 0xFC7E
{
	switch (iLocal_63)
	{
		case 0:
			if (func_283())
			{
				iLocal_63 = 1;
			}
			break;
		
		case 1:
			func_276();
			iLocal_63 = 2;
			break;
		
		case 2:
			func_272();
			iLocal_63 = 3;
			break;
		
		case 3:
			if (func_267())
			{
				iLocal_63 = 4;
			}
			break;
		
		case 4:
			func_256();
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_67 = 1;
			break;
	}
}

void func_256()//Position - 0xFCEB
{
	func_260();
	func_259();
	func_258();
	if (INTERIOR::IS_VALID_INTERIOR(Local_68.f_185))
	{
		INTERIOR::_0x82EBB79E258FA2B7(Local_68.f_2, Local_68.f_185);
		INTERIOR::_0x82EBB79E258FA2B7(Local_68.f_28, Local_68.f_185);
		if (!bLocal_574)
		{
			INTERIOR::_0x82EBB79E258FA2B7(Local_68.f_96.f_1, Local_68.f_185);
		}
	}
	func_257();
}

void func_257()//Position - 0xFD3E
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);
	iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar15 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar16 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar17 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar21 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar22 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar23 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar25 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iVar28 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	if (func_105() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_105() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_105() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_68.f_221.f_210 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_68.f_221.f_220 = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_68.f_221.f_220 = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_68.f_221.f_220 = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_68.f_221.f_227 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_68.f_221.f_198 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_68.f_221.f_198 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_68.f_221.f_198 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_68.f_221.f_198 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_68.f_221.f_198 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_68.f_221.f_198 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_68.f_221.f_198 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_68.f_221.f_198 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_68.f_221.f_198 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_68.f_221.f_198 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_68.f_221.f_199 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_199 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_199 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_199 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_68.f_221.f_200 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_68.f_221.f_201 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_68.f_221.f_202 = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_68.f_221.f_202 = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_68.f_221.f_202 = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_68.f_221.f_202 = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_68.f_221.f_202 = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_68.f_221.f_203 = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_68.f_221.f_203 = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_68.f_221.f_203 = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_68.f_221.f_204 = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_68.f_221.f_205 = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_68.f_221.f_205 = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_68.f_221.f_205 = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_68.f_221.f_206 = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_68.f_221.f_206 = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_68.f_221.f_206 = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_68.f_221.f_207 = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_68.f_221.f_207 = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_68.f_221.f_207 = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_68.f_221.f_207 = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_68.f_221.f_208 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_208 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_208 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_208 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_68.f_221.f_209 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_68.f_221.f_211 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_68.f_221.f_211 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_68.f_221.f_211 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_68.f_221.f_211 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_68.f_221.f_211 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_68.f_221.f_211 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_68.f_221.f_211 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_68.f_221.f_211 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_68.f_221.f_213 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_68.f_221.f_213 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_216 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_68.f_221.f_217 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_217 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_68.f_221.f_212 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_68.f_221.f_212 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_68.f_221.f_212 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_68.f_221.f_212 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_68.f_221.f_212 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_68.f_221.f_218 = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_68.f_221.f_219 = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_68.f_221.f_219 = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_68.f_221.f_219 = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_68.f_221.f_221 = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_68.f_221.f_221 = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_68.f_221.f_221 = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_68.f_221.f_222 = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_68.f_221.f_222 = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_68.f_221.f_222 = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_68.f_221.f_222 = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_68.f_221.f_222 = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_68.f_221.f_223 = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_68.f_221.f_224 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_68.f_221.f_225 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_68.f_221.f_225 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_68.f_221.f_225 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_68.f_221.f_225 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_68.f_221.f_225 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_68.f_221.f_226 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_68.f_221.f_226 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_68.f_221.f_226 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_68.f_221.f_228 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_68.f_221.f_228 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_68.f_221.f_228 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_68.f_221.f_229 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_68.f_221.f_229 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_68.f_221.f_229 = "OJSR_STEAL_3";
			break;
	}
	Local_68.f_221.f_166 = "OJSRAUD";
	Local_68.f_221.f_167 = "OJSR_GREET";
	Local_68.f_221.f_168 = "OJSR_BATEQ";
	Local_68.f_221.f_169 = "OJSR_TOOLEQ";
	Local_68.f_221.f_170 = "OJSR_STICKEQ";
	Local_68.f_221.f_171 = "OJSR_WORRY";
	Local_68.f_221.f_172 = "OJSR_SHOCK";
	Local_68.f_221.f_173 = "OJSR_STUBBRN";
	Local_68.f_221.f_174 = "OJSR_COUNTER";
	Local_68.f_221.f_175 = "OJSR_BACKRM";
	Local_68.f_221.f_176 = "OJSR_BUMP";
	Local_68.f_221.f_177 = "OJSR_BPAIM";
	Local_68.f_221.f_178 = "OJSR_BPAIMAG";
	Local_68.f_221.f_179 = "OJSR_HOLDUP";
	Local_68.f_221.f_180 = "OJSR_SCARED";
	Local_68.f_221.f_181 = "OJSR_KNIFAIM";
	Local_68.f_221.f_182 = "OJSR_TOOLAIM";
	Local_68.f_221.f_183 = "OJSR_GRANAIM";
	Local_68.f_221.f_184 = "OJSR_STICAIM";
	Local_68.f_221.f_185 = "OJSR_BRAVE";
	Local_68.f_221.f_186 = "OJSR_MOREAIM";
	Local_68.f_221.f_187 = "OJSR_SURNDER";
	Local_68.f_221.f_188 = "OJSR_COPS";
	Local_68.f_221.f_189 = "OJSR_POURCAN";
	Local_68.f_221.f_190 = "OJSR_FLEE";
	Local_68.f_221.f_191 = "OJSR_RECSCAR";
	Local_68.f_221.f_192 = "OJSR_RECAGGR";
	Local_68.f_221.f_193 = "OJSR_CSTMER";
	Local_68.f_221.f_194 = "OJSR_MOSC";
	Local_68.f_221.f_195 = "OJSR_PLRHUR";
	Local_68.f_221.f_196 = "OJSR_BUY";
	Local_68.f_221.f_197 = "OJSR_STEAL";
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
}

void func_258()//Position - 0x10ACA
{
	ENTITY::CREATE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, 303280717, 1);
	ENTITY::CREATE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	ENTITY::CREATE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = OBJECT::CREATE_OBJECT(Local_68.f_96, Local_68.f_486.f_6, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Local_68.f_96.f_1, Local_68.f_96.f_5);
	ENTITY::FREEZE_ENTITY_POSITION(Local_68.f_96.f_1, true);
}

void func_259()//Position - 0x10B4F
{
	Local_68.f_28 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, false, Local_68.f_28.f_13);
	ENTITY::SET_ENTITY_ROTATION(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_68.f_28, false, 0);
	OBJECT::_0x92AEFB5F6E294023(Local_68.f_28, true, 0);
	Local_68.f_28.f_14 = 0;
}

void func_260()//Position - 0x10BA0
{
	int iVar0;
	int iVar1;
	
	Local_68.f_2 = PED::CREATE_PED(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, true);
	func_266(iLocal_568, &iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68.f_2, 0, iVar1, iVar0, 0);
	func_265(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68.f_2, 2, iVar1, iVar0, 0);
	func_264(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68.f_2, 3, iVar1, iVar0, 0);
	func_263(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68.f_2, 4, iVar1, iVar0, 0);
	func_262(&iVar1, &iVar0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68.f_2, 8, iVar1, iVar0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68.f_2, true);
	if (Local_68.f_2.f_12)
	{
		func_261();
	}
}

void func_261()//Position - 0x10C4F
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
	}
}

void func_262(int iParam0, int iParam1)//Position - 0x10C64
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_263(int iParam0, int iParam1)//Position - 0x10C8C
{
	*iParam0 = 0;
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
}

void func_264(int iParam0, int iParam1)//Position - 0x10CA1
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
}

void func_265(int iParam0, int iParam1)//Position - 0x10CBB
{
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_266(int iParam0, var uParam1, var uParam2)//Position - 0x10CE3
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
}

int func_267()//Position - 0x10D8F
{
	if (!func_268(&Local_584))
	{
		return 0;
	}
	if (!bLocal_574)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_68.f_2.f_15))
		{
			return 0;
		}
	}
	if (!INTERIOR::IS_INTERIOR_READY(Local_68.f_185))
	{
		return 0;
	}
	MISC::_0x6F2135B6129620C1(0);
	return 1;
}

int func_268(var uParam0)//Position - 0x10DD5
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
			if (!func_269(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_269(var uParam0)//Position - 0x10E37
{
	return func_270(*uParam0, "NULL", uParam0->f_1);
}

int func_270(int iParam0, char* sParam1, int iParam2)//Position - 0x10E4C
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_271(iParam0))
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

int func_271(int iParam0)//Position - 0x10F40
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

void func_272()//Position - 0x10F6C
{
	MISC::_0x6F2135B6129620C1(1);
	if (!bLocal_574)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_68.f_2.f_15);
		Local_584.f_32 = MISC::GET_FRAME_COUNT();
	}
	func_273(&Local_584, Local_68.f_2.f_5);
	func_273(&Local_584, Local_68.f_28.f_13);
	func_273(&Local_584, Local_68.f_96);
	Local_68.f_466 = 1;
}

void func_273(var uParam0, int iParam1)//Position - 0x10FBE
{
	func_274(uParam0, 0, iParam1, 0);
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10FD0
{
	int iVar0;
	
	if (!func_275(iParam1))
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

int func_275(int iParam0)//Position - 0x11093
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

void func_276()//Position - 0x11132
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	func_281(iLocal_568, &(Local_68.f_46.f_8), &(Local_68.f_46.f_18), &(Local_68.f_46.f_22), &(Local_68.f_46.f_25), &(Local_68.f_46.f_26), &(Local_68.f_46.f_27), &(Local_68.f_46.f_28), &(Local_68.f_46.f_31), &(Local_68.f_46.f_34));
	func_279(iLocal_568);
	vVar0 = { -3244.573f, 1000.658f, 12.83f };
	fVar9 = 175.074f;
	vVar3 = { -3242.008f, 1001.202f, 11.83071f };
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { func_306(vVar6, fVar9) };
	vVar3 = { -3245.088f, 1001.468f, 13.65071f };
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { func_306(vVar6, fVar9) };
	vVar3 = { -3243.37f, 1000.37f, 12.83f };
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { func_306(vVar6, fVar9) };
	Local_68.f_469 = -1;
	Local_68.f_102.f_22 = -1;
	Local_68.f_96 = joaat("p_till_01_s");
	Local_68.f_96.f_2 = { Local_68.f_486.f_6 };
	Local_68.f_96.f_5 = (Local_68.f_486.f_9.f_2 + 180f);
	Local_68.f_451.f_3 = 0;
	Local_68.f_458 = 0;
	Local_68.f_459 = 0;
	Local_68.f_460 = 0;
	Local_68.f_461 = 0;
	Local_68.f_462 = 0;
	Local_68.f_465 = 0;
	func_278(iLocal_568, &(Local_68.f_2.f_6), &(Local_68.f_2.f_9));
	func_277();
}

void func_277()//Position - 0x112A1
{
	Local_68.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_68.f_86.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_68.f_86.f_5 = 2f;
}

void func_278(int iParam0, var uParam1, var uParam2)//Position - 0x112D2
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case -2:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_279(int iParam0)//Position - 0x115B1
{
	vector3 vVar0;
	
	vVar0 = { func_280(Local_68.f_186, Local_68.f_189) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_68.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_68.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_68.f_185 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_280(vector3 vParam0, vector3 vParam3)//Position - 0x1167F
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam3.x) / 2f);
	vVar0.y = ((vParam0.y + vParam3.y) / 2f);
	vVar0.z = ((vParam0.z + vParam3.z) / 2f);
	return vVar0;
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x116B2
{
	if (!func_282(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_282(int iParam0)//Position - 0x12528
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

int func_283()//Position - 0x12549
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_68, true) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Local_68.f_181, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_284()//Position - 0x12584
{
	if (Local_68.f_46.f_26 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_68.f_46.f_27);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_68.f_2.f_15))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_68.f_2.f_15);
	}
}

int func_285()//Position - 0x125CC
{
	if (Global_111560.f_9080)
	{
		if (!func_289(56))
		{
			return 1;
		}
	}
	if (func_288())
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		return 1;
	}
	if (func_305() && !func_304())
	{
		return 1;
	}
	if (func_287() && func_286())
	{
		return 1;
	}
	if (Global_30738)
	{
		HUD::CLEAR_HELP(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	return 0;
}

bool func_286()//Position - 0x1263C
{
	return Global_111278 > 0;
}

int func_287()//Position - 0x1264A
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_288()//Position - 0x1265F
{
	vector3 vVar0;
	float fVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_68, true) };
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, Local_68.f_181, true);
		if (fVar3 > Local_68.f_184)
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x1269D
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

void func_290(var uParam0)//Position - 0x126CA
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
						func_291(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_291(int iParam0)//Position - 0x12754
{
	func_292(iParam0, "NULL", iParam0->f_1);
}

void func_292(int iParam0, char* sParam1, int iParam2)//Position - 0x12768
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_271(*iParam0))
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

int func_293()//Position - 0x12842
{
	int iVar0;
	
	if (Local_68.f_1 != Global_111560.f_20030.f_62[iLocal_568])
	{
		return 1;
	}
	iVar0 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_111560.f_20030.f_42[iLocal_568]);
	iLocal_573 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_DAY_OF_MONTH() + 31;
		iVar0 = (iVar0 - Global_111560.f_20030.f_42[iLocal_568]);
	}
	if (iVar0 < iLocal_573)
	{
		return 0;
	}
	return 1;
}

void func_294(var uParam0, int iParam1)//Position - 0x128AD
{
	func_295(uParam0, iParam1);
}

void func_295(var uParam0, var uParam1)//Position - 0x128BD
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_296(int iParam0, float fParam1, var uParam2, var uParam3)//Position - 0x128CE
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_297(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_297(int iParam0)//Position - 0x12A13
{
	if (!func_282(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_298()//Position - 0x12BFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (CLOCK::GET_CLOCK_HOURS() - Global_111560.f_20030.f_21[iLocal_568]);
	iVar1 = (CLOCK::GET_CLOCK_DAY_OF_MONTH() - Global_111560.f_20030.f_42[iLocal_568]);
	iLocal_572 = 2;
	if (iVar0 < 0)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS() + 24;
		iVar0 = (iVar0 - Global_111560.f_20030.f_21[iLocal_568]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_572 && iVar1 == 0) || (iVar0 < iLocal_572 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_299(bool bParam0)//Position - 0x12C84
{
	int iVar0;
	var uVar1[2];
	var uVar4[2];
	vector3 vVar7[2];
	
	func_300(iLocal_568, &uVar1, &uVar4, &vVar7);
	if (!func_1(Local_68.f_470, 64))
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[0], uVar4[0], vVar7[0 /*3*/], 0, false, 0);
			if (uVar1[1] != -1)
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(uVar1[1], uVar4[1], vVar7[1 /*3*/], 0, false, 0);
			}
		}
		func_294(&(Local_68.f_470), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 1, false, false);
				}
			}
			else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(uVar1[iVar0]) != 0)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uVar1[iVar0], 0, false, false);
			}
		}
		iVar0++;
	}
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x12D6F
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = -1;
			break;
		
		case 6:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = -1;
			break;
		
		case 7:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = -1;
			break;
		
		case 8:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = -1;
			break;
		
		case 9:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = -1212951353;
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = -1;
			break;
		
		case 10:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = MISC::GET_HASH_KEY("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_301(var uParam0, int iParam1)//Position - 0x13414
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)//Position - 0x13424
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_303()//Position - 0x13439
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, true, 0))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, true, 0))
		{
			return 1;
		}
		else if (Local_68.f_199 != -1f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_68, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()//Position - 0x134DF
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

int func_305()//Position - 0x134FC
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

Vector3 func_306(vector3 vParam0, float fParam3)//Position - 0x13522
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_307(var uParam0)//Position - 0x13566
{
	iLocal_67 = 0;
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_61 = 1;
	iLocal_57 = 0;
	iLocal_60 = 1;
	iLocal_59 = 0;
	iLocal_56 = 0;
	iLocal_55 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	Local_68 = PLAYER::PLAYER_PED_ID();
	func_315(&(uParam0->f_1[0 /*3*/]), &(Local_68.f_181), &iLocal_568);
	if ((((((((iLocal_568 == 10 || iLocal_568 == 11) || iLocal_568 == 12) || iLocal_568 == 13) || iLocal_568 == 14) || iLocal_568 == 15) || iLocal_568 == 16) || iLocal_568 == 17) || iLocal_568 == 18)
	{
		bLocal_582 = true;
	}
	Local_68.f_184 = 150f;
	Local_68.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_68.f_2.f_16 = "absolutely";
	Local_68.f_2.f_17 = "is_this_it";
	Local_68.f_2.f_18 = "shock";
	Local_68.f_2.f_19 = "anger_a";
	Local_68.f_2.f_20 = "screw_you";
	Local_68.f_2.f_21 = "but_why";
	Local_68.f_486.f_1 = "mp_am_hold_up";
	Local_68.f_486.f_2 = "guard_handsup_loop";
	Local_68.f_486.f_3 = "holdup_victim_20s";
	Local_68.f_486.f_4 = "holdup_victim_20s_bag";
	Local_68.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_570 = func_314();
	if (!bLocal_574)
	{
		func_310();
	}
	iLocal_575 = 0;
	if (iLocal_568 != 7)
	{
		iLocal_54 = 6;
	}
	else
	{
		iLocal_54 = 0;
	}
	if (func_105() == 0)
	{
		Local_68.f_1 = 0;
	}
	else if (func_105() == 1)
	{
		Local_68.f_1 = 1;
	}
	else if (func_105() == 2)
	{
		Local_68.f_1 = 2;
	}
	func_309(iLocal_568, &(Local_68.f_186), &(Local_68.f_189), &(Local_68.f_192), &(Local_68.f_193), &(Local_68.f_196), &(Local_68.f_199), &(Local_68.f_200), &(Local_68.f_203), &(Local_68.f_206), &(Local_68.f_207), &(Local_68.f_210), &(Local_68.f_213), &(Local_68.f_214), &(Local_68.f_217), &(Local_68.f_220), &(Local_68.f_102.f_6), &(Local_68.f_102.f_9));
	func_308(iLocal_568, &(Local_68.f_486.f_6), &(Local_68.f_486.f_9), &(Local_68.f_2.f_1), &(Local_68.f_2.f_4), &(Local_68.f_2.f_5), &(Local_68.f_28.f_7), &(Local_68.f_28.f_10), &(Local_68.f_28.f_13), &(Local_68.f_28.f_4), &(Local_68.f_28.f_5), &(Local_68.f_102.f_21));
}

void func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0x13795
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_309(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x13CF7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_310()//Position - 0x14ECE
{
	func_313();
	func_312();
	func_311();
}

void func_311()//Position - 0x14EE2
{
	int iVar0;
	
	if (iLocal_570 >= 9)
	{
		if (Global_111560.f_20030.f_41 > 3)
		{
			if (iLocal_570 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_68.f_464 = 1;
				Global_111560.f_20030.f_41 = 0;
			}
			else
			{
				Local_68.f_464 = 0;
				Global_111560.f_20030.f_41++;
			}
		}
		else
		{
			Global_111560.f_20030.f_41++;
		}
	}
	else
	{
		Global_111560.f_20030.f_41++;
	}
}

void func_312()//Position - 0x14F76
{
	int iVar0;
	
	if (iLocal_570 >= 3)
	{
		if (iLocal_570 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_68.f_2.f_12 = 1;
		}
		else
		{
			Local_68.f_2.f_12 = 0;
		}
	}
}

void func_313()//Position - 0x14FB5
{
	int iVar0;
	
	if (iLocal_570 >= 6)
	{
		if (iLocal_570 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_60 = 2;
		}
		else
		{
			iLocal_60 = 1;
		}
	}
}

int func_314()//Position - 0x14FEB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_111560.f_20030[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_315(var uParam0, var uParam1, int iParam2)//Position - 0x1501B
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_297(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_297(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_297(*iParam2) };
}

void func_316(var uParam0, int iParam1)//Position - 0x1507A
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

bool func_317(int iParam0)//Position - 0x15091
{
	return Global_41396 == iParam0;
}

int func_318(int iParam0)//Position - 0x1509F
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_319(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_319(int iParam0)//Position - 0x150C1
{
	return func_320(iParam0, Global_41396);
}

int func_320(int iParam0, int iParam1)//Position - 0x150D2
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

void func_321()//Position - 0x152B3
{
	if (((iLocal_65 == 1 || iLocal_65 == 2) || iLocal_624 == 7) || (ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0) && iLocal_67 == 1))
	{
		if (iLocal_65 == 1)
		{
		}
		if (iLocal_65 == 2)
		{
		}
		if (iLocal_624 == 7)
		{
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0) && iLocal_67 == 1)
		{
		}
		Global_111560.f_20030.f_21[iLocal_568] = CLOCK::GET_CLOCK_HOURS();
		Global_111560.f_20030.f_42[iLocal_568] = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && func_332()) && Local_68.f_468)
	{
		func_328(&iLocal_568, &iLocal_575, &iLocal_569);
	}
	func_327();
	iLocal_575 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	if (!bLocal_574)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_567, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_1(Local_68.f_470, 1024))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_618[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_618[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_618[2]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_618[0]));
			OBJECT::DELETE_OBJECT(&(iLocal_618[1]));
			OBJECT::DELETE_OBJECT(&(iLocal_618[2]));
		}
	}
	if (iLocal_623 == 2)
	{
		STREAMING::REMOVE_ANIM_DICT(Local_68.f_486.f_1);
	}
	func_322(&Local_584, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_322(var uParam0, bool bParam1)//Position - 0x1544C
{
	int iVar0;
	
	if (!bParam1)
	{
		func_324(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_323(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_323(var uParam0)//Position - 0x1548C
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_324(var uParam0)//Position - 0x1549D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_325(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_325(var uParam0)//Position - 0x154D6
{
	func_326(*uParam0, "NULL", uParam0->f_1);
}

void func_326(int iParam0, char* sParam1, int iParam2)//Position - 0x154EB
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_271(iParam0))
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

void func_327()//Position - 0x155AB
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_2, 0))
	{
		TASK::CLEAR_PED_TASKS(Local_68.f_2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_2))
	{
		func_221();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_86))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68.f_86));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_28, 0))
	{
		if (iLocal_55 >= 4)
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_68.f_28, -8f, 1);
			ENTITY::APPLY_FORCE_TO_ENTITY(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_28))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_68.f_28));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_68.f_96.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_68.f_96.f_1));
		ENTITY::REMOVE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, 303280717, false);
		ENTITY::REMOVE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), false);
		ENTITY::REMOVE_MODEL_HIDE(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (OBJECT::DOES_PICKUP_EXIST(Local_68.f_28.f_1))
	{
		OBJECT::REMOVE_PICKUP(Local_68.f_28.f_1);
	}
	if (func_15(&(Local_68.f_477)))
	{
		func_40(&(Local_68.f_477));
	}
	if (Local_68.f_466)
	{
		if (!bLocal_574)
		{
			STREAMING::REMOVE_ANIM_DICT(Local_68.f_2.f_15);
		}
		Local_68.f_466 = 0;
	}
}

void func_328(int iParam0, var uParam1, var uParam2)//Position - 0x156EA
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];
	
	iVar0 = func_331(*uParam1, 1, 0);
	StringCopy(&(Var20[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var20[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_330(iParam0)}, 6);
	if (func_329(276, &Var1, &Var20, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_329(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x15767
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())) && NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_147(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2457255.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1662701.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::_NETWORK_GET_ROS_PRIVILEGE_4())
	{
	}
	return 0;
}

struct<8> func_330(var uParam0)//Position - 0x1589B
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case -2:
		case -1:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_331(bool bParam0, int iParam1, int iParam2)//Position - 0x1596C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_332()//Position - 0x15983
{
	if (func_334() && func_333(0))
	{
		return 1;
	}
	return 0;
}

var func_333(int iParam0)//Position - 0x159A1
{
	return Global_1312373[iParam0];
}

var func_334()//Position - 0x159B1
{
	return func_333(func_78() + 1);
}

