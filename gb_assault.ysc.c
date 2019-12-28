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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
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
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<65> Local_112 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_177[32];
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	vector3 vLocal_373 = { 0f, 0f, 0f };
	struct<8> Local_376[15];
	vector3 vLocal_497 = { 0f, 0f, 0f };
	var uLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	vector3 vLocal_512 = { 0f, 0f, 0f };
	vector3 vLocal_515 = { 0f, 0f, 0f };
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	vLocal_373 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_505 = -1;
	iLocal_506 = -1;
	iLocal_508 = -1;
	iLocal_509 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1248(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1200(ScriptParam_0);
	}
	else
	{
		func_1147();
	}
	while (true)
	{
		func_1146();
		if (func_1139())
		{
			func_1147();
		}
		else if (func_1135(1))
		{
			func_1147();
		}
		Global_1674861.f_2 = Local_112.f_63;
		Global_1674861.f_3 = Local_112.f_64;
		switch (func_1134(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1133() == 1)
				{
					if (func_1132())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
						{
						}
						func_1131();
						if (func_1130())
						{
							func_1115(159, 1, -1, 0);
							OBJECT::_0x78857FC65CADB909(1);
						}
						else
						{
							func_1115(159, 0, -1, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
							{
								OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
							}
						}
						if (func_1114() == 1)
						{
							STREAMING::REMOVE_IPL("CS3_07_MPGates");
							MISC::SET_BIT(&iLocal_370, 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
						}
						else if (func_1114() == 2)
						{
							func_1113();
						}
						else if (func_1114() == 3)
						{
							func_1112();
						}
						if (func_1111(1))
						{
							MISC::SET_BIT(&iLocal_371, 5);
						}
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_112.f_12), 1200);
						}
						func_1110();
						func_1103();
						Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
					}
				}
				else if (func_1133() == 4)
				{
					Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_1133() == 1)
				{
					func_1102();
					func_1094();
					func_394();
					func_382();
					if (func_1130() || func_381())
					{
						func_220(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
					}
				}
				else if (func_1133() == 4)
				{
					Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_219();
				break;
			
			case 3:
				func_218(&(Local_112.f_52));
				if (func_217(&(Local_112.f_52)))
				{
					Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				func_219();
				break;
			
			case 2:
				func_219();
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			
			case 4:
				func_1147();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1133())
			{
				case 0:
					if (func_1114() != -1)
					{
						if ((func_207() && func_49()) && func_26())
						{
							func_25();
							func_23();
							if (func_1114() == 3)
							{
								MISC::SET_BIT(&(Local_112.f_1), 6);
							}
							Local_112 = 1;
							Local_112.f_8 = NETWORK::PARTICIPANT_ID_TO_INT();
							Local_112.f_9 = PLAYER::PLAYER_ID();
							func_1115(159, 1, -1, 0);
							STATS::_0x6DEE77AFF8C21BD1(&(Local_112.f_63), &(Local_112.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_112 = 4;
					}
					else if (func_1())
					{
						Local_112 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x378
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x39B
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x3BF
{
	if (Local_112.f_51 > 0)
	{
		if (Local_112 != 4)
		{
		}
	}
	return 0;
}

void func_4()//Position - 0x3D6
{
	switch (Local_112.f_51)
	{
		case 0:
			Local_112.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (MISC::IS_BIT_SET(Local_112.f_1, 7))
			{
				Local_112.f_51 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 20))
			{
				if (Local_112.f_5 != -1)
				{
					Local_112.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]))
				{
					if (func_10(Local_112.f_13[0]))
					{
						MISC::SET_BIT(&(Local_112.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()//Position - 0x485
{
	if (!MISC::IS_BIT_SET(Local_112.f_1, 16))
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 20))
		{
			if (!func_9(&(Local_112.f_60)))
			{
				func_8(&(Local_112.f_60), 0, 0);
			}
			else if (func_6(&(Local_112.f_60), func_7(), 0))
			{
				MISC::SET_BIT(&(Local_112.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x4DC
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x53A
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x546
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)//Position - 0x58B
{
	return uParam0->f_1;
}

int func_10(int iParam0)//Position - 0x597
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_11()//Position - 0x5B6
{
	if (!func_9(&(Local_112.f_54)))
	{
		if (MISC::IS_BIT_SET(Local_112.f_1, 2))
		{
			func_8(&(Local_112.f_54), 0, 0);
		}
	}
	else if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		if (!MISC::IS_BIT_SET(Local_112.f_1, 3))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				if (func_6(&(Local_112.f_54), func_12(), 0))
				{
					MISC::SET_BIT(&(Local_112.f_1), 3);
				}
			}
		}
	}
}

int func_12()//Position - 0x623
{
	return Global_262145.f_12449;
}

void func_13()//Position - 0x632
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_112.f_35[iVar0])
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iVar0]))
				{
					if (func_1114() != 2)
					{
						Local_112.f_35[iVar0] = 3;
					}
					else
					{
						Local_112.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(Local_112.f_1, 11))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (MISC::IS_BIT_SET(Local_112.f_1, 12))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (MISC::IS_BIT_SET(Local_112.f_1, 13))
				{
					Local_112.f_35[iVar0] = 3;
				}
				else if (MISC::IS_BIT_SET(Local_112.f_1, 14))
				{
					Local_112.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()//Position - 0x70D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Local_112 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
				{
					iLocal_372 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
					if (func_1248(iVar4, 1, 1))
					{
						func_15(iLocal_372, 0);
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
					{
						MISC::SET_BIT(&(Local_112.f_1), 2);
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 7))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 7))
						{
							MISC::SET_BIT(&(Local_112.f_1), 7);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 11))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 12))
						{
							MISC::SET_BIT(&(Local_112.f_1), 11);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 13))
						{
							MISC::SET_BIT(&(Local_112.f_1), 12);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 13))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 14))
						{
							MISC::SET_BIT(&(Local_112.f_1), 13);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 14))
					{
						if (Local_177[iLocal_372 /*6*/].f_2 != 0)
						{
							MISC::SET_BIT(&(Local_112.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_372;
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
						{
							if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 3))
							{
								Local_112.f_6 = iVar4;
								MISC::SET_BIT(&(Local_112.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_372;
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 8))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 9))
						{
							Local_112.f_6 = iVar4;
							MISC::SET_BIT(&(Local_112.f_1), 8);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 11))
						{
							if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 5))
							{
								Local_112.f_6 = iVar4;
							}
							MISC::SET_BIT(&(Local_112.f_1), 10);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 15))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 15))
						{
							MISC::SET_BIT(&(Local_112.f_1), 15);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 18))
					{
						if (MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 16))
						{
							MISC::SET_BIT(&(Local_112.f_1), 18);
						}
					}
					if (!MISC::IS_BIT_SET(Local_112.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 3)) || MISC::IS_BIT_SET(Local_112.f_1, 4)) || MISC::IS_BIT_SET(Local_112.f_1, 5)) || MISC::IS_BIT_SET(Local_112.f_1, 8)) || MISC::IS_BIT_SET(Local_112.f_1, 9)) || MISC::IS_BIT_SET(Local_112.f_1, 10)) || MISC::IS_BIT_SET(Local_112.f_1, 15)) || MISC::IS_BIT_SET(Local_112.f_1, 18))
							{
								if (!MISC::IS_BIT_SET(Local_177[iLocal_372 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
				{
					if (Local_112.f_9 > -1)
					{
						if (iVar3 == Local_112.f_9)
						{
							MISC::SET_BIT(&(Local_112.f_1), 5);
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (Local_112.f_9 > -1)
				{
					if (iVar3 == Local_112.f_9)
					{
						MISC::SET_BIT(&(Local_112.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 4))
			{
				if (Local_112.f_5 != iVar0)
				{
					Local_112.f_5 = iVar0;
					if (Local_112.f_5 == -1)
					{
					}
					else if (!MISC::IS_BIT_SET(Local_112.f_1, 16))
					{
						MISC::SET_BIT(&(Local_112.f_1), 16);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 8))
		{
			if (Local_112.f_7 != iVar1)
			{
				Local_112.f_7 = iVar1;
				if (Local_112.f_7 == -1)
				{
				}
				else if (!MISC::IS_BIT_SET(Local_112.f_1, 16))
				{
					MISC::SET_BIT(&(Local_112.f_1), 16);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 0))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_112.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)//Position - 0xB38
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_1114() == 1)
	{
		if (!MISC::IS_BIT_SET(Local_112.f_2, iParam0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[iParam1]))
			{
				if (func_21(Local_112.f_29[iParam1]))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_112.f_9 > -1)
					{
						iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_112.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_112.f_29[iParam1]), iVar0, 1);
						MISC::SET_BIT(&(Local_112.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)//Position - 0xBEB
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_18())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)//Position - 0xC35
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_18())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()//Position - 0xC7A
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)//Position - 0xC83
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_18();
}

int func_20(int iParam0)//Position - 0xCAE
{
	if (iParam0 != func_18())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_18())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xCE3
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_22(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_22(int iParam0)//Position - 0xD03
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_23()//Position - 0xD3C
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!MISC::IS_BIT_SET(Local_112.f_1, 17))
	{
		vVar0 = { 200f, 200f, 200f };
		vVar3 = { func_24() };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar3 - vVar0, vVar3 + vVar0, false, 1);
		MISC::SET_BIT(&(Local_112.f_1), 17);
	}
}

Vector3 func_24()//Position - 0xD8F
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_1114();
	iVar1 = func_25();
	vVar2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					vVar2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					vVar2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					vVar2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					vVar2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					vVar2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					vVar2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					vVar2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					vVar2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return vVar2;
}

int func_25()//Position - 0xF45
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_4 != -1)
	{
		return Local_112.f_4;
	}
	iVar0 = 0;
	iVar1 = func_1114();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
	Local_112.f_4 = iVar0;
	return Local_112.f_4;
}

int func_26()//Position - 0xF99
{
	switch (Local_112.f_3)
	{
		case 1:
			func_28(0, joaat("rhino"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("fbi"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("superd"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("hexer"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("hexer"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()//Position - 0x107C
{
	switch (func_1114())
	{
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)//Position - 0x110C
{
	float fVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!MISC::IS_BIT_SET(Local_112.f_10, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 5f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_112.f_10), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_112.f_29[iParam0]), iParam1, vParam2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_112.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 2);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 1);
						}
						VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 1);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 0);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 1);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]));
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), true, true, 0);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), true);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), 0);
						if (func_1114() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), SYSTEM::ROUND(fVar0), 0);
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), SYSTEM::ROUND(fVar0));
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_112.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()//Position - 0x134C
{
	return Global_262145.f_12455;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x135B
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam7, iParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_31(vParam2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0x1463
{
	int iVar0;
	
	if (func_32(PLAYER::PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405071.f_2910[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { vParam0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = fParam3;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam5;
	}
}

int func_32(int iParam0, vector3 vParam1, int iParam4)//Position - 0x1536
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (MISC::ABSF((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_33(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)//Position - 0x15D4
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_43(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_34(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_34(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x16E5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1248(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_39(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1248(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_35(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_39(iVar1), vParam0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_39(iVar1), vParam0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x189D
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)//Position - 0x18C8
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)//Position - 0x1913
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()//Position - 0x1954
{
	return Global_1312745;
}

Vector3 func_39(int iParam0)//Position - 0x1960
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_42() && Global_1590446[iVar0 /*871*/].f_842) && !func_41(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_40(iParam0);
}

Vector3 func_40(int iParam0)//Position - 0x19B3
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_41(vector3 vParam0)//Position - 0x19C6
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_42()//Position - 0x19F0
{
	return Global_2448961.f_17;
}

int func_43(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x19FE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1248(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_40(iVar1), vParam0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x1AFA
{
	if (func_48(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_47(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_45(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x1B41
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_46(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)//Position - 0x1B6C
{
	if (iParam0 != func_18())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_18();
}

struct<13> func_47(int iParam0)//Position - 0x1B8F
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_48(int iParam0, int iParam1)//Position - 0x1BA6
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_47(iParam0) };
		Global_2507684 = { func_47(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507671))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507684))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49()//Position - 0x1C13
{
	switch (Local_112.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_50(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_50(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_50(bool bParam0, int iParam1, bool bParam2)//Position - 0x1C63
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar36;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar36 = { func_206() };
				if (!func_9(&(Local_112.f_58)))
				{
					func_8(&(Local_112.f_58), 0, 0);
				}
				if (func_51(vVar36, 5f, &vLocal_497, &uLocal_500, &Var1) || MISC::IS_BIT_SET(Local_112.f_1, 19))
				{
					if (MISC::IS_BIT_SET(Local_112.f_1, 19))
					{
						vLocal_497 = { vVar36 };
					}
					Local_112.f_12 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(-301062413, vLocal_497, true, iVar0));
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_112.f_12, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_12), vLocal_497 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_112.f_12), true);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_112.f_12), true);
					if (bParam0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iParam1]))
						{
							if (!func_10(Local_112.f_13[iParam1]))
							{
								OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(NETWORK::NET_TO_OBJ(Local_112.f_12), NETWORK::NET_TO_PED(Local_112.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_12), vVar36 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!MISC::IS_BIT_SET(Local_112.f_1, 19))
				{
					if (func_6(&(Local_112.f_58), 15000, 0))
					{
						MISC::SET_BIT(&(Local_112.f_1), 19);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		return 1;
	}
	return 0;
}

int func_51(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1E24
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_52(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_52(var uParam0, var uParam1, var uParam2)//Position - 0x1F24
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2456 == *uParam0 || !Global_2405071.f_2456.f_1 == uParam0->f_1) || !Global_2405071.f_2456.f_2 == uParam0->f_2) || !Global_2405071.f_2459 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2476 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405071.f_2454 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_2463))
			{
				if (Global_2405071.f_2463 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) < func_205(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) < func_205(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_204();
		}
		Global_2405071.f_2454 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2460) > func_205(0))
	{
		Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
		func_198();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2454)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::_0xFEE4A5459472A9F8();
		func_204();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_33(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405071.f_2477 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2456 = { *uParam0 };
					Global_2405071.f_2459 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = 0f;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = uParam0->f_14;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_197(vVar8.x, vVar8.y);
			}
			Global_2405071.f_2455 = 1;
			Global_2405071.f_2454 = 1;
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2460 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2463 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2454)
	{
		if (Global_2405071.f_2455 == 1)
		{
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 5000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_196(Global_4456448.f_190930))
					{
						Var26.f_9 = 1;
					}
					func_171(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_170(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2455 = 9;
				}
				else
				{
					Global_2405071.f_2455 = 2;
				}
			}
		}
		if (Global_2405071.f_2455 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_36(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405071.f_2455 = 3;
				}
				else
				{
					Global_2405071.f_2455 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2465) > 7000)
			{
				func_169(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405071.f_2455 == 3)
		{
			if (func_168() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 10000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 4;
			}
		}
		if (Global_2405071.f_2455 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_198();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 1:
							func_167(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2455 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2455 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_167(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2455 == 5)
		{
			if (func_104(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2481.f_5)
				{
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2455 = 6;
				}
				else
				{
					Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2455 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::_0xFEE4A5459472A9F8();
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2481.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_103(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_102(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2455 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_167(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2455 == 7)
		{
			if (func_104(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405071.f_2615[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_170(Global_2405071.f_2615[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_100(Global_2405071.f_2615[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2615[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_55(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405071.f_2455 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2461) > 20000)
			{
				Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_54(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_53(uParam2, &(Global_2405071.f_2481.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2456 };
				func_55(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2461 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2455 = 9;
		}
		if (Global_2405071.f_2455 == 9)
		{
			Global_2405071.f_2454 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::_0xFEE4A5459472A9F8();
			func_204();
			return 1;
		}
		Global_2405071.f_2460 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_53(var uParam0, var uParam1)//Position - 0x2EDD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_54(int iParam0)//Position - 0x2F27
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x2F46
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_103(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_102(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_102(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_69(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_67(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_171(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_66(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_69(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_66(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
					}
				}
			}
			else if (func_56(uParam0, 1, 1, 1, 1))
			{
				func_55(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x33B1
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409979[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409979[iVar0 /*17*/].f_16))
			{
				if (func_65(*uParam0, &(Global_2409979[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409979[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409979[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_57(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_56(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_57(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x348C
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_64(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_62(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_61(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_58(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_58(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)//Position - 0x3596
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_60(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_59(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_59(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_60(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_60(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_59(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_59(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

float func_59(vector3 vParam0, vector3 vParam3)//Position - 0x3865
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_60(vector3 vParam0, vector3 vParam3)//Position - 0x3886
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_61(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x38BF
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

void func_62(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0x39BE
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_63(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_63(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

void func_63(var uParam0, vector3 vParam1)//Position - 0x3A66
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_64(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x3B3D
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_62(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_61(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_58(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_170(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_100(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_65(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x3C40
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_170(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405071.f_2724) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_100(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, false) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_66(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)//Position - 0x3DA1
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_100(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, 0, true);
			break;
	}
	return 0;
}

int func_67(int iParam0, bool bParam1)//Position - 0x3E0E
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_18())
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x3E9C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

int func_69(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x43C1
{
	if (func_99(vParam0, uParam3))
	{
		if (func_70(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam3, iParam4))
	{
		if (func_70(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(vector3 vParam0, var uParam3, int iParam4, bool bParam5)//Position - 0x441D
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_86(Global_2405071.f_507, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_74(*uParam3, 1056964608))
			{
				if (!func_71(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(var uParam0, bool bParam1)//Position - 0x44A2
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { *uParam0 };
	iVar4 = func_73(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar4])
	{
		if (func_72(vVar1, &(Global_2410184[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_58(&vVar1, Global_2410184[iVar4 /*141*/][iVar0 /*7*/], Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_72(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_58(&vVar1, Global_2410184[8 /*141*/][iVar0 /*7*/], Global_2410184[8 /*141*/][iVar0 /*7*/].f_3, Global_2410184[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(vector3 vParam0, var uParam3)//Position - 0x45AF
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, true);
}

int func_73(struct<2> Param0, var uParam2)//Position - 0x45CF
{
	if (Param0.f_1 > Global_2411464[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411464[1])
	{
		if (Param0 < Global_2411468[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411464[2])
	{
		if (Param0 < Global_2411468[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411468[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411468[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_74(vector3 vParam0, float fParam3)//Position - 0x466A
{
	int iVar0;
	
	if (func_83(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_69120 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_69120)
			{
				if (Global_4456448.f_69121[iVar0 /*84*/].f_7 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_69121[iVar0 /*84*/], Global_4456448.f_69121[iVar0 /*84*/].f_6, Global_4456448.f_69121[iVar0 /*84*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_60688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_60688)
			{
				if (Global_4456448.f_60691[iVar0 /*219*/].f_18 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_60691[iVar0 /*219*/], Global_4456448.f_60691[iVar0 /*219*/].f_3, Global_4456448.f_60691[iVar0 /*219*/].f_18, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_92411 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_92411)
			{
				if (Global_4456448.f_92415[iVar0 /*282*/].f_12 != 0)
				{
					if (func_75(vParam0, Global_4456448.f_92415[iVar0 /*282*/], Global_4456448.f_92415[iVar0 /*282*/].f_3, Global_4456448.f_92415[iVar0 /*282*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_267 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_267)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_232[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969029.f_232[iVar0], 0))
				{
					if (func_75(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969029.f_232[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969029.f_232[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969029.f_232[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_265 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_265)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_118[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969029.f_118[iVar0], 0))
				{
					if (func_75(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969029.f_118[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969029.f_118[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969029.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_75(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)//Position - 0x4908
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (SYSTEM::VDIST(vParam0, vParam3) < func_82(iParam7, 1008981770))
	{
		func_76(vParam3, fParam6, iParam7, &vVar0, &vVar3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_76(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0x495B
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { 0f, 1f, 0f };
	func_63(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_77(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0.5f * MISC::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = MISC::ABSF((vVar6.x - vVar3.x));
}

void func_77(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4A27
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_80(iParam0);
		if (iVar0 != 0)
		{
			func_78(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_78(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4AE6
{
	int iVar0;
	
	func_79(iParam0, &Global_1315808);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315808[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315808[iVar0], &(Global_1315812[iVar0 /*3*/]), &(Global_1315819[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315812[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315819[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315812[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315819[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315826[iVar0] = (Global_1315819[iVar0 /*3*/] - Global_1315812[iVar0 /*3*/]);
		Global_1315829[iVar0] = (Global_1315819[iVar0 /*3*/].f_1 - Global_1315812[iVar0 /*3*/].f_1);
		Global_1315832[iVar0] = (Global_1315819[iVar0 /*3*/].f_2 - Global_1315812[iVar0 /*3*/].f_2);
		if (Global_1315826[iVar0] > Global_1315835)
		{
			Global_1315835 = Global_1315826[iVar0];
		}
		if (Global_1315832[iVar0] > Global_1315836)
		{
			Global_1315836 = Global_1315832[iVar0];
		}
		iVar0++;
	}
	Global_1315837 = (Global_1315835 * -0.5f);
	Global_1315840 = (Global_1315835 * 0.5f);
	Global_1315837.f_1 = ((((0.5f * Global_1315829[0]) + Global_1315829[1]) + Global_1315808.f_3) * -1f);
	Global_1315840.f_1 = (0.5f * Global_1315829[0]);
	Global_1315837.f_2 = (Global_1315832[0] * -0.5f);
	Global_1315840.f_2 = (Global_1315832[0] * 0.5f);
	*uParam1 = { Global_1315837 };
	*uParam2 = { Global_1315840 };
}

void func_79(int iParam0, var uParam1)//Position - 0x4CF2
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_80(int iParam0)//Position - 0x4D73
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_81(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x4DA2
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_82(int iParam0, float fParam1)//Position - 0x4DB4
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_77(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_83(int iParam0, bool bParam1, bool bParam2)//Position - 0x4E34
{
	if (bParam1)
	{
		if (func_84(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)//Position - 0x4E66
{
	return func_85(iParam0);
}

bool func_85(int iParam0)//Position - 0x4E74
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_86(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0x4E8E
{
	int iVar0;
	bool bVar1;
	
	if (func_93(vParam0))
	{
		if (func_56(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_88(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_87(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_62(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_87(vector3 vParam0, float fParam3)//Position - 0x4F4A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405071.f_2726[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_88(var uParam0, bool bParam1, bool bParam2)//Position - 0x4F85
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_90(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_57(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_90(vVar2, &uVar1) || func_89(vVar2))
			{
				vVar2 = { *uParam0 };
				func_57(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_89(vector3 vParam0)//Position - 0x5009
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_90(vector3 vParam0, var uParam3)//Position - 0x5042
{
	int iVar0;
	int iVar1;
	
	if (func_92())
	{
		return 0;
	}
	iVar1 = func_91();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_65(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91()//Position - 0x50A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_92()//Position - 0x50D9
{
	return Global_1676879.f_443;
}

int func_93(vector3 vParam0)//Position - 0x50E8
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_97(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_96(vParam0, 1008981770))
			{
				if (!func_56(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_56(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_95(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_94(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_56(&vVar1, 0, 0, 0, 1))
					{
						if (!func_56(&vParam0, 0, 0, 0, 1))
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

Vector3 func_94(var uParam0)//Position - 0x51A8
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_95(vector3 vParam0, float fParam3)//Position - 0x51F1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_65(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_96(vector3 vParam0, float fParam3)//Position - 0x5239
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_65(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_97(int iParam0, bool bParam1)//Position - 0x5280
{
	if (Global_1312448 != 0)
	{
		return func_98(iParam0) != 0;
	}
	return func_83(iParam0, bParam1, 0);
}

int func_98(int iParam0)//Position - 0x52A7
{
	if (func_1248(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_99(vector3 vParam0, var uParam3)//Position - 0x52C9
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			fVar3 = SYSTEM::VDIST(Global_2405071.f_2253[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405071.f_2253[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_100(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)//Position - 0x5343
{
	func_101(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_101(var uParam0, var uParam1)//Position - 0x53EE
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_102(vector3 vParam0, vector3 vParam3, float fParam6)//Position - 0x5450
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_103(float fParam0)//Position - 0x54FB
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5513
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405071.f_2481.f_1 == 0 && Global_2405071.f_2481 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2405071.f_2481.f_1)))
			{
				case 0:
					func_165(uParam1, uParam2);
					if (!Global_2405071.f_2481.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
							}
							if (uParam1->f_5 && func_54(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2481.f_5)
								{
									Global_2405071.f_2481.f_5 = 1;
								}
								else
								{
									func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_55(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_165(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_165(uParam1, uParam2);
					Global_2405071.f_2481.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_165(uParam1, uParam2);
				if (!Global_2405071.f_2481.f_2)
				{
					Global_2405071.f_2481.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_162(Global_2405071.f_550, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2481.f_4)
	{
		Global_2405071.f_2481.f_4 = 1;
		func_112(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405071.f_2481.f_1 > 0 || Global_2405071.f_2481 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405071.f_2481.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405071.f_2481.f_3)
					{
						iVar4 = Global_2405071.f_2481.f_3 + 1;
					}
					if (iVar4 > (Global_2405071.f_2481.f_1 - 1))
					{
						iVar4 = (Global_2405071.f_2481.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_112(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405071.f_2481.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405071.f_2481.f_1;
		}
		if (Global_2405071.f_2481.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405071.f_2878)
			{
				func_106(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_54(Global_2405071.f_484))
			{
				if (Global_2405071.f_2481.f_2)
				{
					func_53(uParam0, &(Global_2405071.f_2481.f_6));
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_55(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_53(uParam0, &(Global_2405071.f_2481.f_6));
				func_105(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2481.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_71(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_105(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
				func_55(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_105(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
		if (uParam1->f_5 && func_54(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2481.f_5)
			{
				Global_2405071.f_2481.f_5 = 1;
			}
			else
			{
				func_55(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_55(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_105(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_105(vector3 vParam0)//Position - 0x5ADA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2615[(3 - iVar0) /*3*/] = { Global_2405071.f_2615[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2615[0 /*3*/] = { vParam0 };
}

void func_106(var uParam0, var uParam1, var uParam2)//Position - 0x5B2A
{
	if (func_54(Global_2405071.f_484) && func_111() < 4096)
	{
		func_110(uParam0, 0f);
		func_110(uParam1, uParam0->f_2);
		func_110(uParam2, uParam1->f_2);
	}
	else
	{
		func_109(uParam0);
		func_108(uParam2, uParam0->f_4);
		func_107(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_107(var uParam0, vector3 vParam1, vector3 vParam4)//Position - 0x5B8F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_108(var uParam0, vector3 vParam1)//Position - 0x5C2E
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_109(var uParam0)//Position - 0x5CB0
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_1;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_110(var uParam0, float fParam1)//Position - 0x5D1D
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_2 < fVar1 && Global_2408003[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_2;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_111()//Position - 0x5DA0
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408003[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_112(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x5DD7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (MISC::ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_158(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_157(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_43(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_151(vParam0, fParam3, uParam4->f_15, func_156(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_148(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_34(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_34(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_87(vParam0, 0.5f))
			{
				if (func_93(vVar12))
				{
					if (!func_56(&vParam0, 0, 0, 0, 1) && !func_147(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_147(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_146(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_145(PLAYER::PLAYER_ID()) && func_143(PLAYER::PLAYER_ID())))
		{
			if (!func_142(&vParam0, &(Global_2405071.f_2481.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_143(PLAYER::PLAYER_ID()))
		{
			if (!func_141(vParam0, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_140(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_54(Global_2405071.f_484))
			{
				if (func_96(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_139(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_88(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_71(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_95(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_138(vParam0, &vVar17, &vVar20, &fVar23);
			if (!func_133(&(Global_2405071.f_45[iVar16 /*12*/]), vVar17, vVar20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_74(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_132(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405071.f_2878 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_124(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_124(vParam0, Global_2405071.f_2456, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_54(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var25.f_2 = func_122(vParam0);
			}
			uVar7 = func_117(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_116(Var25);
			Global_2405071.f_2481.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405071.f_2481.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_124(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_124(vParam0, Global_2405071.f_2456, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_54(Global_2405071.f_484) && iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_122(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405071.f_2481.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_115(Var25, iVar24);
							Global_2405071.f_2481.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2481.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/] && fVar0 > Global_2405071.f_2481.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_115(Var25, iVar24);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_114(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_117(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_113(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_113(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405071.f_2481.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar24 /*10*/] && fVar3 > Global_2405071.f_2481.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_115(Var25, iVar24);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_113(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6794
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_114(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x6832
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_1248(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1248(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_35(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_115(struct<10> Param0, int iParam10)//Position - 0x69C9
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2481.f_6[iParam10 /*10*/] };
	Global_2405071.f_2481.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_115(Var0, iParam10 + 1);
	}
}

void func_116(struct<10> Param0)//Position - 0x6A1B
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_111();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] < iVar11)
		{
			Global_2408003[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] == 0)
		{
			Global_2408003[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2408003[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408003[iVar13 /*10*/] = { Param0 };
	}
}

float func_117(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x6B0F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_1248(iVar11, 1, 1) || (iParam7 == 1 && func_1248(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_118(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_97(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_35(iVar11))
						{
							vVar5 = { func_40(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { NETWORK::_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_118(int iParam0)//Position - 0x6C72
{
	if (func_1248(iParam0, 0, 1))
	{
		if (!func_120(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_83(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_119(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_83(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_44(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)//Position - 0x6D1F
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x6EEA
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_121())
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

bool func_121()//Position - 0x6F2C
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

float func_122(vector3 vParam0)//Position - 0x6F3D
{
	var uVar0;
	
	return func_123(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_123(vector3 vParam0, var uParam3, var uParam4)//Position - 0x6F55
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2724) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_124(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)//Position - 0x70D1
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_113(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_117(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_113(fVar4, 0f, func_131(), func_129(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_127(vParam0);
	fVar0 = func_113(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_97(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_126(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_113(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_125(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_113(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_113(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_113(SYSTEM::VDIST(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_125(vector3 vParam0, var uParam3, var uParam4)//Position - 0x72B8
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &vVar0);
		*uParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_126(vector3 vParam0, int iParam3, int iParam4)//Position - 0x7311
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1248(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1248(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417783.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417783.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_127(vector3 vParam0)//Position - 0x73BD
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_128(uVar6[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2923)
	{
		if (Global_969029.f_266 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969029.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969029.f_151[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969029.f_151[iVar2], 0))
					{
						if (func_128(Global_969029.f_151[iVar2]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_969029.f_151[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_128(int iParam0)//Position - 0x74DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574964[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574964[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::_DOES_RELATIONSHIP_GROUP_EXIST(Global_1574674[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574674[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_129()//Position - 0x75A8
{
	if (func_130())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_130()//Position - 0x7604
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_120(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_131()//Position - 0x763A
{
	if (func_130())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_132(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x7696
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_133(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)//Position - 0x7725
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_137(*uParam0, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_136(*uParam0, uParam0->f_3, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_134(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_134(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, float fParam13)//Position - 0x77B1
{
	vector3 vVar0[8];
	int iVar25;
	
	func_135(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam7, vParam10, fParam13, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_135(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)//Position - 0x7803
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_60(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_136(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12)//Position - 0x7930
{
	vector3 vVar0[8];
	int iVar25;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam6, vParam9, fParam12, 0, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_137(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, float fParam10)//Position - 0x79FA
{
	vector3 vVar0[4];
	int iVar13;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar13 /*3*/], vParam4, vParam7, fParam10, 0, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_138(vector3 vParam0, var uParam3, var uParam4, var uParam5)//Position - 0x7A7E
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { vParam0 };
	iVar4 = func_73(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar4])
	{
		if (func_72(vVar1, &(Global_2410184[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410184[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410184[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_72(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410184[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410184[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410184[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_139(vector3 vParam0)//Position - 0x7B6C
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
	}
	return 1;
}

int func_140(vector3 vParam0)//Position - 0x7BD7
{
	switch (Global_2405071.f_2477)
	{
		case 0:
			return func_170(vParam0, Global_2405071.f_2456, Global_2405071.f_2459, 0, 0);
			break;
		
		case 1:
			return func_100(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, Global_2405071.f_2476, 0, true);
			break;
	}
	return 0;
}

int func_141(vector3 vParam0, var uParam3, var uParam4, float fParam5)//Position - 0x7C69
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar5, fVar8, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_142(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x7D17
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_62(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x7D8A
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_144(iParam0))
			{
				if (Global_1590446[iParam0 /*871*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_144(int iParam0)//Position - 0x7DC0
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_145(int iParam0)//Position - 0x7DD5
{
	if (func_83(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_146(vector3 vParam0, float fParam3, int iParam4)//Position - 0x7DFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405071.f_2615[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_147(var uParam0, bool bParam1)//Position - 0x7E38
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_89(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_62(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar4);
			if (func_90(vVar1, &uVar0) || func_89(vVar1))
			{
				vVar1 = { *uParam0 };
				func_62(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_148(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7ED0
{
	if (func_150(vParam0, fParam3, iParam4, iParam5, 0) || func_149(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_149(vector3 vParam0, int iParam3, int iParam4)//Position - 0x7F01
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_75(vParam0, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1248(iVar2, 0, 1) && func_1248(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_150(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x7FC3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1248(iVar1, 0, 1) && func_1248(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1248(iVar1, 0, 1) && func_1248(iParam4, 0, 1))
				{
					if (Global_2417783.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_40(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417783.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1248(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_40(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)//Position - 0x80E1
{
	Global_2405071.f_3 = 0;
	if (!func_148(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam5)
		{
			if (func_33(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_155(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_74(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_33(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_155(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_152(vParam0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_74(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_33(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_155(vParam0, fParam12))
			{
				Global_2405071.f_3++;
				if (!func_152(vParam0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405071.f_3++;
					if (!func_74(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_152(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x8321
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1248(iVar1, 1, 1) && func_35(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_154(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_153(func_40(iVar1), vParam0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_153(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)//Position - 0x83A0
{
	vector3 vVar0;
	vector3 vVar3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = SYSTEM::SIN(fParam6);
	vVar0.y = SYSTEM::COS(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vVar3, fParam8, 0, true);
}

bool func_154(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x842C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_155(vector3 vParam0, float fParam3)//Position - 0x84A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1248(iVar1, 1, 1) && func_35(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_97(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_154(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_40(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x8560
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_157(vector3 vParam0, float fParam3, int iParam4, float fParam5)//Position - 0x85A3
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1248(iVar1, 1, 1))
			{
				if ((!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_40(iVar1), vParam0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x8668
{
	if (((func_97(iParam0, 1) || func_161(iParam0)) || func_160(iParam0, 0)) || func_159(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x86A4
{
	if (!func_1248(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_160(int iParam0, int iParam1)//Position - 0x86C7
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)//Position - 0x8702
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_162(vector3 vParam0, var uParam3, var uParam4)//Position - 0x8723
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_164(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_164(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_164(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_163(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_163(var uParam0, var uParam1, int iParam2)//Position - 0x8A46
{
	Global_2412459 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_163(&Global_2412459, uParam1, iParam2 + 1);
	}
}

void func_164(var uParam0, var uParam1, int iParam2)//Position - 0x8A84
{
	Global_2412455 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_164(&Global_2412455, uParam1, iParam2 + 1);
	}
}

void func_165(var uParam0, var uParam1)//Position - 0x8ABE
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			if (func_166(Global_2405071.f_2253[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405071.f_2253[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2253[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_112(Global_2405071.f_2253[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405071.f_2481++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2878)
	{
		func_106(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
	}
}

int func_166(vector3 vParam0, var uParam3)//Position - 0x8BAB
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_66(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_66(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_167(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)//Position - 0x8C08
{
	float fVar0;
	
	func_101(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_168()//Position - 0x8C5E
{
	return Global_1310987.f_4;
}

void func_169(float fParam0, float fParam1)//Position - 0x8C6C
{
	func_204();
	func_197(fParam0, fParam1);
}

bool func_170(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)//Position - 0x8C80
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

void func_171(var uParam0, var uParam1, var uParam2)//Position - 0x8D33
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		while (func_193(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_172(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_172(var uParam0, var uParam1, var uParam2)//Position - 0x8DA2
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_192(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412469.f_162 = 0;
	Global_2412469.f_163 = 0;
	Global_2412469.f_164 = -99;
	Global_2412469.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412469[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412469.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_80(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412469.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412469.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_147(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_191(vVar1))
									{
										vVar1 = { func_187(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_74(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_186(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_192(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_182(vVar1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_86(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_181(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_33(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_33(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_179(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_178(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412469.f_162)
																										{
																											Global_2412469[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412469.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412469.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412469.f_162 == 0)
																									{
																										Global_2412469[0 /*3*/] = { vVar1 };
																										Global_2412469.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412469.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412469[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_177(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412469.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412469.f_162++;
																									if (Global_2412469.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412469[Global_2412469.f_162 /*3*/] = { vVar1 };
																									Global_2412469.f_121[Global_2412469.f_162] = fVar4;
																									Global_2412469.f_162++;
																									if (func_186(vVar1, uParam2))
																									{
																										Global_2412469.f_163++;
																									}
																									if (Global_2412469.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412469.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
						{
							func_175(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412469[0 /*3*/] };
						uVar30 = Global_2412469.f_121[0];
						Global_2412469[0 /*3*/] = { Global_2412469[iVar26 /*3*/] };
						Global_2412469.f_121[0] = Global_2412469.f_121[iVar26];
						Global_2412469[iVar26 /*3*/] = { vVar27 };
						Global_2412469.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_174(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_86(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_192(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_173(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412469.f_164 = iVar8;
	}
	return 0;
}

void func_173(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x97CC
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_148(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_174(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0x9850
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_187(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_191(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_175(int iParam0, var uParam1)//Position - 0x98D4
{
	if (!func_186(Global_2412469[iParam0 /*3*/], uParam1))
	{
		Global_2412469.f_162 = (Global_2412469.f_162 - 1);
		func_176(iParam0);
		if (Global_2412469.f_162 > Global_2412469.f_163)
		{
			func_175(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_175(iParam0 + 1, uParam1);
	}
}

void func_176(int iParam0)//Position - 0x992F
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412469[iParam0 /*3*/] = { Global_2412469[iParam0 + 1 /*3*/] };
			Global_2412469.f_121[iParam0] = Global_2412469.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_177(vector3 vParam0, float fParam3, int iParam4)//Position - 0x997A
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { Global_2412469[iParam4 /*3*/] };
	uVar3 = Global_2412469.f_121[iParam4];
	Global_2412469[iParam4 /*3*/] = { vParam0 };
	Global_2412469.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412469.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_177(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_178(vector3 vParam0, float fParam3, float fParam4)//Position - 0x99E7
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_118(iVar5))
		{
			vVar1 = { func_40(iVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_179(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x9A4F
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_1248(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_44(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_180(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_75(func_40(iVar1), vParam0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)//Position - 0x9BC2
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_75(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_77(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_63(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_63(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (MISC::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_63(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_75(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_180(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam3, int iParam4)//Position - 0x9D7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_180(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_180(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9E88
{
	if (func_185(vParam0, fParam3, iParam4, iParam5, iParam6) || func_183(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_183(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9EBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_184(vParam0, iParam4, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_180(vParam0, fParam3, iParam4, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1248(iVar2, 0, 1) && func_1248(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)//Position - 0x9F98
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_82(iParam3, 1008981770);
	fVar1 = func_82(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_185(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9FD8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1248(iVar1, 0, 1) && func_1248(iParam5, 0, 1))
			{
				if (Global_2417783.f_261[iVar0])
				{
					if (func_75(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_75(func_40(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417783.f_261[iVar0])
			{
				if (func_75(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1248(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_75(func_40(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(vector3 vParam0, var uParam3)//Position - 0xA0E7
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_170(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_100(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_187(vector3 vParam0, float fParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)//Position - 0xA178
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_190(vParam0, *fParam3, vParam6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_189(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_188(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_188(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_190(vParam0, *fParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(vParam0, *fParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_188(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_188(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_188(int iParam0, float fParam1)//Position - 0xA5BF
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_77(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_189(vector3 vParam0)//Position - 0xA5F6
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(vector3 vParam0, float fParam3, vector3 vParam4)//Position - 0xA62E
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0f, 1f, 0f };
	func_63(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_59(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_191(vector3 vParam0)//Position - 0xA66A
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_73(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412176[iVar1])
	{
		if (func_72(vParam0, &(Global_2411473[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412176[8])
	{
		if (func_72(vParam0, &(Global_2411473[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_192(var uParam0, bool bParam1)//Position - 0xA6E5
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_170(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_100(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_64(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_193(var uParam0, var uParam1, var uParam2)//Position - 0xA7D7
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;
	
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_192(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412469.f_162 = 0;
		Global_2412469.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412469[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412469.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_194(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1744)
		{
			iVar1 = Global_2405071.f_2150[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1745[iVar1 /*4*/] };
				fVar5 = Global_2405071.f_1745[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_182(vVar2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_86(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_181(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_33(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_33(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_179(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_178(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412469.f_162)
															{
																Global_2412469[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412469.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412469.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412469.f_162 == 0)
														{
															Global_2412469[0 /*3*/] = { vVar2 };
															Global_2412469.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412469.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412469[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_177(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412469.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
													else
													{
														Global_2412469[Global_2412469.f_162 /*3*/] = { vVar2 };
														Global_2412469.f_121[Global_2412469.f_162] = fVar5;
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412469.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
				{
					func_175(0, uParam2);
				}
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
				vVar15 = { Global_2412469[0 /*3*/] };
				uVar18 = Global_2412469.f_121[0];
				Global_2412469[0 /*3*/] = { Global_2412469[iVar14 /*3*/] };
				Global_2412469.f_121[0] = Global_2412469.f_121[iVar14];
				Global_2412469[iVar14 /*3*/] = { vVar15 };
				Global_2412469.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_194(vector3 vParam0)//Position - 0xAE0F
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1744)
	{
		uVar1 = func_195(vParam0, fVar0, &fVar0);
		Global_2405071.f_2150[iVar2] = uVar1;
		iVar2++;
	}
}

int func_195(vector3 vParam0, float fParam3, float fParam4)//Position - 0xAE4A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1744)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405071.f_1745[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_196(int iParam0)//Position - 0xAEAC
{
	return iParam0 == 50;
}

void func_197(float fParam0, float fParam1)//Position - 0xAEB9
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405071.f_2464 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2462 = 1;
	Global_2405071.f_2465 = NETWORK::GET_NETWORK_TIME();
}

void func_198()//Position - 0xAEEC
{
	func_203();
	func_202();
	func_201();
	func_200();
	func_199();
}

void func_199()//Position - 0xAF08
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408003[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_200()//Position - 0xAF40
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405071.f_2481.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_201()//Position - 0xAF6F
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405071.f_2481.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_202()//Position - 0xAF9D
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405071.f_2481.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_203()//Position - 0xAFD9
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2481 = { Var0 };
}

void func_204()//Position - 0xAFF7
{
	if (Global_2405071.f_2462)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_2464)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2462 = 0;
	}
}

int func_205(bool bParam0)//Position - 0xB02A
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_206()//Position - 0xB04D
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1114();
	vVar1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			vVar1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			vVar1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			vVar1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			vVar1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return vVar1;
}

int func_207()//Position - 0xB0DD
{
	switch (Local_112.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_208())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_208()//Position - 0xB115
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_216();
	iVar1 = func_215();
	if (func_1114() == 0)
	{
		iVar7 = Global_1575000;
	}
	else if (func_1114() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1575003;
	}
	switch (func_1114())
	{
		case 1:
			func_214(&vVar2, &fVar6, &fVar5);
			func_213(0, iVar0, vVar2, fVar6, fVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_212((iVar8 - 1), &vVar2, &fVar6, &fVar5);
				func_210(iVar8, iVar1, vVar2, fVar6, fVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_214(&vVar2, &fVar6, &fVar5);
			func_213(0, iVar0, vVar2, fVar6, fVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_212((iVar8 - 1), &vVar2, &fVar6, &fVar5);
				if (iVar8 <= 2)
				{
					iVar1 = 2072724299;
				}
				else
				{
					iVar1 = func_215();
				}
				func_210(iVar8, iVar1, vVar2, fVar6, fVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_214(&vVar2, &fVar6, &fVar5);
			func_213(0, iVar0, vVar2, fVar6, fVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_215();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_212((iVar8 - 1), &vVar2, &fVar6, &fVar5);
				func_210(iVar8, iVar1, vVar2, fVar6, fVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_214(&vVar2, &fVar6, &fVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_212((iVar8 - 1), &vVar2, &fVar6, &fVar5);
				func_210(iVar8, iVar1, vVar2, fVar6, fVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_209())
	{
		return 1;
	}
	return 0;
}

int func_209()//Position - 0xB2E2
{
	switch (func_1114())
	{
		case 1:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[1]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[4])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[5])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[6])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[7])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[8])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_210(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, int iParam7)//Position - 0xB482
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 0, 0))
			{
				if (!MISC::IS_BIT_SET(Local_112.f_11, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 2f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_112.f_11), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_211(&(Local_112.f_13[iParam0]), 26, iParam1, vParam2, fParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), vParam2, fParam6, 0, 0);
						if (func_1114() == 2)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), true);
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, bool bParam9)//Position - 0xB68E
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_212(int iParam0, var uParam1, float fParam2, float fParam3)//Position - 0xB6ED
{
	switch (func_1114())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*fParam2 = 252.5942f;
					*fParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*fParam2 = 47.6051f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*fParam2 = 107.9506f;
					*fParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*fParam2 = 323.9433f;
					*fParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*fParam2 = 357.3127f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*fParam2 = 219.4789f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*fParam2 = 62.113f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*fParam2 = 28.2234f;
					*fParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*fParam2 = 65.8332f;
					*fParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*fParam2 = 323.2079f;
					*fParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*fParam2 = 296.486f;
					*fParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*fParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*fParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*fParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*fParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*fParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*fParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*fParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*fParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*fParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*fParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_213(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6, int iParam7)//Position - 0xBA42
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!MISC::IS_BIT_SET(Local_112.f_11, iParam0))
				{
					MISC::CLEAR_AREA(vParam2, 2f, 1, 0, 0, false);
					MISC::SET_BIT(&(Local_112.f_11), iParam0);
				}
				if (func_33(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_211(&(Local_112.f_13[iParam0]), 26, iParam1, vParam2, fParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1, 0f);
						if (func_1114() == 1)
						{
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 10, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 0, 1, 0, false);
						}
						else
						{
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 0);
						}
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_13[iParam0]), vParam2, fParam6, 0, 0);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_214(var uParam0, float fParam1, float fParam2)//Position - 0xBC92
{
	switch (func_1114())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*fParam1 = 346.3493f;
			*fParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*fParam1 = 155.4586f;
			*fParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*fParam1 = 235.3724f;
			*fParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*fParam1 = 22.5507f;
			*fParam2 = 1f;
			break;
	}
}

int func_215()//Position - 0xBD43
{
	int iVar0;
	
	switch (func_1114())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_216()//Position - 0xBD96
{
	int iVar0;
	
	switch (func_1114())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_217(var uParam0)//Position - 0xBDE9
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_218(var uParam0)//Position - 0xBE12
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_219()//Position - 0xBE31
{
	if (MISC::IS_BIT_SET(iLocal_370, 29))
	{
		if (MISC::IS_BIT_SET(iLocal_370, 28))
		{
			if (!MISC::IS_BIT_SET(iLocal_370, 25))
			{
				if (MISC::IS_BIT_SET(iLocal_371, 0))
				{
					if (!MISC::IS_BIT_SET(iLocal_371, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_370, 26))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_370, 26);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_370, 26))
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 27))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_370, 27);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_370, 27))
					{
						MISC::SET_BIT(&iLocal_370, 25);
					}
				}
			}
		}
	}
}

void func_220(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0xBEE3
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_366(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_364() || iParam2 == 27)
	{
		if (func_309(iParam1, iParam2, uParam3, Global_1574182, 0, func_362(), iParam7))
		{
			func_308(1);
			if ((!func_306() && !func_304()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_303())
				{
					func_298();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_297(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_296(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1248(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((func_295(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_144(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_294(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_291(PLAYER::PLAYER_ID(), 0) && func_290(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_289())
							{
								if (func_1248(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_18();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_288(iVar35) && func_283(iVar35, iParam2)) && func_1248(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_278(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_47(iVar35) };
								iVar37 = func_272(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574182++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_289())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_267(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_266(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_259(iVar35, 0);
								if (bVar34)
								{
									if (func_19(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_258(iParam5))
								{
									func_257(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_257(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1248(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_288(iVar35))
							{
								if (func_1248(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_278(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_47(iVar35) };
									iVar37 = func_272(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574182++;
									iVar51 = func_259(iVar35, 1);
									if (bVar34)
									{
										if (func_19(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_234(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_231(uParam3, iParam1);
						}
						func_230(&(uParam3->f_21));
						func_229();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_228(uParam3, iParam1);
							func_227(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_228(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_223(uParam3))
						{
							Global_1574403 = 1;
						}
						func_221(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_229();
			func_297(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_221(var uParam0)//Position - 0xC534
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_230(&(uParam0->f_21));
		func_222(0);
	}
}

void func_222(bool bParam0)//Position - 0xC570
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_223(var uParam0)//Position - 0xC5B6
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_18() && func_1248(iVar15, 0, 1))
	{
		Var2 = { func_47(iVar15) };
		iVar1 = func_226(uParam0, uParam0->f_37);
		if (func_225(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_224(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_224(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_224(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_224(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_224(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_224(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_224(var uParam0, int iParam1, int iParam2)//Position - 0xC6E3
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xC6F5
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_226(var uParam0, int iParam1)//Position - 0xC705
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_227(int iParam0, bool bParam1, int iParam2)//Position - 0xC715
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_228(var uParam0, int iParam1)//Position - 0xC74B
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_229()//Position - 0xC782
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_230(var uParam0)//Position - 0xC797
{
	uParam0->f_1 = 0;
}

void func_231(var uParam0, int iParam1)//Position - 0xC7A4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1248(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_233(uParam0->f_38[iVar0 /*2*/], 0);
					func_232(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_232(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC817
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_233(int iParam0, bool bParam1)//Position - 0xC853
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_234(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xC887
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_256() && iParam4 < func_255())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_254(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_254("");
			if (uParam3->f_108 == 6)
			{
				func_254("");
			}
			else
			{
				func_254(&sParam5);
			}
			func_239(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_238(uParam3))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_236(uParam3))
			{
				func_237("DPAD_FRIEND");
			}
			else if (func_235(uParam3))
			{
				func_237("DPAD_CREW");
			}
			else
			{
				func_237("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_235(var uParam0)//Position - 0xC9AC
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_236(var uParam0)//Position - 0xC9BD
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_237(char* sParam0)//Position - 0xC9CE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_238(var uParam0)//Position - 0xC9E0
{
	if (func_236(uParam0) && func_235(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0, int iParam1)//Position - 0xCA01
{
	if (func_253(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_244(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_240())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_240()//Position - 0xCA82
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_242() || func_241())
		{
			return 1;
		}
	}
	return 0;
}

var func_241()//Position - 0xCAA7
{
	return Global_2448961.f_15;
}

int func_242()//Position - 0xCAB5
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_241();
	}
	return func_243(Global_4456448.f_154360);
}

int func_243(int iParam0)//Position - 0xCAD9
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0xCB13
{
	if ((func_1248(iParam0, 0, 1) && func_248()) && func_245(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_245(int iParam0, bool bParam1)//Position - 0xCB40
{
	return func_246(iParam0, bParam1, 1);
}

int func_246(int iParam0, bool bParam1, int iParam2)//Position - 0xCB51
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_247(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_18() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0, int iParam1)//Position - 0xCBAD
{
	if (iParam0 != func_18())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_18())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248()//Position - 0xCBFC
{
	if (func_161(PLAYER::PLAYER_ID()) || func_252())
	{
		if (!func_249(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_249(int iParam0, int iParam1)//Position - 0xCC2C
{
	if (func_251(iParam0) == iParam1)
	{
		return func_250(iParam0);
	}
	return 0;
}

int func_250(int iParam0)//Position - 0xCC49
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_251(int iParam0)//Position - 0xCC6F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_252()//Position - 0xCC8E
{
	switch (func_290(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_253(int iParam0)//Position - 0xCCCC
{
	if (func_240())
	{
		if (func_1248(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1248(iParam0, 0, 1) && func_248()) && func_247(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_254(char* sParam0)//Position - 0xCD14
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_255()//Position - 0xCD22
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_256()//Position - 0xCD3E
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_257(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xCD56
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_256() && iParam3 < func_255())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_237(sParam16);
				}
				else
				{
					func_254(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_289())
				{
					func_254("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_237(&(uParam2->f_104));
					}
					else
					{
						func_254("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_254("");
				}
				if (uParam2->f_108 == 6)
				{
					func_254("");
				}
				else
				{
					func_254(&sParam4);
				}
				func_239(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					func_254("");
					func_254("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
				}
				if (func_238(uParam2))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_236(uParam2))
				{
					func_237("DPAD_FRIEND");
				}
				else if (func_235(uParam2))
				{
					func_237("DPAD_CREW");
				}
				else
				{
					func_237("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_258(int iParam0)//Position - 0xD0A2
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_259(int iParam0, bool bParam1)//Position - 0xD0C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_161(iParam0)) && !func_264(iParam0))
	{
		iVar0 = func_263();
	}
	iVar1 = func_262(iParam0);
	if (!iVar1 == -1)
	{
		return func_260(iVar1);
	}
	return iVar0;
}

int func_260(int iParam0)//Position - 0xD110
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_261(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_261(int iParam0)//Position - 0xD1D3
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_262(int iParam0)//Position - 0xD1EA
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_46(iParam0)];
		}
	}
	return -1;
}

int func_263()//Position - 0xD21C
{
	return 21;
}

bool func_264(int iParam0)//Position - 0xD226
{
	return func_265(iParam0, 20);
}

bool func_265(int iParam0, int iParam1)//Position - 0xD236
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

char* func_266(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xD251
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_267(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0xD3DD
{
	if (func_271(iParam3))
	{
		*fParam1 = (func_268(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_258(iParam3))
	{
		*fParam1 = (func_268(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_268(int iParam0, int iParam1)//Position - 0xD42D
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_270(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_269(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_269(float fParam0)//Position - 0xD4D0
{
	return (fParam0 / 1.609344f);
}

float func_270(float fParam0)//Position - 0xD4E0
{
	return (fParam0 / 0.3048f);
}

int func_271(int iParam0)//Position - 0xD4F0
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_272(int iParam0)//Position - 0xD54C
{
	int iVar0;
	
	iVar0 = func_275(iParam0);
	if (iVar0 == -1)
	{
		func_273(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_273(int iParam0, bool bParam1)//Position - 0xD582
{
	if (!func_1248(iParam0, 0, 1))
	{
		return;
	}
	if (func_275(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_274(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_274(int iParam0)//Position - 0xD5EE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_275(int iParam0)//Position - 0xD620
{
	int iVar0;
	
	if (!func_1248(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_276(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_276(int iParam0)//Position - 0xD69F
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_277(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_277(var uParam0)//Position - 0xD755
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_278(int iParam0)//Position - 0xD782
{
	char cVar0[32];
	
	if (func_1248(iParam0, 0, 1))
	{
		Global_2507671 = { func_47(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_225(Global_2507671))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2507671))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_282(&Global_2507671))
		{
			Global_2507601 = { func_280(iParam0) };
			func_279(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_279(var uParam0, char* sParam1)//Position - 0xD803
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_280(int iParam0)//Position - 0xD815
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_281(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_47(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_281(int iParam0)//Position - 0xD851
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_282(var uParam0)//Position - 0xD867
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0, int iParam1)//Position - 0xD88D
{
	if (iParam1 == 26)
	{
		if ((func_287(iParam0) || func_286(iParam0)) || func_285(iParam0))
		{
			return 0;
		}
	}
	if (!func_284(iParam0))
	{
		return 0;
	}
	if ((!func_295(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_144(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_284(int iParam0)//Position - 0xD8FC
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_285(int iParam0)//Position - 0xD915
{
	if (func_287(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_286(int iParam0)//Position - 0xD93B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

bool func_287(int iParam0)//Position - 0xD979
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_288(int iParam0)//Position - 0xD991
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_289()//Position - 0xD9D6
{
	switch (func_290(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_251(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_264(PLAYER::PLAYER_ID()))
	{
		switch (func_290(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_249(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_290(int iParam0)//Position - 0xDB12
{
	if (func_160(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_291(int iParam0, int iParam1)//Position - 0xDB35
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_292(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_292(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)//Position - 0xDB9B
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_293(iParam0, 0);
	return 0;
}

int func_293(int iParam0, int iParam1)//Position - 0xDBF5
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_294(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDC4A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1248(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_295(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_144(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_295(int iParam0)//Position - 0xDCD4
{
	if (func_1248(iParam0, 0, 1))
	{
		if (func_1248(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_290(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_296(int iParam0, int iParam1, int iParam2)//Position - 0xDD15
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_297(bool bParam0)//Position - 0xDD43
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_298()//Position - 0xDD75
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_302())
		{
			func_299();
		}
	}
}

void func_299()//Position - 0xDD97
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_300(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_300(var uParam0, int iParam1)//Position - 0xDDE2
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)//Position - 0xDDF2
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_302()//Position - 0xDE03
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_303()//Position - 0xDE19
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_302())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_302())
	{
		return 1;
	}
	return 0;
}

int func_304()//Position - 0xDE5A
{
	if (func_302())
	{
		if (func_305(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)//Position - 0xDE81
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_306()//Position - 0xDF07
{
	if (func_302())
	{
		if (func_307(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0)//Position - 0xDF2E
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_308(int iParam0)//Position - 0xDFC0
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_309(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0xDFEE
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_361(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_360();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_359())
		{
			if (func_358() > 0 && Global_1574184)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_343())
		{
			func_342(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_342(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_358() == 1)
		{
			func_341(bVar6, iParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_342(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_358() == 0 && !bParam5))
		{
			func_342(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_340();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_340();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_341(bVar6, iParam0, 0))
				{
					func_296(iParam0, 0, 0);
					sVar4 = func_338(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_336(iParam1) };
					if (bParam4)
					{
						func_333(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_326(iParam0, func_330(uParam2), func_327(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_319(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
						{
							sVar9 = iParam6;
						}
						func_317(iParam0, sVar9, func_318(), -1);
					}
					else if (func_240())
					{
						uParam2->f_34 = Global_1574183;
						func_333(iParam0, sVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_310(iParam1);
						uParam2->f_34 = Global_1574183;
						func_333(iParam0, sVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_310(iParam1);
						func_333(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_310(int iParam0)//Position - 0xE2CD
{
	int iVar0;
	
	iVar0 = -1;
	if (func_316())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_315(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_314(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_313(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_311())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_311()//Position - 0xE426
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_42();
	}
	return func_312(Global_4456448.f_154360);
}

int func_312(int iParam0)//Position - 0xE44A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_313(int iParam0)//Position - 0xE484
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_314(int iParam0)//Position - 0xE499
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_315(int iParam0)//Position - 0xE4AE
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_316()//Position - 0xE4C3
{
	return Global_4456448.f_1 == 0;
}

void func_317(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xE4D3
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_237(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_237("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_318()//Position - 0xE532
{
	switch (func_290(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_319(var uParam0)//Position - 0xE58A
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_290(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_322())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_321(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_321(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_320(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_320(int iParam0)//Position - 0xE9B6
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_321(bool bParam0)//Position - 0xE9E8
{
	return func_245(PLAYER::PLAYER_ID(), bParam0);
}

bool func_322()//Position - 0xE9FA
{
	return (func_325() && func_323(func_324()));
}

bool func_323(int iParam0)//Position - 0xEA13
{
	return func_247(iParam0, 1);
}

int func_324()//Position - 0xEA22
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_325()//Position - 0xEA39
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

void func_326(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xEA4F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_237(sParam1);
		}
		else if (func_251(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_237("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_327(var uParam0)//Position - 0xEAD6
{
	int iVar0;
	
	iVar0 = func_251(PLAYER::PLAYER_ID());
	if (func_329())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_328())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_328()//Position - 0xEC81
{
	if (func_251(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_329()//Position - 0xECA4
{
	return Global_1590319;
}

char* func_330(var uParam0)//Position - 0xECB0
{
	int iVar0;
	
	iVar0 = func_251(PLAYER::PLAYER_ID());
	if (func_329())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_332() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_332() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_328())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_331() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_331()//Position - 0xEEA5
{
	return Global_2531497.f_4822;
}

int func_332()//Position - 0xEEB4
{
	if (func_251(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_333(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0xEED7
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_254(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_237(sParam1);
		}
		if (func_359() && iParam6)
		{
			if (func_335())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_237(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_334(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_42())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_334(int iParam0)//Position - 0xEF98
{
	if (func_315(iParam0) || func_314(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_335()//Position - 0xEFBA
{
	return Global_1574184;
}

struct<4> func_336(int iParam0)//Position - 0xEFC6
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_337(PLAYER::PLAYER_ID()) || func_313(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_240() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_337(int iParam0)//Position - 0xF061
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

int func_338(int iParam0, int iParam1, bool bParam2)//Position - 0xF076
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_240() || MISC::IS_STRING_NULL_OR_EMPTY(iParam1)))
	{
		uVar0 = func_339();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return iParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return iParam1;
}

char* func_339()//Position - 0xF1DA
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_340()//Position - 0xF21E
{
	Global_42316 = 1;
}

bool func_341(bool bParam0, int iParam1, bool bParam2)//Position - 0xF22A
{
	if (bParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_342(int iParam0, var uParam1, bool bParam2)//Position - 0xF26A
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_229();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_230(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_343()//Position - 0xF2DC
{
	if (func_357())
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (!func_354())
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (func_351(8, -1))
	{
		return 0;
	}
	if (func_358() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	else if (!func_83(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_349(1) || func_347(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_346() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()) && !func_346())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_345(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_344(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_344(int iParam0)//Position - 0xF4A7
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_345(int iParam0)//Position - 0xF4CF
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

bool func_346()//Position - 0xF4E6
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_347(bool bParam0)//Position - 0xF508
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_348(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_348(int iParam0)//Position - 0xF5F3
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_349(bool bParam0)//Position - 0xF650
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_350()//Position - 0xF679
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_351(int iParam0, int iParam1)//Position - 0xF690
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

int func_352()//Position - 0xF6CB
{
	if (func_353() == 0)
	{
		return 1;
	}
	return 0;
}

int func_353()//Position - 0xF6E0
{
	return Global_1312467.f_18;
}

int func_354()//Position - 0xF6EE
{
	if (func_355())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_355()//Position - 0xF72D
{
	return Global_1312439;
}

bool func_356()//Position - 0xF739
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

bool func_357()//Position - 0xF74E
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_358()//Position - 0xF763
{
	return Global_1373500.f_68;
}

int func_359()//Position - 0xF771
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_360()//Position - 0xF787
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_361(int iParam0)//Position - 0xF7AB
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_362()//Position - 0xF7D7
{
	if (func_363(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_363(int iParam0)//Position - 0xF7F2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_36(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_364()//Position - 0xF815
{
	if (func_362())
	{
		return 1;
	}
	if (func_285(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_329())
	{
		return 1;
	}
	if (func_161(PLAYER::PLAYER_ID()))
	{
		switch (func_251(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_365(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_365(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_365(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_365(int iParam0)//Position - 0xF8F0
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_366(int iParam0)//Position - 0xF908
{
	if (iParam0 == 27)
	{
		if ((func_161(PLAYER::PLAYER_ID()) && !func_264(PLAYER::PLAYER_ID())) && !func_249(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_160(PLAYER::PLAYER_ID(), 0) && func_264(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_367(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0)//Position - 0xF979
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_161(iParam0) && !func_287(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_264(iParam0);
	uVar3 = func_380();
	uVar4 = func_371();
	if ((bVar1 && (func_250(iParam0) || func_370(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_369(iParam0)) && !func_368(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

bool func_368(int iParam0)//Position - 0xFA37
{
	return func_265(iParam0, 19);
}

int func_369(int iParam0)//Position - 0xFA47
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_265(iParam0, 9);
	}
	return 0;
}

int func_370(int iParam0)//Position - 0xFA65
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_371()//Position - 0xFA8B
{
	if ((func_265(PLAYER::PLAYER_ID(), 21) || func_265(PLAYER::PLAYER_ID(), 22)) || func_377())
	{
		return 1;
	}
	if (func_373())
	{
		func_372(22);
		return 1;
	}
	return 0;
}

void func_372(int iParam0)//Position - 0xFAD0
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

int func_373()//Position - 0xFAED
{
	if (func_160(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_380() && !func_376()) || func_375(PLAYER::PLAYER_ID(), 21)) || func_375(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_374(27);
		}
	}
	return 0;
}

void func_374(int iParam0)//Position - 0xFB40
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

bool func_375(int iParam0, int iParam1)//Position - 0xFB5D
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_376()//Position - 0xFB76
{
	return Global_1312417.f_1;
}

bool func_377()//Position - 0xFB84
{
	return func_378(356, -1);
}

int func_378(int iParam0, int iParam1)//Position - 0xFB94
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_379(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_379(int iParam0)//Position - 0xFBC0
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

bool func_380()//Position - 0xFBF4
{
	return Global_1312417;
}

bool func_381()//Position - 0xFC00
{
	return MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5);
}

void func_382()//Position - 0xFC17
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_383(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_383(int iParam0)//Position - 0xFC54
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (func_1114() == 1)
		{
			if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 11))
			{
				if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 15))
				{
					if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 16))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 15))
						{
							if (!MISC::IS_BIT_SET(Local_112.f_1, 10))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0))
									{
										if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
										{
											iVar15 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0);
											if (iVar15 == NETWORK::NET_TO_VEH(Local_112.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
													{
														if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
														{
															iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
															if (PED::IS_PED_A_PLAYER(iVar11))
															{
																iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
																if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
																{
																	if (iVar13 == PLAYER::PLAYER_ID())
																	{
																		MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 11);
																		if (!func_265(PLAYER::PLAYER_ID(), 20))
																		{
																			if (func_381())
																			{
																				func_386(0);
																				func_384();
																			}
																		}
																	}
																}
																else
																{
																	MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 16);
																}
															}
															else
															{
																MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_265(PLAYER::PLAYER_ID(), 20))
												{
													if (func_381())
													{
														if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
														{
															if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
															{
																iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																if (PED::IS_PED_A_PLAYER(iVar11))
																{
																	iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
																	if (iVar13 == PLAYER::PLAYER_ID())
																	{
																		func_386(0);
																		func_384();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_1114() == 2)
		{
			iVar16 = 0;
			while (iVar16 < 15)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iVar16]))
				{
					if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2, iVar16))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
								if (iVar12 == NETWORK::NET_TO_PED(Local_112.f_13[iVar16]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(iVar11))
											{
												iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
												if (iVar13 == PLAYER::PLAYER_ID())
												{
													MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iVar16);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar16++;
			}
		}
		if (func_381())
		{
			if (!func_265(PLAYER::PLAYER_ID(), 20))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0))
					{
						iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
						if (PED::IS_PED_A_PLAYER(iVar12))
						{
							iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(iVar11))
									{
										iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
										if (iVar13 == PLAYER::PLAYER_ID())
										{
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar14))
											{
												iVar17 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar14);
												if (iVar17 == Local_112.f_5)
												{
													func_386(0);
													func_384();
												}
												else if (iVar17 == Local_112.f_7)
												{
													func_386(0);
													func_384();
												}
												else if (func_19(iVar14, 1))
												{
													if (Local_112.f_8 > -1)
													{
														iVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_8));
														if (func_16(iVar14, iVar18, 1))
														{
															func_386(0);
															func_384();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_384()//Position - 0xFF9E
{
	if (!func_385(PLAYER::PLAYER_ID()))
	{
		func_372(25);
	}
}

bool func_385(int iParam0)//Position - 0xFFB8
{
	return func_265(iParam0, 25);
}

void func_386(int iParam0)//Position - 0xFFC8
{
	if (!func_264(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_367(PLAYER::PLAYER_ID()) != 0)
		{
			func_372(20);
			func_387(func_389());
			if (func_161(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_387(int iParam0)//Position - 0x1003B
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_388() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_388()//Position - 0x1009E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_389()//Position - 0x100AB
{
	int iVar0;
	
	iVar0 = func_290(PLAYER::PLAYER_ID());
	if (func_393(iVar0) == 0)
	{
		return -1;
	}
	if (func_392(iVar0))
	{
		return 65;
	}
	if (func_391(iVar0))
	{
		return 66;
	}
	if (func_390(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_390(int iParam0)//Position - 0x100F7
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x1012F
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x10185
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x101B1
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_394()//Position - 0x10371
{
	struct<8> Var0;
	
	switch (Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5)
	{
		case 0:
			if (func_1130())
			{
				Var0 = { func_1093() };
				func_1092(86, "BIGM_ASLTN", &Var0, 1, -1, 2, 1, 0);
				func_1070(-1, 0, 0, -1, 0, 0);
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 1;
			}
			else
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_1064();
			func_1061();
			func_1060();
			func_1051();
			func_1047();
			func_1044();
			func_1043();
			func_1042();
			func_729();
			if (Local_112.f_51 == 2)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_503))
				{
					HUD::REMOVE_BLIP(&iLocal_503);
				}
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 2;
			}
			else if (Local_112.f_51 == 3)
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 4)
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_728();
			func_1064();
			func_711();
			func_1061();
			func_1060();
			func_688();
			func_602();
			func_1051();
			func_548();
			func_547();
			func_1044();
			func_545();
			func_1043();
			func_448();
			func_1042();
			func_729();
			if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 3)
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_112.f_51 == 4)
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			else if (func_439())
			{
				MISC::SET_BIT(&iLocal_370, 24);
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_112.f_51 == 4)
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_1147();
			break;
	}
	if (Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
	{
		func_395();
	}
}

void func_395()//Position - 0x1053E
{
	vector3 vVar0;
	
	if (!func_1130() && !func_381())
	{
		return;
	}
	if (func_1114() == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_112.f_29[0]), false) };
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_112.f_12), false) };
	}
	if (!func_438(vVar0, 0f, 0f, 0f, 0))
	{
		func_396(159, vVar0, &uLocal_520, 1140457472, 1144750080, 0);
	}
}

void func_396(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)//Position - 0x105CC
{
	float fVar0;
	float fVar1;
	
	if ((((func_161(PLAYER::PLAYER_ID()) && !func_287(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8)) && (func_250(PLAYER::PLAYER_ID()) || func_370(PLAYER::PLAYER_ID()))) || func_41(vParam1))
	{
		return;
	}
	Global_1674852 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_436(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_369(PLAYER::PLAYER_ID()) || func_435(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_375(PLAYER::PLAYER_ID(), 21) || func_375(PLAYER::PLAYER_ID(), 25)))
		{
			func_434(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1248(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_433(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_432(iParam0));
				if (func_431(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					MISC::SET_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_430(iParam0))
			{
				fVar1 = func_429(iParam0);
				if (fVar1 != 1f)
				{
					func_425(fVar1);
					MISC::SET_BIT(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_424(iParam0) && func_369(PLAYER::PLAYER_ID()))
				{
					func_422(1);
					func_421(2);
				}
			}
			func_372(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_265(PLAYER::PLAYER_ID(), 19))
			{
				func_374(19);
			}
		}
		if (*uParam4 && func_1248(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_433(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_430(iParam0))
			{
				func_420();
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_161(PLAYER::PLAYER_ID()))
			{
				if (func_290(PLAYER::PLAYER_ID()) != 152)
				{
					func_398();
				}
			}
			if (func_345(2))
			{
				func_422(0);
				func_397(2);
			}
		}
	}
}

void func_397(int iParam0)//Position - 0x1084F
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_398()//Position - 0x10866
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_418();
	func_401(1, 1, 0);
	func_399();
}

void func_399()//Position - 0x1089C
{
	func_400(0, 0);
}

void func_400(int iParam0, int iParam1)//Position - 0x108AA
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_401(bool bParam0, bool bParam1, bool bParam2)//Position - 0x108C2
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_417();
	}
	if (!bParam2)
	{
		func_404(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_403(0);
	func_402();
}

void func_402()//Position - 0x10968
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_403(bool bParam0)//Position - 0x1098D
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_404(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x109AD
{
	if (bParam0)
	{
		if (func_416())
		{
			func_415();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_413();
		func_408(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_405();
	}
}

void func_405()//Position - 0x10A98
{
	if (func_416() && !func_407())
	{
		func_415();
	}
	if (func_407())
	{
		func_406();
	}
	else
	{
		func_413();
		func_408(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_406()//Position - 0x10AE0
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_407()//Position - 0x10B28
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x10B67
{
	if (Global_2437549.f_1893.f_690.f_16 != func_18())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_409())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_409()//Position - 0x10C06
{
	if (((((func_290(PLAYER::PLAYER_ID()) == 229 || func_290(PLAYER::PLAYER_ID()) == 191) || func_412()) || func_411()) || func_410(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_410(int iParam0)//Position - 0x10C62
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

var func_411()//Position - 0x10CCE
{
	return Global_1574402;
}

int func_412()//Position - 0x10CDA
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_413()//Position - 0x10CEF
{
	if (func_416() && !func_407())
	{
		func_415();
	}
	func_414();
	Global_2405071.f_704 = 0;
}

void func_414()//Position - 0x10D18
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_415()//Position - 0x10D53
{
	if (func_407())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_416()//Position - 0x10DC1
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_417()//Position - 0x10E00
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_418()//Position - 0x10E19
{
	func_419();
	Global_2405071.f_2252 = 0;
}

void func_419()//Position - 0x10E2D
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_420()//Position - 0x10E59
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

void func_421(int iParam0)//Position - 0x10EA0
{
	MISC::SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_422(int iParam0)//Position - 0x10EB7
{
	if (func_423() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_423()//Position - 0x10EEC
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0)//Position - 0x10F32
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_425(float fParam0)//Position - 0x10F82
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_426())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_426()//Position - 0x10FEE
{
	switch (func_428())
	{
		case 0:
			return func_427();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_427()//Position - 0x11021
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_428()//Position - 0x11045
{
	return Global_30736;
}

float func_429(int iParam0)//Position - 0x11050
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_430(int iParam0)//Position - 0x111F0
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_431(int iParam0, int iParam1)//Position - 0x112B8
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_432(int iParam0)//Position - 0x11439
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_433(int iParam0)//Position - 0x114F1
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_434(vector3 vParam0, int iParam3, int iParam4)//Position - 0x115EF
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

int func_435(int iParam0)//Position - 0x11619
{
	if (func_20(iParam0))
	{
		if (func_369(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_436(int iParam0, float fParam1)//Position - 0x11638
{
	int iVar0;
	
	iVar0 = func_437(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_384();
	}
}

int func_437(int iParam0)//Position - 0x1165E
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_438(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x116D4
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_439()//Position - 0x1171B
{
	bool bVar0;
	
	if (func_442())
	{
		bVar0 = true;
	}
	else if (func_441())
	{
		bVar0 = true;
	}
	else if (func_440(PLAYER::PLAYER_ID()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
				{
					MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
				OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_112.f_12));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 0);
				OBJECT::_HIDE_PICKUP(NETWORK::NET_TO_OBJ(Local_112.f_12), false);
			}
		}
	}
	return bVar0;
}

int func_440(int iParam0)//Position - 0x117C7
{
	return Global_1590446[iParam0 /*871*/].f_196;
}

bool func_441()//Position - 0x117DA
{
	return MISC::IS_BIT_SET(Global_2448961, 20);
}

int func_442()//Position - 0x117EC
{
	if (MISC::IS_BIT_SET(Global_2531497.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_444() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (func_443() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574647.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_443()//Position - 0x11860
{
	return MISC::IS_BIT_SET(Global_2448961, 5);
}

int func_444()//Position - 0x11871
{
	if (((func_447() || func_441()) || func_446()) || func_445())
	{
		return 1;
	}
	return 0;
}

bool func_445()//Position - 0x118A3
{
	return MISC::IS_BIT_SET(Global_2448961, 1);
}

bool func_446()//Position - 0x118B4
{
	return MISC::IS_BIT_SET(Global_2448961, 2);
}

bool func_447()//Position - 0x118C5
{
	return Global_2448961.f_598;
}

void func_448()//Position - 0x118D4
{
	if (!MISC::IS_BIT_SET(iLocal_370, 6))
	{
		if (func_1130())
		{
			if (func_367(PLAYER::PLAYER_ID()) >= 1)
			{
				if (func_450(82, func_544(), 0, 0))
				{
					MISC::SET_BIT(&iLocal_370, 6);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_370, 6);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_370, 15))
	{
		if (func_1114() == 0 || func_1114() == 3)
		{
			if (func_1130())
			{
				if (func_367(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_112.f_5 != -1 || Local_112.f_7 != -1)
					{
						if (func_450(82, func_449(), 0, 0))
						{
							MISC::SET_BIT(&iLocal_370, 15);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_370, 15);
			}
		}
	}
}

char* func_449()//Position - 0x1198B
{
	switch (func_1114())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_450(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x119B9
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_451(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_451(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0x119E2
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_452(&uVar0, iParam0, func_543(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_452(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x11A1B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_542(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(iParam7);
	}
	if (func_541(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_535(iParam6))
	{
		return 0;
	}
	if (func_532(iVar0, iVar1, iVar2))
	{
		if (func_531())
		{
			return 0;
		}
		func_530();
		return func_459(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_458(iParam4))
	{
		return 0;
	}
	func_453(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_453(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11B00
{
	Global_1366857.f_40.f_1 = iParam0;
	Global_1366857.f_40.f_2 = iParam1;
	Global_1366857.f_40.f_3 = iParam2;
	StringCopy(&(Global_1366857.f_40.f_4), sParam3, 16);
	Global_1366857.f_40.f_8 = iParam4;
	Global_1366857.f_40.f_9 = iParam5;
	Global_1366857.f_40.f_14 = iParam6;
	func_454(iParam4);
	func_530();
	Global_1366857.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_454(int iParam0)//Position - 0x11B6D
{
	if (func_457(iParam0))
	{
		func_456();
		return;
	}
	func_455();
}

void func_455()//Position - 0x11B89
{
	Global_1366857.f_40.f_10 = 0;
}

void func_456()//Position - 0x11B9A
{
	Global_1366857.f_40.f_10 = 1;
}

int func_457(int iParam0)//Position - 0x11BAB
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_458(int iParam0)//Position - 0x11BF3
{
	return iParam0 > Global_1366857.f_40.f_8;
}

int func_459(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x11C06
{
	struct<2> Var0;
	
	func_529();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_526(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_523(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_526(uParam0, sParam3, sParam4);
		}
		return func_506(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_505(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_493(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_492(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_460(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_460(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x11D00
{
	bool bVar0;
	
	func_491();
	bVar0 = true;
	if (func_462(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_461(120000);
		return 1;
	}
	return 0;
}

void func_461(int iParam0)//Position - 0x11D37
{
	Global_1366857.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1366857.f_40.f_12 = 1;
}

int func_462(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x11D5A
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_272(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_490(iParam5, bParam6, &iVar3);
	uVar5 = func_488(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_487(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_466(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_465();
	}
	func_491();
	func_464();
	func_463();
	return 1;
}

void func_463()//Position - 0x11EAC
{
	Global_1366857.f_57 = 0;
	Global_1366857.f_57.f_1 = 0;
}

void func_464()//Position - 0x11EC4
{
	Global_1366857.f_40 = 3;
}

void func_465()//Position - 0x11ED3
{
	MISC::SET_BIT(&Global_7356, 8);
}

int func_466(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x11EE4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_467(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			MISC::SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_467(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x11F50
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_480();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4269600 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_479() == 0)
	{
		func_477();
		return 0;
	}
	func_476(Global_4269599);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/]), sParam1, 64);
	Global_4268350[Global_4269599 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268350[Global_4269599 /*104*/].f_24 = iParam2;
	}
	Global_4268350[Global_4269599 /*104*/].f_25 = iParam7;
	Global_4268350[Global_4269599 /*104*/].f_26 = uParam8;
	Global_4268350[Global_4269599 /*104*/].f_29 = uParam9;
	Global_4268350[Global_4269599 /*104*/].f_30 = uParam12;
	Global_4268350[Global_4269599 /*104*/].f_31 = uParam11;
	Global_4268350[Global_4269599 /*104*/].f_28 = 0;
	Global_4268350[Global_4269599 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_33), sParam4, 64);
	Global_4268350[Global_4269599 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_50), sParam5, 64);
	Global_4268350[Global_4269599 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_83), sParam15, 64);
	func_480();
	switch (iParam16)
	{
		case 3:
			Global_4268350[Global_4269599 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268350[Global_4269599 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268350[Global_4269599 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268350[Global_4269599 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_475(0);
				break;
			
			case 1:
				func_475(1);
				break;
			
			case 2:
				func_475(2);
				break;
			
			case 3:
				func_475(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269600 = 1;
				break;
			
			case 0:
				Global_4269600 = 1;
				break;
			
			case 2:
				Global_4269600 = 1;
				break;
			
			case 1:
				Global_4269600 = 1;
				break;
			}
	}
	Global_21874[Global_4269599] = 0;
	if (bParam10)
	{
		func_480();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_474())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_473(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_470(1);
			func_473(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_468(iParam0, sParam1);
	return 1;
}

void func_468(int iParam0, char* sParam1)//Position - 0x1231A
{
	if (!func_469())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_469()//Position - 0x1233F
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_18())
	{
		return 0;
	}
	if (func_264(PLAYER::PLAYER_ID()))
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

void func_470(int iParam0)//Position - 0x123A5
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_472(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7362);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_237(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_471(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_471(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1293E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_237(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_237(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_237(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_237(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_237(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_472(int iParam0)//Position - 0x129F1
{
	return Global_41396 == iParam0;
}

void func_473(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x129FF
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_474()//Position - 0x12A62
{
	return Global_1312873;
}

void func_475(int iParam0)//Position - 0x12A6E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_476(int iParam0)//Position - 0x12A8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4268350[iParam0 /*104*/].f_18 = iVar0;
	Global_4268350[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268350[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268350[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268350[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268350[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_477()//Position - 0x12B0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_478(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
		{
			Global_4269599 = iVar2;
		}
		iVar2++;
	}
	Global_4268350[Global_4269599 /*104*/].f_24 = 1;
}

int func_478(struct<6> Param0, struct<6> Param6)//Position - 0x12BB7
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_479()//Position - 0x12CA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269599 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0 || Global_4268350[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_478(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
			{
				Global_4269599 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269599 == 11)
	{
		return 0;
	}
	Global_4268350[Global_4269599 /*104*/].f_99[0] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[1] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[2] = 0;
	return 1;
}

void func_480()//Position - 0x12DCD
{
	if (func_472(14))
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
		Global_19486 = func_481();
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

var func_481()//Position - 0x12E6F
{
	func_482();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_482()//Position - 0x12E88
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_485(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_484(PLAYER::PLAYER_PED_ID());
			if (func_483(iVar0) && (!func_472(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_483(Global_111560.f_2358.f_539.f_4321))
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

bool func_483(int iParam0)//Position - 0x12F85
{
	return iParam0 < 3;
}

int func_484(int iParam0)//Position - 0x12F91
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_485(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_485(int iParam0)//Position - 0x12FCE
{
	if (func_483(iParam0))
	{
		return func_486(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_486(int iParam0)//Position - 0x12FF3
{
	return Global_1798[iParam0 /*29*/];
}

int func_487(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x13002
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_467(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			MISC::SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_488(int iParam0, int iParam1)//Position - 0x13084
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_489(2, iParam1);
	return iParam0;
}

void func_489(int iParam0, var uParam1)//Position - 0x130A3
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_490(int iParam0, bool bParam1, int iParam2)//Position - 0x13154
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(iParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_489(1, iParam2);
	if (bParam1)
	{
		return iParam0;
	}
	return HUD::_GET_LABEL_TEXT(iParam0);
}

void func_491()//Position - 0x13191
{
	Global_1366857.f_40.f_9 = 4;
}

int func_492(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x131A2
{
	bool bVar0;
	
	func_491();
	bVar0 = false;
	return func_462(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_493(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x131C9
{
	bool bVar0;
	
	bVar0 = false;
	return func_494(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_494(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x131EC
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_272(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_490(iParam5, bParam6, &iVar3);
	uVar5 = func_488(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_504(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_496(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_465();
	}
	func_495();
	func_464();
	func_463();
	return 1;
}

void func_495()//Position - 0x13343
{
	Global_1366857.f_40.f_9 = 3;
}

int func_496(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x13354
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_498(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_497(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_497(int iParam0)//Position - 0x133E3
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_498(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x133F6
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_480();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_503() == 0)
	{
		func_501();
		return 0;
	}
	func_500(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_475(0);
		func_475(2);
		func_475(1);
	}
	else
	{
		func_480();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_475(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_475(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_475(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_475(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_480();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_474())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_473(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_470(1);
			func_473(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_499(iParam0, sParam1);
	return 1;
}

void func_499(int iParam0, char* sParam1)//Position - 0x138B4
{
	if (!func_469())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_500(int iParam0)//Position - 0x138D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_501()//Position - 0x1396B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_502(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_502(struct<6> Param0, struct<6> Param6)//Position - 0x13A36
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_503()//Position - 0x13B21
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_502(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_504(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x13C89
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_498(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_497(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_505(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x13D35
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_495();
	bVar0 = true;
	if (func_494(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_461(120000);
		return 1;
	}
	return 0;
}

int func_506(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x13D87
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_522(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_512(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_511(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_510(1);
		}
		func_509();
		func_464();
		func_508();
		func_507();
		return 1;
	}
	return 0;
}

void func_507()//Position - 0x13E2A
{
	Global_2540666 = 0;
}

void func_508()//Position - 0x13E37
{
	Global_1366857.f_57 = 1;
	Global_1366857.f_57.f_1 = 0;
}

void func_509()//Position - 0x13E4F
{
	Global_1366857.f_40.f_9 = 1;
}

void func_510(int iParam0)//Position - 0x13E60
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7358, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7358, 0);
	}
}

void func_511(int iParam0)//Position - 0x13E81
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 20);
	}
}

int func_512(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x13EA4
{
	func_521(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_513(sParam3, iParam4, bParam7);
}

int func_513(char* sParam0, int iParam1, bool bParam2)//Position - 0x13EF2
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
					func_520();
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
		if (func_351(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_519();
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
				func_480();
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
				if (func_518())
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
			if (func_517())
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
			func_516();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_515();
		func_514();
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
		func_520();
	}
	return 0;
}

void func_514()//Position - 0x141C4
{
	if (!func_469())
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

void func_515()//Position - 0x141FB
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

void func_516()//Position - 0x1422C
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

int func_517()//Position - 0x142C1
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_518()//Position - 0x142E8
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

void func_519()//Position - 0x14381
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

void func_520()//Position - 0x143D8
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

void func_521(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1442F
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

int func_522(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x14485
{
	func_521(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_513(sParam3, iParam4, bParam7);
}

int func_523(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x144D3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_525(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_524();
		func_509();
		func_464();
		func_508();
		func_507();
		return 1;
	}
	return 0;
}

void func_524()//Position - 0x14525
{
	Global_21823 = 0;
}

bool func_525(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x14531
{
	func_521(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_513(sParam3, iParam4, bParam8);
}

int func_526(var uParam0, char* sParam1, char* sParam2)//Position - 0x14586
{
	if (func_528(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_527();
		func_464();
		func_508();
		return 1;
	}
	return 0;
}

void func_527()//Position - 0x145B1
{
	Global_1366857.f_40.f_9 = 2;
}

bool func_528(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x145C2
{
	func_521(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_513(sParam2, iParam3, 0);
}

void func_529()//Position - 0x14610
{
	Global_1366857.f_55 = Global_1366857.f_40.f_1;
	Global_1366857.f_55.f_1 = Global_1366857.f_40.f_10;
}

void func_530()//Position - 0x14636
{
	Global_1366857.f_40 = 1;
}

bool func_531()//Position - 0x14645
{
	return Global_1366857.f_40 == 1;
}

int func_532(int iParam0, int iParam1, int iParam2)//Position - 0x14655
{
	if (!func_533(iParam0))
	{
		return 0;
	}
	if (Global_1366857.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1366857.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_533(int iParam0)//Position - 0x14694
{
	if (!func_534())
	{
		return 0;
	}
	if (!Global_1366857.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_534()//Position - 0x146BC
{
	if (Global_1366857.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_535(int iParam0)//Position - 0x146D3
{
	if (func_540())
	{
		return 0;
	}
	if (func_539())
	{
		return 0;
	}
	if (func_538(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662552 || func_537())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_536())
		{
			return 0;
		}
	}
	return 1;
}

bool func_536()//Position - 0x14737
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1383933);
}

int func_537()//Position - 0x1474B
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x14763
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

bool func_539()//Position - 0x147BD
{
	return Global_1366857.f_40 == 3;
}

bool func_540()//Position - 0x147CD
{
	return func_517();
}

int func_541(int iParam0, int iParam1, int iParam2)//Position - 0x147D9
{
	if (!func_539())
	{
		return 0;
	}
	return func_532(iParam0, iParam1, iParam2);
}

int func_542(char* sParam0, char* sParam1)//Position - 0x147F7
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_543()//Position - 0x14811
{
	return "TXTMSG";
}

char* func_544()//Position - 0x1481D
{
	switch (func_1114())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_545()//Position - 0x14865
{
	vector3 vVar0;
	
	if (func_1114() == 0)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (!MISC::IS_BIT_SET(iLocal_371, 7))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_546(), true) < 200f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					MISC::SET_BIT(&iLocal_371, 7);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_546(), true) < 121f)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		}
	}
}

Vector3 func_546()//Position - 0x148D7
{
	vector3 vVar0;
	
	switch (func_1114())
	{
		case 0:
			vVar0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			vVar0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			vVar0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			vVar0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return vVar0;
}

void func_547()//Position - 0x1495C
{
	int iVar0;
	
	if (!func_1130() && !func_381())
	{
		return;
	}
	if (!func_265(PLAYER::PLAYER_ID(), 20))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_370, 18))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_519, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_519, false);
				MISC::CLEAR_BIT(&iLocal_370, 18);
			}
			else
			{
				MISC::CLEAR_BIT(&iLocal_370, 18);
			}
		}
		else if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iLocal_519 != iVar0)
			{
				iLocal_519 = iVar0;
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_370, 18))
	{
		MISC::SET_BIT(&iLocal_370, 18);
	}
}

void func_548()//Position - 0x14A09
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_1130() && !func_381())
	{
		return;
	}
	if (!func_559())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_370, 10))
	{
		if (Local_112.f_51 > 1)
		{
			if (func_557())
			{
				if (!func_556())
				{
					if (!func_555())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_554());
						MISC::SET_BIT(&iLocal_370, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_554(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					else if (func_553())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_554());
						MISC::SET_BIT(&iLocal_370, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_554(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_557())
		{
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		}
	}
	if (Local_112.f_5 != -1)
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 11))
		{
			if (Local_112.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_554());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_554(), 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				MISC::SET_BIT(&iLocal_370, 11);
			}
			else if (func_551())
			{
				iVar0 = func_550();
				if (iVar0 != func_18())
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 10))
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_554());
						MISC::SET_BIT(&iLocal_370, 10);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
						{
							if (func_549(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar0), 1) <= 200f)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_554(), 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								MISC::SET_BIT(&iLocal_370, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_551())
		{
			MISC::CLEAR_BIT(&iLocal_370, 11);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_370, 11))
	{
		MISC::CLEAR_BIT(&iLocal_370, 11);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 8))
		{
			iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iLocal_507 != iVar1)
			{
				iLocal_507 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_1130())
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_546(), true);
					if (fVar2 < 150f)
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					}
				}
			}
		}
		else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (iLocal_507 > 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_554());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_507, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			MISC::CLEAR_BIT(&iLocal_370, 8);
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_370, 8))
	{
		MISC::SET_BIT(&iLocal_370, 8);
	}
}

float func_549(int iParam0, int iParam1, bool bParam2)//Position - 0x14C96
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

int func_550()//Position - 0x14CF4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_112.f_5;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

int func_551()//Position - 0x14D29
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_550();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_552();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_552()//Position - 0x14D71
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

bool func_553()//Position - 0x14D86
{
	return (((MISC::IS_BIT_SET(Local_112.f_1, 11) || MISC::IS_BIT_SET(Local_112.f_1, 12)) || MISC::IS_BIT_SET(Local_112.f_1, 13)) || MISC::IS_BIT_SET(Local_112.f_1, 14));
}

int func_554()//Position - 0x14DC8
{
	switch (func_1114())
	{
		case 1:
			return Global_262145.f_12452;
		
		case 2:
			return Global_262145.f_12454;
		
		case 0:
			return Global_262145.f_12451;
		
		case 3:
			return Global_262145.f_12453;
		
		default:
	}
	return 5;
}

int func_555()//Position - 0x14E1A
{
	switch (func_1114())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_556()//Position - 0x14E36
{
	switch (func_1114())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_557()//Position - 0x14E58
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1114();
	switch (iVar0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_546(), true) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (func_558(vVar1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (func_558(vVar1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_546(), true) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_558(vector3 vParam0, int iParam3, int iParam4, bool bParam5)//Position - 0x14F52
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_559()//Position - 0x15CA6
{
	if (!func_561(1, 1, 1, 0))
	{
		return 0;
	}
	if (func_371())
	{
		if (!MISC::IS_BIT_SET(iLocal_371, 11))
		{
			if (!func_560())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
				{
					MISC::SET_BIT(&iLocal_371, 11);
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_371, 11);
			}
		}
		return 0;
	}
	if (func_367(PLAYER::PLAYER_ID()) < 1)
	{
		return 0;
	}
	if (func_1130())
	{
		return 1;
	}
	if (func_381())
	{
		return 1;
	}
	return 0;
}

bool func_560()//Position - 0x15D33
{
	int iVar0;
	
	iVar0 = func_1114();
	return iVar0 == 1;
}

int func_561(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x15D45
{
	if (func_601(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_375(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_375(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_284(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_145(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_600())
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (func_474())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_84(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (func_375(PLAYER::PLAYER_ID(), 0) || func_375(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_375(PLAYER::PLAYER_ID(), 12) || func_375(PLAYER::PLAYER_ID(), 14)) || func_375(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_593(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_568())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_567())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_159(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_537())
	{
		return 0;
	}
	if (func_566(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_565(PLAYER::PLAYER_ID()) && func_564(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_563())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_562(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_410(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_562(int iParam0)//Position - 0x15F39
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_563()//Position - 0x15F6D
{
	return Global_1676879.f_4090 != -1;
}

int func_564(int iParam0)//Position - 0x15F7E
{
	if (iParam0 != func_18() && func_1248(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_565(int iParam0)//Position - 0x15FAF
{
	if (iParam0 != func_18() && func_1248(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_566(int iParam0)//Position - 0x15FE3
{
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

bool func_567()//Position - 0x16022
{
	return Global_98721.f_346 > 0;
}

int func_568()//Position - 0x16033
{
	int iVar0;
	
	iVar0 = func_290(PLAYER::PLAYER_ID());
	if (((func_592(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_26) || func_591(PLAYER::PLAYER_ID())) || func_590(PLAYER::PLAYER_ID())) || func_585(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_583(PLAYER::PLAYER_ID()))
	{
		if (func_391(iVar0) || func_582(iVar0))
		{
			return 1;
		}
	}
	if (func_581(PLAYER::PLAYER_ID()))
	{
		if (func_582(iVar0))
		{
			return 1;
		}
	}
	if (func_580(PLAYER::PLAYER_ID()))
	{
		if (func_579(iVar0))
		{
			return 1;
		}
	}
	if (func_578(PLAYER::PLAYER_ID()))
	{
		if (func_577(iVar0))
		{
			return 1;
		}
	}
	if (func_576(PLAYER::PLAYER_ID()))
	{
		if (func_575(iVar0))
		{
			return 1;
		}
	}
	if (func_574(PLAYER::PLAYER_ID()))
	{
		if (func_573(iVar0))
		{
			return 1;
		}
	}
	if (func_67(PLAYER::PLAYER_ID(), 0))
	{
		if (func_390(iVar0))
		{
			if (func_571(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_570(PLAYER::PLAYER_ID()))
	{
		if (func_569(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_569(int iParam0)//Position - 0x1618C
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_570(int iParam0)//Position - 0x161A6
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_571(int iParam0)//Position - 0x161ED
{
	if (func_572(iParam0) != func_18())
	{
		return func_572(iParam0) == func_46(iParam0);
	}
	return 0;
}

int func_572(int iParam0)//Position - 0x16213
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_573(int iParam0)//Position - 0x16228
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_574(int iParam0)//Position - 0x16254
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_575(int iParam0)//Position - 0x1629B
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_576(int iParam0)//Position - 0x162B5
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_577(int iParam0)//Position - 0x162FC
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_578(int iParam0)//Position - 0x1631C
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_579(int iParam0)//Position - 0x16362
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_580(int iParam0)//Position - 0x16388
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)//Position - 0x163CE
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_582(int iParam0)//Position - 0x16414
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_583(int iParam0)//Position - 0x1643A
{
	if (func_584(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_584(int iParam0, int iParam1)//Position - 0x1645D
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_585(int iParam0)//Position - 0x1653A
{
	if (func_586(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_586(int iParam0, bool bParam1, bool bParam2)//Position - 0x1655E
{
	if (bParam2)
	{
		return func_587(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_587(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_587(int iParam0, bool bParam1)//Position - 0x16639
{
	if (Global_1590284 != func_18())
	{
		if (!func_589(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_588(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_588(int iParam0)//Position - 0x166A5
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_589(int iParam0)//Position - 0x166CB
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_590(int iParam0)//Position - 0x166F7
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_591(int iParam0)//Position - 0x1673D
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_592(int iParam0)//Position - 0x16783
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_593(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x167B2
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_591(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_581(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_590(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_580(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_578(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_576(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_599(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_574(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_598(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_67(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_597(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_570(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_596(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_595(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_594(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_594(int iParam0)//Position - 0x16911
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_595(int iParam0)//Position - 0x16958
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_596(int iParam0)//Position - 0x1699F
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_597(int iParam0)//Position - 0x169E6
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_598(int iParam0)//Position - 0x16A2D
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_599(int iParam0)//Position - 0x16A74
{
	if (iParam0 != func_18())
	{
		if (func_1248(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_18())
			{
				return func_68(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_600()//Position - 0x16AD4
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

bool func_601(int iParam0, int iParam1)//Position - 0x16AF0
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

void func_602()//Position - 0x16B0B
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_112.f_3 != 1)
	{
		return;
	}
	if (!func_559())
	{
		if (iLocal_506 != -2)
		{
			if (iLocal_506 > -1)
			{
				iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_506);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
					if (iVar2 != PLAYER::PLAYER_ID())
					{
						func_686(iVar2, 421, 0, 0);
						if (!func_1130())
						{
							func_685(iVar2, 1, 0, 0);
							func_684(iVar2, 0, 0, 0);
							func_683(iVar2, 0);
							func_680(iVar2, Global_262145.f_12355, 0, 0);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_504))
			{
				HUD::REMOVE_BLIP(&iLocal_504);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_502))
			{
				HUD::REMOVE_BLIP(&iLocal_502);
			}
			iLocal_506 = -2;
			func_679();
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_21(Local_112.f_29[0]))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_112.f_29[0])))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_112.f_29[0]), -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
						{
							MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
							func_384();
							func_386(0);
							if (HUD::DOES_BLIP_EXIST(iLocal_504))
							{
								HUD::REMOVE_BLIP(&iLocal_504);
							}
						}
					}
					else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
					{
						MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
					}
				}
				else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
				{
					MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
				}
			}
			else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
			{
				MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
			}
		}
		else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
		{
			MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
		}
		if (iLocal_506 != Local_112.f_7)
		{
			if (func_21(Local_112.f_29[0]))
			{
				if (Local_112.f_7 == -1)
				{
					if (func_559())
					{
						if (func_367(PLAYER::PLAYER_ID()) >= 1)
						{
							iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_506);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_686(iVar2, 421, 0, 0);
									if (!func_1130())
									{
										func_685(iVar2, 1, 0, 0);
										func_684(iVar2, 0, 0, 0);
										func_683(iVar2, 0);
										func_680(iVar2, Global_262145.f_12355, 0, 0);
									}
								}
							}
						}
					}
					func_676();
				}
				else
				{
					iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_7);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						if (func_559())
						{
							if (func_367(PLAYER::PLAYER_ID()) >= 1)
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (HUD::DOES_BLIP_EXIST(iLocal_504))
								{
									HUD::REMOVE_BLIP(&iLocal_504);
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									if (!func_1130())
									{
										if (!func_674())
										{
											func_686(iVar2, 421, 1, 0);
											func_684(iVar2, 1, 1, 0);
											func_685(iVar2, 1, 1, 0);
											func_683(iVar2, 1);
											func_680(iVar2, Global_262145.f_12355, 1, 0);
										}
										else
										{
											func_686(iVar2, 421, 1, 0);
											func_680(iVar2, Global_262145.f_12355, 1, 0);
										}
									}
									else if (func_674())
									{
										func_686(iVar2, 421, 1, 0);
										func_680(iVar2, Global_262145.f_12355, 1, 0);
									}
									else
									{
										func_686(iVar2, 421, 1, 0);
										func_684(iVar2, 1, 1, 0);
										func_685(iVar2, 1, 1, 0);
										func_683(iVar2, 1);
										func_680(iVar2, Global_262145.f_12355, 1, 0);
									}
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_644("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_506 = Local_112.f_7;
				if (iLocal_506 == -1)
				{
				}
			}
		}
		if (func_559())
		{
			if (func_367(PLAYER::PLAYER_ID()) > 2)
			{
				if (iLocal_506 == -1)
				{
					if (func_1130())
					{
						if (!func_643("GB_AST_RETV"))
						{
							func_640("GB_AST_RETV", 0);
						}
					}
					else if (func_381())
					{
						if (!func_643("GB_AST_DESR"))
						{
							func_640("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_506 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_1130())
					{
						if (!func_643("GB_AST_DROPV"))
						{
							func_640("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_639();
					if (iVar2 != func_18())
					{
						if (func_1111(1))
						{
							iVar3 = func_552();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_643("GB_AST_DROPBV"))
								{
									iVar0 = func_262(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_260(iVar0);
										func_627("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_643("GB_AST_DESR"))
							{
								func_640("GB_AST_DESR", 0);
							}
						}
						else if (!func_643("GB_AST_DESR"))
						{
							func_640("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_506 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_502))
			{
				HUD::REMOVE_BLIP(&iLocal_502);
			}
			func_676();
		}
		else if (iLocal_506 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_504))
			{
				HUD::REMOVE_BLIP(&iLocal_504);
			}
			if (!MISC::IS_BIT_SET(Local_112.f_1, 8))
			{
				if (func_367(PLAYER::PLAYER_ID()) >= 1)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_502))
					{
						iLocal_502 = HUD::ADD_BLIP_FOR_COORD(func_24());
						HUD::SET_BLIP_ROUTE(iLocal_502, true);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_502))
				{
					HUD::REMOVE_BLIP(&iLocal_502);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_502))
			{
				HUD::REMOVE_BLIP(&iLocal_502);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_504))
			{
				HUD::REMOVE_BLIP(&iLocal_504);
			}
			iVar2 = func_639();
			if (iVar2 != func_18())
			{
				if (func_1111(1))
				{
					iVar3 = func_552();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
							{
								if (func_367(PLAYER::PLAYER_ID()) >= 1)
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_502))
									{
										iLocal_502 = HUD::ADD_BLIP_FOR_COORD(func_24());
										HUD::SET_BLIP_ROUTE(iLocal_502, true);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_502))
							{
								HUD::REMOVE_BLIP(&iLocal_502);
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_370, 2))
		{
			if (func_381())
			{
				if (!func_626(86))
				{
					if (func_367(PLAYER::PLAYER_ID()) >= 1)
					{
						if (func_620(0, 1, 1, 1))
						{
							sVar5 = func_614(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
							iVar6 = func_613(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
							if (func_1111(1))
							{
								func_612("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_612("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_611(1);
							MISC::SET_BIT(&iLocal_370, 2);
						}
					}
				}
			}
		}
		func_605();
	}
	func_603();
}

void func_603()//Position - 0x17189
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_559())
	{
		return;
	}
	if (!func_1130() && !func_381())
	{
		return;
	}
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
	{
		if (func_21(Local_112.f_29[0]))
		{
			if (Local_112.f_7 == -1)
			{
				if (!func_381())
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_639();
				if (iVar5 != func_18())
				{
					if (!func_1111(1))
					{
						HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_552();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_604(NETWORK::NET_TO_VEH(Local_112.f_29[0]), iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x17279
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar3);
	fVar7 = ((vVar3.z - vVar0.z) / 2f);
	fVar8 = (vVar3.z - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_605()//Position - 0x17310
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_639();
	vVar1 = { func_24() };
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_29[0]))
		{
			if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 9))
			{
				if (iVar0 == PLAYER::PLAYER_ID())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, true, true, 0))
						{
							func_606(NETWORK::NET_TO_VEH(Local_112.f_29[0]), &uLocal_528, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_112.f_29[0])))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_29[0]), 1);
							}
							MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_606(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x173CE
{
	int iVar0;
	int iVar1;
	
	if (!func_609(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1248(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, 0))
					{
						func_607(func_608(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_607(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17485
{
	struct<9> Var0;
	
	Var0 = -1089379066;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_608(int iParam0)//Position - 0x174DE
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_609(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x174F6
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
			iVar2 = func_610(iParam0, (iVar0 - 1), bParam6, iParam7);
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

int func_610(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x175BB
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

void func_611(int iParam0)//Position - 0x17656
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_321(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_302())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_612(char[4] cParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1768D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_613(int iParam0)//Position - 0x176B8
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 != -1)
	{
		return func_260(iVar0);
	}
	return 1;
}

char* func_614(int iParam0)//Position - 0x176D8
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_619(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return iVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		iVar0 = func_617(iParam0, 0);
		return iVar0;
	}
	if (((func_265(iParam0, 28) || func_265(PLAYER::PLAYER_ID(), 28)) || func_616(iParam0)) && !func_615(iParam0))
	{
		return func_617(iParam0, 0);
	}
	iVar1 = func_46(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_617(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		iVar0 = func_619(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
		{
			return func_617(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_615(int iParam0)//Position - 0x177DE
{
	struct<13> Var0;
	
	Var0 = { func_47(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_616(int iParam0)//Position - 0x1780E
{
	struct<13> Var0;
	
	if (iParam0 != func_18())
	{
		Var0 = { func_47(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_617(int iParam0, bool bParam1)//Position - 0x17867
{
	if (!bParam1)
	{
		if (func_245(iParam0, 1))
		{
			return func_618();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_618()//Position - 0x1788E
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_619(var uParam0)//Position - 0x1789E
{
	return uParam0;
}

int func_620(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x178A8
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_625())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_600())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_83(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_624(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_623())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574181)
	{
		return 0;
	}
	if (func_622())
	{
		return 0;
	}
	if (func_621())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_2541150)
	{
		return 0;
	}
	if (func_410(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_621()//Position - 0x179A5
{
	return Global_2448961.f_591;
}

bool func_622()//Position - 0x179B4
{
	return Global_2448961.f_744;
}

bool func_623()//Position - 0x179C3
{
	return Global_2437549.f_3032.f_578;
}

int func_624(int iParam0)//Position - 0x179D5
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_625()//Position - 0x179F1
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_626(int iParam0)//Position - 0x17A13
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

void func_627(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x17A2A
{
	if (func_628(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = uParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_628(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)//Position - 0x17A65
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_638(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_632();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_631();
	func_630(bParam3);
	func_629();
	return 1;
}

void func_629()//Position - 0x17B47
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_630(bool bParam0)//Position - 0x17B5A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_631()//Position - 0x17B80
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_632()//Position - 0x17BA5
{
	func_634();
	func_633(0);
}

void func_633(bool bParam0)//Position - 0x17BB6
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_634()//Position - 0x17C48
{
	if (!func_637())
	{
	}
	if (func_636())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_635();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_635()//Position - 0x17C71
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(&(Global_1312585.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312585.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_636()//Position - 0x17EE3
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_637()//Position - 0x17EF9
{
	if (!func_636())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_635();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_638(int iParam0, int iParam1, int iParam2)//Position - 0x17F1F
{
	if (!func_636())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam2) == MISC::GET_HASH_KEY(&(Global_1312585.f_32));
}

int func_639()//Position - 0x17F9D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_112.f_7;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

void func_640(char* sParam0, bool bParam1)//Position - 0x17FD2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_641(sParam0))
	{
		return;
	}
	func_632();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_631();
	func_630(bParam1);
	func_629();
}

bool func_641(int iParam0)//Position - 0x18040
{
	if (!func_636())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_642(iParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_642(int iParam0)//Position - 0x18084
{
	if (!func_636())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_643(int iParam0)//Position - 0x180B6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!func_636())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(iParam0) > 23)
	{
		return 0;
	}
	return func_641(iParam0);
}

int func_644(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0x18107
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_149437[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_672(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_652(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_652(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_650(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_47(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar18 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_649(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar18, 0, Global_2507601, &Var2, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar18, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_645(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_645(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x182C7
{
	int iVar0;
	
	if ((!func_648() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_36(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_646(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_646(int iParam0)//Position - 0x183CF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_647(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_647(int iParam0)//Position - 0x18431
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_648()//Position - 0x1846A
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_649(char* sParam0)//Position - 0x1847B
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_650(char* sParam0)//Position - 0x184A6
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_651(&cVar0);
}

var func_651(char[4] cParam0)//Position - 0x184CA
{
	return cParam0;
}

int func_652(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x184D4
{
	int iVar0;
	int iVar1;
	
	if (func_120(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_120(PLAYER::PLAYER_ID()) || (func_671() && func_670())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_669();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1248(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_672(iParam1, iParam0, 0);
							}
							else
							{
								return func_664(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_664(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_672(iParam1, iParam0, 0);
				}
				else
				{
					return func_653(0, -1, 0);
				}
			}
			else
			{
				return func_653(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_672(iParam1, iParam0, 0);
		}
		else
		{
			return func_664(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_664(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_653(bool bParam0, int iParam1, bool bParam2)//Position - 0x186B4
{
	return func_654(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_654(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x186CA
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_663() || (func_662() && func_660())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_659(iParam2, iVar0);
		}
		else
		{
			return func_659(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_119(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_658(1);
				}
				else
				{
					return func_658(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_655(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_655(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_658(1);
	}
	return func_658(0);
}

int func_655(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x187D1
{
	int iVar0;
	
	iVar0 = func_657(iParam0, iParam1, iParam3);
	if (func_656(Global_4456448.f_154360, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_656(int iParam0, bool bParam1)//Position - 0x188E9
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_657(int iParam0, int iParam1, int iParam2)//Position - 0x1893A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_119(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_658(bool bParam0)//Position - 0x18981
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_659(int iParam0, int iParam1)//Position - 0x18998
{
	if (iParam0 == -1)
	{
		iParam0 = func_657(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_660()//Position - 0x189E6
{
	if (func_661())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_661()//Position - 0x18A08
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_662()//Position - 0x18A20
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_663()//Position - 0x18A6D
{
	if (func_661() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x18A8A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_666())
			{
				iVar3 = func_262(iParam0);
				if (!iVar3 == -1)
				{
					return func_260(iVar3);
				}
			}
			if ((func_154(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_119(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_658(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_665(1);
			}
			else
			{
				return func_654(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_658(1);
			}
			else
			{
				return func_654(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_262(iParam0);
	if (!iVar4 == -1)
	{
		return func_260(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_665(bool bParam0)//Position - 0x18C2D
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_666()//Position - 0x18C44
{
	if (((func_241() || func_668()) || func_42()) || func_667())
	{
		return 1;
	}
	return 0;
}

bool func_667()//Position - 0x18C76
{
	return Global_2448961.f_19;
}

var func_668()//Position - 0x18C84
{
	return Global_2448961.f_16;
}

var func_669()//Position - 0x18C92
{
	return Global_2359302.f_2;
}

bool func_670()//Position - 0x18CA0
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_671()//Position - 0x18CB1
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

int func_672(int iParam0, int iParam1, bool bParam2)//Position - 0x18CCE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_666())
	{
		iVar2 = func_262(iParam1);
		if (!iVar2 == -1)
		{
			return func_260(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_18())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_654(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_673(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_119(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_665(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_673(int iParam0)//Position - 0x18E5B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_674()//Position - 0x18F30
{
	switch (func_1114())
	{
		case 1:
			return func_675();
		
		case 0:
		case 2:
		case 3:
			return func_551();
		
		default:
	}
	return 0;
}

int func_675()//Position - 0x18F68
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_639();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_552();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_676()//Position - 0x18FB0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_504))
	{
		return;
	}
	if (!func_1130() && !func_381())
	{
		return;
	}
	if (func_367(PLAYER::PLAYER_ID()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_504))
		{
			HUD::REMOVE_BLIP(&iLocal_504);
		}
		return;
	}
	iLocal_504 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_112.f_29[0]));
	HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(iLocal_504, 1);
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_504, true);
	HUD::SET_BLIP_PRIORITY(iLocal_504, 12);
	HUD::SET_BLIP_SPRITE(iLocal_504, 421);
	HUD::SET_BLIP_SCALE(iLocal_504, Global_262145.f_12355);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_504, "GB_AST_RHN");
	if (func_1130())
	{
		func_677(&iLocal_504, 9);
	}
	else
	{
		func_677(&iLocal_504, 6);
	}
	if (func_1130())
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 0))
		{
			HUD::SET_BLIP_FLASHES(iLocal_504, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_504, 7000);
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&iLocal_370, 0);
		}
	}
}

void func_677(int iParam0, int iParam1)//Position - 0x19094
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_678(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_678(int iParam0)//Position - 0x190BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_679()//Position - 0x19322
{
	if (!func_636())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_632();
}

void func_680(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1934F
{
	var uVar0;
	
	if (func_682(iParam0))
	{
		return;
	}
	if (func_681(&(Global_2416074.f_751[iParam0]), &(Global_2416074.f_1114[iParam0]), &(Global_2416074.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_553[iParam0] = uParam1;
		}
	}
}

int func_681(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x193A1
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_682(int iParam0)//Position - 0x19466
{
	if (iParam0 == func_18())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_426())
	{
		return 1;
	}
	return 0;
}

void func_683(int iParam0, bool bParam1)//Position - 0x1948F
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2416074.f_368), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2416074.f_368), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2416074[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], true);
		}
	}
}

void func_684(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x194EA
{
	var uVar0;
	
	if (func_682(iParam0))
	{
		return;
	}
	if (func_681(&(Global_2416074.f_817[iParam0]), &(Global_2416074.f_1180[iParam0]), &(Global_2416074.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_683(iParam0, bParam2);
	}
}

void func_685(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19532
{
	var uVar0;
	
	if (func_682(iParam0))
	{
		return;
	}
	if (func_681(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = iParam1;
		}
	}
}

void func_686(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x19584
{
	bool bVar0;
	
	if (func_682(iParam0))
	{
		return;
	}
	if (func_681(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_687();
		}
	}
}

void func_687()//Position - 0x195DF
{
	Global_2416074.f_1515 = 1;
}

void func_688()//Position - 0x195EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;
	var uVar17;
	char* sVar18;
	int iVar19;
	
	if (Local_112.f_3 == 1)
	{
		return;
	}
	if (!func_559())
	{
		if (iLocal_505 != -2)
		{
			if (iLocal_505 > -1)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_505);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						func_686(iVar0, 457, 0, 0);
						if (!func_1130())
						{
							func_685(iVar0, 1, 0, 0);
							func_684(iVar0, 0, 0, 0);
							func_683(iVar0, 0);
							func_680(iVar0, Global_262145.f_12355, 0, 0);
						}
						else if (Local_112.f_9 > -1)
						{
							iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_685(iVar0, 1, 0, 0);
									func_684(iVar0, 0, 0, 0);
									func_683(iVar0, 0);
									func_680(iVar0, Global_262145.f_12355, 0, 0);
								}
							}
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_501))
			{
				HUD::REMOVE_BLIP(&iLocal_501);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_502))
			{
				HUD::REMOVE_BLIP(&iLocal_502);
			}
			iLocal_505 = -2;
			func_679();
		}
		return;
	}
	if (iLocal_505 != Local_112.f_5)
	{
		if (Local_112.f_5 == -1)
		{
			if (func_559())
			{
				if (func_367(PLAYER::PLAYER_ID()) >= 1)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_505);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							func_686(iVar0, 457, 0, 0);
							if (!func_1130())
							{
								func_685(iVar0, 1, 0, 0);
								func_684(iVar0, 0, 0, 0);
								func_683(iVar0, 0);
								func_680(iVar0, Global_262145.f_12355, 0, 0);
							}
							else if (Local_112.f_9 > -1)
							{
								iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9);
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_685(iVar0, 1, 0, 0);
										func_684(iVar0, 0, 0, 0);
										func_683(iVar0, 0);
										func_680(iVar0, Global_262145.f_12355, 0, 0);
									}
								}
							}
						}
					}
					if (MISC::IS_BIT_SET(Local_112.f_1, 6))
					{
						func_710("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_505 != -1)
			{
				if (iLocal_505 > -1)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_505);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							if (func_367(PLAYER::PLAYER_ID()) >= 1)
							{
								func_686(iVar0, 457, 0, 0);
								if (!func_1130())
								{
									func_685(iVar0, 1, 0, 0);
									func_684(iVar0, 0, 0, 0);
									func_683(iVar0, 0);
									func_680(iVar0, Global_262145.f_12355, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_5);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				if (func_559())
				{
					if (func_367(PLAYER::PLAYER_ID()) >= 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (func_1248(iVar0, 1, 1))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_501))
							{
								HUD::REMOVE_BLIP(&iLocal_501);
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								if (!func_1130())
								{
									if (!func_551())
									{
										func_686(iVar0, 457, 1, 0);
										func_684(iVar0, 1, 1, 0);
										func_685(iVar0, 1, 1, 0);
										func_683(iVar0, 1);
										func_680(iVar0, Global_262145.f_12355, 1, 0);
									}
									else
									{
										func_686(iVar0, 457, 1, 0);
										func_680(iVar0, Global_262145.f_12355, 1, 0);
									}
								}
								else if (func_551())
								{
									func_686(iVar0, 457, 1, 0);
									func_680(iVar0, Global_262145.f_12355, 1, 0);
								}
								else
								{
									func_686(iVar0, 457, 1, 0);
									func_684(iVar0, 1, 1, 0);
									func_685(iVar0, 1, 1, 0);
									func_683(iVar0, 1);
									func_680(iVar0, Global_262145.f_12355, 1, 0);
								}
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								func_644("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_505 = Local_112.f_5;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
		{
			if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), PLAYER::PLAYER_PED_ID()))
				{
					MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					func_709(1);
					func_384();
					if (func_381())
					{
						func_386(0);
						MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 6);
					}
					if (!func_708())
					{
						func_707(1, 0, 0);
					}
					if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), 1, 1);
							MISC::SET_BIT(&iLocal_370, 12);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_370, 12))
					{
						MISC::CLEAR_BIT(&iLocal_370, 12);
						MISC::CLEAR_BIT(&iLocal_370, 13);
					}
					iLocal_509 = AUDIO::GET_SOUND_ID();
					if (func_321(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_509, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", false);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_509, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", false);
					}
					if (func_706(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), 1, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_12), vLocal_373, 0, 0, 1);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), PLAYER::PLAYER_PED_ID()))
			{
				MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
				if (func_708())
				{
					func_707(0, 0, 0);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_112.f_8)
				{
					func_709(0);
				}
				if (MISC::IS_BIT_SET(iLocal_370, 12))
				{
					MISC::CLEAR_BIT(&iLocal_370, 12);
					MISC::CLEAR_BIT(&iLocal_370, 13);
				}
			}
			else
			{
				if (func_706(PLAYER::PLAYER_PED_ID()))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_12), vLocal_373, 0, 0, 1);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_370, 12))
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 13))
					{
						if (func_620(0, 1, 1, 1))
						{
							func_705("GB_ASLT_SUB", -1);
							MISC::SET_BIT(&iLocal_370, 13);
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
	{
		MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
	}
	if (iLocal_505 == -1)
	{
		if (func_559())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_501))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
				{
					func_704();
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_370, 5))
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 6))
				{
					MISC::SET_BIT(&iLocal_370, 5);
					HUD::REMOVE_BLIP(&iLocal_501);
				}
			}
			if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
			{
				if (func_367(PLAYER::PLAYER_ID()) >= 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]))
					{
						if (!func_10(Local_112.f_13[0]))
						{
							HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
							GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_13[0]), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
						}
					}
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_502))
		{
			HUD::REMOVE_BLIP(&iLocal_502);
		}
	}
	else if (iLocal_505 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_501))
		{
			HUD::REMOVE_BLIP(&iLocal_501);
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
		{
			if (func_367(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_502))
				{
					iLocal_502 = HUD::ADD_BLIP_FOR_COORD(func_24());
					HUD::SET_BLIP_ROUTE(iLocal_502, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_502))
			{
				HUD::REMOVE_BLIP(&iLocal_502);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_502))
		{
			HUD::REMOVE_BLIP(&iLocal_502);
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_501))
		{
			HUD::REMOVE_BLIP(&iLocal_501);
		}
		iVar0 = func_550();
		if (iVar0 != func_18())
		{
			if (func_1111(1))
			{
				iVar1 = func_552();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
						{
							if (func_367(PLAYER::PLAYER_ID()) >= 1)
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_502))
								{
									iLocal_502 = HUD::ADD_BLIP_FOR_COORD(func_24());
									HUD::SET_BLIP_ROUTE(iLocal_502, true);
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_502))
						{
							HUD::REMOVE_BLIP(&iLocal_502);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_559())
		{
			if (func_367(PLAYER::PLAYER_ID()) >= 1)
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_552();
						if (func_1111(1))
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), 0))
								{
									func_604(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), iVar3, iVar4, iVar5, 0);
								}
								else
								{
									GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), true) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
	}
	if (func_559())
	{
		if (func_367(PLAYER::PLAYER_ID()) > 2)
		{
			if (!MISC::IS_BIT_SET(iLocal_371, 6))
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 6))
				{
					if (iLocal_505 == -1)
					{
						if (func_1130())
						{
							if (!func_643("GB_AST_RETP"))
							{
								func_640("GB_AST_RETP", 0);
							}
						}
						else if (func_381())
						{
							if (!func_643("GB_AST_RETP"))
							{
								func_640("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_505 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!func_643("GB_AST_DROP"))
						{
							func_640("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_550();
						if (iVar0 != func_18())
						{
							if (func_1111(1))
							{
								iVar1 = func_552();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_643("GB_AST_DROPB"))
									{
										iVar16 = func_262(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_260(iVar16);
											func_627("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_643("GB_AST_RETNG"))
									{
										func_701("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_643("GB_AST_RETGR"))
								{
									sVar18 = func_614(iVar0);
									func_698("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_643("GB_AST_RETNG"))
								{
									func_701("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_643("GB_AST_RETGR"))
							{
								sVar18 = func_614(iVar0);
								func_698("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_697() };
					if (!func_643(&Var8))
					{
						func_640(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_679();
		}
	}
	else
	{
		func_679();
	}
	if (!MISC::IS_BIT_SET(iLocal_370, 2))
	{
		if (func_381())
		{
			if (!func_626(86))
			{
				if (func_367(PLAYER::PLAYER_ID()) >= 1)
				{
					if (func_620(0, 1, 1, 1))
					{
						sVar18 = func_614(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
						iVar19 = func_613(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
						if (func_1111(1))
						{
							if (Local_112.f_5 > -1)
							{
								func_612("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_612("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_112.f_5 > -1)
						{
							func_612("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_612("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_611(1);
						MISC::SET_BIT(&iLocal_370, 2);
					}
				}
			}
		}
	}
	func_691();
	func_690();
	func_689();
}

void func_689()//Position - 0x1A15B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!func_559())
	{
		return;
	}
	if (func_367(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_12) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_112.f_12), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_112.f_12)))
			{
				if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3) && !MISC::IS_BIT_SET(Local_112.f_1, 1))
				{
					HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
					GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_112.f_12), true) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
				}
			}
		}
	}
}

void func_690()//Position - 0x1A216
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar0 = func_550();
	vVar1 = { func_24() };
	if (HUD::DOES_BLIP_EXIST(iLocal_502))
	{
		HUD::GET_HUD_COLOUR(12, &iVar4, &iVar5, &iVar6, &uVar7);
		GRAPHICS::DRAW_MARKER(1, vVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, iVar4, iVar5, iVar6, 100, 0, 0, 2, 0, 0, 0, false);
	}
	if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_691()//Position - 0x1A2BD
{
	vector3 vVar0;
	bool bVar3;
	struct<35> Var4;
	
	switch (iLocal_510)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_112.f_12), true) };
				if (!func_438(vLocal_512, 0f, 0f, 0f, 0))
				{
					vLocal_512 = { 0f, 0f, 0f };
				}
				if (func_692(vVar0, iLocal_511, 0))
				{
					iLocal_510++;
				}
				if (iLocal_510 == 0)
				{
					iLocal_511++;
				}
				if (iLocal_511 >= 36)
				{
					iLocal_511 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_112.f_5 == -1)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
				{
					bVar3 = true;
					if (func_438(vLocal_512, 0f, 0f, 0f, 0))
					{
						vLocal_512 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_112.f_12), true) };
					}
				}
			}
			else if (Local_112.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
				{
					if (func_438(vLocal_512, 0f, 0f, 0f, 0))
					{
						vLocal_512 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_112.f_12), true) };
					}
					bVar3 = true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_12);
				}
			}
			if (bVar3)
			{
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_32 = -1082130432;
				Var4.f_34 = 1;
				Var4.f_3 = 0;
				Var4.f_5 = 1f;
				Var4.f_13[0 /*3*/] = { vLocal_512 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
				{
					if (func_51(vLocal_512, 20f, &vLocal_515, &uLocal_518, &Var4))
					{
						vLocal_515 = { vLocal_515 + Vector(0.5f, 0f, 0f) };
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_112.f_12));
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_112.f_12), vLocal_515, 0, 0, 1);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_112.f_12), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
						MISC::SET_BIT(&iLocal_371, 3);
						iLocal_510 = 0;
					}
				}
			}
			else if (Local_112.f_5 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_112.f_12), true) };
				if (!func_692(vVar0, iLocal_511, 0))
				{
					iLocal_510 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (MISC::IS_BIT_SET(iLocal_371, 3))
	{
		if (func_620(0, 1, 1, 1))
		{
			MISC::CLEAR_BIT(&iLocal_371, 3);
			func_705("GB_HLP_WRP", -1);
		}
	}
}

int func_692(vector3 vParam0, int iParam3, float fParam4)//Position - 0x1A51C
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (func_696(iParam3))
	{
		func_693(iParam3, &vVar0, &vVar3, &fVar6, fParam4);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, fVar6, 0, true);
	}
	return 0;
}

void func_693(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)//Position - 0x1A553
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	
	vVar0 = { func_695(iParam0) };
	uVar3 = func_694(iParam0);
	vVar4 = { 0f, 1f, 0f };
	func_63(&vVar4, 0f, 0f, uVar3);
	vVar4 = { vVar4 / FtoV(SYSTEM::VMAG(vVar4)) };
	*uParam1 = { vVar0 + vVar4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_694(int iParam0)//Position - 0x1A603
{
	return Global_4006552[iParam0 /*45*/].f_7;
}

Vector3 func_695(int iParam0)//Position - 0x1A615
{
	return Global_4006552[iParam0 /*45*/].f_4;
}

int func_696(int iParam0)//Position - 0x1A629
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_697()//Position - 0x1A647
{
	struct<8> Var0;
	
	switch (func_1114())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_698(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1A6A1
{
	if (func_699(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_699(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1A6C6
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_700(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_632();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_631();
	func_630(bParam2);
	func_629();
	return 1;
}

bool func_700(int iParam0, int iParam1)//Position - 0x1A770
{
	if (!func_636())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_701(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1A7C8
{
	func_702(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_702(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1A7E0
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_703(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_632();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_631();
	func_630(bParam2);
	func_629();
	return 1;
}

bool func_703(int iParam0, int iParam1)//Position - 0x1A8AA
{
	if (!func_636())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_704()//Position - 0x1A902
{
	if (func_367(PLAYER::PLAYER_ID()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_501))
		{
			HUD::REMOVE_BLIP(&iLocal_501);
		}
		return;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_501))
	{
		return;
	}
	iLocal_501 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_112.f_12));
	HUD::SET_BLIP_PRIORITY(iLocal_501, 12);
	HUD::SET_BLIP_SPRITE(iLocal_501, 457);
	HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(iLocal_501, 1);
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_501, true);
	HUD::SET_BLIP_SCALE(iLocal_501, Global_262145.f_12355);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_501, "GB_AST_BLIP");
	if (MISC::IS_BIT_SET(Local_112.f_1, 6))
	{
		if (func_1130())
		{
			func_677(&iLocal_501, 18);
		}
		else
		{
			func_677(&iLocal_501, 18);
		}
	}
	else
	{
		func_677(&iLocal_501, 6);
	}
	if (func_1130())
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 0))
		{
			HUD::SET_BLIP_FLASHES(iLocal_501, 1);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_501, 7000);
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&iLocal_370, 0);
		}
	}
}

void func_705(char[4] cParam0, int iParam1)//Position - 0x1A9E6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_706(int iParam0)//Position - 0x1A9FD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_150226;
}

void func_707(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1AA28
{
	bool bVar0;
	
	bVar0 = true;
	if (!bParam2)
	{
		if ((!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (bParam1)
			{
				if (!func_250(PLAYER::PLAYER_ID()))
				{
					bVar0 = false;
				}
			}
			else if (!func_264(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Global_1573342 != bParam0)
		{
			Global_1573342 = bParam0;
		}
	}
}

bool func_708()//Position - 0x1AA8C
{
	return Global_1573342;
}

void func_709(bool bParam0)//Position - 0x1AA98
{
	if (bParam0)
	{
		if (!func_265(PLAYER::PLAYER_ID(), 9))
		{
			if (func_367(PLAYER::PLAYER_ID()) != 0)
			{
				func_372(9);
			}
		}
	}
	else if (func_265(PLAYER::PLAYER_ID(), 9))
	{
		func_374(9);
	}
}

int func_710(char* sParam0, int iParam1)//Position - 0x1AADE
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_645(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_711()//Position - 0x1AB0A
{
	struct<8> Var0;
	char[] cVar8[8];
	int iVar9;
	
	if (func_371())
	{
		return;
	}
	if (func_367(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
	{
		if (!func_1130())
		{
			if (((Local_112.f_5 != -1 || Local_112.f_7 != -1) || MISC::IS_BIT_SET(Local_112.f_1, 16)) || MISC::IS_BIT_SET(Local_112.f_1, 20))
			{
				MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
				OBJECT::_0x78857FC65CADB909(1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_12))
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), false, 1);
				}
				cVar8 = func_614(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
				iVar9 = func_613(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_9));
				if (func_19(PLAYER::PLAYER_ID(), 1))
				{
					Var0 = { func_727(1) };
					if (func_559())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 0)
						{
							func_712(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1070(-1, 0, 0, -1, 0, 0);
				}
				else
				{
					Var0 = { func_727(0) };
					if (func_559())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 0)
						{
							func_712(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1070(-1, 0, 0, -1, 0, 0);
				}
				func_422(1);
			}
		}
	}
}

int func_712(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1AC54
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_713(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_713(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1AC8F
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_726(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_300(&(Var0.f_69), 4);
	return func_714(&Var0);
}

int func_714(var uParam0)//Position - 0x1AD43
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_725(uParam0, uParam0->f_17);
	func_724(uParam0);
	if (func_42())
	{
		func_724(uParam0);
	}
	if (func_723(uParam0->f_1))
	{
		func_716();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_716();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_300(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_715(uParam0->f_69, 128))
			{
				if (func_305(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_300(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_715(var uParam0, int iParam1)//Position - 0x1AF15
{
	return (uParam0 && iParam1) != 0;
}

void func_716()//Position - 0x1AF24
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_717();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_717()//Position - 0x1AF57
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_721(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_718(&(Global_2437549.f_3032.f_1));
}

void func_718(var uParam0)//Position - 0x1AF98
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76846)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_720(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_719(0);
}

void func_719(int iParam0)//Position - 0x1B03F
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_720(bool bParam0)//Position - 0x1B053
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_721(var uParam0)//Position - 0x1B07E
{
	func_722(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_722(var uParam0)//Position - 0x1B0A8
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_723(int iParam0)//Position - 0x1B127
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_724(var uParam0)//Position - 0x1B234
{
	if (func_307(uParam0->f_1))
	{
		uParam0->f_72 = func_263();
	}
}

void func_725(var uParam0, int iParam1)//Position - 0x1B24F
{
	if (func_307(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_18() || !func_1248(iParam1, 0, 1))
	{
		return;
	}
	if (func_305(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_652(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_726(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x1B2A6
{
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_19 = func_18();
	uParam1->f_20 = func_18();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

struct<8> func_727(bool bParam0)//Position - 0x1B324
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_1114())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_1114())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_728()//Position - 0x1B3D3
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		if (!MISC::IS_BIT_SET(iLocal_371, 12))
		{
			if (func_370(PLAYER::PLAYER_ID()))
			{
				MISC::SET_BIT(&iLocal_371, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
			}
			else if (func_367(PLAYER::PLAYER_ID()) < 1)
			{
				MISC::SET_BIT(&iLocal_371, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
			}
		}
		else if (!func_370(PLAYER::PLAYER_ID()))
		{
			if (func_367(PLAYER::PLAYER_ID()) >= 1)
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), false, 1);
				MISC::CLEAR_BIT(&iLocal_371, 12);
			}
		}
	}
}

void func_729()//Position - 0x1B46D
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	char* sVar24;
	char[] cVar28[8];
	char[] cVar32[8];
	char[] cVar36[8];
	char[] cVar40[8];
	char* sVar44;
	char* sVar48;
	int iVar49;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_371, 6))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 8))
			{
				func_1041(&sVar24, &cVar28, &cVar32, &cVar36, &cVar40, &sVar44);
				if (func_559())
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_6);
					if (iVar0 == PLAYER::PLAYER_ID())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(87, "GB_WINNER", &sVar24, 1, -1, 2, 1, 0);
						}
						if (!MISC::IS_BIT_SET(iLocal_370, 17))
						{
							MISC::SET_BIT(&iLocal_370, 17);
							func_931(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_748(159, 1, &Var2, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						iVar1 = func_552();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_367(PLAYER::PLAYER_ID()) > 1)
							{
								sVar48 = func_747();
								iVar49 = func_613(PLAYER::PLAYER_ID());
								func_712(87, "GB_WINNER", &cVar28, sVar48, iVar49, 0, -1, -1, -1, 2, -1);
							}
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							if (func_1131() == Local_112.f_8)
							{
								func_748(159, 1, &Var2, 0);
							}
							else
							{
								func_748(159, 0, &Var2, 0);
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						}
						else
						{
							if (func_367(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar48 = func_614(iVar0);
									iVar49 = func_613(iVar0);
								}
								else
								{
									sVar48 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar49 = 1;
								}
								if (func_1114() != 1)
								{
									func_712(88, "GB_WORK_OVER", &cVar32, sVar48, iVar49, 0, -1, -1, -1, 2, -1);
								}
								else if (MISC::IS_BIT_SET(Local_112.f_1, 8))
								{
									func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
								}
							}
							func_748(159, 0, &Var2, 0);
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							func_748(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar48 = func_614(iVar0);
								iVar49 = func_613(iVar0);
							}
							else
							{
								sVar48 = PLAYER::GET_PLAYER_NAME(iVar0);
								iVar49 = 1;
							}
							if (func_1114() != 1)
							{
								func_712(88, "GB_WORK_OVER", &cVar32, sVar48, iVar49, 0, -1, -1, -1, 2, -1);
							}
							else if (MISC::IS_BIT_SET(Local_112.f_1, 8))
							{
								func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_370, 17))
						{
							MISC::SET_BIT(&iLocal_370, 17);
							func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_748(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 10))
			{
				if (Local_112.f_6 > -1)
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_6);
				}
				if (func_559())
				{
					if (func_1130())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar48 = func_614(iVar0);
									iVar49 = func_613(iVar0);
								}
								else
								{
									sVar48 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar49 = 1;
								}
								func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
							}
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else if (Local_112.f_6 > -1)
					{
						if (func_19(PLAYER::PLAYER_ID(), 1))
						{
							iVar1 = func_552();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == PLAYER::PLAYER_ID())
								{
									if (func_367(PLAYER::PLAYER_ID()) > 1)
									{
										func_1092(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1, 0);
									}
								}
								else if (func_367(PLAYER::PLAYER_ID()) > 1)
								{
									iVar49 = func_613(PLAYER::PLAYER_ID());
									sVar48 = func_747();
									func_712(87, "GB_WINNER", "BIGM_ASL_DESG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
								}
								if (func_1130() || func_381())
								{
									if (!MISC::IS_BIT_SET(iLocal_370, 17))
									{
										MISC::SET_BIT(&iLocal_370, 17);
										func_931(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								if (Local_112.f_6 == PLAYER::PLAYER_ID())
								{
									func_748(159, 1, &Var2, 0);
								}
								else
								{
									func_748(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_367(PLAYER::PLAYER_ID()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar48 = func_614(iVar0);
										iVar49 = func_613(iVar0);
									}
									else
									{
										sVar48 = PLAYER::GET_PLAYER_NAME(iVar0);
										iVar49 = 1;
									}
									func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
								}
								if (func_1130() || func_381())
								{
									if (!MISC::IS_BIT_SET(iLocal_370, 17))
									{
										MISC::SET_BIT(&iLocal_370, 17);
										func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								func_748(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == PLAYER::PLAYER_ID())
						{
							if (func_367(PLAYER::PLAYER_ID()) > 1)
							{
								func_1092(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1, 0);
							}
							if (func_1130() || func_381())
							{
								if (!MISC::IS_BIT_SET(iLocal_370, 17))
								{
									MISC::SET_BIT(&iLocal_370, 17);
									func_931(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_748(159, 1, &Var2, 0);
						}
						else
						{
							if (func_367(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar48 = func_614(iVar0);
									iVar49 = func_613(iVar0);
								}
								else
								{
									sVar48 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar49 = 1;
								}
								func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
							}
							if (func_1130() || func_381())
							{
								if (!MISC::IS_BIT_SET(iLocal_370, 17))
								{
									MISC::SET_BIT(&iLocal_370, 17);
									func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_748(159, 0, &Var2, 0);
						}
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							sVar48 = func_747();
							iVar49 = func_613(PLAYER::PLAYER_ID());
							func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 15))
			{
				if (func_559())
				{
					if (func_1130())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							sVar48 = func_747();
							iVar49 = func_613(PLAYER::PLAYER_ID());
							func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 18))
			{
				if (func_559())
				{
					if (func_1130())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							sVar48 = func_747();
							iVar49 = func_613(PLAYER::PLAYER_ID());
							func_712(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar48, iVar49, 0, -1, -1, -1, 2, -1);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
					else
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1130() || func_381())
						{
							if (!MISC::IS_BIT_SET(iLocal_370, 17))
							{
								MISC::SET_BIT(&iLocal_370, 17);
								func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_748(159, 0, &Var2, 0);
					}
				}
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				func_1041(&sVar24, &cVar28, &cVar32, &cVar36, &cVar40, &sVar44);
				if (func_559())
				{
					if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", &sVar44, 1, -1, 2, 1, 0);
						}
					}
					else if (func_367(PLAYER::PLAYER_ID()) > 1)
					{
						func_1092(88, "GB_WORK_OVER", &sVar44, 1, -1, 2, 1, 0);
					}
				}
				if (func_1130() || func_381())
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 17))
					{
						MISC::SET_BIT(&iLocal_370, 17);
						func_931(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_748(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (func_559())
				{
					if (func_1130())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
						}
					}
					else if (func_367(PLAYER::PLAYER_ID()) > 1)
					{
						func_1092(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (func_1130() || func_381())
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 17))
					{
						MISC::SET_BIT(&iLocal_370, 17);
						func_931(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_748(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_371, 6);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 9))
			{
				if (func_559())
				{
					if (func_1130())
					{
						if (func_367(PLAYER::PLAYER_ID()) > 1)
						{
							func_1092(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1, 0);
						}
					}
					else if (func_367(PLAYER::PLAYER_ID()) > 1)
					{
						func_1092(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1, 0);
					}
				}
				if (func_1130() || func_381())
				{
					if (!MISC::IS_BIT_SET(iLocal_370, 17))
					{
						MISC::SET_BIT(&iLocal_370, 17);
						func_931(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_748(159, 0, &Var2, 0);
				MISC::SET_BIT(&iLocal_371, 6);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_371, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_371, 8))
			{
				if (MISC::IS_BIT_SET(iLocal_370, 19))
				{
					iLocal_508 = -1;
					AUDIO::STOP_SOUND(iLocal_508);
				}
				func_679();
				MISC::SET_BIT(&iLocal_371, 8);
				if (MISC::IS_BIT_SET(iLocal_370, 20))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
					AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_504))
			{
				HUD::REMOVE_BLIP(&iLocal_504);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_503))
			{
				HUD::REMOVE_BLIP(&iLocal_503);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_501))
			{
				HUD::REMOVE_BLIP(&iLocal_501);
			}
			func_746();
			if (!MISC::IS_BIT_SET(iLocal_370, 29))
			{
				MISC::SET_BIT(&iLocal_370, 29);
			}
			if (func_730(&uLocal_521, 1, 0))
			{
				MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_730(var uParam0, bool bParam1, int iParam2)//Position - 0x1C15B
{
	bool bVar0;
	
	func_372(29);
	if ((*uParam0 > 0 && !func_302()) && func_367(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_745())
		{
			func_744();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2531497.f_4588), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_743(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_737(iParam2);
				func_743(uParam0, 2);
			}
			break;
		
		case 2:
			func_737(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_731(func_732(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_743(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
				func_743(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
			MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
			return 1;
	}
	return 0;
}

int func_731(char* sParam0)//Position - 0x1C2D5
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_732(int iParam0)//Position - 0x1C2E8
{
	if (((func_735(PLAYER::PLAYER_ID()) || func_734(PLAYER::PLAYER_ID())) || func_322()) || iParam0)
	{
		if (func_734(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_292(func_733()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_733()//Position - 0x1C34A
{
	return Global_1651198;
}

bool func_734(int iParam0)//Position - 0x1C356
{
	return func_293(func_290(iParam0), 0);
}

bool func_735(int iParam0)//Position - 0x1C369
{
	return func_736(func_290(iParam0));
}

int func_736(int iParam0)//Position - 0x1C37B
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148 && func_247(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_737(int iParam0)//Position - 0x1C45D
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_1248(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !CAM::IS_SCREEN_FADED_OUT()) && !func_265(PLAYER::PLAYER_ID(), 22)) && func_367(PLAYER::PLAYER_ID()) != 0) && !func_741(func_742())) && !func_735(PLAYER::PLAYER_ID())) && !func_740(func_290(PLAYER::PLAYER_ID()))) && !func_739(func_290(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2531497.f_4588), 1);
			func_738(func_732(iParam0), -1);
			func_611(1);
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_738(char[4] cParam0, int iParam1)//Position - 0x1C541
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_739(int iParam0)//Position - 0x1C558
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x1C5AE
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_741(int iParam0)//Position - 0x1C5FE
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_742()//Position - 0x1C624
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_743(var uParam0, int iParam1)//Position - 0x1CBD9
{
	*uParam0 = iParam1;
}

void func_744()//Position - 0x1CBE6
{
	Global_2460541 = 1;
}

int func_745()//Position - 0x1CBF3
{
	if (((((((func_290(PLAYER::PLAYER_ID()) == 170 || func_290(PLAYER::PLAYER_ID()) == 219) || func_290(PLAYER::PLAYER_ID()) == 221) || func_290(PLAYER::PLAYER_ID()) == 220) || func_290(PLAYER::PLAYER_ID()) == 216) || func_290(PLAYER::PLAYER_ID()) == 215) || func_290(PLAYER::PLAYER_ID()) == 214) || func_290(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_581(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_746()//Position - 0x1CC94
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_371, 9))
	{
		MISC::SET_BIT(&iLocal_371, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_560())
					{
						func_686(iVar1, 421, 0, 0);
					}
					else
					{
						func_686(iVar1, 457, 0, 0);
					}
					func_685(iVar1, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_747()//Position - 0x1CD08
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_46(PLAYER::PLAYER_ID());
	if (iVar0 != func_18())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_265(iVar0, 28) || func_265(PLAYER::PLAYER_ID(), 28)) || func_616(iVar0)) && !func_615(iVar0))
			{
				return func_617(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_617(iVar0, 0);
			}
		}
		iVar1 = func_619(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			return func_617(iVar0, 0);
		}
		else
		{
			return iVar1;
		}
	}
	return "";
}

void func_748(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x1CDB9
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_929(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_928(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_927(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_925(iParam0))
	{
		if (bParam1)
		{
			if (func_924(PLAYER::PLAYER_ID()) > 0)
			{
				func_923();
			}
			else
			{
				func_922();
			}
		}
		else
		{
			func_921();
		}
	}
	func_905(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_903(iParam0, uParam2, &iVar0, &iVar5);
	func_881(iParam0, uParam2, &iVar0, &iVar5);
	func_867(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_850(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_324();
	if (iVar8 != func_18() && iParam0 != 148)
	{
		if (func_19(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_16(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_841(&iVar0, 1);
			}
		}
	}
	func_837(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_836();
		func_792(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_769(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_768(iParam0, iVar0);
		if (func_767(iParam0))
		{
			if (func_766(iParam0) > -1)
			{
				func_765(func_766(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_764(&Global_2459463, 0, 0);
	}
	if (func_369(PLAYER::PLAYER_ID()) || func_264(PLAYER::PLAYER_ID()))
	{
		func_755(iParam0);
	}
	if (func_736(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_740(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_579(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_577(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_575(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_739(iParam0))
	{
		if (func_754(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_750(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_749(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_569(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_749(int iParam0)//Position - 0x1D197
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_750(int iParam0)//Position - 0x1D1B1
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_751(func_752(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_751(int iParam0)//Position - 0x1D23A
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_752(int iParam0)//Position - 0x1D272
{
	if (func_290(iParam0) == 237 || func_290(iParam0) == 250)
	{
		return func_753(iParam0);
	}
	return -1;
}

int func_753(int iParam0)//Position - 0x1D29F
{
	if (func_160(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_754(int iParam0)//Position - 0x1D2C2
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_755(int iParam0)//Position - 0x1D2D6
{
	if (func_763(PLAYER::PLAYER_ID()) && func_762())
	{
		if (func_391(iParam0))
		{
			func_757(9639, -1);
		}
		else if (func_392(iParam0))
		{
			func_757(9641, -1);
		}
		else if (func_293(iParam0, 1))
		{
			func_757(9642, -1);
		}
		else if (func_756(iParam0))
		{
			func_757(9643, -1);
		}
	}
}

int func_756(int iParam0)//Position - 0x1D340
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_757(int iParam0, int iParam1)//Position - 0x1D36C
{
	int iVar0;
	
	iVar0 = func_761(iParam0, func_379(iParam1), 0);
	iVar0++;
	if (!func_760(iParam0))
	{
		func_759(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_758(iParam0, iVar0, iParam1, 1);
	}
}

void func_758(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1D3AD
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_379(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_379(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_379(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_379(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_379(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_379(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_379(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_379(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_379(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_379(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_379(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_379(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_379(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_379(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_379(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_379(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_379(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_379(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_379(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_379(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_379(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_379(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_379(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_379(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_379(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_379(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_379(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_379(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_379(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_379(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_379(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_379(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_379(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_379(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_379(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_379(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_379(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_379(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_379(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_379(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_379(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_379(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_379(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_379(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_379(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_379(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_379(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_759(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1DD30
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_379(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_760(int iParam0)//Position - 0x1DD60
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_761(int iParam0, int iParam1, int iParam2)//Position - 0x1DFC4
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_379(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_762()//Position - 0x1DFF6
{
	return func_323(PLAYER::PLAYER_ID());
}

bool func_763(int iParam0)//Position - 0x1E006
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_764(var uParam0, bool bParam1, bool bParam2)//Position - 0x1E02C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_765(int iParam0, int iParam1)//Position - 0x1E069
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

int func_766(int iParam0)//Position - 0x1E0DB
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_767(int iParam0)//Position - 0x1E1BC
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_768(int iParam0, int iParam1)//Position - 0x1E224
{
	if (func_763(PLAYER::PLAYER_ID()) && func_762())
	{
		if (func_391(iParam0) && iParam1 > 0)
		{
			func_759(9640, (func_761(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1E268
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_552();
	if (iVar5 != func_18())
	{
		func_791(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_1111(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_790())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_762())
			{
				if (!func_790())
				{
					Var7 = { func_789() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_788(Var7)), func_787(Var7), iParam4);
				}
			}
			else if (func_790())
			{
				func_776(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_775())
			{
				if (!func_790())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_788(func_774(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_790())
			{
				func_776(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_775())
			{
				if (!func_790())
				{
					iVar2 = func_770(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_790())
			{
				func_776(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_790())
			{
				func_776(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_775())
			{
				if (!func_790())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_790())
			{
				func_776(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_790())
			{
				func_776(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_790())
			{
				func_776(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_790())
			{
				func_776(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_790())
			{
				func_776(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_790())
				{
					func_776(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_790())
			{
				func_776(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_790())
			{
				func_776(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_770(int iParam0, int iParam1)//Position - 0x1E70E
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_773(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_771(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_771(int iParam0, int iParam1)//Position - 0x1E737
{
	return (func_772(iParam0) * iParam1);
}

int func_772(int iParam0)//Position - 0x1E748
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_773(int iParam0, int iParam1)//Position - 0x1E7E8
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22305);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_774(int iParam0)//Position - 0x1E900
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_775()//Position - 0x1E926
{
	return func_20(PLAYER::PLAYER_ID());
}

void func_776(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1E936
{
	int iVar0;
	
	if (!func_790())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_777(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_777(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_777(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_777(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_777(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1EFA3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_790())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_784(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_783(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_778(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_778(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F14E
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_779(iParam0);
	}
}

void func_779(int iParam0)//Position - 0x1F186
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_790())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_782(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_780(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_780(var uParam0)//Position - 0x1F1DA
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_781(&(uParam0->f_13));
	func_781(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_781(var uParam0)//Position - 0x1F2E1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_782(int iParam0)//Position - 0x1F329
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_783(int iParam0, int iParam1)//Position - 0x1F353
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_784(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1F367
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_790())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_785(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_785(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x1F4A3
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam84;
	iVar35 = func_608(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_786();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_786()//Position - 0x1F535
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_787(int iParam0)//Position - 0x1F545
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_788(int iParam0)//Position - 0x1F68B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_789()//Position - 0x1F86D
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_193;
}

int func_790()//Position - 0x1F886
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_791(int iParam0, var uParam1, var uParam2)//Position - 0x1F89D
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_792(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x1F8CB
{
	return func_793(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_793(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x1F8ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_803(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_799(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_794(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_794(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1F966
{
	vector3 vVar0;
	
	vVar0 = { func_797(iParam0, 1) };
	if (iParam0 == func_796(PLAYER::PLAYER_PED_ID()))
	{
		func_795(1);
	}
	func_799(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_795(int iParam0)//Position - 0x1F99A
{
	Global_2437549.f_1890 = iParam0;
}

int func_796(int iParam0)//Position - 0x1F9AB
{
	return iParam0;
}

Vector3 func_797(int iParam0, bool bParam1)//Position - 0x1F9B5
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_798(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_798(int iParam0)//Position - 0x1FA79
{
	return iParam0;
}

void func_799(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1FA83
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_802(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_801();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_800();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_800()//Position - 0x1FB9A
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_801()//Position - 0x1FBC4
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_802(vector3 vParam0, var uParam3, var uParam4)//Position - 0x1FBDF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_803(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1FC78
{
	var uVar0;
	
	uVar0 = func_804(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_804(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1FC9B
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_835(PLAYER::PLAYER_ID()) || func_834(PLAYER::PLAYER_ID()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_311() || func_833(PLAYER::PLAYER_ID()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_667())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_832(sParam2))
	{
	}
	if (func_831())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_829(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_828(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_826(0, &iVar1);
					break;
				
				case 3:
					func_826(1, &iVar1);
					break;
				
				case 1:
					func_824(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_823(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_814((func_821(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_823(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_809(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_805((func_807(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_805((func_807(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_805(int iParam0)//Position - 0x1FEC8
{
	if (func_831())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_806(joaat("mpply_globalxp"), iParam0);
	}
}

void func_806(int iParam0, int iParam1)//Position - 0x1FEF3
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_807(int iParam0)//Position - 0x1FF0F
{
	if (iParam0 > -1)
	{
		if (func_1248(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_808(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_808(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_808(int iParam0)//Position - 0x1FF60
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_809(int iParam0)//Position - 0x1FF7E
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_47(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_812(func_813(&Var0));
			if (iVar13 == 0)
			{
				func_811(&Global_1384134, iParam0);
				func_810(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_811(&Global_1384135, iParam0);
				func_810(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_811(&Global_1384136, iParam0);
				func_810(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_811(&Global_1384137, iParam0);
				func_810(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_811(&Global_1384138, iParam0);
				func_810(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_810(int iParam0, int iParam1)//Position - 0x20056
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_811(var uParam0, int iParam1)//Position - 0x2017B
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_812(int iParam0)//Position - 0x2018C
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_813(var uParam0)//Position - 0x201E9
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

void func_814(int iParam0, int iParam1, int iParam2)//Position - 0x2020C
{
	if (func_831())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_379(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_379(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_820(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_818(iParam0, 1);
		}
		func_758(639, iParam0, -1, 1);
		func_759(640, func_818(iParam0, 1), -1, 1, 0);
		Global_1384279[func_379(-1)] = iParam0;
		func_815(-1109644434, 7, 0);
	}
}

void func_815(int iParam0, int iParam1, int iParam2)//Position - 0x20332
{
	int iVar0;
	
	if (func_817(iParam1, iParam2))
	{
		iVar0 = func_816();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_816()//Position - 0x2035F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_817(int iParam0, var uParam1)//Position - 0x20394
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_818(int iParam0, bool bParam1)//Position - 0x2041A
{
	if (bParam1)
	{
	}
	return func_819(iParam0, 0);
}

int func_819(int iParam0, int iParam1)//Position - 0x2042E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_820(int iParam0)//Position - 0x204ED
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_821(int iParam0, bool bParam1)//Position - 0x20512
{
	if (bParam1)
	{
	}
	return func_822(iParam0);
}

int func_822(int iParam0)//Position - 0x20525
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_379(-1)];
			}
			else if (func_820(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_379(-1)];
	}
	return 0;
}

void func_823(int iParam0, int iParam1, int iParam2)//Position - 0x20582
{
	int iVar0;
	
	iVar0 = func_761(iParam0, func_379(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_760(iParam0))
	{
		func_759(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_758(iParam0, iVar0, iParam2, 1);
	}
}

void func_824(int iParam0)//Position - 0x205C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_119(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_48(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_825(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_825(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_825(int iParam0, int iParam1)//Position - 0x206AF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_826(bool bParam0, int iParam1)//Position - 0x206D0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1248(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_48(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1248(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_827(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_48(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_825(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_825(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_827(int iParam0, int iParam1)//Position - 0x207E8
{
	return SYSTEM::VDIST(func_40(iParam0), func_40(iParam1));
	return 0f;
}

int func_828(int iParam0)//Position - 0x20804
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_825(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_829(int iParam0)//Position - 0x2083B
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_821(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_821(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_830(8000, 0, 0) > 0)
	{
		if (func_830(8000, 0, 0) < (iParam0 + func_821(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_830(8000, 0, 0) - func_821(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_830(int iParam0, bool bParam1, int iParam2)//Position - 0x208A3
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_290594[iParam0];
}

int func_831()//Position - 0x208CB
{
	return 1;
}

int func_832(char* sParam0)//Position - 0x208D4
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_833(int iParam0)//Position - 0x2090D
{
	return func_575(func_290(iParam0));
}

bool func_834(int iParam0)//Position - 0x2091F
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_835(int iParam0)//Position - 0x20934
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_836()//Position - 0x20949
{
	Global_2460540 = 1;
}

void func_837(int iParam0, var uParam1, var uParam2)//Position - 0x20956
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_345(7))
	{
		return;
	}
	iVar0 = func_840(iParam0);
	iVar1 = func_839(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2531497.f_4898.f_263, NETWORK::GET_NETWORK_TIME()));
	if (func_838(iParam0) != -1)
	{
		if (iVar2 > func_838(iParam0))
		{
			iVar2 = func_838(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_838(int iParam0)//Position - 0x20A00
{
	if (func_293(iParam0, 0) || func_392(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_391(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_839(int iParam0)//Position - 0x20B13
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_775())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_775())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_775())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_775())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_775())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_775())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_775())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_775())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_775())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_775())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_775())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_840(int iParam0)//Position - 0x20FDE
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_321(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_321(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_321(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_321(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_321(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_321(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_321(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_321(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_321(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_321(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_321(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_321(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_321(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_841(int iParam0, int iParam1)//Position - 0x214AC
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_775())
		{
			if (func_1111(0))
			{
				if (!func_321(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_552()))
					{
						if (func_849() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_849());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_847(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_846("GB_BCUT_TICK1", func_552(), iVar0, 0, 0, 1, 1);
						}
						func_845(20);
						func_842(func_552(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_842(int iParam0, int iParam1, int iParam2)//Position - 0x2154D
{
	struct<8> Var0;
	
	if (func_1248(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_844(iParam0);
		func_843(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_608(iParam0));
	}
}

void func_843(var uParam0, var uParam1)//Position - 0x215A3
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_844(int iParam0)//Position - 0x215BD
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_845(int iParam0)//Position - 0x215D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_846(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x215FA
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_652(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_650(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_645(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_847(int iParam0, bool bParam1)//Position - 0x21692
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_848(1);
	}
	else
	{
		iVar1 = func_848(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_848(bool bParam0)//Position - 0x216C4
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_849()//Position - 0x216EA
{
	return Global_262145.f_12389;
}

void func_850(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x216F9
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
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_321(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_775())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_552();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_866(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_865(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_864("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_863(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_861(*uParam3);
				}
				iVar6 = func_860(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_845(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_859(iVar23))
								{
									func_851(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_845(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_851(int iParam0, int iParam1, int iParam2)//Position - 0x21960
{
	var uVar0;
	
	uVar0 = func_853(iParam0);
	func_852(iParam0, uVar0, iParam1, iParam2);
}

void func_852(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2197C
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_844(iParam0);
	func_843(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_608(iParam0));
		}
	}
}

int func_853(int iParam0)//Position - 0x219E2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_858();
	iVar0 = func_856(iParam0, iVar0);
	iVar1 = Global_1628955[func_552() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_855())
	{
		iVar0 = func_855();
	}
	if (iVar0 > func_854())
	{
		iVar0 = func_854();
	}
	return iVar0;
}

int func_854()//Position - 0x21A3B
{
	return Global_262145.f_14944;
}

int func_855()//Position - 0x21A4A
{
	return Global_262145.f_16119;
}

int func_856(int iParam0, int iParam1)//Position - 0x21A59
{
	int iVar0;
	
	iVar0 = (func_924(iParam0) * func_857());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_857()//Position - 0x21A77
{
	return Global_262145.f_16118;
}

var func_858()//Position - 0x21A86
{
	return Global_262145.f_12381;
}

int func_859(int iParam0)//Position - 0x21A95
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_16(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_265(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_860(var uParam0)//Position - 0x21ACE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar2, 0) && !func_16(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_36(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_861(int iParam0)//Position - 0x21B3A
{
	func_862(iParam0, 7236);
}

void func_862(int iParam0, int iParam1)//Position - 0x21B4B
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_761(iParam1, -1, 0);
	func_759(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_863(int iParam0)//Position - 0x21B74
{
	func_862(iParam0, 7231);
}

int func_864(char* sParam0, int iParam1, int iParam2)//Position - 0x21B85
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_645(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_865(int iParam0)//Position - 0x21BBA
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_866(struct<5> Param0, int iParam5)//Position - 0x21BEE
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_867(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x21C58
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_321(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_775())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_552();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_879(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_870(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_771(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_770(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_869(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_864("SMTICK_RONCUT", func_869(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_869(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_868(iVar2, iVar9);
				iVar6 = func_860(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_845(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_859(iVar20))
								{
									func_851(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_845(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_868(int iParam0, int iParam1)//Position - 0x21E9E
{
	if (iParam0 > 0)
	{
		func_862(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_862(iParam1, 6117);
	}
}

int func_869(int iParam0)//Position - 0x21EC4
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22278))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22278);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_870(int iParam0)//Position - 0x21F04
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_877())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_879(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_872(func_873(func_876(iVar0), -1, -1));
		if (func_871(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_871(int iParam0)//Position - 0x21F62
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_872(int iParam0)//Position - 0x22012
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_873(int iParam0, int iParam1, int iParam2)//Position - 0x22102
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	iVar1 = func_875(iParam0, iParam1);
	iVar2 = func_874(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_874(int iParam0)//Position - 0x22148
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

int func_875(int iParam0, int iParam1)//Position - 0x22549
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
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

int func_876(int iParam0)//Position - 0x228F7
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_877()//Position - 0x22B61
{
	return func_878() != 0;
}

int func_878()//Position - 0x22B6F
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_260;
}

int func_879(int iParam0)//Position - 0x22B88
{
	if (iParam0 != func_18() && func_880(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_880(int iParam0)//Position - 0x22BBA
{
	if (iParam0 != func_18())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_881(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x22BE0
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_321(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_775())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_552();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_774(iVar15);
			iVar0 = (func_902(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_898(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_895(iVar16, iVar2);
				if (func_891(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_882(5);
				}
				iVar6 = func_860(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_845(108);
					}
					else
					{
						func_845(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_859(iVar20))
								{
									func_851(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_845(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_882(int iParam0)//Position - 0x22E1B
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_884(Global_262145.f_20560))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_884(Global_262145.f_20562))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_884(Global_262145.f_20564))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_884(Global_262145.f_20566))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_884(Global_262145.f_20568))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_884(Global_262145.f_20570))
				{
					func_864("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_884(Global_262145.f_20573))
				{
					func_864("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_884(Global_262145.f_20576))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_884(Global_262145.f_20578))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_884(Global_262145.f_20580))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_884(Global_262145.f_20582))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_884(Global_262145.f_20584))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_884(Global_262145.f_20586))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_884(Global_262145.f_20588))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_884(Global_262145.f_20590))
				{
					func_883("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_883(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x23118
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	else
	{
		Global_2507671 = { func_47(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
	}
	func_645(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_884(int iParam0)//Position - 0x2320C
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_888(15417, -1, -1))
			{
				func_887(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_888(15418, -1, -1))
			{
				func_887(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_888(15425, -1, -1))
			{
				func_887(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_888(15405, -1, -1))
			{
				func_887(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_888(15393, -1, -1))
			{
				func_887(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_888(15409, -1, -1))
			{
				func_887(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_888(15396, -1, -1))
			{
				func_887(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_888(15412, -1, -1))
			{
				func_887(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_888(15403, -1, -1))
			{
				func_887(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_888(15389, -1, -1))
			{
				func_887(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_888(15398, -1, -1))
			{
				func_887(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_888(15400, -1, -1))
			{
				func_887(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_888(15408, -1, -1))
			{
				func_887(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_888(15411, -1, -1))
			{
				func_887(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_888(15397, -1, -1))
			{
				func_887(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_888(15413, -1, -1))
			{
				func_887(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_888(15391, -1, -1))
			{
				func_887(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_888(15388, -1, -1))
			{
				func_887(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_888(15401, -1, -1))
			{
				func_887(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_888(15394, -1, -1))
			{
				func_887(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_888(15406, -1, -1))
			{
				func_887(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_888(15395, -1, -1))
			{
				func_887(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_888(15410, -1, -1))
			{
				func_887(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_888(15407, -1, -1))
			{
				func_887(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_888(15414, -1, -1))
			{
				func_887(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_888(15415, -1, -1))
			{
				func_887(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_888(15399, -1, -1))
			{
				func_887(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_888(15404, -1, -1))
			{
				func_887(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_888(15392, -1, -1))
			{
				func_887(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_888(15390, -1, -1))
			{
				func_887(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_888(15402, -1, -1))
			{
				func_887(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_888(15416, -1, -1))
			{
				func_887(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_378(209, -1))
			{
				func_885(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_888(15426, -1, -1))
			{
				func_887(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_888(15422, -1, -1))
			{
				func_887(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_888(15423, -1, -1))
			{
				func_887(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_888(15421, -1, -1))
			{
				func_887(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_888(15427, -1, -1))
			{
				func_887(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_888(15419, -1, -1))
			{
				func_887(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_888(15420, -1, -1))
			{
				func_887(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_885(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23D81
{
	int iVar0;
	
	if (func_886())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_379(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_886()//Position - 0x23DB3
{
	return 1;
	return 0;
}

int func_887(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x23DC0
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
		iParam2 = func_38();
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

int func_888(int iParam0, int iParam1, int iParam2)//Position - 0x24415
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar1 = func_890(iParam0, iParam1);
	uVar2 = func_889(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_889(int iParam0)//Position - 0x24452
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

int func_890(int iParam0, int iParam1)//Position - 0x247EE
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
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

int func_891(int iParam0)//Position - 0x24B67
{
	int iVar0;
	
	iVar0 = func_893(iParam0);
	return func_761(func_892(iVar0), -1, 0);
}

int func_892(int iParam0)//Position - 0x24B83
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_893(int iParam0)//Position - 0x24BDD
{
	int iVar0;
	
	if (func_894(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_894(int iParam0)//Position - 0x24C1F
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_895(int iParam0, int iParam1)//Position - 0x24C3E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_893(iParam0);
	iVar1 = func_892(iVar0);
	iVar2 = (func_761(iVar1, -1, 0) + iParam1);
	func_759(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_873(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_892(iVar0);
				iVar3 = (iVar3 + func_761(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_897(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_896(9357, iVar5, -1, 1);
	}
}

var func_896(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x24CF3
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_38();
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

int func_897(int iParam0)//Position - 0x252B5
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_898(int iParam0, int iParam1, int iParam2)//Position - 0x252F5
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_787(iParam1);
	if (func_894(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_899(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_899(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_899(int iParam0, int iParam1, int iParam2)//Position - 0x254CD
{
	int iVar0;
	
	if (func_901(iParam0, iParam1))
	{
		iVar0 = func_900(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_900(int iParam0, int iParam1)//Position - 0x25508
{
	int iVar0;
	
	if (func_894(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_901(int iParam0, int iParam1)//Position - 0x25554
{
	int iVar0;
	
	if (func_894(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_902(int iParam0, int iParam1)//Position - 0x2559F
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_894(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_903(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x255FE
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_762())
			{
				Var0 = { func_789() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_898(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18583);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18582);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_860(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18573);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18572));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_845(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_321(0))
			{
				Var15 = { func_904(func_552()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_898(func_552(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18583));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18622;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18623;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_904(int iParam0)//Position - 0x258A1
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_905(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x258B8
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_20(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_920();
			}
			func_919();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_911(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_910(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_860(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_845(44);
					}
				}
				func_908(*iParam3);
				func_907();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_859(iVar9))
						{
							func_851(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(PLAYER::PLAYER_ID()))
		{
			func_906();
		}
	}
}

void func_906()//Position - 0x25A24
{
	int iVar0;
	
	iVar0 = Global_2578770[func_38()];
	iVar0++;
	func_758(3667, iVar0, -1, 1);
}

void func_907()//Position - 0x25A49
{
	int iVar0;
	
	iVar0 = Global_2578776[func_38()];
	iVar0++;
	func_758(3666, iVar0, -1, 1);
}

void func_908(int iParam0)//Position - 0x25A6E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_38()];
	iVar0 = (iVar0 + iParam0);
	func_758(3668, iVar0, -1, 1);
	if (func_873(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_909(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_896(7666, iVar2, -1, 1);
	}
}

int func_909(int iParam0)//Position - 0x25AD0
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_910(int iParam0)//Position - 0x25CA8
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_911(int iParam0)//Position - 0x25EA8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_918(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_917(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_916(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_912(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_912(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_916(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_912(int iParam0)//Position - 0x25F24
{
	int iVar0;
	
	if (func_915(iParam0))
	{
		iVar0 = func_913(func_914(iParam0));
		return func_761(iVar0, -1, 0);
	}
	return 0;
}

int func_913(int iParam0)//Position - 0x25F4D
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_914(int iParam0)//Position - 0x25FA0
{
	int iVar0;
	
	if (func_915(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_915(int iParam0)//Position - 0x25FE2
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_916(int iParam0)//Position - 0x26001
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_917(int iParam0, int iParam1)//Position - 0x26079
{
	int iVar0;
	
	if (func_915(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_918(int iParam0)//Position - 0x260BF
{
	int iVar0;
	
	if (func_915(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_919()//Position - 0x26100
{
	int iVar0;
	
	iVar0 = Global_2578767[func_38()];
	iVar0++;
	Global_2578767[func_38()] = iVar0;
	func_758(3665, iVar0, -1, 1);
}

void func_920()//Position - 0x26131
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_38()];
	iVar1 = Global_2578773[func_38()];
	iVar0++;
	iVar1++;
	Global_2578764[func_38()] = iVar0;
	Global_2578773[func_38()] = iVar1;
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_758(3663, iVar0, -1, 1);
	func_758(3664, iVar1, -1, 1);
}

void func_921()//Position - 0x2619D
{
	if (func_775())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_922()//Position - 0x261CF
{
	if (func_775())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_923()//Position - 0x26219
{
	if (func_775())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_924(int iParam0)//Position - 0x26262
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_925(int iParam0)//Position - 0x26277
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_1111(1) && !func_321(1))
			{
				if (func_926(func_552()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_926(int iParam0)//Position - 0x262F2
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_927(int iParam0, bool bParam1)//Position - 0x26318
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_928(int iParam0, bool bParam1, bool bParam2)//Position - 0x266DC
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_775())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_775())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_762())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_775() && !func_762())
			{
				if (func_926(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_762())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_929(int iParam0, var uParam1, var uParam2)//Position - 0x26E72
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_930(iParam0))
	{
		if (!func_775())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_736(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_736(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_324();
	if (iVar0 != func_18())
	{
		if (func_16(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_930(int iParam0)//Position - 0x270D5
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_931(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x27119
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_251(PLAYER::PLAYER_ID());
		Global_1675140.f_4 = func_1040();
		Global_1675140.f_5 = func_1039();
		if (func_370(PLAYER::PLAYER_ID()) || func_250(PLAYER::PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_1035(bParam9);
		Global_1675140.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_9 = func_1034(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_1033();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_1034(func_321(1));
		}
		Global_1675140.f_24 = func_1032(PLAYER::PLAYER_ID());
		Global_1675140.f_28 = func_1031(PLAYER::PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_1029(iVar0);
	}
	else
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
	}
	if (func_736(iVar0))
	{
		Global_1674879.f_2 = func_1040();
		Global_1674879.f_3 = func_1039();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_1025(iVar0, bParam0, func_1028(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_1024(func_552(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_1023(func_552(), iParam2);
		}
		func_1021(iVar0);
	}
	else if (func_740(iVar0))
	{
		Global_1674933.f_2 = func_1040();
		Global_1674933.f_3 = func_1039();
		Global_1674933.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_1019(iVar0);
	}
	else if (func_579(iVar0))
	{
		Global_1674996.f_2 = func_1040();
		Global_1674996.f_3 = func_1039();
		Global_1674996.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_1033();
		Global_1674996.f_42 = func_1017(func_38(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_774(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_1034((func_1016(iVar1) || func_1015(iVar1)));
		Global_1674996.f_30 = func_1034(func_1014(iVar1));
		Global_1674996.f_32 = func_1034(func_1013(iVar1));
		Global_1674996.f_33 = func_1034(func_1012(iVar1));
		Global_1674996.f_34 = func_1034(func_1011(iVar1));
		Global_1674996.f_35 = func_1034(func_1010(0, iVar1) == 1);
		Global_1674996.f_36 = func_1034(func_1009(iVar1));
		Global_1674996.f_37 = func_1034(func_1008(iVar1));
		Global_1674996.f_38 = func_1034(func_1007(iVar1));
		Global_1674996.f_39 = func_1034(func_899(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_1034(func_899(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_1034(func_899(iVar1, iVar2, 1));
		if (func_1006(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_1005(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_1003(iVar0);
	}
	else if (func_577(iVar0))
	{
		Global_1675040.f_2 = func_1040();
		Global_1675040.f_3 = func_1039();
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675040.f_10 = func_1034(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_1002(func_324());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_1001();
		Global_1675040.f_29 = func_761(6107, -1, 0);
		Global_1675040.f_30 = func_761(6103, -1, 0);
		Global_1675040.f_31 = func_761(6104, -1, 0);
		Global_1675040.f_32 = func_761(6106, -1, 0);
		Global_1675040.f_33 = func_761(6105, -1, 0);
		Global_1675040.f_34 = func_761(6108, -1, 0);
		Global_1675040.f_36 = func_1034(func_321(1));
		Global_1675040.f_37 = func_999();
		func_985();
		func_983(iVar0);
	}
	else if (func_575(iVar0))
	{
		Global_1675094.f_2 = func_1040();
		Global_1675094.f_3 = func_1039();
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675094.f_10 = func_1034(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_761(6157, -1, 0);
		Global_1675094.f_25 = func_761(6162, -1, 0);
		Global_1675094.f_26 = func_761(6163, -1, 0);
		Global_1675094.f_27 = func_1034((((func_982() || func_981()) || func_980()) || func_979(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_761(6164, -1, 0);
		Global_1675094.f_29 = func_1034(func_978());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_1040();
		Global_1675094.f_42 = func_1034(func_321(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_976(iVar0);
	}
	else if (func_750(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_1040();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_1039();
		}
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_1035(0);
		Global_1675228.f_7 = func_1033();
		Global_1675228.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_10 = func_1034(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_552() != -1)
		{
			Global_1675228.f_17 = func_975(func_552());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_1031(PLAYER::PLAYER_ID());
		Global_1675228.f_29 = func_1034(func_974(PLAYER::PLAYER_ID()));
		Global_1675228.f_30 = func_1034(func_973(PLAYER::PLAYER_ID()));
		Global_1675228.f_31 = func_972(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_1034(func_321(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_970(iVar0);
	}
	else if (func_754(iVar0))
	{
		Global_1675175.f_2 = func_1040();
		Global_1675175.f_3 = func_1039();
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_1035(0);
		Global_1675175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_10 = func_1034(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_1031(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_969(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_953(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_972(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_1034(func_952(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_1034(func_951(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_1034(func_950(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_1034(func_949(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_948(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_947(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_946(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_1034(func_321(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_944(iVar0);
	}
	else if (func_749(iVar0))
	{
		Global_1675312.f_2 = func_1040();
		Global_1675312.f_3 = func_1039();
		Global_1675312.f_4 = func_943(func_552());
		Global_1675312.f_5 = func_942(func_552());
		if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_1033();
		Global_1675312.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675312.f_10 = func_1034(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_324() != -1)
		{
			Global_1675312.f_17 = func_975(func_324());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_941(PLAYER::PLAYER_ID());
		Global_1675312.f_27 = func_1034(func_940(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_937(21, -1);
		Global_1675312.f_29 = func_1034(func_936(PLAYER::PLAYER_ID()));
		func_934(iVar0);
	}
	else if (func_569(iVar0))
	{
		Global_1675387.f_6 = func_943(func_552());
		Global_1675387.f_7 = func_942(func_552());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_1034(func_321(1));
		}
		Global_1675387.f_10 = func_1033();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_932(iVar0);
	}
	else
	{
		Global_1674861.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = iParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_369(PLAYER::PLAYER_ID()) || func_368(PLAYER::PLAYER_ID())) || func_264(PLAYER::PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_932(int iParam0)//Position - 0x27D08
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_933();
}

void func_933()//Position - 0x27D22
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_934(int iParam0)//Position - 0x27D4B
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1675312);
	func_935();
}

void func_935()//Position - 0x27D65
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_936(int iParam0)//Position - 0x27D79
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_937(int iParam0, int iParam1)//Position - 0x27DA4
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_38();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_939(iParam0);
		if (iVar1 == 0 && func_761(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_938(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1031(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_938(int iParam0)//Position - 0x27E7F
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_761(7207, iParam0, 0) != 0;
}

int func_939(int iParam0)//Position - 0x27EA2
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_940(int iParam0)//Position - 0x27EC8
{
	if (iParam0 != func_18())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_941(int iParam0)//Position - 0x27EEE
{
	if (func_290(iParam0) == 243)
	{
		return func_753(iParam0);
	}
	return -1;
}

int func_942(int iParam0)//Position - 0x27F0B
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_943(int iParam0)//Position - 0x27F30
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_944(int iParam0)//Position - 0x27F55
{
	STATS::_0x2D7A9B577E72385E(&Global_1675175);
	func_945();
}

void func_945()//Position - 0x27F69
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1675175 = { Var0 };
}

int func_946(int iParam0)//Position - 0x28093
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_947(int iParam0)//Position - 0x280BD
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_948(int iParam0)//Position - 0x280E7
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_949(int iParam0)//Position - 0x28111
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_950(int iParam0)//Position - 0x2813C
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_951(int iParam0)//Position - 0x28167
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_952(int iParam0)//Position - 0x28192
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

int func_953(int iParam0, int iParam1, int iParam2)//Position - 0x281BD
{
	if (iParam0 == func_18() || !func_968(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_963(iParam0, iParam2);
		
		case 1:
			return func_961(iParam0, iParam2);
		
		case 3:
			return func_960(iParam0);
		
		case 2:
			return func_955(iParam0, iParam2);
		
		case 4:
			return func_954(iParam0);
		
		default:
	}
	return 0;
}

bool func_954(int iParam0)//Position - 0x28239
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_955(int iParam0, int iParam1)//Position - 0x28264
{
	switch (iParam1)
	{
		case 10:
			return func_959(iParam0);
		
		case 11:
			return func_958(iParam0);
		
		case 12:
			return func_957(iParam0);
		
		case 13:
			return func_956(iParam0);
		
		default:
	}
	return 0;
}

bool func_956(int iParam0)//Position - 0x282B0
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_957(int iParam0)//Position - 0x282DC
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_958(int iParam0)//Position - 0x28308
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_959(int iParam0)//Position - 0x28334
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_960(int iParam0)//Position - 0x28360
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_961(int iParam0, int iParam1)//Position - 0x2838B
{
	switch (iParam1)
	{
		case 5:
			return func_962(iParam0);
		
		case 6:
			return func_952(iParam0);
		
		case 7:
			return func_951(iParam0);
		
		case 8:
			return func_950(iParam0);
		
		case 9:
			return func_949(iParam0);
		
		default:
	}
	return 0;
}

bool func_962(int iParam0)//Position - 0x283E6
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_963(int iParam0, int iParam1)//Position - 0x28411
{
	switch (iParam1)
	{
		case 0:
			return func_967(iParam0);
		
		case 1:
			return func_966(iParam0);
		
		case 2:
			return func_965(iParam0);
		
		case 3:
			return func_964(iParam0);
		
		case 4:
			return func_972(iParam0);
		
		default:
	}
	return 0;
}

bool func_964(int iParam0)//Position - 0x2846C
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_965(int iParam0)//Position - 0x28498
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_966(int iParam0)//Position - 0x284C4
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_967(int iParam0)//Position - 0x284F0
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_968(int iParam0)//Position - 0x2851B
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_969(int iParam0)//Position - 0x28530
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_953(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_953(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_953(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_953(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_970(int iParam0)//Position - 0x2858F
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1675228);
	func_971();
}

void func_971()//Position - 0x285A3
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_972(int iParam0)//Position - 0x28696
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

bool func_973(int iParam0)//Position - 0x286B3
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_974(int iParam0)//Position - 0x286DE
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

var func_975(int iParam0)//Position - 0x2870A
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_976(int iParam0)//Position - 0x2871F
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1675094);
	func_977();
}

void func_977()//Position - 0x28733
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

bool func_978()//Position - 0x28841
{
	return func_761(6156, -1, 0) != 0;
}

int func_979(int iParam0)//Position - 0x28854
{
	if (iParam0 != func_18())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_980()//Position - 0x2887A
{
	return func_761(6164, -1, 0) == 3;
}

bool func_981()//Position - 0x2888D
{
	return func_761(6164, -1, 0) == 2;
}

bool func_982()//Position - 0x288A0
{
	return func_761(6164, -1, 0) == 1;
}

void func_983(int iParam0)//Position - 0x288B3
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1675040);
	func_984();
}

void func_984()//Position - 0x288C7
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_985()//Position - 0x28A13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_996(12));
		func_995(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_987(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_986(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_986(int iParam0)//Position - 0x28B59
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_987(int iParam0, bool bParam1)//Position - 0x28C95
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
		if (!func_994())
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
		if ((((!func_993() && !func_992()) && !func_991()) && !func_990()) && !func_994())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_991())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_989(iParam0))
		{
			return 0;
		}
	}
	if (!func_988(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_988(int iParam0)//Position - 0x28E15
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_790())
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

int func_989(int iParam0)//Position - 0x28EE1
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

int func_990()//Position - 0x2B3AC
{
	return 0;
}

int func_991()//Position - 0x2B3B5
{
	return 1;
}

int func_992()//Position - 0x2B3BE
{
	return 1;
}

int func_993()//Position - 0x2B3C7
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_994()//Position - 0x2B3E0
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

void func_995(int iParam0, int iParam1, bool bParam2)//Position - 0x2B49B
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_996(int iParam0)//Position - 0x2B4DB
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_939(iParam0);
		return func_998(iVar0);
	}
	return (func_997(iParam0, -1) * iParam0);
}

int func_997(int iParam0, int iParam1)//Position - 0x2B60A
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_586(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_592(iParam1))
			{
				return 0;
			}
			else if (func_584(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049852[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_998(int iParam0)//Position - 0x2B83D
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_999()//Position - 0x2B86E
{
	var uVar0;
	
	uVar0 = func_1000();
	if (!func_775())
	{
		if (func_552() != func_18())
		{
			uVar0 = func_1032(func_552()) + 1;
		}
	}
	return uVar0;
}

int func_1000()//Position - 0x2B89D
{
	return func_1032(PLAYER::PLAYER_ID()) + 1;
}

int func_1001()//Position - 0x2B8AF
{
	return func_761(6113, -1, 0);
}

int func_1002(int iParam0)//Position - 0x2B8C0
{
	if (func_19(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

void func_1003(int iParam0)//Position - 0x2B8E4
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674996);
	func_1004();
}

void func_1004()//Position - 0x2B8FE
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_1005(int iParam0)//Position - 0x2B927
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_1006(int iParam0)//Position - 0x2B944
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_1007(int iParam0)//Position - 0x2B961
{
	if (iParam0 != func_18())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1008(int iParam0)//Position - 0x2B9C2
{
	if (iParam0 != func_18())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1009(int iParam0)//Position - 0x2BA20
{
	if (iParam0 != func_18())
	{
		if (((((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1010(int iParam0, int iParam1)//Position - 0x2BAC9
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_1011(int iParam0)//Position - 0x2BE1D
{
	if (iParam0 != func_18())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1012(int iParam0)//Position - 0x2BE7C
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_1013(int iParam0)//Position - 0x2BE99
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_1014(int iParam0)//Position - 0x2BEB5
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

bool func_1015(int iParam0)//Position - 0x2BEDF
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_1016(int iParam0)//Position - 0x2BF09
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_1017(int iParam0, int iParam1)//Position - 0x2BF33
{
	return func_761(func_1018(iParam1), iParam0, 0);
}

int func_1018(int iParam0)//Position - 0x2BF48
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_1019(int iParam0)//Position - 0x2BFA2
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674933);
	func_1020();
}

void func_1020()//Position - 0x2BFBC
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_1021(int iParam0)//Position - 0x2C127
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674879);
	func_1022();
}

void func_1022()//Position - 0x2C141
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_1023(int iParam0, int iParam1)//Position - 0x2C275
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_899(iParam0, iParam1, 2);
	bVar1 = func_899(iParam0, iParam1, 1);
	bVar2 = func_899(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1024(int iParam0, int iParam1)//Position - 0x2C32B
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_894(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1025(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C38A
{
	int iVar0;
	int iVar1;
	
	if (func_391(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_582(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_293(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_736(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_943(func_552()), func_942(func_552()), func_1040(), func_1039(), iVar1, iVar0);
	}
	func_1027(iVar0);
	func_1026(iVar0);
	return iVar0;
}

void func_1026(int iParam0)//Position - 0x2C47D
{
	int iVar0;
	
	iVar0 = func_761(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_490 = iVar0;
	func_759(3968, iVar0, -1, 1, 0);
}

void func_1027(int iParam0)//Position - 0x2C4CB
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_1028(bool bParam0)//Position - 0x2C545
{
	if (bParam0)
	{
		return 0;
	}
	if (func_369(PLAYER::PLAYER_ID()) || func_264(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_1029(var uParam0)//Position - 0x2C574
{
	STATS::_0x316DB59CD14C1774(&Global_1675140);
	func_1030();
}

void func_1030()//Position - 0x2C588
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_1031(int iParam0)//Position - 0x2C669
{
	if (iParam0 != func_18())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_1032(int iParam0)//Position - 0x2C68F
{
	if (func_46(iParam0) == func_18())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_1033()//Position - 0x2C6B5
{
	int iVar0;
	
	if (func_762())
	{
		return 4;
	}
	else if (func_775())
	{
		if (func_926(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_321(1))
	{
		iVar0 = func_1002(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1111(1))
	{
		if (func_926(func_552()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_1034(bool bParam0)//Position - 0x2C728
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1035(bool bParam0)//Position - 0x2C73A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_251(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1038(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1037(PLAYER::PLAYER_ID());
			if (func_751(func_752(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1037(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1036(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1036(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1036(int iParam0)//Position - 0x2C872
{
	if (func_290(PLAYER::PLAYER_ID()) == 238 || func_290(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_1037(int iParam0)//Position - 0x2C8AB
{
	if (func_290(PLAYER::PLAYER_ID()) == 237 || func_290(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_1038(int iParam0)//Position - 0x2C8E4
{
	if (func_251(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_1039()//Position - 0x2C909
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_1040()//Position - 0x2C925
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

void func_1041(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x2C941
{
	switch (func_1114())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_1042()//Position - 0x2C9D0
{
	if (func_265(PLAYER::PLAYER_ID(), 20) || func_369(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 20))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			MISC::SET_BIT(&iLocal_370, 20);
		}
		if (!MISC::IS_BIT_SET(iLocal_370, 21))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_START"))
			{
				MISC::SET_BIT(&iLocal_370, 21);
			}
		}
		else if (Local_112.f_5 == -1 && Local_112.f_7 == -1)
		{
			if (!MISC::IS_BIT_SET(iLocal_370, 22))
			{
				if (Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 > 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_COLLECT"))
					{
						MISC::SET_BIT(&iLocal_370, 22);
						if (MISC::IS_BIT_SET(iLocal_370, 23))
						{
							MISC::CLEAR_BIT(&iLocal_370, 23);
						}
					}
				}
			}
		}
		else if (!MISC::IS_BIT_SET(iLocal_370, 23))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_DELIVER"))
			{
				MISC::SET_BIT(&iLocal_370, 23);
				if (MISC::IS_BIT_SET(iLocal_370, 22))
				{
					MISC::CLEAR_BIT(&iLocal_370, 22);
				}
			}
		}
	}
}

void func_1043()//Position - 0x2CAD0
{
	if (func_560())
	{
		if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 10))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
			{
				if (!func_21(Local_112.f_29[0]))
				{
					MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_1044()//Position - 0x2CB20
{
	int iVar0;
	
	if (func_1114() != 2)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_112.f_1, 11))
	{
		if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 12))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, true, 0))
				{
					MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_112.f_1, 12))
	{
		if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 13))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::IS_BULLET_IN_AREA(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_112.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iVar0]))
			{
				if (!func_10(Local_112.f_13[iVar0]))
				{
					if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 14))
					{
						if (func_1045(NETWORK::NET_TO_PED(Local_112.f_13[iVar0])))
						{
							MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_1045(int iParam0)//Position - 0x2CC73
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_1046())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
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

bool func_1046()//Position - 0x2CCE5
{
	return Global_1574401;
}

void func_1047()//Position - 0x2CCF1
{
	if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 7))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_503))
		{
			func_1049();
		}
		if (func_559())
		{
			if (func_367(PLAYER::PLAYER_ID()) > 2)
			{
				if (!func_643("GB_ASLT_GO"))
				{
					func_699("GB_ASLT_GO", func_1048(), 0, 0);
				}
			}
			else
			{
				func_679();
			}
		}
		else
		{
			func_679();
		}
		if (func_557())
		{
			MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 7);
		}
	}
	func_448();
}

char* func_1048()//Position - 0x2CD71
{
	switch (func_1114())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_1049()//Position - 0x2CDB9
{
	vector3 vVar0;
	
	if (func_367(PLAYER::PLAYER_ID()) < 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_503))
		{
			HUD::REMOVE_BLIP(&iLocal_503);
		}
		return;
	}
	vVar0 = { func_1050() };
	if (func_1130())
	{
		if (!func_438(vVar0, 0f, 0f, 0f, 0))
		{
			iLocal_503 = HUD::ADD_BLIP_FOR_COORD(vVar0);
			HUD::SET_BLIP_ROUTE(iLocal_503, true);
			if (!MISC::IS_BIT_SET(iLocal_370, 0))
			{
				HUD::SET_BLIP_FLASHES(iLocal_503, 1);
				HUD::SET_BLIP_FLASH_TIMER(iLocal_503, 7000);
				HUD::FLASH_MINIMAP_DISPLAY();
				MISC::SET_BIT(&iLocal_370, 0);
			}
		}
	}
}

Vector3 func_1050()//Position - 0x2CE3D
{
	vector3 vVar0;
	
	switch (func_1114())
	{
		case 0:
			vVar0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			vVar0 = { func_546() };
			break;
	}
	return vVar0;
}

void func_1051()//Position - 0x2CE8B
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	int iVar12;
	
	func_1059();
	vVar8 = { func_546() };
	if (!func_560())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_559()) && MISC::IS_BIT_SET(iLocal_370, 3)) && !func_593(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (func_1130())
		{
			if (!MISC::IS_BIT_SET(Local_112.f_1, 16))
			{
				if (!MISC::IS_BIT_SET(iLocal_370, 16))
				{
					fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar8, false);
					if (func_1114() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_404(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
						func_1056();
						MISC::SET_BIT(&iLocal_370, 16);
					}
				}
				else
				{
					fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar8, false);
					if (func_1114() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						MISC::CLEAR_BIT(&iLocal_370, 16);
						func_413();
						func_404(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
					}
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(iLocal_370, 16))
				{
					MISC::CLEAR_BIT(&iLocal_370, 16);
					func_413();
					func_404(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				}
				bVar11 = true;
			}
		}
		else
		{
			bVar11 = true;
		}
		if (!bVar11)
		{
			return;
		}
		vVar3 = { func_1055() };
		if (func_438(vVar3, 0f, 0f, 0f, 0))
		{
			return;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		switch (func_1114())
		{
			case 1:
				if (!func_558(vVar0, 3, 1000, 0))
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				else if (func_558(vVar3, 3, 1000, 0))
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				else
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_558(vVar0, 2, 1000, 0))
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				else if (func_558(vVar3, 2, 1000, 0))
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				else
				{
					func_408(10, 0, 0, 0, 0);
					func_1054(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_434(vVar3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_408(10, 0, 0, 0, 0);
				func_1054(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				func_434(vVar3, 1, 0);
				break;
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_370, 16))
		{
			MISC::CLEAR_BIT(&iLocal_370, 16);
			func_413();
			func_404(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		}
		if (MISC::IS_BIT_SET(iLocal_370, 7))
		{
			func_402();
			func_1052();
		}
	}
}

void func_1052()//Position - 0x2D301
{
	if (Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_1053();
	}
}

void func_1053()//Position - 0x2D31A
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413894 = { Var0 };
	Global_2413894.f_6 = -1;
}

void func_1054(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x2D377
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		Global_2413894.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413894.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_158(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413894 = { Var0 };
}

Vector3 func_1055()//Position - 0x2D4A0
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (func_560())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			if (func_21(Local_112.f_29[0]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_112.f_29[0]), true) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_112.f_12), true) };
	}
	return vVar0;
}

void func_1056()//Position - 0x2D509
{
	int iVar0;
	
	iVar0 = func_1114();
	switch (iVar0)
	{
		case 0:
			func_1057(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_1057(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_1057(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_1057(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_1057(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_1057(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_1057(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_1057(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_1057(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_1057(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_1057(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_1057(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_1057(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_1057(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_1057(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_1057(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_1057(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_1057(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_1057(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_1057(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_1057(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_1057(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_1057(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_1057(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_1057(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_1057(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_1057(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_1057(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_1057(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_1057(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_1057(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_1057(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_1057(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_1057(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_1057(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_1057(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_1057(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_1057(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_1057(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_1057(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_1057(vector3 vParam0, float fParam3, int iParam4)//Position - 0x2D9CA
{
	func_1058(vParam0, fParam3, iParam4);
}

void func_1058(vector3 vParam0, var uParam3, var uParam4)//Position - 0x2D9DE
{
	if (!Global_2405071.f_1743)
	{
	}
	if (Global_2405071.f_704 < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/] = { vParam0 };
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_3 = uParam3;
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_4 = uParam4;
		Global_2405071.f_704++;
	}
}

void func_1059()//Position - 0x2DA68
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_1130() && !func_381())
	{
		return;
	}
	if (func_560())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			if (func_21(Local_112.f_29[0]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_112.f_29[0]), true) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_112.f_12), true) };
	}
	if (!func_438(vVar0, 0f, 0f, 0f, 0))
	{
		if (func_559())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar6 = SYSTEM::VDIST2(vVar0, vVar3);
				if (!MISC::IS_BIT_SET(iLocal_370, 3))
				{
					if (fVar6 <= 250000f)
					{
						MISC::SET_BIT(&iLocal_370, 3);
					}
					else if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
					{
						if (func_558(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0))
						{
							MISC::SET_BIT(&iLocal_370, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (MISC::IS_BIT_SET(Local_112.f_1, 6) || (!MISC::IS_BIT_SET(Local_112.f_1, 6) && !func_558(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3, 1000, 0)))
					{
						MISC::CLEAR_BIT(&iLocal_370, 3);
					}
				}
			}
		}
	}
}

void func_1060()//Position - 0x2DBB6
{
	if (func_381())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
		{
			if (!MISC::IS_BIT_SET(iLocal_370, 9))
			{
				if (func_380())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), true, 1);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_112.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_112.f_12));
						}
					}
					MISC::SET_BIT(&iLocal_370, 9);
				}
			}
			else if (!func_371())
			{
				if (!func_380())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_112.f_12), false, 1);
					MISC::CLEAR_BIT(&iLocal_370, 9);
				}
			}
		}
	}
}

void func_1061()//Position - 0x2DC4F
{
	char cVar0[64];
	
	if (!MISC::IS_BIT_SET(iLocal_370, 1))
	{
		if (func_1130())
		{
			if (func_367(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!func_626(86))
				{
					if (func_620(0, 1, 1, 1))
					{
						cVar0 = { func_1063() };
						func_738(&cVar0, -1);
						func_611(1);
						MISC::SET_BIT(&iLocal_370, 1);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_370, 1);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_371, 2))
	{
		if (MISC::IS_BIT_SET(iLocal_370, 1))
		{
			if (func_1130())
			{
				if (Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 > 1)
				{
					if (func_620(0, 1, 1, 1))
					{
						if (func_620(0, 1, 1, 1))
						{
							cVar0 = { func_1062() };
							func_738(&cVar0, -1);
							func_611(1);
							MISC::SET_BIT(&iLocal_371, 2);
						}
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_371, 10))
	{
		if (func_1130())
		{
			if (((Local_112.f_5 != -1 || Local_112.f_7 != -1) || MISC::IS_BIT_SET(Local_112.f_1, 16)) || MISC::IS_BIT_SET(Local_112.f_1, 20))
			{
				if (func_620(0, 1, 1, 1))
				{
					func_738("GB_SGHT_RVL", -1);
					func_611(1);
					MISC::SET_BIT(&iLocal_371, 10);
				}
			}
		}
	}
}

struct<8> func_1062()//Position - 0x2DD86
{
	struct<8> Var0;
	
	switch (func_1114())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_1063()//Position - 0x2DDE0
{
	struct<8> Var0;
	
	if (func_775())
	{
		switch (func_1114())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_1114())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_1064()//Position - 0x2DE91
{
	int iVar0;
	
	if (!func_9(&(Local_112.f_54)))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_371, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_1069(&(Local_112.f_54), 0, 0));
	if (!func_559())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_367(PLAYER::PLAYER_ID()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!MISC::IS_BIT_SET(iLocal_370, 19))
		{
			iLocal_508 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_508, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			MISC::SET_BIT(&iLocal_370, 19);
		}
	}
	func_1068(iVar0);
	if (iVar0 > 30000)
	{
		func_1065(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else if (iVar0 >= 0)
	{
		func_1065(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
	else
	{
		func_1065(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
}

void func_1065(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x2DFA1
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_1067(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_1066(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_1066(int iParam0, int iParam1)//Position - 0x2E0FE
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_1067(int iParam0, int iParam1)//Position - 0x2E117
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_1068(int iParam0)//Position - 0x2E130
{
	if (MISC::IS_BIT_SET(iLocal_370, 29))
	{
		func_219();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_370, 30))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_370, 30);
				MISC::SET_BIT(&iLocal_370, 28);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_370, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_371, 0))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					MISC::SET_BIT(&iLocal_371, 0);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_370, 31))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					MISC::SET_BIT(&iLocal_370, 31);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_370, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_371, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_371, 1);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_370, 28);
						}
					}
				}
			}
		}
	}
}

int func_1069(var uParam0, bool bParam1, bool bParam2)//Position - 0x2E242
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_1070(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x2E289
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_251(PLAYER::PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_552() != func_18())
		{
			Global_1675140.f_2 = func_943(func_552());
			Global_1675140.f_3 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_28 = func_1031(PLAYER::PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_1034(func_321(1));
		}
	}
	else
	{
		iVar0 = func_290(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_736(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_391(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_582(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_293(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_756(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_552() != func_18())
		{
			Global_1674879.f_4 = func_943(func_552());
			Global_1674879.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_787(iParam1);
			Global_1674879.f_41 = func_1091();
			Global_1674879.f_42 = func_902(PLAYER::PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_1024(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_775() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_579(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_1090(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_753(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_552() != func_18())
		{
			Global_1674996.f_4 = func_943(func_552());
			Global_1674996.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_740(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_552() != func_18())
		{
			Global_1674933.f_4 = func_943(func_552());
			Global_1674933.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_577(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_552() != func_18())
		{
			Global_1675040.f_4 = func_943(func_552());
			Global_1675040.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_1017(func_38(), 5);
		Global_1675040.f_28 = func_1034(func_880(PLAYER::PLAYER_ID()));
		Global_1675040.f_29 = func_761(6107, -1, 0);
		Global_1675040.f_30 = func_761(6103, -1, 0);
		Global_1675040.f_31 = func_761(6104, -1, 0);
		Global_1675040.f_32 = func_761(6106, -1, 0);
		Global_1675040.f_33 = func_761(6105, -1, 0);
		Global_1675040.f_34 = func_761(6108, -1, 0);
		Global_1675040.f_7 = func_1033();
		Global_1675040.f_51 = func_1034(bParam4);
	}
	else if (func_575(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_552() != func_18())
		{
			Global_1675094.f_4 = func_943(func_552());
			Global_1675094.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_761(6157, -1, 0);
		Global_1675094.f_25 = func_761(6162, -1, 0);
		Global_1675094.f_26 = func_761(6163, -1, 0);
		Global_1675094.f_27 = func_1034((((func_982() || func_981()) || func_980()) || func_979(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_761(6164, -1, 0);
		Global_1675094.f_29 = func_1034(func_978());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_1033();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_751(func_752(PLAYER::PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_1033();
		if (func_552() != func_18())
		{
			Global_1675228.f_4 = func_943(func_552());
			Global_1675228.f_5 = func_942(func_552());
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_552() != -1)
		{
			Global_1675228.f_17 = func_975(func_552());
		}
		Global_1675228.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_28 = func_1031(PLAYER::PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_1034(func_321(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_1033();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_552() != func_18())
		{
			Global_1675175.f_4 = func_943(func_552());
			Global_1675175.f_5 = func_942(func_552());
		}
		Global_1675175.f_28 = func_1031(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_969(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_953(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_972(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_1034(func_952(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_1034(func_951(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_1034(func_950(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_1034(func_949(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_948(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_947(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_946(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_1034(func_321(1));
		}
		if (func_324() != func_18())
		{
			func_791(func_324(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_28 = func_1031(PLAYER::PLAYER_ID());
	}
	else if (func_749(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_753(PLAYER::PLAYER_ID());
		Global_1675312.f_2 = func_1040();
		Global_1675312.f_3 = func_1039();
		Global_1675312.f_4 = func_943(func_552());
		Global_1675312.f_5 = func_942(func_552());
		Global_1675312.f_7 = func_1033();
		Global_1675312.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_552() != -1)
		{
			Global_1675312.f_17 = func_975(func_552());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_1034(func_940(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_937(21, -1);
	}
	else if (func_569(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_943(func_552());
		Global_1675387.f_7 = func_942(func_552());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_1034(func_321(1));
		}
		if (func_552() != -1)
		{
			Global_1675387.f_9 = func_975(func_552());
		}
		Global_1675387.f_10 = func_1033();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_552() != func_18())
		{
			Global_1674861 = func_943(func_552());
			Global_1674861.f_1 = func_942(func_552());
		}
		Global_1674861.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674861.f_13 = func_1089();
		Global_1674861.f_15 = 0;
		if (func_1111(1))
		{
			if (func_324() == func_552())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_1088())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_1087() || func_1086()) || func_1085()) || func_1084()) || func_1083()) || func_1082(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_1080(func_1081(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_1074(func_1079(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_1016(PLAYER::PLAYER_ID()) || func_1015(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_1012(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_1013(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_1010(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_1073(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_1073(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_1072(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1071(PLAYER::PLAYER_ID(), iVar2);
				if (func_899(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_899(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_899(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1071(int iParam0, int iParam1)//Position - 0x2EE47
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_894(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1072(int iParam0)//Position - 0x2EEA0
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1073(int iParam0, int iParam1, var uParam2)//Position - 0x2EEE2
{
	int iVar0;
	
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_1010(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1074(int iParam0)//Position - 0x2EF1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_937(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_996(11));
		func_995(iVar1, &iVar0, 1);
		iVar2 = func_937(func_1076(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_761(func_1075(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1075(int iParam0, int iParam1)//Position - 0x2EF98
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_1076(int iParam0)//Position - 0x34D64
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_996(iVar0) && iParam0 < func_1077(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1077(int iParam0)//Position - 0x34DA7
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_939(iParam0);
		return func_1078(iVar0);
	}
	return (func_997(iParam0, -1) * iParam0 + 1);
}

int func_1078(int iParam0)//Position - 0x34ED9
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_1079(int iParam0)//Position - 0x34F0A
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_1080(int iParam0)//Position - 0x34F93
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_995(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_761(func_1075(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1081(int iParam0)//Position - 0x34FD9
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_1082(int iParam0)//Position - 0x34FF6
{
	if (iParam0 != func_18())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1083()//Position - 0x3501F
{
	return func_761(6542, -1, 0) != 0;
}

bool func_1084()//Position - 0x35032
{
	return func_761(6163, -1, 0) != 0;
}

bool func_1085()//Position - 0x35045
{
	return func_761(5380, -1, 0) != 0;
}

bool func_1086()//Position - 0x35058
{
	return func_761(3828, -1, 0) != 0;
}

bool func_1087()//Position - 0x3506B
{
	return func_761(3223, -1, 0) != 0;
}

bool func_1088()//Position - 0x3507E
{
	return func_761(5379, -1, 0) != 0;
}

int func_1089()//Position - 0x35091
{
	int iVar0;
	
	iVar0 = func_552();
	if (iVar0 != func_18())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_1090(int iParam0)//Position - 0x350B9
{
	if (func_290(iParam0) == 225 || func_290(iParam0) == 226)
	{
		return func_753(iParam0);
	}
	return -1;
}

var func_1091()//Position - 0x350E6
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_901(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_1092(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x35118
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_726(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_300(&(Var0.f_69), iParam7);
	}
	return func_714(&Var0);
}

struct<8> func_1093()//Position - 0x35198
{
	struct<8> Var0;
	
	switch (func_1114())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_1094()//Position - 0x351F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_112.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[iVar0]))
				{
					if (func_1099(Local_112.f_13[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_13[iVar0]))
						{
							if (!func_10(Local_112.f_13[iVar0]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_13[iVar0]), -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_1114() == 2)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_13[iVar0]), false);
									}
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_1095(Local_112.f_13[iVar0], &(Local_376[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_1095(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x352FC
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_1098())
		{
			Global_2437549 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1097(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1097(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_1096(iParam1);
	}
}

void func_1096(int iParam0)//Position - 0x35377
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_1097(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x353E9
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1098()//Position - 0x355BE
{
	return Global_1312850;
}

int func_1099(int iParam0)//Position - 0x355CA
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_1100(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1100(int iParam0)//Position - 0x355ED
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_1101(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1101(int iParam0)//Position - 0x3561D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_1102()//Position - 0x3563F
{
	int iVar0;
	int iVar1;
	
	if (Local_112 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						if (!MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
						{
							if (func_560())
							{
								func_686(iVar1, 421, 0, 0);
							}
							else
							{
								func_686(iVar1, 457, 0, 0);
							}
							MISC::SET_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
						}
					}
					else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
					{
						if (func_560())
						{
							func_686(iVar1, 421, 0, 0);
						}
						else
						{
							func_686(iVar1, 457, 0, 0);
						}
						MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_1103()//Position - 0x35733
{
	if (func_1114() == 0)
	{
		if (func_25() == 0)
		{
			func_1104("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_1104(int iParam0)//Position - 0x35753
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1105(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_1105(var uParam0)//Position - 0x357D7
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_1107(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_1106(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_1106(var uParam0)//Position - 0x3583E
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_1107(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1107(var uParam0)//Position - 0x358B5
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1109(uParam0->f_1))
	{
		if (func_1108(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1108(var uParam0)//Position - 0x35B25
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1109(int iParam0)//Position - 0x35B4A
{
	return iParam0 == 9999;
}

void func_1110()//Position - 0x35B58
{
	if (func_1114() != 1 && func_1114() != 2)
	{
		return;
	}
	if (func_1114() != 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_112.f_29[0], 1);
		}
	}
}

bool func_1111(bool bParam0)//Position - 0x35B99
{
	return func_19(PLAYER::PLAYER_ID(), bParam0);
}

void func_1112()//Position - 0x35BAB
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1343869835))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1343869835, 1, false, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1343869835, 1f, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(207506449))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(207506449, 1, false, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(207506449, 1f, false, false);
	}
}

void func_1113()//Position - 0x35BFB
{
	Global_1672277 = 1;
	if (!MISC::IS_BIT_SET(Global_2540191, 0))
	{
		MISC::SET_BIT(&Global_2540191, 0);
		MISC::SET_BIT(&Global_1672278, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2540191, 1))
	{
		MISC::SET_BIT(&Global_2540191, 1);
		MISC::SET_BIT(&Global_1672278, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2540191, 5))
	{
		MISC::SET_BIT(&Global_2540191, 5);
		MISC::SET_BIT(&Global_1672278, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, 0);
	}
}

int func_1114()//Position - 0x35D0D
{
	if (Local_112.f_3 != -1)
	{
		return Local_112.f_3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_112.f_3 == -1)
		{
			if (Local_112.f_3 == -1)
			{
				if (Global_2531497.f_5669 != -1)
				{
					Local_112.f_3 = Global_2531497.f_5669;
				}
				else
				{
					Local_112.f_3 = 1;
				}
			}
		}
	}
	return Local_112.f_3;
}

void func_1115(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x35D5D
{
	float fVar0;
	
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_1129(-1);
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_1128() != -1)
		{
			func_1127(-1);
		}
		if (func_1126() != -1)
		{
			func_1125(-1);
		}
		func_1124(iParam2);
		func_1122(iParam0);
		if (!func_430(iParam0))
		{
			fVar0 = func_429(iParam0);
			if (fVar0 != 1f)
			{
				func_425(fVar0);
				MISC::SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_433(iParam0) || iParam3)
		{
			if (func_431(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				MISC::SET_BIT(&(Global_1674852.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_380())
		{
			func_372(27);
		}
		if (bParam1)
		{
			if (!func_371())
			{
				func_422(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2531497.f_4555, 1) || MISC::IS_BIT_SET(Global_2531497.f_4555, 4)) || MISC::IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_845(6);
			}
			func_1121();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_161(PLAYER::PLAYER_ID()) && func_369(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
		}
		func_1117();
		if (func_1116(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_1116(int iParam0)//Position - 0x35F7A
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_1117()//Position - 0x35FC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_1120();
	iVar2 = func_46(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_1118(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_1118(int iParam0, int iParam1)//Position - 0x36034
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_1119(iParam0) == func_46(iParam1) || func_1119(iParam1) == func_46(iParam0));
	}
	return 0;
}

int func_1119(int iParam0)//Position - 0x36076
{
	if (func_19(iParam0, 1))
	{
		return Global_1628955[func_46(iParam0) /*614*/].f_11.f_484;
	}
	return func_18();
}

int func_1120()//Position - 0x360A1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_552();
	if (iVar0 != func_18())
	{
		if (func_1248(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1121()//Position - 0x360E2
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 1))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 1);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 4))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 4);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4555, 6))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4555), 6);
	}
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 0);
	MISC::CLEAR_BIT(&(Global_2531497.f_4555), 2);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_1122(int iParam0)//Position - 0x36180
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_761(3791, -1, 0);
	iVar1 = func_1123(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_759(3791, iVar0, -1, 1, 0);
	}
}

int func_1123(int iParam0)//Position - 0x361B5
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_1124(int iParam0)//Position - 0x3624C
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_1125(int iParam0)//Position - 0x3627B
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_1126()//Position - 0x3629E
{
	return Global_2531497.f_4898.f_338;
}

void func_1127(int iParam0)//Position - 0x362B0
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_1128()//Position - 0x362D3
{
	return Global_2531497.f_4898.f_337;
}

void func_1129(int iParam0)//Position - 0x362E5
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

int func_1130()//Position - 0x362FE
{
	int iVar0;
	
	iVar0 = func_1131();
	if (iVar0 > -1)
	{
		if (Local_112.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1131()//Position - 0x36320
{
	int iVar0;
	
	if (Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 != -1)
	{
		return Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4;
	}
	if (func_20(PLAYER::PLAYER_ID()))
	{
		Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_8)
		{
			func_709(1);
		}
	}
	else if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_552();
		if (iVar0 != func_18())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4;
}

int func_1132()//Position - 0x363AD
{
	if (func_560())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			return 0;
		}
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
	{
		return 0;
	}
	return 1;
}

int func_1133()//Position - 0x363E3
{
	return Local_112;
}

int func_1134(int iParam0)//Position - 0x363ED
{
	return Local_177[iParam0 /*6*/];
}

int func_1135(bool bParam0)//Position - 0x363FB
{
	if (func_1138(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_324() == func_18() || !func_1248(func_324(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_571(PLAYER::PLAYER_ID()))
	{
		if (func_1137(PLAYER::PLAYER_ID()) && func_1136())
		{
			return 1;
		}
	}
	return 0;
}

int func_1136()//Position - 0x36474
{
	switch (func_68(func_564(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1137(int iParam0)//Position - 0x3649E
{
	if (iParam0 != func_18() && func_1248(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_1138(bool bParam0)//Position - 0x364D2
{
	bool bVar0;
	
	if (!func_1111(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_18())
		{
			if (func_1248(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_393(func_290(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_845(31);
				if (func_736(func_290(PLAYER::PLAYER_ID())))
				{
					func_845(81);
				}
				if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_18() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_652(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_323(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_845(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1139()//Position - 0x36624
{
	var uVar0;
	
	func_1143(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1142())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_1141())
	{
		return 1;
	}
	if (func_1140(159))
	{
		if (!func_447())
		{
			return 1;
		}
	}
	if (func_1140(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_426() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_426()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1140(int iParam0)//Position - 0x366AE
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1141()//Position - 0x366C5
{
	return Global_2458999;
}

bool func_1142()//Position - 0x366D1
{
	return Global_2448961.f_593;
}

void func_1143(var uParam0)//Position - 0x366E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_1144(iVar0);
					break;
				
				case -498955166:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1144(int iParam0)//Position - 0x36753
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1248(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1145(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_1145(int iParam0, var uParam1)//Position - 0x367D4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1146()//Position - 0x36833
{
	SYSTEM::WAIT(0);
}

void func_1147()//Position - 0x36840
{
	int iVar0;
	
	if (func_560())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_29[0]))
		{
			if (MISC::IS_BIT_SET(iLocal_371, 5))
			{
				if (!func_1111(1))
				{
					if (func_21(Local_112.f_29[0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_112.f_29[0])))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1199();
	OBJECT::_0x78857FC65CADB909(1);
	func_709(0);
	if (!MISC::IS_BIT_SET(iLocal_370, 17))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1130() || func_381())
			{
				MISC::SET_BIT(&iLocal_370, 17);
				Global_1674861.f_2 = Local_112.f_63;
				Global_1674861.f_3 = Local_112.f_64;
				func_931(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_370, 17))
	{
		func_1197(func_1114(), -1, -1, -1082130432);
	}
	if (MISC::IS_BIT_SET(iLocal_370, 4))
	{
		func_421(8);
	}
	if (MISC::IS_BIT_SET(iLocal_370, 20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	}
	if (Local_112.f_3 == 1)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), false);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (!func_1196())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_12))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_12))
			{
				iVar0 = NETWORK::NET_TO_ENT(Local_112.f_12);
				ENTITY::DELETE_ENTITY(&iVar0);
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_370, 29);
	}
	if (func_708())
	{
		func_707(0, 0, 0);
	}
	func_1153(1, 0);
	if (Global_2531497.f_5669 != -1)
	{
		Global_2531497.f_5669 = -1;
	}
	func_1152();
	if (func_1114() == 3)
	{
		func_1151();
	}
	if (MISC::IS_BIT_SET(iLocal_371, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_371, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_219();
	func_1149();
	if (MISC::IS_BIT_SET(iLocal_370, 19))
	{
		AUDIO::STOP_SOUND(iLocal_508);
	}
	if (MISC::IS_BIT_SET(iLocal_370, 16))
	{
		func_413();
		func_404(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_1148();
}

void func_1148()//Position - 0x36A74
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1149()//Position - 0x36A80
{
	struct<6> Var0;
	
	if (func_1114() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_1150(Var0);
		}
	}
}

void func_1150(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)//Position - 0x36AA8
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1105(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::CLEAR_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_1151()//Position - 0x36B2B
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1343869835))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1343869835, 0, false, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1343869835, 0f, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(207506449))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(207506449, 0, false, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(207506449, 0f, false, false);
	}
}

void func_1152()//Position - 0x36B7B
{
	if (Global_1672277)
	{
		if (MISC::IS_BIT_SET(Global_1672278, 0))
		{
			MISC::CLEAR_BIT(&Global_2540191, 0);
		}
		if (MISC::IS_BIT_SET(Global_1672278, 1))
		{
			MISC::CLEAR_BIT(&Global_2540191, 1);
		}
		if (MISC::IS_BIT_SET(Global_1672278, 5))
		{
			MISC::CLEAR_BIT(&Global_2540191, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, 0);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

void func_1153(bool bParam0, int iParam1)//Position - 0x36C7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 167 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 168)
	{
		func_1194();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_762() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_1176(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 164 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 208) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 250) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_161(PLAYER::PLAYER_ID()))
		{
			func_422(0);
		}
	}
	else if (func_1174(PLAYER::PLAYER_ID()) != -1)
	{
		func_1129(-1);
	}
	func_1173(func_18());
	if (func_345(16))
	{
		func_397(16);
	}
	func_1170(0);
	func_1124(-1);
	func_1169();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1168(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1166(iVar1);
		iVar1++;
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_742();
	if ((func_292(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1165(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_391(iVar2))
	{
		func_1162(-1, 1);
	}
	else if (((((func_741(iVar2) || func_1161(iVar2)) || func_1160(iVar2)) || func_579(iVar2)) || func_577(iVar2)) || func_575(iVar2))
	{
	}
	else
	{
		func_1162(-1, 1);
	}
	func_374(19);
	func_374(20);
	func_374(21);
	func_374(22);
	func_374(27);
	func_397(3);
	func_397(4);
	func_397(7);
	func_1159();
	if (func_369(PLAYER::PLAYER_ID()))
	{
		func_709(0);
	}
	func_374(29);
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_18();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_398();
	}
	if (!func_161(PLAYER::PLAYER_ID()))
	{
		func_420();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1674852.f_3, 8))
	{
		func_1158("IMPEXP_SELFDES", 0);
		func_1156("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_1154(iVar2, 0);
}

void func_1154(int iParam0, bool bParam1)//Position - 0x37044
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1155(iParam0));
			MISC::SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674852.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1155(iParam0));
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_1155(int iParam0)//Position - 0x370A0
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1156(char* sParam0)//Position - 0x3711A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_480();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1157(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1157(int iParam0)//Position - 0x371CE
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1158(char* sParam0, int iParam1)//Position - 0x37223
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1159()//Position - 0x3733B
{
	if (func_385(PLAYER::PLAYER_ID()))
	{
		func_374(25);
	}
}

int func_1160(int iParam0)//Position - 0x37354
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1161(int iParam0)//Position - 0x37374
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1162(int iParam0, bool bParam1)//Position - 0x3739F
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_742();
	}
	if (iParam0 > 0)
	{
		if (func_552() != func_18())
		{
			if (func_572(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2509053.f_93[func_1164(iParam0)] = 1;
			}
		}
		iVar0 = func_1164(159);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(157);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(148);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(164);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(142);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(152);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(166);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(170);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(173);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(179);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(200);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(201);
		if (func_1163(iVar0, Global_262145.f_12606, bParam1))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(182);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(183);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(185);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(186);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(180);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(195);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(197);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(198);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(207);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(208);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(209);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(214);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(215);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(216);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(217);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(218);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(219);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(220);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(221);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1163(int iParam0, int iParam1, bool bParam2)//Position - 0x37A1B
{
	if (bParam2)
	{
		if ((!func_265(PLAYER::PLAYER_ID(), 19) && !func_265(PLAYER::PLAYER_ID(), 20)) && !func_265(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_9(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_1069(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1164(int iParam0)//Position - 0x37AA1
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1165(int iParam0)//Position - 0x37CA3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_742();
	}
	if (iParam0 > 0)
	{
		if (func_552() != func_18())
		{
			Global_2509053.f_93[func_1164(iParam0)] = 1;
		}
		iVar0 = func_1164(155);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(163);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(160);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(153);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(162);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(154);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(171);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(172);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(199);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(194);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(193);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(210);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(205);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(189);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1164(211);
		if (func_1163(iVar0, Global_262145.f_12607, 0))
		{
			func_230(&(Global_2509053[iVar0 /*2*/]));
			func_8(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1166(int iParam0)//Position - 0x37FD4
{
	if (!func_438(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_1167(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_1167() };
	}
	if (!func_438(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_1167(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_1167() };
	}
}

Vector3 func_1167()//Position - 0x38056
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1168(int iParam0)//Position - 0x38062
{
	if (!func_438(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_1167(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_1167() };
	}
	if (!func_438(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_1167(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_1167() };
	}
}

void func_1169()//Position - 0x380E0
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_18();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_1170(bool bParam0)//Position - 0x3813A
{
	if (bParam0)
	{
		if (!func_601(PLAYER::PLAYER_ID(), 14))
		{
			func_1172(14);
		}
	}
	else if (func_601(PLAYER::PLAYER_ID(), 14))
	{
		func_1171(14);
	}
}

void func_1171(int iParam0)//Position - 0x38171
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1172(int iParam0)//Position - 0x3818E
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_1173(int iParam0)//Position - 0x381AB
{
	if (func_20(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1174(int iParam0)//Position - 0x381FA
{
	if (func_1175(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_1175(int iParam0, int iParam1)//Position - 0x3821D
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1176(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x38258
{
	int iVar0;
	
	if (func_901(iParam0, iParam1) && func_1193(iParam0, iParam1))
	{
		iVar0 = func_900(iParam0, iParam1);
		func_1180(iVar0, bParam2, bParam3);
		func_1177(iVar0, 1);
	}
}

void func_1177(int iParam0, bool bParam1)//Position - 0x38293
{
	if (!func_1179(iParam0))
	{
		return;
	}
	func_887(func_1178(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_1178(int iParam0)//Position - 0x382CF
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1179(int iParam0)//Position - 0x38329
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1180(int iParam0, bool bParam1, bool bParam2)//Position - 0x3833E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1071(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1192(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_1191(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_1190(iParam0, 0, bParam2);
	}
	else if (func_1188(iParam0, bParam2))
	{
		iVar0 = func_1187(iVar2, 0);
		iVar3 = func_1024(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1186(iVar2, bParam2);
		iVar5 = func_1187(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1185(iVar2) && func_1184(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1192(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1183(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1182(iParam0, (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_1186(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1187(iVar2, bParam2) / func_1183(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1185(iVar2) && func_1184(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1181(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1181(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x384AF
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_894(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1182(int iParam0, int iParam1)//Position - 0x38523
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1183(int iParam0, int iParam1)//Position - 0x38568
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_894(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1184(int iParam0, int iParam1)//Position - 0x385C7
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_894(iParam1) && func_1185(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1185(int iParam0)//Position - 0x38631
{
	return func_787(iParam0) == 5;
}

int func_1186(int iParam0, bool bParam1)//Position - 0x38641
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_787(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_1187(int iParam0, bool bParam1)//Position - 0x38778
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_787(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_899(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_1184(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1188(int iParam0, bool bParam1)//Position - 0x38982
{
	if (bParam1)
	{
		return func_888(15384, -1, -1);
	}
	return func_888(func_1189(iParam0), -1, -1);
}

int func_1189(int iParam0)//Position - 0x389A7
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1190(int iParam0, bool bParam1, bool bParam2)//Position - 0x38A01
{
	if (bParam2)
	{
		func_887(15384, bParam1, -1, 1);
		return;
	}
	func_887(func_1189(iParam0), bParam1, -1, 1);
}

int func_1191(int iParam0, bool bParam1)//Position - 0x38A2C
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_1071(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_1185(iVar1))
	{
		if (func_1184(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1192(int iParam0, int iParam1, bool bParam2)//Position - 0x38A74
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_1193(int iParam0, int iParam1)//Position - 0x38A94
{
	int iVar0;
	
	if (func_901(iParam0, iParam1))
	{
		iVar0 = func_900(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1194()//Position - 0x38AE8
{
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_1195(24);
}

void func_1195(int iParam0)//Position - 0x38B10
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_1196()//Position - 0x38B39
{
	if (MISC::IS_BIT_SET(iLocal_370, 24))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 1))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 3))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 5))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 8))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 9))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 10))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 15))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1197(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38BE7
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1674861;
	Var1.f_1 = Global_1674861.f_1;
	Var1.f_2 = Global_1674861.f_2;
	Var1.f_3 = Global_1674861.f_3;
	Var1.f_4 = Global_1674861.f_4;
	Var1.f_5 = Global_1674861.f_5;
	Var1.f_6 = Global_1674861.f_6;
	Var1.f_7 = Global_1674861.f_7;
	Var1.f_8 = Global_1674861.f_8;
	Var1.f_9 = Global_1674861.f_9;
	Var1.f_10 = Global_1674861.f_10;
	Var1.f_11 = Global_1674861.f_11;
	Var1.f_12 = Global_1674861.f_12;
	Var1.f_13 = Global_1674861.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674861.f_15;
			Var15.f_15 = Global_1674861.f_16;
			Var15.f_16 = Global_1674861.f_17;
			STATS::_0x8D8ADB562F09A245(&Var15);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674861.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			STATS::_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674861.f_15;
			Var49.f_15 = uParam0;
			STATS::_0x88087EE1F28024AE(&Var49);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674861.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			STATS::_0xFCC228E07217FCAC(&Var65);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674861.f_15;
			Var82.f_15 = uParam0;
			STATS::_0x678F86D8FC040BDB(&Var82);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674861.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674861.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var116);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674861.f_15;
			STATS::_0x282B6739644F4347(&Var134);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674861.f_15;
			STATS::_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1198();
}

void func_1198()//Position - 0x38E85
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_1199()//Position - 0x38E99
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (MISC::IS_BIT_SET(Local_112.f_1, 17))
		{
			vVar0 = { 200f, 200f, 200f };
			vVar3 = { func_24() };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar3 - vVar0, vVar3 + vVar0, true, 1);
			MISC::CLEAR_BIT(&(Local_112.f_1), 17);
		}
	}
}

void func_1200(struct<21> Param0)//Position - 0x38EF2
{
	func_1246(func_1247(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(15);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(5);
	func_1245(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 65);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_177, 193);
	if (!func_1244())
	{
		func_1147();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1243();
		func_1201(0, 0, 0);
		if (func_345(8))
		{
			func_397(8);
		}
		Local_177[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_1147();
	}
}

void func_1201(int iParam0, int iParam1, bool bParam2)//Position - 0x38F7A
{
	func_1242();
	if (func_571(PLAYER::PLAYER_ID()))
	{
		func_1204(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1203(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_775() && !func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_377())
		{
			func_421(3);
		}
	}
	func_421(4);
	if (func_1111(0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_552();
	}
	if (func_736(iParam0))
	{
		func_1022();
		Global_1674879.f_18 = func_1002(func_324());
	}
	else if (func_740(func_1174(PLAYER::PLAYER_ID())))
	{
		func_1020();
		Global_1674933.f_18 = func_1002(func_324());
	}
	if (bParam2)
	{
		if (!func_371())
		{
			func_422(1);
		}
	}
	func_1202();
}

void func_1202()//Position - 0x39068
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_18();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1203(int iParam0, bool bParam1)//Position - 0x390A2
{
	return func_16(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1204(bool bParam0)//Position - 0x390B6
{
	int iVar0;
	
	func_1195(33);
	func_1195(34);
	func_1195(35);
	func_1195(36);
	func_1195(37);
	func_1195(38);
	func_1195(39);
	func_1195(40);
	func_1195(43);
	func_1195(41);
	func_1195(54);
	func_1195(42);
	func_1195(47);
	func_1241(23);
	func_1241(24);
	func_1195(92);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_1240();
	func_1235();
	func_1230();
	func_1225();
	func_1214();
	func_1210();
	func_1206();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1205(3))
	{
		func_1241(3);
	}
	else if (func_1205(4))
	{
		func_1241(4);
	}
	else if (func_1205(5))
	{
		func_1241(5);
	}
	else if (func_1205(6))
	{
		func_1241(6);
	}
	else if (func_1205(7))
	{
		func_1241(7);
	}
	else if (((((((((((((((((func_1205(0) || func_1205(1)) || func_1205(2)) || func_1205(8)) || func_1205(9)) || func_1205(10)) || func_1205(11)) || func_1205(12)) || func_1205(13)) || func_1205(14)) || func_1205(15)) || func_1205(16)) || func_1205(17)) || func_1205(18)) || func_1205(19)) || func_1205(20)) || func_1205(21)) || func_1205(22))
	{
		func_1241(8);
		func_1241(0);
		func_1241(1);
		func_1241(2);
		func_1241(9);
		func_1241(10);
		func_1241(11);
		func_1241(12);
		func_1241(13);
		func_1241(14);
		func_1241(15);
		func_1241(16);
		func_1241(17);
		func_1241(18);
		func_1241(19);
		func_1241(20);
		func_1241(21);
		func_1241(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1205(int iParam0)//Position - 0x3931C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_1206()//Position - 0x39345
{
	if (func_1208())
	{
		func_1207(0);
		func_1207(1);
		func_1207(2);
		func_1207(3);
	}
}

void func_1207(int iParam0)//Position - 0x39368
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_1208()//Position - 0x39391
{
	if (((func_1209(0) || func_1209(1)) || func_1209(2)) || func_1209(3))
	{
		return 1;
	}
	return 0;
}

bool func_1209(int iParam0)//Position - 0x393C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_1210()//Position - 0x393F0
{
	if (func_1212())
	{
		func_1211(4);
		func_1211(5);
		func_1211(6);
		func_1211(7);
	}
}

void func_1211(int iParam0)//Position - 0x39413
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_1212()//Position - 0x3943C
{
	if (((func_1213(4) || func_1213(5)) || func_1213(6)) || func_1213(7))
	{
		return 1;
	}
	return 0;
}

bool func_1213(int iParam0)//Position - 0x39472
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_1214()//Position - 0x3949B
{
	int iVar0;
	
	if (func_1224())
	{
		func_1223(8);
		func_1223(9);
		func_1223(10);
		func_1223(12);
		func_1223(13);
		func_1223(14);
		func_1223(19);
		func_1223(20);
		func_1223(21);
		func_1223(22);
		func_1223(23);
		func_1223(24);
		func_1223(25);
		func_1223(26);
		func_1223(15);
		func_1223(16);
		func_1223(17);
		func_1223(18);
		func_1223(35);
		func_1223(45);
		func_1223(46);
		if (func_1222(11))
		{
			func_1223(11);
			iVar0 = func_761(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_759(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1222(48))
	{
		if (func_1220(151, 3))
		{
			func_1218(151, 3);
		}
		func_1223(48);
	}
	if (func_1222(49))
	{
		if (func_1220(152, 3))
		{
			func_1218(152, 3);
		}
		func_1223(49);
	}
	if (func_1222(50))
	{
		if (func_1220(153, 3))
		{
			func_1218(153, 3);
		}
		func_1223(50);
	}
	if (func_1222(51))
	{
		if (func_1220(func_1215(), 3))
		{
			func_1218(func_1215(), 3);
		}
		func_1223(51);
	}
}

int func_1215()//Position - 0x395E5
{
	if (func_1217())
	{
		func_1216(154, Global_19486, 1);
	}
	return 154;
}

void func_1216(int iParam0, int iParam1, int iParam2)//Position - 0x39600
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_1217()//Position - 0x39645
{
	int iVar0;
	
	iVar0 = func_46(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_18()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1218(int iParam0, int iParam1)//Position - 0x39686
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1219(iParam0, iVar0, 0);
			func_1216(iParam0, iVar0, 0);
		}
	}
}

void func_1219(int iParam0, int iParam1, int iParam2)//Position - 0x396BB
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1220(int iParam0, int iParam1)//Position - 0x39700
{
	if (func_1221(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1221(int iParam0, int iParam1)//Position - 0x3971C
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1222(int iParam0)//Position - 0x39746
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_1223(int iParam0)//Position - 0x3976F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_1224()//Position - 0x39798
{
	if (((((((((((((((((((((func_1222(8) || func_1222(9)) || func_1222(10)) || func_1222(12)) || func_1222(11)) || func_1222(13)) || func_1222(14)) || func_1222(19)) || func_1222(20)) || func_1222(21)) || func_1222(22)) || func_1222(23)) || func_1222(24)) || func_1222(25)) || func_1222(26)) || func_1222(15)) || func_1222(16)) || func_1222(17)) || func_1222(18)) || func_1222(35)) || func_1222(45)) || func_1222(46))
	{
		return 1;
	}
	return 0;
}

void func_1225()//Position - 0x398AA
{
	if (func_1229())
	{
		func_1228(0);
		func_1228(1);
		func_1228(2);
		func_1228(3);
		func_1228(4);
		func_1228(5);
		if (func_1227(32))
		{
			if (func_1220(func_1226(), 3))
			{
				func_1218(func_1226(), 3);
			}
			func_1228(32);
		}
	}
}

int func_1226()//Position - 0x398FE
{
	if (func_1217())
	{
		func_1216(12, Global_19486, 1);
	}
	return 12;
}

bool func_1227(int iParam0)//Position - 0x39919
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_1228(int iParam0)//Position - 0x39942
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_1229()//Position - 0x3996B
{
	if ((((func_1227(1) || func_1227(0)) || func_1227(2)) || func_1227(4)) || func_1227(5))
	{
		return 1;
	}
	return 0;
}

void func_1230()//Position - 0x399AC
{
	if (func_1234())
	{
		func_1233(0);
		func_1233(1);
		func_1233(2);
		func_1233(3);
		func_1233(4);
		func_1233(5);
		func_1233(6);
		func_1233(7);
		if (func_1232(8))
		{
			func_1233(8);
		}
		if (func_1232(15))
		{
			if (func_1220(func_1231(), 3))
			{
				func_1218(func_1231(), 3);
			}
			func_1233(15);
		}
	}
}

int func_1231()//Position - 0x39A19
{
	if (func_1217())
	{
		func_1216(20, Global_19486, 1);
	}
	return 20;
}

bool func_1232(int iParam0)//Position - 0x39A34
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_1233(int iParam0)//Position - 0x39A5D
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_1234()//Position - 0x39A86
{
	if ((((((((func_1232(0) || func_1232(1)) || func_1232(2)) || func_1232(3)) || func_1232(4)) || func_1232(5)) || func_1232(6)) || func_1232(7)) || func_1232(8))
	{
		return 1;
	}
	return 0;
}

void func_1235()//Position - 0x39AF4
{
	if (func_1239())
	{
		func_1238(0);
		func_1238(1);
		func_1238(2);
		func_1238(3);
		func_1238(4);
		func_1238(5);
		func_1238(6);
		func_1238(7);
		func_1238(8);
		func_1238(9);
		func_1238(10);
		func_1238(11);
		func_1238(12);
		if (func_1237(13))
		{
			if (func_1220(func_1236(), 3))
			{
				func_1218(func_1236(), 3);
			}
			func_1238(13);
		}
	}
}

int func_1236()//Position - 0x39B70
{
	if (func_1217())
	{
		func_1216(76, Global_19486, 1);
	}
	return 76;
}

bool func_1237(int iParam0)//Position - 0x39B8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_1238(int iParam0)//Position - 0x39BB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_1239()//Position - 0x39BDD
{
	if ((((((((((((func_1237(0) || func_1237(1)) || func_1237(2)) || func_1237(3)) || func_1237(4)) || func_1237(5)) || func_1237(6)) || func_1237(7)) || func_1237(8)) || func_1237(9)) || func_1237(10)) || func_1237(11)) || func_1237(12))
	{
		return 1;
	}
	return 0;
}

void func_1240()//Position - 0x39C7B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1241(int iParam0)//Position - 0x39CA3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_1242()//Position - 0x39CCC
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

void func_1243()//Position - 0x39CEE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574964[iVar0], -347613984);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -347613984, Global_1574964[iVar0]);
		iVar0++;
	}
}

int func_1244()//Position - 0x39D2D
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_1142())
		{
			return 0;
		}
		if (func_1140(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_1245(int iParam0, int iParam1, bool bParam2)//Position - 0x39D86
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1148();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1098())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1148();
					}
					else
					{
						return 0;
					}
				}
				if (func_1142())
				{
					if (!bParam2)
					{
						func_1148();
					}
					else
					{
						return 0;
					}
				}
				if (func_1140(157))
				{
					if (!bParam2)
					{
						func_1148();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_1148();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_1148();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_1148();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1246(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x39E9B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1148();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_1247(int iParam0)//Position - 0x39EBA
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

int func_1248(int iParam0, bool bParam1, bool bParam2)//Position - 0x3A5CC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

