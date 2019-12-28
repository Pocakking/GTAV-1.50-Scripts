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
	struct<872> Local_112 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_984[32];
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	int iLocal_1439 = 0;
	int iLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	int iLocal_1448[4] = { 0, 0, 0, 0 };
	struct<8> Local_1453[30];
	var uLocal_1694[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1725 = 0;
	var uLocal_1726 = 0;
	int iLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
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
	iLocal_1440 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1000(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_950(ScriptParam_0);
	}
	else
	{
		func_902();
	}
	while (true)
	{
		func_901();
		if (func_893())
		{
			func_902();
		}
		Global_1674861.f_2 = Local_112.f_863;
		Global_1674861.f_3 = Local_112.f_864;
		switch (func_892(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_891() == 1)
				{
					if (func_890())
					{
						func_889();
						if (func_888())
						{
							func_873(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							func_872(0f);
							iLocal_1439 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1438);
						}
						else
						{
							func_873(166, 0, -1, 0);
						}
						func_871();
						func_870();
						func_869();
						Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (func_891() == 4)
				{
					Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_865(1))
				{
					Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (func_891() == 1)
				{
					func_864();
					func_844();
					func_821();
					func_310();
					func_301();
					if (func_888() || func_299())
					{
						func_151(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
					}
					func_78();
				}
				else if (func_891() == 4)
				{
					Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_75();
				}
				func_74();
				break;
			
			case 3:
				func_73(&(Local_112.f_845));
				if (func_72(&(Local_112.f_845)))
				{
					Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			
			case 4:
				func_902();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_891())
			{
				case 0:
					func_70();
					func_69();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_112.f_863), &(Local_112.f_864));
						Local_112 = 1;
						Local_112.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_112.f_119 = PLAYER::PLAYER_ID();
						func_873(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
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

int func_1()//Position - 0x2CC
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x2EF
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x313
{
	return 0;
}

void func_4()//Position - 0x31C
{
	switch (Local_112.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				Local_112.f_117 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				Local_112.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()//Position - 0x375
{
	if (!MISC::IS_BIT_SET(Local_112.f_1, 6))
	{
		if (!func_8(&(Local_112.f_849)))
		{
			func_7(&(Local_112.f_849), 0, 0);
		}
		else if (func_6(&(Local_112.f_849), 500, 0))
		{
			MISC::SET_BIT(&(Local_112.f_1), 6);
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)//Position - 0x3BE
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)//Position - 0x41C
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

bool func_8(var uParam0)//Position - 0x461
{
	return uParam0->f_1;
}

void func_9()//Position - 0x46D
{
	if (!func_8(&(Local_112.f_847)))
	{
		func_7(&(Local_112.f_847), 0, 0);
	}
	else if (func_6(&(Local_112.f_847), func_10(), 0))
	{
		MISC::SET_BIT(&(Local_112.f_1), 3);
	}
}

int func_10()//Position - 0x4AA
{
	return Global_262145.f_15002;
}

void func_11()//Position - 0x4B9
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_112.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_112.f_2[iVar0 /*26*/] == 1)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if (MISC::IS_BIT_SET(Local_112.f_109, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_110, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_111, iVar0))
										{
											MISC::SET_BIT(&(Local_112.f_108), iVar0);
											Local_112.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (MISC::IS_BIT_SET(Local_112.f_112, iVar0))
										{
											Local_112.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_112.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1)))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_112.f_2[iVar0 /*26*/].f_2))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (MISC::IS_BIT_SET(Local_112.f_112, iVar0))
								{
									Local_112.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (MISC::IS_BIT_SET(Local_112.f_110, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (MISC::IS_BIT_SET(Local_112.f_111, iVar0))
							{
								Local_112.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_24)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_112.f_2[iVar0 /*26*/].f_25)
						{
							Local_112.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/] == 0)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_112.f_2[iVar0 /*26*/] == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_24)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_112.f_2[iVar0 /*26*/].f_17 == 3 || Local_112.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_112.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(int iParam0)//Position - 0x9F9
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xA19
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

int func_14(int iParam0)//Position - 0xA52
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_15()//Position - 0xA71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						MISC::SET_BIT(&(Local_112.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)//Position - 0xAD4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_17(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)//Position - 0xB2A
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)//Position - 0xB75
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()//Position - 0xBB6
{
	return Global_1312745;
}

int func_20(int iParam0)//Position - 0xBC2
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()//Position - 0xC38
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_112 != 4)
	{
		iLocal_1435 = 0;
		while (iLocal_1435 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1435)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1435));
				if (!func_17(iVar3, 0))
				{
					if (func_1000(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1435);
					func_23(iLocal_1435);
					if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
					{
						if (!bVar2)
						{
							if ((MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 3)) || MISC::IS_BIT_SET(Local_112.f_1, 5))
							{
								if (!MISC::IS_BIT_SET(Local_984[iLocal_1435 /*14*/].f_1, 4))
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
			}
			else if (!MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (Local_112.f_118 > -1)
				{
					if (iLocal_1435 == Local_112.f_118)
					{
						MISC::SET_BIT(&(Local_112.f_1), 5);
					}
				}
			}
			iLocal_1435++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(Local_112.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_112.f_115 != iVar0)
		{
			Local_112.f_115 = iVar0;
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				MISC::SET_BIT(&(Local_112.f_1), 1);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_1, 2))
		{
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_112.f_1), 2);
			}
		}
	}
}

void func_22()//Position - 0xD9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_113, iVar0))
			{
				if (!func_8(&(Local_112.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_112.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_112.f_853[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_112.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0xE26
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_112.f_109, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_109), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_110, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_110), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_112, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_112), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_111, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_111), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_112.f_113, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_113), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_112.f_113), iVar0);
			}
		}
		if (Local_112.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_112.f_2[iVar0 /*26*/].f_24)
			{
				if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_12, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_112.f_2[iVar0 /*26*/].f_25)
			{
				if (MISC::IS_BIT_SET(Local_984[iParam0 /*14*/].f_13, iVar0))
				{
					Local_112.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)//Position - 0xF93
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_112.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1);
							MISC::SET_BIT(&(Local_112.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_112.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()//Position - 0x1034
{
	if (!func_46())
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()//Position - 0x1061
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)//Position - 0x10B8
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x111D
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_29(int iParam0)//Position - 0x1164
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_112.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			fVar6 = Local_112.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_112.f_123[iVar0 /*36*/].f_32[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar2))
					{
						if (!MISC::IS_BIT_SET(Local_112.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							MISC::CLEAR_AREA(vVar3, 10f, 1, 0, 0, true);
							MISC::SET_BIT(&(Local_112.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, fVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1438);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), false, 0);
							VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x12CA
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
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, bParam7, bParam6, bParam14);
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

void func_31(vector3 vParam0, float fParam3, int iParam4, int iParam5)//Position - 0x13D2
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

int func_32(int iParam0, vector3 vParam1, int iParam4)//Position - 0x14A5
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

bool func_33(int iParam0)//Position - 0x1543
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_34(int iParam0)//Position - 0x1561
{
	int iVar0;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_112.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_112.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_35()//Position - 0x159D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			func_37(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_36(int iParam0)//Position - 0x15F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_112.f_2[iParam0 /*26*/];
	iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_37(int iParam0)//Position - 0x1676
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_112.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_44(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_43();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_33(iVar0))
									{
										if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0f);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575009);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1438);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, false, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 5, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 2, true);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_43();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_33(iVar0))
							{
								iVar2 = Local_112.f_2[iParam0 /*26*/].f_22;
								vVar5 = { Local_112.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								fVar8 = Local_112.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, fVar8, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1575009);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1438);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, false, true);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 42, true);
										PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 43, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 44, true);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 132, true);
										iVar3 = func_40();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar3, 0);
										iVar4 = func_39();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), iVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), func_38());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar1]), 281, true);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

int func_38()//Position - 0x1AD6
{
	return SYSTEM::ROUND(Global_262145.f_15010);
}

int func_39()//Position - 0x1AE9
{
	return 200;
}

var func_40()//Position - 0x1AF3
{
	return Global_262145.f_15009;
}

int func_41(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, int iParam8, bool bParam9)//Position - 0x1B02
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

int func_42(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x1B61
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_43()//Position - 0x1BE9
{
	return joaat("s_m_m_chemsec_01");
}

int func_44(int iParam0)//Position - 0x1BF6
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_45(int iParam0)//Position - 0x1C18
{
	return (Local_112.f_2[iParam0 /*26*/] == 0 || Local_112.f_2[iParam0 /*26*/] == 2);
}

int func_46()//Position - 0x1C3A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_48(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_47(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_47(int iParam0)//Position - 0x1C7F
{
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0)//Position - 0x1CE8
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_112.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_33(iVar0))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_112.f_2[iParam0 /*26*/].f_2), iVar0, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true, true, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_2), 1, iLocal_1438);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), false);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), false, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), true);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
						if (func_33(iVar1))
						{
							if (func_42(&(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_112.f_2[iParam0 /*26*/].f_12;
					if (func_33(iVar1))
					{
						if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_54(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_112.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_112.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_112.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_53(vVar2);
							}
						}
						if (!func_28(Local_112.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_41(&(Local_112.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_112.f_2[iParam0 /*26*/].f_13, Local_112.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, 0f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Global_1575009);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1, iLocal_1438);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 42, true);
								PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 11, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 44, true);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, false, true);
								fVar9 = func_52(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), Local_112.f_2[iParam0 /*26*/].f_13, fVar9, 0, 0);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 132, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 281, true);
								iVar7 = func_51();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar7);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar7, 0);
								iVar8 = func_50();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), iVar8);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), func_49());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true, 1);
								MISC::SET_BIT(&(Local_112.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_49()//Position - 0x2386
{
	return SYSTEM::ROUND(Global_262145.f_15008);
}

int func_50()//Position - 0x2399
{
	return 100;
}

var func_51()//Position - 0x23A3
{
	return Global_262145.f_15007;
}

float func_52(int iParam0)//Position - 0x23B2
{
	if (func_28(Local_112.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_53(vector3 vParam0)//Position - 0x23E6
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_112.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		MISC::SET_BIT(&(Local_112.f_871), iVar0);
	}
}

int func_54(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2524
{
	int iVar0;
	
	switch (Local_112.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_112.f_122);
			if (!func_28(Local_112.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_123[iVar0 /*36*/] };
					*uParam2 = Local_112.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_112.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_112.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_55(Local_112.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_112.f_484[iVar0 /*36*/] };
					*uParam2 = Local_112.f_484[iVar0 /*36*/].f_3;
					Local_112.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_55(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)//Position - 0x26EC
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
		if (func_62(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_56(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x27FD
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1000(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam3))
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
		if (func_1000(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2424073[iVar1 /*421*/].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam3))
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

int func_57(int iParam0)//Position - 0x29B5
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)//Position - 0x29E0
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590446[iVar0 /*871*/].f_842) && !func_60(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)//Position - 0x2A33
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60(vector3 vParam0)//Position - 0x2A46
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()//Position - 0x2A70
{
	return Global_2448961.f_17;
}

int func_62(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)//Position - 0x2A7E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1000(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), vParam0, true) < fParam3)
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

int func_63(int iParam0)//Position - 0x2B7A
{
	if (func_68(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_67(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)//Position - 0x2BC1
{
	int iVar0;
	
	iVar0 = func_66(iParam0);
	if (!iVar0 == func_65())
	{
		if (iVar0 == func_66(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()//Position - 0x2BEC
{
	return -1;
}

int func_66(int iParam0)//Position - 0x2BF5
{
	if (iParam0 != func_65())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_65();
}

struct<13> func_67(int iParam0)//Position - 0x2C18
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0, int iParam1)//Position - 0x2C2F
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_67(iParam0) };
		Global_2507684 = { func_67(iParam1) };
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

void func_69()//Position - 0x2C9C
{
	Local_112.f_2[0 /*26*/] = 2;
	Local_112.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_112.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[1 /*26*/] = 2;
	Local_112.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_112.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[2 /*26*/] = 0;
	Local_112.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_112.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_112.f_2[3 /*26*/] = 0;
	Local_112.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_112.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_70()//Position - 0x2D34
{
	func_71();
	if (Local_112.f_122 == 0)
	{
		if (Local_112.f_121 == 0)
		{
			Local_112.f_122 = 10;
		}
		else
		{
			Local_112.f_122 = 9;
		}
	}
	if (MISC::IS_BIT_SET(Local_112.f_1, 4))
	{
		return;
	}
	switch (Local_112.f_121)
	{
		case 0:
			Local_112.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_112.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_112.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_112.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_112.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_112.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_112.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_112.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_112.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_112.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_112.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_112.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_112.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_112.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_112.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_112.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_112.f_123[6 /*36*/].f_14[2] = 180f;
			Local_112.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_112.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_112.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_112.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_112.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_112.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_112.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_112.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_112.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_112.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_112.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_112.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_112.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_112.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_112.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_112.f_484[0 /*36*/].f_3 = 179.583f;
			Local_112.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_112.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_112.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_112.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_112.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_112.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_112.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_112.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_112.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_112.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_112.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_112.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_112.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_112.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_112.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_112.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_112.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_112.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_112.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_112.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_112.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_112.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_112.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_112.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_112.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_112.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_112.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_112.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_112.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_112.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_112.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_112.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_112.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_112.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_112.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_112.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_112.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_112.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_112.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_112.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_112.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_112.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_112.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_112.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_112.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_112.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_112.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_112.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_112.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_112.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_112.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_112.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_112.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_112.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_112.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_112.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_112.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_112.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_112.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_112.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_112.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_112.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_112.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_112.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_112.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_112.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_112.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_112.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_112.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_112.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_112.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_112.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_112.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_112.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_112.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_112.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_112.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_112.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_112.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_112.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_112.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_112.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_112.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	MISC::SET_BIT(&(Local_112.f_1), 4);
}

var func_71()//Position - 0x3B5B
{
	if (Local_112.f_121 != -1)
	{
		return Local_112.f_121;
	}
	if (Local_112.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) == -289320599)
		{
			Local_112.f_121 = 0;
		}
		else
		{
			Local_112.f_121 = 1;
		}
	}
	return Local_112.f_121;
}

int func_72(var uParam0)//Position - 0x3BA0
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

void func_73(var uParam0)//Position - 0x3BC9
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_74()//Position - 0x3BE8
{
}

void func_75()//Position - 0x3BF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_112.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_65())
				{
					if (iVar2 == iVar0 || func_76(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574964[iVar1], Global_1575009);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1575009, Global_1574964[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x3C85
{
	if (iParam1 != func_65())
	{
		if (!bParam2)
		{
			if (func_77(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x3CCF
{
	if (iParam1 != func_65())
	{
		if (iParam0 != func_65())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
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

void func_78()//Position - 0x3D14
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	
	if (func_888())
	{
		return;
	}
	if (!func_299())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_150(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_149(PLAYER::PLAYER_ID()))
		{
			if (!func_143())
			{
				func_132(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
				MISC::SET_BIT(&iLocal_1433, 18);
			}
		}
	}
	if (Local_112.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar3 /*26*/].f_1), false) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_79(166, vVar0, &uLocal_1726, 1140457472, 1144750080, 0);
	}
}

void func_79(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)//Position - 0x3DBC
{
	float fVar0;
	float fVar1;
	
	if ((((func_131(PLAYER::PLAYER_ID()) && !func_130(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8)) && (func_129(PLAYER::PLAYER_ID()) || func_128(PLAYER::PLAYER_ID()))) || func_60(vParam1))
	{
		return;
	}
	Global_1674852 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam1);
	func_124(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_123(PLAYER::PLAYER_ID()) || func_121(PLAYER::PLAYER_ID()))
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
		if (!(func_120(PLAYER::PLAYER_ID(), 21) || func_120(PLAYER::PLAYER_ID(), 25)))
		{
			func_119(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1000(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_118(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_117(iParam0));
				if (func_116(iParam0, -1))
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
			if (func_115(iParam0))
			{
				fVar1 = func_114(iParam0);
				if (fVar1 != 1f)
				{
					func_872(fVar1);
					MISC::SET_BIT(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_113(iParam0) && func_123(PLAYER::PLAYER_ID()))
				{
					func_111(1);
					func_110(2);
				}
			}
			func_109(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_108(PLAYER::PLAYER_ID(), 19))
			{
				func_107(19);
			}
		}
		if (*uParam4 && func_1000(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_118(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1674852.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_115(iParam0))
			{
				func_106();
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_131(PLAYER::PLAYER_ID()))
			{
				if (func_104(PLAYER::PLAYER_ID()) != 152)
				{
					func_82();
				}
			}
			if (func_81(2))
			{
				func_111(0);
				func_80(2);
			}
		}
	}
}

void func_80(int iParam0)//Position - 0x4040
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

bool func_81(int iParam0)//Position - 0x4057
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_82()//Position - 0x406E
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_102();
	func_85(1, 1, 0);
	func_83();
}

void func_83()//Position - 0x40A4
{
	func_84(0, 0);
}

void func_84(int iParam0, int iParam1)//Position - 0x40B2
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_85(bool bParam0, bool bParam1, bool bParam2)//Position - 0x40CA
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
		func_101();
	}
	if (!bParam2)
	{
		func_88(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_87(0);
	func_86();
}

void func_86()//Position - 0x4170
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_87(bool bParam0)//Position - 0x4195
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

void func_88(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x41B5
{
	if (bParam0)
	{
		if (func_100())
		{
			func_99();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_97();
		func_92(8, 0, 0, 0, 0);
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
		func_89();
	}
}

void func_89()//Position - 0x42A0
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	if (func_91())
	{
		func_90();
	}
	else
	{
		func_97();
		func_92(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_90()//Position - 0x42E8
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_91()//Position - 0x4330
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x436F
{
	if (Global_2437549.f_1893.f_690.f_16 != func_65())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_93())
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

int func_93()//Position - 0x440E
{
	if (((((func_104(PLAYER::PLAYER_ID()) == 229 || func_104(PLAYER::PLAYER_ID()) == 191) || func_96()) || func_95()) || func_94(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_94(int iParam0)//Position - 0x446A
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

var func_95()//Position - 0x44D6
{
	return Global_1574402;
}

int func_96()//Position - 0x44E2
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_97()//Position - 0x44F7
{
	if (func_100() && !func_91())
	{
		func_99();
	}
	func_98();
	Global_2405071.f_704 = 0;
}

void func_98()//Position - 0x4520
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

void func_99()//Position - 0x455B
{
	if (func_91())
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

int func_100()//Position - 0x45C9
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_101()//Position - 0x4608
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_102()//Position - 0x4621
{
	func_103();
	Global_2405071.f_2252 = 0;
}

void func_103()//Position - 0x4635
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

int func_104(int iParam0)//Position - 0x4661
{
	if (func_105(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_105(int iParam0, int iParam1)//Position - 0x4684
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_106()//Position - 0x46BF
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

void func_107(int iParam0)//Position - 0x4706
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

bool func_108(int iParam0, int iParam1)//Position - 0x4723
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_109(int iParam0)//Position - 0x473E
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

void func_110(int iParam0)//Position - 0x475B
{
	MISC::SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_111(int iParam0)//Position - 0x4772
{
	if (func_112() && iParam0)
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

int func_112()//Position - 0x47A7
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0)//Position - 0x47ED
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

float func_114(int iParam0)//Position - 0x483D
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

int func_115(int iParam0)//Position - 0x49DD
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

int func_116(int iParam0, int iParam1)//Position - 0x4AA5
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

float func_117(int iParam0)//Position - 0x4C26
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

int func_118(int iParam0)//Position - 0x4CDE
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

void func_119(vector3 vParam0, int iParam3, int iParam4)//Position - 0x4DDC
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

bool func_120(int iParam0, int iParam1)//Position - 0x4E06
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

int func_121(int iParam0)//Position - 0x4E1F
{
	if (func_122(iParam0))
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x4E3E
{
	if (iParam0 != func_65())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x4E73
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_108(iParam0, 9);
	}
	return 0;
}

void func_124(int iParam0, float fParam1)//Position - 0x4E91
{
	int iVar0;
	
	iVar0 = func_127(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_125();
	}
}

void func_125()//Position - 0x4EB7
{
	if (!func_126(PLAYER::PLAYER_ID()))
	{
		func_109(25);
	}
}

bool func_126(int iParam0)//Position - 0x4ED1
{
	return func_108(iParam0, 25);
}

int func_127(int iParam0)//Position - 0x4EE1
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

int func_128(int iParam0)//Position - 0x4F57
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x4F7D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_130(int iParam0)//Position - 0x4FA3
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_131(int iParam0)//Position - 0x4FBB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_132(int iParam0)//Position - 0x4FDC
{
	if (!func_149(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_140(PLAYER::PLAYER_ID()) != 0)
		{
			func_109(20);
			func_133(func_135());
			if (func_131(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_133(int iParam0)//Position - 0x504B
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_134() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_134()//Position - 0x50AE
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_135()//Position - 0x50BB
{
	int iVar0;
	
	iVar0 = func_104(PLAYER::PLAYER_ID());
	if (func_139(iVar0) == 0)
	{
		return -1;
	}
	if (func_138(iVar0))
	{
		return 65;
	}
	if (func_137(iVar0))
	{
		return 66;
	}
	if (func_136(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_136(int iParam0)//Position - 0x5107
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

int func_137(int iParam0)//Position - 0x513F
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

int func_138(int iParam0)//Position - 0x5195
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

int func_139(int iParam0)//Position - 0x51C1
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

int func_140(int iParam0)//Position - 0x5381
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_131(iParam0) && !func_130(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_149(iParam0);
	uVar3 = func_142();
	uVar4 = func_143();
	if ((bVar1 && (func_129(iParam0) || func_128(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_123(iParam0)) && !func_141(iParam0)))
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

bool func_141(int iParam0)//Position - 0x543F
{
	return func_108(iParam0, 19);
}

bool func_142()//Position - 0x544F
{
	return Global_1312417;
}

int func_143()//Position - 0x545B
{
	if ((func_108(PLAYER::PLAYER_ID(), 21) || func_108(PLAYER::PLAYER_ID(), 22)) || func_146())
	{
		return 1;
	}
	if (func_144())
	{
		func_109(22);
		return 1;
	}
	return 0;
}

int func_144()//Position - 0x54A0
{
	if (func_105(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_142() && !func_145()) || func_120(PLAYER::PLAYER_ID(), 21)) || func_120(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_107(27);
		}
	}
	return 0;
}

bool func_145()//Position - 0x54F3
{
	return Global_1312417.f_1;
}

bool func_146()//Position - 0x5501
{
	return func_147(356, -1);
}

int func_147(int iParam0, int iParam1)//Position - 0x5511
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_148(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x553D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_149(int iParam0)//Position - 0x5571
{
	return func_108(iParam0, 20);
}

float func_150(int iParam0, bool bParam1)//Position - 0x5581
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_112.f_2[iVar2 /*26*/].f_1))
				{
					vVar6 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar2 /*26*/].f_1), true) };
					fVar1 = SYSTEM::VDIST2(vVar3, vVar6);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_151(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x5623
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
	
	if (func_298(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_296() || iParam2 == 27)
	{
		if (func_237(iParam1, iParam2, uParam3, Global_1574182, 0, func_294(), iParam7))
		{
			func_236(1);
			if ((!func_234() && !func_232()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_231())
				{
					func_226();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_225(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_224(iParam1, 0, 0);
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
								if (func_1000(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((func_223(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_222(iVar35))
										{
											iVar44 = iVar35;
											if (func_122(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_221(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_218(PLAYER::PLAYER_ID(), 0) && func_104(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_217())
							{
								if (func_1000(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_65();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_216(iVar35) && func_212(iVar35, iParam2)) && func_1000(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_207(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_67(iVar35) };
								iVar37 = func_201(iVar35);
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
									if (!func_217())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_196(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_195(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_190(iVar35, 0);
								if (bVar34)
								{
									if (func_189(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_188(iParam5))
								{
									func_187(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_187(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_1000(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_65();
							}
							if (func_216(iVar35))
							{
								if (func_1000(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_207(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_67(iVar35) };
									iVar37 = func_201(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574182++;
									iVar51 = func_190(iVar35, 1);
									if (bVar34)
									{
										if (func_189(iVar35, 1))
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
									func_165(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_162(uParam3, iParam1);
						}
						func_161(&(uParam3->f_21));
						func_160();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_159(uParam3, iParam1);
							func_158(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_159(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_154(uParam3))
						{
							Global_1574403 = 1;
						}
						func_152(uParam3);
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
			func_160();
			func_225(0);
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

void func_152(var uParam0)//Position - 0x5C70
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_161(&(uParam0->f_21));
		func_153(0);
	}
}

void func_153(bool bParam0)//Position - 0x5CAC
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

int func_154(var uParam0)//Position - 0x5CF2
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_65() && func_1000(iVar15, 0, 1))
	{
		Var2 = { func_67(iVar15) };
		iVar1 = func_157(uParam0, uParam0->f_37);
		if (func_156(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_155(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_155(uParam0, iVar0, 0);
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

void func_155(var uParam0, int iParam1, int iParam2)//Position - 0x5E1F
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x5E31
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_157(var uParam0, int iParam1)//Position - 0x5E41
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_158(int iParam0, bool bParam1, int iParam2)//Position - 0x5E51
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

void func_159(var uParam0, int iParam1)//Position - 0x5E87
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_160()//Position - 0x5EBE
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_161(var uParam0)//Position - 0x5ED3
{
	uParam0->f_1 = 0;
}

void func_162(var uParam0, int iParam1)//Position - 0x5EE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_65())
		{
			if (func_1000(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_164(uParam0->f_38[iVar0 /*2*/], 0);
					func_163(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_163(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5F53
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

int func_164(int iParam0, bool bParam1)//Position - 0x5F8F
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

void func_165(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x5FC3
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_186() && iParam4 < func_185())
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
				func_184("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_184(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_184("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_184("");
			if (uParam3->f_108 == 6)
			{
				func_184("");
			}
			else
			{
				func_184(&sParam5);
			}
			func_170(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_169(uParam3))
			{
				func_168("DPAD_FRIEND");
			}
			else if (func_167(uParam3))
			{
				func_168("DPAD_FRIEND");
			}
			else if (func_166(uParam3))
			{
				func_168("DPAD_CREW");
			}
			else
			{
				func_168("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_166(var uParam0)//Position - 0x60E3
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_167(var uParam0)//Position - 0x60F4
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_168(char* sParam0)//Position - 0x6105
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_169(var uParam0)//Position - 0x6117
{
	if (func_167(uParam0) && func_166(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_170(var uParam0, int iParam1)//Position - 0x6138
{
	if (func_183(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_175(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_171())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_171()//Position - 0x61B9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_173() || func_172())
		{
			return 1;
		}
	}
	return 0;
}

var func_172()//Position - 0x61DE
{
	return Global_2448961.f_15;
}

int func_173()//Position - 0x61EC
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_172();
	}
	return func_174(Global_4456448.f_154360);
}

int func_174(int iParam0)//Position - 0x6210
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

int func_175(int iParam0)//Position - 0x624A
{
	if ((func_1000(iParam0, 0, 1) && func_179()) && func_176(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, bool bParam1)//Position - 0x6277
{
	return func_177(iParam0, bParam1, 1);
}

int func_177(int iParam0, bool bParam1, int iParam2)//Position - 0x6288
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_178(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_65() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1)//Position - 0x62E4
{
	if (iParam0 != func_65())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_65())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179()//Position - 0x6333
{
	if (func_131(PLAYER::PLAYER_ID()) || func_182())
	{
		if (!func_180(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_180(int iParam0, int iParam1)//Position - 0x6363
{
	if (func_181(iParam0) == iParam1)
	{
		return func_129(iParam0);
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x6380
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_182()//Position - 0x639F
{
	switch (func_104(PLAYER::PLAYER_ID()))
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

int func_183(int iParam0)//Position - 0x63DD
{
	if (func_171())
	{
		if (func_1000(iParam0, 0, 1))
		{
			return func_122(iParam0);
		}
	}
	if ((func_1000(iParam0, 0, 1) && func_179()) && func_178(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_184(char* sParam0)//Position - 0x6425
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_185()//Position - 0x6433
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

int func_186()//Position - 0x644F
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_187(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x6467
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_186() && iParam3 < func_185())
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
					func_184("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_168(sParam16);
				}
				else
				{
					func_184(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_184("");
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
				if (func_217())
				{
					func_184("");
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
						func_168(&(uParam2->f_104));
					}
					else
					{
						func_184("");
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
					func_184("");
				}
				if (uParam2->f_108 == 6)
				{
					func_184("");
				}
				else
				{
					func_184(&sParam4);
				}
				func_170(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					func_184("");
					func_184("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
				}
				if (func_169(uParam2))
				{
					func_168("DPAD_FRIEND");
				}
				else if (func_167(uParam2))
				{
					func_168("DPAD_FRIEND");
				}
				else if (func_166(uParam2))
				{
					func_168("DPAD_CREW");
				}
				else
				{
					func_168("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_188(int iParam0)//Position - 0x67AA
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

bool func_189(int iParam0, bool bParam1)//Position - 0x67CE
{
	if (!bParam1)
	{
		if (func_122(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_65();
}

int func_190(int iParam0, bool bParam1)//Position - 0x67F9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_131(iParam0)) && !func_149(iParam0))
	{
		iVar0 = func_194();
	}
	iVar1 = func_193(iParam0);
	if (!iVar1 == -1)
	{
		return func_191(iVar1);
	}
	return iVar0;
}

int func_191(int iParam0)//Position - 0x6843
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_192(iParam0);
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

var func_192(int iParam0)//Position - 0x6906
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_193(int iParam0)//Position - 0x691D
{
	if (!iParam0 == func_65())
	{
		if (func_189(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_66(iParam0)];
		}
	}
	return -1;
}

int func_194()//Position - 0x694F
{
	return 21;
}

char* func_195(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x6959
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

int func_196(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x6ADB
{
	if (func_200(iParam3))
	{
		*fParam1 = (func_197(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_188(iParam3))
	{
		*fParam1 = (func_197(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_197(int iParam0, int iParam1)//Position - 0x6B2B
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
				return func_199(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_198(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_198(float fParam0)//Position - 0x6BCE
{
	return (fParam0 / 1.609344f);
}

float func_199(float fParam0)//Position - 0x6BDE
{
	return (fParam0 / 0.3048f);
}

int func_200(int iParam0)//Position - 0x6BEE
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

int func_201(int iParam0)//Position - 0x6C4A
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	if (iVar0 == -1)
	{
		func_202(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_202(int iParam0, bool bParam1)//Position - 0x6C80
{
	if (!func_1000(iParam0, 0, 1))
	{
		return;
	}
	if (func_204(iParam0) != -1)
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
	if (func_203(iParam0))
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

int func_203(int iParam0)//Position - 0x6CEC
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

int func_204(int iParam0)//Position - 0x6D1E
{
	int iVar0;
	
	if (!func_1000(iParam0, 0, 1))
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
			func_205(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_205(int iParam0)//Position - 0x6D9D
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
	func_206(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_206(var uParam0)//Position - 0x6E53
{
	*uParam0 = 0;
	uParam0->f_1 = func_65();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_207(int iParam0)//Position - 0x6E80
{
	char cVar0[32];
	
	if (func_1000(iParam0, 0, 1))
	{
		Global_2507671 = { func_67(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_156(Global_2507671))
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
		if (func_211(&Global_2507671))
		{
			Global_2507601 = { func_209(iParam0) };
			func_208(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_208(var uParam0, char* sParam1)//Position - 0x6F01
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_209(int iParam0)//Position - 0x6F13
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_210(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_67(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_210(int iParam0)//Position - 0x6F4F
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0)//Position - 0x6F65
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

int func_212(int iParam0, int iParam1)//Position - 0x6F8B
{
	if (iParam1 == 26)
	{
		if ((func_130(iParam0) || func_215(iParam0)) || func_214(iParam0))
		{
			return 0;
		}
	}
	if (!func_213(iParam0))
	{
		return 0;
	}
	if ((!func_223(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_222(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_213(int iParam0)//Position - 0x6FFA
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_214(int iParam0)//Position - 0x7013
{
	if (func_130(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_215(int iParam0)//Position - 0x7039
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_216(int iParam0)//Position - 0x7077
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
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

int func_217()//Position - 0x70BC
{
	switch (func_104(PLAYER::PLAYER_ID()))
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
	switch (func_181(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_149(PLAYER::PLAYER_ID()))
	{
		switch (func_104(PLAYER::PLAYER_ID()))
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
	if (func_180(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)//Position - 0x71F8
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_219(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_219(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)//Position - 0x725E
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
	return func_220(iParam0, 0);
	return 0;
}

int func_220(int iParam0, int iParam1)//Position - 0x72B8
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

void func_221(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x730D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1000(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_223(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_222(iVar1))
				{
					if (func_76(iVar1, iParam1, 0))
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

bool func_222(int iParam0)//Position - 0x7397
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_223(int iParam0)//Position - 0x73AC
{
	if (func_1000(iParam0, 0, 1))
	{
		if (func_1000(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_104(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(int iParam0, int iParam1, int iParam2)//Position - 0x73ED
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_225(bool bParam0)//Position - 0x741B
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

void func_226()//Position - 0x744D
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_230())
		{
			func_227();
		}
	}
}

void func_227()//Position - 0x746F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_228(var uParam0, int iParam1)//Position - 0x74BA
{
	func_229(uParam0, iParam1);
}

void func_229(var uParam0, var uParam1)//Position - 0x74CA
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_230()//Position - 0x74DB
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_231()//Position - 0x74F1
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_230())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_230())
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0x7532
{
	if (func_230())
	{
		if (func_233(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x7559
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

int func_234()//Position - 0x75DF
{
	if (func_230())
	{
		if (func_235(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x7606
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

void func_236(int iParam0)//Position - 0x7698
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

int func_237(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x76C6
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_293(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_292();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_291())
		{
			if (func_290() > 0 && Global_1574184)
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
		if (!func_271())
		{
			func_270(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_270(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_290() == 1)
		{
			func_269(bVar6, iParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_270(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_290() == 0 && !bParam5))
		{
			func_270(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_268();
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
					func_268();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_269(bVar6, iParam0, 0))
				{
					func_224(iParam0, 0, 0);
					sVar4 = func_266(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_264(iParam1) };
					if (bParam4)
					{
						func_261(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_254(iParam0, func_258(uParam2), func_255(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_247(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
						{
							sVar9 = iParam6;
						}
						func_245(iParam0, sVar9, func_246(), -1);
					}
					else if (func_171())
					{
						uParam2->f_34 = Global_1574183;
						func_261(iParam0, sVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_238(iParam1);
						uParam2->f_34 = Global_1574183;
						func_261(iParam0, sVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_238(iParam1);
						func_261(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
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

int func_238(int iParam0)//Position - 0x79A2
{
	int iVar0;
	
	iVar0 = -1;
	if (func_244())
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
			if (func_243(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_242(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_241(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_239())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_239()//Position - 0x7AFB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_240(Global_4456448.f_154360);
}

int func_240(int iParam0)//Position - 0x7B1F
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

bool func_241(int iParam0)//Position - 0x7B59
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_242(int iParam0)//Position - 0x7B6E
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_243(int iParam0)//Position - 0x7B83
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_244()//Position - 0x7B98
{
	return Global_4456448.f_1 == 0;
}

void func_245(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x7BA8
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_168(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_168("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_246()//Position - 0x7C06
{
	switch (func_104(PLAYER::PLAYER_ID()))
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

char* func_247(var uParam0)//Position - 0x7C5D
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
	switch (func_104(PLAYER::PLAYER_ID()))
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
			if (func_250())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_249(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_249(1))
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
			if (func_248(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_248(int iParam0)//Position - 0x808A
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

bool func_249(bool bParam0)//Position - 0x80BC
{
	return func_176(PLAYER::PLAYER_ID(), bParam0);
}

bool func_250()//Position - 0x80CE
{
	return (func_253() && func_251(func_252()));
}

bool func_251(int iParam0)//Position - 0x80E7
{
	return func_178(iParam0, 1);
}

int func_252()//Position - 0x80F6
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_253()//Position - 0x810D
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

void func_254(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x8123
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_168(sParam1);
		}
		else if (func_181(PLAYER::PLAYER_ID()) == 133)
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
		func_168("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_255(var uParam0)//Position - 0x81A9
{
	int iVar0;
	
	iVar0 = func_181(PLAYER::PLAYER_ID());
	if (func_257())
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
			switch (func_256())
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

int func_256()//Position - 0x834F
{
	if (func_181(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_257()//Position - 0x8372
{
	return Global_1590319;
}

char* func_258(var uParam0)//Position - 0x837E
{
	int iVar0;
	
	iVar0 = func_181(PLAYER::PLAYER_ID());
	if (func_257())
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
			if (func_260() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_260() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_256())
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
			if (func_259() == 1)
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

int func_259()//Position - 0x8572
{
	return Global_2531497.f_4822;
}

int func_260()//Position - 0x8581
{
	if (func_181(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_261(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x85A4
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_184(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_168(sParam1);
		}
		if (func_291() && iParam6)
		{
			if (func_263())
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
			func_168(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_262(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_262(int iParam0)//Position - 0x8665
{
	if (func_243(iParam0) || func_242(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_263()//Position - 0x8687
{
	return Global_1574184;
}

struct<4> func_264(int iParam0)//Position - 0x8693
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_265(PLAYER::PLAYER_ID()) || func_241(PLAYER::PLAYER_ID()))
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
	if (func_171() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_265(int iParam0)//Position - 0x872D
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

int func_266(int iParam0, int iParam1, bool bParam2)//Position - 0x8742
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_171() || MISC::IS_STRING_NULL_OR_EMPTY(iParam1)))
	{
		uVar0 = func_267();
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

char* func_267()//Position - 0x88A6
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

void func_268()//Position - 0x88EA
{
	Global_42316 = 1;
}

bool func_269(bool bParam0, int iParam1, bool bParam2)//Position - 0x88F6
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

void func_270(int iParam0, var uParam1, bool bParam2)//Position - 0x8936
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_160();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_161(&(uParam1->f_19));
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

int func_271()//Position - 0x89A8
{
	if (func_289())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (!func_286())
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	if (func_283(8, -1))
	{
		return 0;
	}
	if (func_290() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	else if (!func_279(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_278(1) || func_276(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_275() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_273(PLAYER::PLAYER_ID()) && !func_275())
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
	if (func_81(0))
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
	if (func_272(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_272(int iParam0)//Position - 0x8B73
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

int func_273(int iParam0)//Position - 0x8B9B
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_274())
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

bool func_274()//Position - 0x8BDD
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_275()//Position - 0x8BEE
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_276(bool bParam0)//Position - 0x8C10
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_277(PLAYER::PLAYER_PED_ID()))
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

int func_277(int iParam0)//Position - 0x8CFB
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

bool func_278(bool bParam0)//Position - 0x8D58
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_279(int iParam0, bool bParam1, bool bParam2)//Position - 0x8D81
{
	if (bParam1)
	{
		if (func_280(iParam0))
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

bool func_280(int iParam0)//Position - 0x8DB3
{
	return func_281(iParam0);
}

bool func_281(int iParam0)//Position - 0x8DC1
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_282()//Position - 0x8DDB
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_283(int iParam0, int iParam1)//Position - 0x8DF2
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

int func_284()//Position - 0x8E2D
{
	if (func_285() == 0)
	{
		return 1;
	}
	return 0;
}

int func_285()//Position - 0x8E42
{
	return Global_1312467.f_18;
}

int func_286()//Position - 0x8E50
{
	if (func_287())
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

bool func_287()//Position - 0x8E8F
{
	return Global_1312439;
}

bool func_288()//Position - 0x8E9B
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

bool func_289()//Position - 0x8EB0
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_290()//Position - 0x8EC5
{
	return Global_1373500.f_68;
}

int func_291()//Position - 0x8ED3
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_292()//Position - 0x8EE9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_293(int iParam0)//Position - 0x8F0D
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

int func_294()//Position - 0x8F39
{
	if (func_295(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_295(int iParam0)//Position - 0x8F54
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_296()//Position - 0x8F77
{
	if (func_294())
	{
		return 1;
	}
	if (func_214(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_131(PLAYER::PLAYER_ID()))
	{
		switch (func_181(PLAYER::PLAYER_ID()))
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
				if (!func_297(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_297(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_297(PLAYER::PLAYER_ID()))
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

bool func_297(int iParam0)//Position - 0x9052
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_298(int iParam0)//Position - 0x906A
{
	if (iParam0 == 27)
	{
		if ((func_131(PLAYER::PLAYER_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_180(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_105(PLAYER::PLAYER_ID(), 0) && func_149(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_140(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_299()//Position - 0x90DB
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_300();
	}
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Local_984[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_300()//Position - 0x911D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_301()//Position - 0x9158
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
				func_302(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_302(int iParam0)//Position - 0x9195
{
	struct<4> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<14> Var16;
	int iVar30;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar30 = 0;
		while (iVar30 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_113, iVar30))
			{
				if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, iVar30))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!MISC::IS_BIT_SET(Local_112.f_109, iVar30))
							{
								if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, iVar30))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar30 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_112.f_2[iVar30 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_112.f_2[iVar30 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_889() == Local_112.f_118)
															{
																MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), iVar30);
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
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (iVar12 == NETWORK::NET_TO_PED(Local_112.f_2[iVar30 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(iVar11))
										{
											iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar14))
											{
												if (Var0.f_3)
												{
													if (iVar14 == PLAYER::PLAYER_ID())
													{
														Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), iVar30);
														Var16.f_2 = -90062717;
														Var16.f_10 = PLAYER::PLAYER_ID();
														func_308(Var16, func_309(0));
														func_303("HUNT_TCKP", 1);
													}
												}
											}
											else if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
											{
												if (Var0.f_3)
												{
													iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
													MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
										{
											if (Var0.f_3)
											{
												MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
											}
										}
									}
									else if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
									{
										if (Var0.f_3)
										{
											MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
								{
									if (Var0.f_3)
									{
										MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
									}
								}
							}
						}
					}
				}
			}
			iVar30++;
		}
	}
	if (func_299())
	{
		if (!func_108(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar12))
					{
						iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar14 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
										{
											if (func_189(iVar13, 1))
											{
												if (Local_112.f_118 > -1)
												{
													iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118));
													if (func_76(iVar13, iVar15, 1))
													{
														if (!func_143())
														{
															func_132(0);
															func_125();
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

int func_303(char* sParam0, int iParam1)//Position - 0x94DE
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_304(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_304(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x950A
{
	int iVar0;
	
	if ((!func_307() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_305(iParam2);
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

int func_305(int iParam0)//Position - 0x9612
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_306(iVar0);
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

void func_306(int iParam0)//Position - 0x9674
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_307()//Position - 0x96AD
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_308(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x96BE
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_309(int iParam0)//Position - 0x96EB
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_1000(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_310()//Position - 0x9748
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_1433, 14))
		{
			MISC::CLEAR_BIT(&iLocal_1433, 14);
		}
		return;
	}
	iVar0 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	if (!MISC::IS_BIT_SET(iLocal_1433, 14))
	{
		if (Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_1433, 14);
	}
	if (!MISC::IS_BIT_SET(iLocal_1433, 15))
	{
		MISC::SET_BIT(&iLocal_1433, 15);
		func_820();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_984[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_775();
					func_757();
					func_742();
					break;
				
				case 2:
					func_311();
					break;
				
				case 3:
					func_902();
					break;
				}
			}
	}
}

void func_311()//Position - 0x982F
{
	struct<20> Var0;
	int iVar22;
	int iVar23;
	char* sVar24;
	int iVar25;
	int iVar26;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar22 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar23 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar22 = func_300();
		iVar23 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	}
	if (!MISC::IS_BIT_SET(Local_984[iVar22 /*14*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_1433, 9))
		{
			if (MISC::IS_BIT_SET(Local_112.f_1, 1))
			{
				if (iVar22 == Local_112.f_118 || func_889() == Local_112.f_118)
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_741(iVar23);
						iVar25 = func_740(iVar23);
						func_738(87, "GB_WINNER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar23 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_1433, 6))
						{
							func_628(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_1433, 6);
						}
						Var0 = func_627();
						Var0.f_1 = func_626();
						func_438(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar23);
						iLocal_1727 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						MISC::SET_BIT(&iLocal_1433, 17);
						func_7(&uLocal_1728, 0, 0);
					}
				}
				else if (func_299())
				{
					if (func_189(iVar23, 1))
					{
						if (func_140(iVar23) >= 2)
						{
							sVar24 = func_741(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							iVar25 = func_740(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							func_738(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (iVar23 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_1433, 6))
							{
								func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_1433, 6);
							}
							if (func_126(iVar23))
							{
								Var0 = func_437();
								Var0.f_1 = func_436();
							}
							func_438(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_140(iVar23) >= 2)
						{
							sVar24 = func_741(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							iVar25 = func_740(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
							func_738(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (iVar23 == PLAYER::PLAYER_ID())
						{
							if (!MISC::IS_BIT_SET(iLocal_1433, 6))
							{
								func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								MISC::SET_BIT(&iLocal_1433, 6);
							}
							if (func_126(iVar23))
							{
								Var0 = func_437();
								Var0.f_1 = func_436();
							}
							func_438(166, 0, &Var0, 0);
						}
					}
				}
				MISC::SET_BIT(&iLocal_1433, 9);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 3))
			{
				iVar26 = (4 - Local_112.f_115);
				if (iVar22 == Local_112.f_118 || func_889() == Local_112.f_118)
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_430();
						iVar25 = func_740(iVar23);
						func_738(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar23 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_1433, 6))
						{
							func_628(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_1433, 6);
						}
						Var0 = func_627();
						Var0.f_1 = func_626();
						func_438(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_140(iVar23) >= 2)
					{
						sVar24 = func_741(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
						iVar25 = func_740(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
						if (iVar26 == 1)
						{
							func_738(87, "GB_WINNER", "BIGM_HUN1S", sVar24, iVar25, 0, iVar26, -1, -1, 2, -1);
						}
						else if (iVar26 > 1)
						{
							func_738(87, "GB_WINNER", "BIGM_HUNRS", sVar24, iVar25, 0, iVar26, -1, -1, 2, -1);
						}
					}
					if (iVar23 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_1433, 6))
						{
							func_628(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_1433, 6);
						}
						if (func_126(iVar23))
						{
							Var0 = func_437();
							Var0.f_1 = func_436();
						}
						func_438(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				MISC::SET_BIT(&iLocal_1433, 9);
			}
			else if (MISC::IS_BIT_SET(Local_112.f_1, 5))
			{
				if (func_384())
				{
					if (func_888())
					{
						if (func_140(iVar23) >= 2)
						{
						}
					}
					else if (func_140(iVar23) >= 2)
					{
						func_346(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar23 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_1433, 6))
					{
						func_628(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_1433, 6);
					}
					func_438(166, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_1433, 9);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_1433, 9))
		{
			func_820();
			if (!MISC::IS_BIT_SET(iLocal_1434, 8))
			{
				func_331();
				func_75();
				MISC::SET_BIT(&iLocal_1434, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_1433, 10))
			{
			}
			if (func_312(&uLocal_1441, 0, 0))
			{
				if (iVar22 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_1433, 17))
			{
				if (func_6(&uLocal_1728, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1727);
					MISC::CLEAR_BIT(&iLocal_1433, 17);
				}
			}
		}
	}
}

int func_312(var uParam0, bool bParam1, int iParam2)//Position - 0x9D2F
{
	bool bVar0;
	
	func_109(29);
	if ((*uParam0 > 0 && !func_230()) && func_140(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_328())
		{
			func_327();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2531497.f_4588), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_326(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
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
				func_319(iParam2);
				func_326(uParam0, 2);
			}
			break;
		
		case 2:
			func_319(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_313(func_314(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_326(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
				func_326(uParam0, 4);
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

int func_313(char* sParam0)//Position - 0x9EA9
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_314(int iParam0)//Position - 0x9EBC
{
	if (((func_317(PLAYER::PLAYER_ID()) || func_316(PLAYER::PLAYER_ID())) || func_250()) || iParam0)
	{
		if (func_316(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_219(func_315()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_315()//Position - 0x9F1E
{
	return Global_1651198;
}

bool func_316(int iParam0)//Position - 0x9F2A
{
	return func_220(func_104(iParam0), 0);
}

bool func_317(int iParam0)//Position - 0x9F3D
{
	return func_318(func_104(iParam0));
}

int func_318(int iParam0)//Position - 0x9F4F
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148 && func_178(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35, 1))
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

void func_319(int iParam0)//Position - 0xA031
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_1000(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !CAM::IS_SCREEN_FADED_OUT()) && !func_108(PLAYER::PLAYER_ID(), 22)) && func_140(PLAYER::PLAYER_ID()) != 0) && !func_324(func_325())) && !func_317(PLAYER::PLAYER_ID())) && !func_323(func_104(PLAYER::PLAYER_ID()))) && !func_322(func_104(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2531497.f_4588), 1);
			func_321(func_314(iParam0), -1);
			func_320(1);
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_320(int iParam0)//Position - 0xA115
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_249(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_230())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_321(char[4] cParam0, int iParam1)//Position - 0xA14C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_322(int iParam0)//Position - 0xA163
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

int func_323(int iParam0)//Position - 0xA1B9
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

int func_324(int iParam0)//Position - 0xA209
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

int func_325()//Position - 0xA22F
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

void func_326(var uParam0, int iParam1)//Position - 0xA7E4
{
	*uParam0 = iParam1;
}

void func_327()//Position - 0xA7F1
{
	Global_2460541 = 1;
}

int func_328()//Position - 0xA7FE
{
	if (((((((func_104(PLAYER::PLAYER_ID()) == 170 || func_104(PLAYER::PLAYER_ID()) == 219) || func_104(PLAYER::PLAYER_ID()) == 221) || func_104(PLAYER::PLAYER_ID()) == 220) || func_104(PLAYER::PLAYER_ID()) == 216) || func_104(PLAYER::PLAYER_ID()) == 215) || func_104(PLAYER::PLAYER_ID()) == 214) || func_104(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_329(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0)//Position - 0xA89F
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_330(int iParam0)//Position - 0xA8E5
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

void func_331()//Position - 0xACAD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1448[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1448[iVar0]));
		}
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_1433, 18))
	{
		func_345(1);
		MISC::CLEAR_BIT(&iLocal_1433, 18);
	}
	func_342();
	func_332();
}

void func_332()//Position - 0xAD02
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_1433, 7))
	{
		MISC::SET_BIT(&iLocal_1433, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iVar0))
					{
						func_340(iVar1, 432, 0, 0);
						func_333(iVar1, func_339(iLocal_1725), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_333(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xAD79
{
	var uVar0;
	
	if (func_335(iParam0))
	{
		return;
	}
	if (func_334(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_334(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0xADCB
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

int func_335(int iParam0)//Position - 0xAE90
{
	if (iParam0 == func_65())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_336())
	{
		return 1;
	}
	return 0;
}

int func_336()//Position - 0xAEB9
{
	switch (func_338())
	{
		case 0:
			return func_337();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_337()//Position - 0xAEEC
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_338()//Position - 0xAF10
{
	return Global_30736;
}

int func_339(int iParam0)//Position - 0xAF1B
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

void func_340(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB183
{
	bool bVar0;
	
	if (func_335(iParam0))
	{
		return;
	}
	if (func_334(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_341();
		}
	}
}

void func_341()//Position - 0xB1DE
{
	Global_2416074.f_1515 = 1;
}

void func_342()//Position - 0xB1EE
{
	if (MISC::IS_BIT_SET(iLocal_1433, 16))
	{
		func_86();
		func_343();
		MISC::CLEAR_BIT(&iLocal_1433, 16);
	}
}

void func_343()//Position - 0xB213
{
	if (Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_344();
	}
}

void func_344()//Position - 0xB22C
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

void func_345(bool bParam0)//Position - 0xB289
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_142())
		{
			if (func_1000(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_1000(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_346(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB382
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
	func_383(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_228(&(Var0.f_69), iParam7);
	}
	return func_347(&Var0);
}

int func_347(var uParam0)//Position - 0xB402
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_358(uParam0, uParam0->f_17);
	func_357(uParam0);
	if (func_61())
	{
		func_357(uParam0);
	}
	if (func_356(uParam0->f_1))
	{
		func_349();
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
				func_349();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_348(uParam0->f_69, 128))
			{
				if (func_233(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_228(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_348(var uParam0, int iParam1)//Position - 0xB5D4
{
	return (uParam0 && iParam1) != 0;
}

void func_349()//Position - 0xB5E3
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
	func_350();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_350()//Position - 0xB616
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_354(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_351(&(Global_2437549.f_3032.f_1));
}

void func_351(var uParam0)//Position - 0xB657
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_353(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_352(0);
}

void func_352(int iParam0)//Position - 0xB6FE
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_353(bool bParam0)//Position - 0xB712
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_354(var uParam0)//Position - 0xB73D
{
	func_355(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_355(var uParam0)//Position - 0xB767
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

int func_356(int iParam0)//Position - 0xB7E6
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_357(var uParam0)//Position - 0xB8F3
{
	if (func_235(uParam0->f_1))
	{
		uParam0->f_72 = func_194();
	}
}

void func_358(var uParam0, int iParam1)//Position - 0xB90E
{
	if (func_235(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_65() || !func_1000(iParam1, 0, 1))
	{
		return;
	}
	if (func_233(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_359(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_359(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB965
{
	int iVar0;
	int iVar1;
	
	if (func_273(iParam0) && !bParam4)
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
	if (((func_273(PLAYER::PLAYER_ID()) || (func_382() && func_381())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_380();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1000(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_378(iParam1, iParam0, 0);
							}
							else
							{
								return func_372(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_372(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_378(iParam1, iParam0, 0);
				}
				else
				{
					return func_360(0, -1, 0);
				}
			}
			else
			{
				return func_360(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_378(iParam1, iParam0, 0);
		}
		else
		{
			return func_372(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_372(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_360(bool bParam0, int iParam1, bool bParam2)//Position - 0xBB45
{
	return func_361(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_361(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xBB5B
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_371() || (func_370() && func_368())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_367(iParam2, iVar0);
		}
		else
		{
			return func_367(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_366(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_365(1);
				}
				else
				{
					return func_365(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_362(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_362(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_365(1);
	}
	return func_365(0);
}

int func_362(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xBC62
{
	int iVar0;
	
	iVar0 = func_364(iParam0, iParam1, iParam3);
	if (func_363(Global_4456448.f_154360, 1))
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

int func_363(int iParam0, bool bParam1)//Position - 0xBD7A
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

int func_364(int iParam0, int iParam1, int iParam2)//Position - 0xBDCB
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
			if (!func_366(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_365(bool bParam0)//Position - 0xBE12
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_366(int iParam0, int iParam1, int iParam2)//Position - 0xBE29
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

int func_367(int iParam0, int iParam1)//Position - 0xBFF4
{
	if (iParam0 == -1)
	{
		iParam0 = func_364(iParam1, iParam0, 4);
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

bool func_368()//Position - 0xC043
{
	if (func_369())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_369()//Position - 0xC065
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_370()//Position - 0xC07D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_371()//Position - 0xC0CA
{
	if (func_369() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC0E7
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
			if (func_375())
			{
				iVar3 = func_193(iParam0);
				if (!iVar3 == -1)
				{
					return func_191(iVar3);
				}
			}
			if ((func_374(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_366(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_365(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_373(1);
			}
			else
			{
				return func_361(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_365(1);
			}
			else
			{
				return func_361(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_193(iParam0);
	if (!iVar4 == -1)
	{
		return func_191(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_373(bool bParam0)//Position - 0xC28A
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_374(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC2A1
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

int func_375()//Position - 0xC319
{
	if (((func_172() || func_377()) || func_61()) || func_376())
	{
		return 1;
	}
	return 0;
}

bool func_376()//Position - 0xC34B
{
	return Global_2448961.f_19;
}

var func_377()//Position - 0xC359
{
	return Global_2448961.f_16;
}

int func_378(int iParam0, int iParam1, bool bParam2)//Position - 0xC367
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_375())
	{
		iVar2 = func_193(iParam1);
		if (!iVar2 == -1)
		{
			return func_191(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_65())
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
			iVar0 = func_361(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_379(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_366(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_373(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_379(int iParam0)//Position - 0xC4F4
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

var func_380()//Position - 0xC5C9
{
	return Global_2359302.f_2;
}

bool func_381()//Position - 0xC5D7
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_382()//Position - 0xC5E8
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

void func_383(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xC605
{
	uParam1->f_17 = func_65();
	uParam1->f_18 = func_65();
	uParam1->f_19 = func_65();
	uParam1->f_20 = func_65();
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

int func_384()//Position - 0xC681
{
	int iVar0;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_385(1, 1, 1, 0))
		{
			if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_143())
		{
			if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				MISC::CLEAR_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_300();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_984[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_385(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xC745
{
	if (func_429(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 25))
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
	if (!func_213(PLAYER::PLAYER_ID()))
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
	if (func_428(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_427())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (func_426())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_280(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID(), 0) || func_120(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_120(PLAYER::PLAYER_ID(), 12) || func_120(PLAYER::PLAYER_ID(), 14)) || func_120(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_419(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_394())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_393())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_392(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_391())
	{
		return 0;
	}
	if (func_390(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_389(PLAYER::PLAYER_ID()) && func_388(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_386(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_94(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_386(int iParam0)//Position - 0xC939
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_387()//Position - 0xC96D
{
	return Global_1676879.f_4090 != -1;
}

int func_388(int iParam0)//Position - 0xC97E
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_389(int iParam0)//Position - 0xC9AF
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_390(int iParam0)//Position - 0xC9E3
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

int func_391()//Position - 0xCA22
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0xCA3A
{
	if (!func_1000(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_393()//Position - 0xCA5D
{
	return Global_98721.f_346 > 0;
}

int func_394()//Position - 0xCA6E
{
	int iVar0;
	
	iVar0 = func_104(PLAYER::PLAYER_ID());
	if (((func_418(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_26) || func_417(PLAYER::PLAYER_ID())) || func_416(PLAYER::PLAYER_ID())) || func_411(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_409(PLAYER::PLAYER_ID()))
	{
		if (func_137(iVar0) || func_408(iVar0))
		{
			return 1;
		}
	}
	if (func_329(PLAYER::PLAYER_ID()))
	{
		if (func_408(iVar0))
		{
			return 1;
		}
	}
	if (func_407(PLAYER::PLAYER_ID()))
	{
		if (func_406(iVar0))
		{
			return 1;
		}
	}
	if (func_405(PLAYER::PLAYER_ID()))
	{
		if (func_404(iVar0))
		{
			return 1;
		}
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		if (func_402(iVar0))
		{
			return 1;
		}
	}
	if (func_401(PLAYER::PLAYER_ID()))
	{
		if (func_400(iVar0))
		{
			return 1;
		}
	}
	if (func_399(PLAYER::PLAYER_ID(), 0))
	{
		if (func_136(iVar0))
		{
			if (func_397(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_396(PLAYER::PLAYER_ID()))
	{
		if (func_395(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0)//Position - 0xCBC7
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_396(int iParam0)//Position - 0xCBE1
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)//Position - 0xCC28
{
	if (func_398(iParam0) != func_65())
	{
		return func_398(iParam0) == func_66(iParam0);
	}
	return 0;
}

int func_398(int iParam0)//Position - 0xCC4E
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_399(int iParam0, bool bParam1)//Position - 0xCC63
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
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_65())
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_400(int iParam0)//Position - 0xCCF1
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

int func_401(int iParam0)//Position - 0xCD1D
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)//Position - 0xCD64
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xCD7E
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_404(int iParam0)//Position - 0xCDC5
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

int func_405(int iParam0)//Position - 0xCDE5
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)//Position - 0xCE2B
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

int func_407(int iParam0)//Position - 0xCE51
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_408(int iParam0)//Position - 0xCE97
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

int func_409(int iParam0)//Position - 0xCEBD
{
	if (func_410(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0, int iParam1)//Position - 0xCEE0
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

int func_411(int iParam0)//Position - 0xCFBD
{
	if (func_412(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0, bool bParam1, bool bParam2)//Position - 0xCFE1
{
	if (bParam2)
	{
		return func_413(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_413(PLAYER::PLAYER_ID(), 0))
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

bool func_413(int iParam0, bool bParam1)//Position - 0xD0BC
{
	if (Global_1590284 != func_65())
	{
		if (!func_415(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_414(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_414(int iParam0)//Position - 0xD128
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_415(int iParam0)//Position - 0xD14E
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_416(int iParam0)//Position - 0xD17A
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0xD1C0
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_418(int iParam0)//Position - 0xD206
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

int func_419(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0xD235
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
		if (func_417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_329(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_407(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_405(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_403(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_425(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_424(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_399(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_422(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_421(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_420(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0xD394
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_421(int iParam0)//Position - 0xD3DB
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_422(int iParam0)//Position - 0xD422
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_423(int iParam0)//Position - 0xD469
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_424(int iParam0)//Position - 0xD4B0
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_425(int iParam0)//Position - 0xD4F7
{
	if (iParam0 != func_65())
	{
		if (func_1000(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_65())
			{
				return func_330(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_426()//Position - 0xD557
{
	return Global_1312873;
}

bool func_427()//Position - 0xD563
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

int func_428(int iParam0)//Position - 0xD57F
{
	if (func_279(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_429(int iParam0, int iParam1)//Position - 0xD5A4
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

char* func_430()//Position - 0xD5BF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (iVar0 != func_65())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_108(iVar0, 28) || func_108(PLAYER::PLAYER_ID(), 28)) || func_435(iVar0)) && !func_434(iVar0))
			{
				return func_432(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_432(iVar0, 0);
			}
		}
		iVar1 = func_431(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			return func_432(iVar0, 0);
		}
		else
		{
			return iVar1;
		}
	}
	return "";
}

var func_431(var uParam0)//Position - 0xD66F
{
	return uParam0;
}

char* func_432(int iParam0, bool bParam1)//Position - 0xD679
{
	if (!bParam1)
	{
		if (func_176(iParam0, 1))
		{
			return func_433();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_433()//Position - 0xD6A0
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_434(int iParam0)//Position - 0xD6B0
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
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

int func_435(int iParam0)//Position - 0xD6E0
{
	struct<13> Var0;
	
	if (iParam0 != func_65())
	{
		Var0 = { func_67(iParam0) };
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

int func_436()//Position - 0xD739
{
	return ((4 - Local_112.f_115) * Global_262145.f_15506);
}

int func_437()//Position - 0xD74F
{
	return ((4 - Local_112.f_115) * Global_262145.f_15505);
}

void func_438(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xD765
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
	
	func_624(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_623(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_622(iParam0, bParam3));
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
	if (func_620(iParam0))
	{
		if (bParam1)
		{
			if (func_619(PLAYER::PLAYER_ID()) > 0)
			{
				func_618();
			}
			else
			{
				func_617();
			}
		}
		else
		{
			func_616();
		}
	}
	func_600(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_598(iParam0, uParam2, &iVar0, &iVar5);
	func_576(iParam0, uParam2, &iVar0, &iVar5);
	func_562(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_545(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_252();
	if (iVar8 != func_65() && iParam0 != 148)
	{
		if (func_189(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_76(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_534(&iVar0, 1);
			}
		}
	}
	func_530(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_529();
		func_485(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_459(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_458(iParam0, iVar0);
		if (func_457(iParam0))
		{
			if (func_456(iParam0) > -1)
			{
				func_455(func_456(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_454(&Global_2459463, 0, 0);
	}
	if (func_123(PLAYER::PLAYER_ID()) || func_149(PLAYER::PLAYER_ID()))
	{
		func_445(iParam0);
	}
	if (func_318(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_323(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_406(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_404(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_402(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_322(iParam0))
	{
		if (func_444(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_440(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_439(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_395(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_439(int iParam0)//Position - 0xDB42
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)//Position - 0xDB5C
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_441(func_442(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_441(int iParam0)//Position - 0xDBE5
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

int func_442(int iParam0)//Position - 0xDC1D
{
	if (func_104(iParam0) == 237 || func_104(iParam0) == 250)
	{
		return func_443(iParam0);
	}
	return -1;
}

int func_443(int iParam0)//Position - 0xDC4A
{
	if (func_105(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_444(int iParam0)//Position - 0xDC6D
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_445(int iParam0)//Position - 0xDC81
{
	if (func_453(PLAYER::PLAYER_ID()) && func_452())
	{
		if (func_137(iParam0))
		{
			func_447(9639, -1);
		}
		else if (func_138(iParam0))
		{
			func_447(9641, -1);
		}
		else if (func_220(iParam0, 1))
		{
			func_447(9642, -1);
		}
		else if (func_446(iParam0))
		{
			func_447(9643, -1);
		}
	}
}

int func_446(int iParam0)//Position - 0xDCEB
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

void func_447(int iParam0, int iParam1)//Position - 0xDD17
{
	int iVar0;
	
	iVar0 = func_451(iParam0, func_148(iParam1), 0);
	iVar0++;
	if (!func_450(iParam0))
	{
		func_449(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_448(iParam0, iVar0, iParam1, 1);
	}
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDD58
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_148(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_148(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_148(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_148(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_148(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_148(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_148(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_148(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_148(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_148(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_148(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_148(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_148(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_148(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_148(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_148(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_148(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_148(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_148(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_148(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_148(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_148(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_148(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_148(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_148(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_148(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_148(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_148(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_148(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_148(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_148(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_148(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_148(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_148(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_148(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE6DB
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_450(int iParam0)//Position - 0xE70B
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

int func_451(int iParam0, int iParam1, int iParam2)//Position - 0xE96F
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_148(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_452()//Position - 0xE9A1
{
	return func_251(PLAYER::PLAYER_ID());
}

bool func_453(int iParam0)//Position - 0xE9B1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_454(var uParam0, bool bParam1, bool bParam2)//Position - 0xE9D7
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

void func_455(int iParam0, int iParam1)//Position - 0xEA14
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

int func_456(int iParam0)//Position - 0xEA86
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

int func_457(int iParam0)//Position - 0xEB67
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

void func_458(int iParam0, int iParam1)//Position - 0xEBCF
{
	if (func_453(PLAYER::PLAYER_ID()) && func_452())
	{
		if (func_137(iParam0) && iParam1 > 0)
		{
			func_449(9640, (func_451(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xEC13
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_484();
	if (iVar5 != func_65())
	{
		func_483(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_482(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_481())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_452())
			{
				if (!func_481())
				{
					Var7 = { func_480() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_479(Var7)), func_478(Var7), iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_465())
			{
				if (!func_481())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_479(func_464(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_465())
			{
				if (!func_481())
				{
					iVar2 = func_460(uParam5->f_16, iParam4);
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
			else if (func_481())
			{
				func_466(463142405, iParam1, &iVar4, 0, 1, 0);
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
			if (func_481())
			{
				func_466(1407278493, iParam1, &iVar4, 0, 1, 0);
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
			if (func_465())
			{
				if (!func_481())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_481())
			{
				func_466(-961034881, iParam1, &iVar4, 0, 1, 0);
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
			if (func_481())
			{
				func_466(1135468152, iParam1, &iVar4, 0, 1, 0);
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
			if (func_481())
			{
				func_466(-634726636, iParam1, &iVar4, 0, 1, 0);
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
			if (func_481())
			{
				func_466(1698417709, iParam1, &iVar4, 0, 1, 0);
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
				if (func_481())
				{
					func_466(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_481())
			{
				func_466(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_481())
			{
				func_466(-856006867, iParam1, &iVar4, 0, 1, 0);
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

int func_460(int iParam0, int iParam1)//Position - 0xF0B9
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_463(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_461(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_461(int iParam0, int iParam1)//Position - 0xF0E2
{
	return (func_462(iParam0) * iParam1);
}

int func_462(int iParam0)//Position - 0xF0F3
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

float func_463(int iParam0, int iParam1)//Position - 0xF193
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

int func_464(int iParam0)//Position - 0xF2AB
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_465()//Position - 0xF2D1
{
	return func_122(PLAYER::PLAYER_ID());
}

void func_466(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xF2E1
{
	int iVar0;
	
	if (!func_481())
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
				func_467(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_467(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_467(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_467(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_467(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xF94E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_481())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_474(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_473(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_468(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_468(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xFAF9
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_469(iParam0);
	}
}

void func_469(int iParam0)//Position - 0xFB31
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_481())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_472(iParam0))
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
		func_470(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_470(var uParam0)//Position - 0xFB85
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
	func_471(&(uParam0->f_13));
	func_471(&(uParam0->f_13.f_13));
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

void func_471(var uParam0)//Position - 0xFC88
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

int func_472(int iParam0)//Position - 0xFCD0
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_473(int iParam0, int iParam1)//Position - 0xFCFA
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_474(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xFD0E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_481())
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
				func_475(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_475(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0xFE4A
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
	iVar35 = func_477(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_476();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_476()//Position - 0xFEDC
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_477(int iParam0)//Position - 0xFEEC
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_478(int iParam0)//Position - 0xFF04
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

char* func_479(int iParam0)//Position - 0x1004B
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

struct<2> func_480()//Position - 0x1022D
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_193;
}

int func_481()//Position - 0x10246
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_482(bool bParam0)//Position - 0x1025D
{
	return func_189(PLAYER::PLAYER_ID(), bParam0);
}

void func_483(int iParam0, var uParam1, var uParam2)//Position - 0x1026F
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_484()//Position - 0x1029D
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

int func_485(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x102B2
{
	return func_486(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_486(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x102D4
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_496(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_492(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_487(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_487(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1034D
{
	vector3 vVar0;
	
	vVar0 = { func_490(iParam0, 1) };
	if (iParam0 == func_489(PLAYER::PLAYER_PED_ID()))
	{
		func_488(1);
	}
	func_492(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_488(int iParam0)//Position - 0x10381
{
	Global_2437549.f_1890 = iParam0;
}

int func_489(int iParam0)//Position - 0x10392
{
	return iParam0;
}

Vector3 func_490(int iParam0, bool bParam1)//Position - 0x1039C
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
	if (iParam0 == func_491(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_491(int iParam0)//Position - 0x10460
{
	return iParam0;
}

void func_492(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x1046A
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_495(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_494();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_493();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_493()//Position - 0x10581
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_494()//Position - 0x105AB
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_495(vector3 vParam0, var uParam3, var uParam4)//Position - 0x105C6
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

var func_496(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1065F
{
	var uVar0;
	
	uVar0 = func_497(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_497(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x10682
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_528(PLAYER::PLAYER_ID()) || func_527(PLAYER::PLAYER_ID()))
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
		else if (func_239() || func_526(PLAYER::PLAYER_ID()))
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
		else if (func_376())
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
	if (func_525(sParam2))
	{
	}
	if (func_524())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_522(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_521(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_519(0, &iVar1);
					break;
				
				case 3:
					func_519(1, &iVar1);
					break;
				
				case 1:
					func_517(&iVar1);
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
			func_516(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_507((func_514(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_516(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_502(iVar1);
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
				func_498((func_500(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_498((func_500(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_498(int iParam0)//Position - 0x108AF
{
	if (func_524())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_499(joaat("mpply_globalxp"), iParam0);
	}
}

void func_499(int iParam0, int iParam1)//Position - 0x108DA
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_500(int iParam0)//Position - 0x108F6
{
	if (iParam0 > -1)
	{
		if (func_1000(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_501(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_501(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_501(int iParam0)//Position - 0x10947
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

void func_502(int iParam0)//Position - 0x10965
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_67(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_505(func_506(&Var0));
			if (iVar13 == 0)
			{
				func_504(&Global_1384134, iParam0);
				func_503(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_504(&Global_1384135, iParam0);
				func_503(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_504(&Global_1384136, iParam0);
				func_503(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_504(&Global_1384137, iParam0);
				func_503(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_504(&Global_1384138, iParam0);
				func_503(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_503(int iParam0, int iParam1)//Position - 0x10A39
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

void func_504(var uParam0, int iParam1)//Position - 0x10B5E
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_505(int iParam0)//Position - 0x10B6F
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

int func_506(var uParam0)//Position - 0x10BCC
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

void func_507(int iParam0, int iParam1, int iParam2)//Position - 0x10BEF
{
	if (func_524())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_148(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_148(-1)])
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
		if (func_513(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_511(iParam0, 1);
		}
		func_448(639, iParam0, -1, 1);
		func_449(640, func_511(iParam0, 1), -1, 1, 0);
		Global_1384279[func_148(-1)] = iParam0;
		func_508(-1109644434, 7, 0);
	}
}

void func_508(int iParam0, int iParam1, int iParam2)//Position - 0x10D15
{
	int iVar0;
	
	if (func_510(iParam1, iParam2))
	{
		iVar0 = func_509();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_509()//Position - 0x10D42
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

int func_510(int iParam0, var uParam1)//Position - 0x10D77
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

int func_511(int iParam0, bool bParam1)//Position - 0x10DFD
{
	if (bParam1)
	{
	}
	return func_512(iParam0, 0);
}

int func_512(int iParam0, int iParam1)//Position - 0x10E11
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

int func_513(int iParam0)//Position - 0x10ED0
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

int func_514(int iParam0, bool bParam1)//Position - 0x10EF5
{
	if (bParam1)
	{
	}
	return func_515(iParam0);
}

int func_515(int iParam0)//Position - 0x10F08
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_148(-1)];
			}
			else if (func_513(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_148(-1)];
	}
	return 0;
}

void func_516(int iParam0, int iParam1, int iParam2)//Position - 0x10F65
{
	int iVar0;
	
	iVar0 = func_451(iParam0, func_148(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_450(iParam0))
	{
		func_449(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_448(iParam0, iVar0, iParam2, 1);
	}
}

void func_517(int iParam0)//Position - 0x10FA7
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_366(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_68(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_518(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_518(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_518(int iParam0, int iParam1)//Position - 0x11092
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_519(bool bParam0, int iParam1)//Position - 0x110B3
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
				if (func_1000(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_1000(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_520(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_68(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_518(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_518(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_520(int iParam0, int iParam1)//Position - 0x111CB
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_521(int iParam0)//Position - 0x111E7
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_518(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_522(int iParam0)//Position - 0x1121E
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_514(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_514(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_523(8000, 0, 0) > 0)
	{
		if (func_523(8000, 0, 0) < (iParam0 + func_514(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_523(8000, 0, 0) - func_514(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_523(int iParam0, bool bParam1, int iParam2)//Position - 0x11286
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

int func_524()//Position - 0x112AE
{
	return 1;
}

int func_525(char* sParam0)//Position - 0x112B7
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

int func_526(int iParam0)//Position - 0x112EF
{
	return func_402(func_104(iParam0));
}

bool func_527(int iParam0)//Position - 0x11301
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_528(int iParam0)//Position - 0x11316
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_529()//Position - 0x1132B
{
	Global_2460540 = 1;
}

void func_530(int iParam0, var uParam1, var uParam2)//Position - 0x11338
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_81(7))
	{
		return;
	}
	iVar0 = func_533(iParam0);
	iVar1 = func_532(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2531497.f_4898.f_263, NETWORK::GET_NETWORK_TIME()));
	if (func_531(iParam0) != -1)
	{
		if (iVar2 > func_531(iParam0))
		{
			iVar2 = func_531(iParam0);
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

int func_531(int iParam0)//Position - 0x113E2
{
	if (func_220(iParam0, 0) || func_138(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_137(iParam0))
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

int func_532(int iParam0)//Position - 0x114F5
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
			if (!func_465())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_465())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_465())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_465())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_465())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_465())
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
			if (!func_465())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_465())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_465())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_465())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_465())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_533(int iParam0)//Position - 0x119C0
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
			if (func_249(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_249(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_249(0))
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
			if (func_249(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_249(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_249(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_249(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_249(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_249(0))
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
			if (func_249(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_249(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_249(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_249(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_534(int iParam0, int iParam1)//Position - 0x11E8E
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_465())
		{
			if (func_482(0))
			{
				if (!func_249(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_484()))
					{
						if (func_544() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_544());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_542(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_539("GB_BCUT_TICK1", func_484(), iVar0, 0, 0, 1, 1);
						}
						func_538(20);
						func_535(func_484(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_535(int iParam0, int iParam1, int iParam2)//Position - 0x11F2F
{
	struct<8> Var0;
	
	if (func_1000(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_537(iParam0);
		func_536(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_477(iParam0));
	}
}

void func_536(var uParam0, var uParam1)//Position - 0x11F85
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_537(int iParam0)//Position - 0x11F9F
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_538(int iParam0)//Position - 0x11FB3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_539(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x11FDC
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_359(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_540(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_304(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_540(char* sParam0)//Position - 0x12074
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_541(&cVar0);
}

var func_541(char[4] cParam0)//Position - 0x12098
{
	return cParam0;
}

void func_542(int iParam0, bool bParam1)//Position - 0x120A2
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_543(1);
	}
	else
	{
		iVar1 = func_543(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_543(bool bParam0)//Position - 0x120D4
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_544()//Position - 0x120FA
{
	return Global_262145.f_12389;
}

void func_545(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x12109
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
	
	bVar18 = func_249(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_465())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_484();
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
				iVar2 = func_561(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
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
			iVar10 = func_560(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_559("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_558(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_556(*uParam3);
				}
				iVar6 = func_555(&uVar5);
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
						func_538(140);
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
								if (func_554(iVar23))
								{
									func_546(iVar23, 1, 198210293);
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
					func_538(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_546(int iParam0, int iParam1, int iParam2)//Position - 0x12370
{
	var uVar0;
	
	uVar0 = func_548(iParam0);
	func_547(iParam0, uVar0, iParam1, iParam2);
}

void func_547(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1238C
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_537(iParam0);
	func_536(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_65())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_477(iParam0));
		}
	}
}

int func_548(int iParam0)//Position - 0x123F2
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_553();
	iVar0 = func_551(iParam0, iVar0);
	iVar1 = Global_1628955[func_484() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_550())
	{
		iVar0 = func_550();
	}
	if (iVar0 > func_549())
	{
		iVar0 = func_549();
	}
	return iVar0;
}

int func_549()//Position - 0x1244B
{
	return Global_262145.f_14944;
}

int func_550()//Position - 0x1245A
{
	return Global_262145.f_16119;
}

int func_551(int iParam0, int iParam1)//Position - 0x12469
{
	int iVar0;
	
	iVar0 = (func_619(iParam0) * func_552());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_552()//Position - 0x12487
{
	return Global_262145.f_16118;
}

var func_553()//Position - 0x12496
{
	return Global_262145.f_12381;
}

int func_554(int iParam0)//Position - 0x124A5
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_76(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_108(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_555(var uParam0)//Position - 0x124DE
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
			if (!func_17(iVar2, 0) && !func_76(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_556(int iParam0)//Position - 0x1254A
{
	func_557(iParam0, 7236);
}

void func_557(int iParam0, int iParam1)//Position - 0x1255B
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_451(iParam1, -1, 0);
	func_449(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_558(int iParam0)//Position - 0x12584
{
	func_557(iParam0, 7231);
}

int func_559(char* sParam0, int iParam1, int iParam2)//Position - 0x12595
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_304(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_560(int iParam0)//Position - 0x125C9
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

int func_561(struct<5> Param0, int iParam5)//Position - 0x125FD
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

void func_562(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x12667
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
	bVar16 = func_249(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_465())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_484();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_574(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_565(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_461(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_460(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_564(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_559("SMTICK_RONCUT", func_564(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_564(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_563(iVar2, iVar9);
				iVar6 = func_555(&uVar5);
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
						func_538(44);
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
								if (func_554(iVar20))
								{
									func_546(iVar20, 1, 1160415507);
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
					func_538(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_563(int iParam0, int iParam1)//Position - 0x128AD
{
	if (iParam0 > 0)
	{
		func_557(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_557(iParam1, 6117);
	}
}

int func_564(int iParam0)//Position - 0x128D3
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

int func_565(int iParam0)//Position - 0x12913
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_572())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_574(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_567(func_568(func_571(iVar0), -1, -1));
		if (func_566(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_566(int iParam0)//Position - 0x12971
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

int func_567(int iParam0)//Position - 0x12A21
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

int func_568(int iParam0, int iParam1, int iParam2)//Position - 0x12B11
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_570(iParam0, iParam1);
	iVar2 = func_569(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_569(int iParam0)//Position - 0x12B57
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

int func_570(int iParam0, int iParam1)//Position - 0x12F58
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_571(int iParam0)//Position - 0x13306
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

bool func_572()//Position - 0x13570
{
	return func_573() != 0;
}

int func_573()//Position - 0x1357E
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_260;
}

int func_574(int iParam0)//Position - 0x13597
{
	if (iParam0 != func_65() && func_575(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_575(int iParam0)//Position - 0x135C9
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_576(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x135EF
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
	
	bVar17 = func_249(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_465())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_484();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_464(iVar15);
			iVar0 = (func_597(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_593(iVar15, iVar16, iVar1);
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
				func_590(iVar16, iVar2);
				if (func_586(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_577(5);
				}
				iVar6 = func_555(&uVar5);
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
						func_538(108);
					}
					else
					{
						func_538(110);
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
								if (func_554(iVar20))
								{
									func_546(iVar20, 1, -1905128202);
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
					func_538(112);
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

void func_577(int iParam0)//Position - 0x1382A
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_579(Global_262145.f_20560))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_579(Global_262145.f_20562))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_579(Global_262145.f_20564))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_579(Global_262145.f_20566))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_579(Global_262145.f_20568))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_579(Global_262145.f_20570))
				{
					func_559("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_579(Global_262145.f_20573))
				{
					func_559("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_579(Global_262145.f_20576))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_579(Global_262145.f_20578))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_579(Global_262145.f_20580))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_579(Global_262145.f_20582))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_579(Global_262145.f_20584))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_579(Global_262145.f_20586))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_579(Global_262145.f_20588))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_579(Global_262145.f_20590))
				{
					func_578("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_578(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x13B27
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
		Global_2507671 = { func_67(PLAYER::PLAYER_ID()) };
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
	func_304(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_579(int iParam0)//Position - 0x13C1B
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_583(15417, -1, -1))
			{
				func_582(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_583(15418, -1, -1))
			{
				func_582(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_583(15425, -1, -1))
			{
				func_582(15425, 1, -1, 1);
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
			if (!func_583(15405, -1, -1))
			{
				func_582(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_583(15393, -1, -1))
			{
				func_582(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_583(15409, -1, -1))
			{
				func_582(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_583(15396, -1, -1))
			{
				func_582(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_583(15412, -1, -1))
			{
				func_582(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_583(15403, -1, -1))
			{
				func_582(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_583(15389, -1, -1))
			{
				func_582(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_583(15398, -1, -1))
			{
				func_582(15398, 1, -1, 1);
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
			if (!func_583(15400, -1, -1))
			{
				func_582(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_583(15408, -1, -1))
			{
				func_582(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_583(15411, -1, -1))
			{
				func_582(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_583(15397, -1, -1))
			{
				func_582(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_583(15413, -1, -1))
			{
				func_582(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_583(15391, -1, -1))
			{
				func_582(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_583(15388, -1, -1))
			{
				func_582(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_583(15401, -1, -1))
			{
				func_582(15401, 1, -1, 1);
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
			if (!func_583(15394, -1, -1))
			{
				func_582(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_583(15406, -1, -1))
			{
				func_582(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_583(15395, -1, -1))
			{
				func_582(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_583(15410, -1, -1))
			{
				func_582(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_583(15407, -1, -1))
			{
				func_582(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_583(15414, -1, -1))
			{
				func_582(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_583(15415, -1, -1))
			{
				func_582(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_583(15399, -1, -1))
			{
				func_582(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_583(15404, -1, -1))
			{
				func_582(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_583(15392, -1, -1))
			{
				func_582(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_583(15390, -1, -1))
			{
				func_582(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_583(15402, -1, -1))
			{
				func_582(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_583(15416, -1, -1))
			{
				func_582(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_147(209, -1))
			{
				func_580(209, 1, -1, 1);
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
			if (!func_583(15426, -1, -1))
			{
				func_582(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_583(15422, -1, -1))
			{
				func_582(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_583(15423, -1, -1))
			{
				func_582(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_583(15421, -1, -1))
			{
				func_582(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_583(15427, -1, -1))
			{
				func_582(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_583(15419, -1, -1))
			{
				func_582(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_583(15420, -1, -1))
			{
				func_582(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_580(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1486A
{
	int iVar0;
	
	if (func_581())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_148(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_581()//Position - 0x1489C
{
	return 1;
	return 0;
}

int func_582(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x148A9
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
		iParam2 = func_19();
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

int func_583(int iParam0, int iParam1, int iParam2)//Position - 0x14EFB
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_585(iParam0, iParam1);
	uVar2 = func_584(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_584(int iParam0)//Position - 0x14F38
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

int func_585(int iParam0, int iParam1)//Position - 0x152D4
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_586(int iParam0)//Position - 0x1564D
{
	int iVar0;
	
	iVar0 = func_588(iParam0);
	return func_451(func_587(iVar0), -1, 0);
}

int func_587(int iParam0)//Position - 0x15669
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

int func_588(int iParam0)//Position - 0x156C3
{
	int iVar0;
	
	if (func_589(iParam0))
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

int func_589(int iParam0)//Position - 0x15705
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_590(int iParam0, int iParam1)//Position - 0x15724
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_588(iParam0);
	iVar1 = func_587(iVar0);
	iVar2 = (func_451(iVar1, -1, 0) + iParam1);
	func_449(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_568(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_587(iVar0);
				iVar3 = (iVar3 + func_451(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_592(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_591(9357, iVar5, -1, 1);
	}
}

var func_591(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x157D9
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_592(int iParam0)//Position - 0x15D9B
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

int func_593(int iParam0, int iParam1, int iParam2)//Position - 0x15DDB
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_478(iParam1);
	if (func_589(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_594(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_594(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_594(int iParam0, int iParam1, int iParam2)//Position - 0x15FB3
{
	int iVar0;
	
	if (func_596(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_595(int iParam0, int iParam1)//Position - 0x15FEE
{
	int iVar0;
	
	if (func_589(iParam1) && iParam0 != func_65())
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

int func_596(int iParam0, int iParam1)//Position - 0x1603A
{
	int iVar0;
	
	if (func_589(iParam1) && iParam0 != func_65())
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

int func_597(int iParam0, int iParam1)//Position - 0x16085
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
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

void func_598(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x160E4
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
			if (func_452())
			{
				Var0 = { func_480() };
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
				iVar7 = func_593(PLAYER::PLAYER_ID(), Var0, *uParam3);
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
				iVar11 = func_555(&uVar10);
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
					func_538(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_249(0))
			{
				Var15 = { func_599(func_484()) };
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
				iVar22 = func_593(func_484(), Var15, *uParam3);
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

struct<2> func_599(int iParam0)//Position - 0x16387
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_600(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x1639E
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
		if (func_122(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_615();
			}
			func_614();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_122(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_606(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_605(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_555(&uVar2);
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
						func_538(44);
					}
				}
				func_603(*iParam3);
				func_602();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_554(iVar9))
						{
							func_546(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_122(PLAYER::PLAYER_ID()))
		{
			func_601();
		}
	}
}

void func_601()//Position - 0x1650A
{
	int iVar0;
	
	iVar0 = Global_2578770[func_19()];
	iVar0++;
	func_448(3667, iVar0, -1, 1);
}

void func_602()//Position - 0x1652F
{
	int iVar0;
	
	iVar0 = Global_2578776[func_19()];
	iVar0++;
	func_448(3666, iVar0, -1, 1);
}

void func_603(int iParam0)//Position - 0x16554
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_448(3668, iVar0, -1, 1);
	if (func_568(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_604(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_591(7666, iVar2, -1, 1);
	}
}

int func_604(int iParam0)//Position - 0x165B6
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

var func_605(int iParam0)//Position - 0x1678E
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

int func_606(int iParam0)//Position - 0x1698E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_613(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_612(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_611(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_607(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_607(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_611(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_607(int iParam0)//Position - 0x16A0A
{
	int iVar0;
	
	if (func_610(iParam0))
	{
		iVar0 = func_608(func_609(iParam0));
		return func_451(iVar0, -1, 0);
	}
	return 0;
}

int func_608(int iParam0)//Position - 0x16A33
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

int func_609(int iParam0)//Position - 0x16A86
{
	int iVar0;
	
	if (func_610(iParam0))
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

int func_610(int iParam0)//Position - 0x16AC8
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_611(int iParam0)//Position - 0x16AE7
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

int func_612(int iParam0, int iParam1)//Position - 0x16B5F
{
	int iVar0;
	
	if (func_610(iParam0))
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

int func_613(int iParam0)//Position - 0x16BA5
{
	int iVar0;
	
	if (func_610(iParam0))
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

void func_614()//Position - 0x16BE6
{
	int iVar0;
	
	iVar0 = Global_2578767[func_19()];
	iVar0++;
	Global_2578767[func_19()] = iVar0;
	func_448(3665, iVar0, -1, 1);
}

void func_615()//Position - 0x16C17
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_19()];
	iVar1 = Global_2578773[func_19()];
	iVar0++;
	iVar1++;
	Global_2578764[func_19()] = iVar0;
	Global_2578773[func_19()] = iVar1;
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_448(3663, iVar0, -1, 1);
	func_448(3664, iVar1, -1, 1);
}

void func_616()//Position - 0x16C83
{
	if (func_465())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_617()//Position - 0x16CB5
{
	if (func_465())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_618()//Position - 0x16CFF
{
	if (func_465())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_619(int iParam0)//Position - 0x16D48
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_620(int iParam0)//Position - 0x16D5D
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
			if (func_482(1) && !func_249(1))
			{
				if (func_621(func_484()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_621(int iParam0)//Position - 0x16DD8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_622(int iParam0, bool bParam1)//Position - 0x16DFE
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

int func_623(int iParam0, bool bParam1, bool bParam2)//Position - 0x171C2
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
			if (func_465())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_465())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_452())
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
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_452())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_465() && !func_452())
			{
				if (func_621(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_452())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_624(int iParam0, var uParam1, var uParam2)//Position - 0x17958
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_625(iParam0))
	{
		if (!func_465())
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
	if (func_189(PLAYER::PLAYER_ID(), 1))
	{
		if (func_318(iParam0))
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
	else if (func_318(iParam0))
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
	iVar0 = func_252();
	if (iVar0 != func_65())
	{
		if (func_76(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_625(int iParam0)//Position - 0x17BBB
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

int func_626()//Position - 0x17BFF
{
	return (Local_112.f_115 * Global_262145.f_15014);
}

int func_627()//Position - 0x17C13
{
	return (Local_112.f_115 * Global_262145.f_15013);
}

void func_628(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x17C27
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
		iVar0 = func_181(PLAYER::PLAYER_ID());
		Global_1675140.f_4 = func_737();
		Global_1675140.f_5 = func_736();
		if (func_128(PLAYER::PLAYER_ID()) || func_129(PLAYER::PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_732(bParam9);
		Global_1675140.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_9 = func_731(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_730();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_731(func_249(1));
		}
		Global_1675140.f_24 = func_729(PLAYER::PLAYER_ID());
		Global_1675140.f_28 = func_728(PLAYER::PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_726(iVar0);
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (func_318(iVar0))
	{
		Global_1674879.f_2 = func_737();
		Global_1674879.f_3 = func_736();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_722(iVar0, bParam0, func_725(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
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
			Global_1674879.f_45 = func_721(func_484(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_720(func_484(), iParam2);
		}
		func_718(iVar0);
	}
	else if (func_323(iVar0))
	{
		Global_1674933.f_2 = func_737();
		Global_1674933.f_3 = func_736();
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
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_716(iVar0);
	}
	else if (func_406(iVar0))
	{
		Global_1674996.f_2 = func_737();
		Global_1674996.f_3 = func_736();
		Global_1674996.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_730();
		Global_1674996.f_42 = func_714(func_19(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_464(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_731((func_713(iVar1) || func_712(iVar1)));
		Global_1674996.f_30 = func_731(func_711(iVar1));
		Global_1674996.f_32 = func_731(func_710(iVar1));
		Global_1674996.f_33 = func_731(func_709(iVar1));
		Global_1674996.f_34 = func_731(func_708(iVar1));
		Global_1674996.f_35 = func_731(func_707(0, iVar1) == 1);
		Global_1674996.f_36 = func_731(func_706(iVar1));
		Global_1674996.f_37 = func_731(func_705(iVar1));
		Global_1674996.f_38 = func_731(func_704(iVar1));
		Global_1674996.f_39 = func_731(func_594(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_731(func_594(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_731(func_594(iVar1, iVar2, 1));
		if (func_703(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_702(iVar1))
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
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_700(iVar0);
	}
	else if (func_404(iVar0))
	{
		Global_1675040.f_2 = func_737();
		Global_1675040.f_3 = func_736();
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675040.f_10 = func_731(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_699(func_252());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_698();
		Global_1675040.f_29 = func_451(6107, -1, 0);
		Global_1675040.f_30 = func_451(6103, -1, 0);
		Global_1675040.f_31 = func_451(6104, -1, 0);
		Global_1675040.f_32 = func_451(6106, -1, 0);
		Global_1675040.f_33 = func_451(6105, -1, 0);
		Global_1675040.f_34 = func_451(6108, -1, 0);
		Global_1675040.f_36 = func_731(func_249(1));
		Global_1675040.f_37 = func_696();
		func_682();
		func_680(iVar0);
	}
	else if (func_402(iVar0))
	{
		Global_1675094.f_2 = func_737();
		Global_1675094.f_3 = func_736();
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675094.f_10 = func_731(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_451(6157, -1, 0);
		Global_1675094.f_25 = func_451(6162, -1, 0);
		Global_1675094.f_26 = func_451(6163, -1, 0);
		Global_1675094.f_27 = func_731((((func_679() || func_678()) || func_677()) || func_676(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_451(6164, -1, 0);
		Global_1675094.f_29 = func_731(func_675());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_737();
		Global_1675094.f_42 = func_731(func_249(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_673(iVar0);
	}
	else if (func_440(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_737();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_736();
		}
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_732(0);
		Global_1675228.f_7 = func_730();
		Global_1675228.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_10 = func_731(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_484() != -1)
		{
			Global_1675228.f_17 = func_672(func_484());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_728(PLAYER::PLAYER_ID());
		Global_1675228.f_29 = func_731(func_671(PLAYER::PLAYER_ID()));
		Global_1675228.f_30 = func_731(func_670(PLAYER::PLAYER_ID()));
		Global_1675228.f_31 = func_669(PLAYER::PLAYER_ID());
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_731(func_249(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_667(iVar0);
	}
	else if (func_444(iVar0))
	{
		Global_1675175.f_2 = func_737();
		Global_1675175.f_3 = func_736();
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_732(0);
		Global_1675175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_10 = func_731(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_728(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_666(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_650(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_669(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_731(func_649(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_731(func_648(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_731(func_647(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_731(func_646(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_645(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_644(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_643(PLAYER::PLAYER_ID());
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_731(func_249(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_641(iVar0);
	}
	else if (func_439(iVar0))
	{
		Global_1675312.f_2 = func_737();
		Global_1675312.f_3 = func_736();
		Global_1675312.f_4 = func_640(func_484());
		Global_1675312.f_5 = func_639(func_484());
		if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_730();
		Global_1675312.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675312.f_10 = func_731(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_252() != -1)
		{
			Global_1675312.f_17 = func_672(func_252());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_638(PLAYER::PLAYER_ID());
		Global_1675312.f_27 = func_731(func_637(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_634(21, -1);
		Global_1675312.f_29 = func_731(func_633(PLAYER::PLAYER_ID()));
		func_631(iVar0);
	}
	else if (func_395(iVar0))
	{
		Global_1675387.f_6 = func_640(func_484());
		Global_1675387.f_7 = func_639(func_484());
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_731(func_249(1));
		}
		Global_1675387.f_10 = func_730();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_629(iVar0);
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
			if ((func_123(PLAYER::PLAYER_ID()) || func_141(PLAYER::PLAYER_ID())) || func_149(PLAYER::PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_629(int iParam0)//Position - 0x18819
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_630();
}

void func_630()//Position - 0x18833
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_631(int iParam0)//Position - 0x1885C
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1675312);
	func_632();
}

void func_632()//Position - 0x18876
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_633(int iParam0)//Position - 0x1888A
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_634(int iParam0, int iParam1)//Position - 0x188B5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_636(iParam0);
		if (iVar1 == 0 && func_451(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_635(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_728(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_635(int iParam0)//Position - 0x18990
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_451(7207, iParam0, 0) != 0;
}

int func_636(int iParam0)//Position - 0x189B3
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_637(int iParam0)//Position - 0x189D9
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_638(int iParam0)//Position - 0x189FF
{
	if (func_104(iParam0) == 243)
	{
		return func_443(iParam0);
	}
	return -1;
}

int func_639(int iParam0)//Position - 0x18A1C
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_640(int iParam0)//Position - 0x18A41
{
	if (iParam0 == func_65())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_641(int iParam0)//Position - 0x18A66
{
	STATS::_0x2D7A9B577E72385E(&Global_1675175);
	func_642();
}

void func_642()//Position - 0x18A7A
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

int func_643(int iParam0)//Position - 0x18BA3
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_644(int iParam0)//Position - 0x18BCD
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_645(int iParam0)//Position - 0x18BF7
{
	if (iParam0 != func_65())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_646(int iParam0)//Position - 0x18C21
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_647(int iParam0)//Position - 0x18C4C
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_648(int iParam0)//Position - 0x18C77
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_649(int iParam0)//Position - 0x18CA2
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

int func_650(int iParam0, int iParam1, int iParam2)//Position - 0x18CCD
{
	if (iParam0 == func_65() || !func_665(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_660(iParam0, iParam2);
		
		case 1:
			return func_658(iParam0, iParam2);
		
		case 3:
			return func_657(iParam0);
		
		case 2:
			return func_652(iParam0, iParam2);
		
		case 4:
			return func_651(iParam0);
		
		default:
	}
	return 0;
}

bool func_651(int iParam0)//Position - 0x18D49
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_652(int iParam0, int iParam1)//Position - 0x18D74
{
	switch (iParam1)
	{
		case 10:
			return func_656(iParam0);
		
		case 11:
			return func_655(iParam0);
		
		case 12:
			return func_654(iParam0);
		
		case 13:
			return func_653(iParam0);
		
		default:
	}
	return 0;
}

bool func_653(int iParam0)//Position - 0x18DC0
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_654(int iParam0)//Position - 0x18DEC
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_655(int iParam0)//Position - 0x18E18
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_656(int iParam0)//Position - 0x18E44
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_657(int iParam0)//Position - 0x18E70
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_658(int iParam0, int iParam1)//Position - 0x18E9B
{
	switch (iParam1)
	{
		case 5:
			return func_659(iParam0);
		
		case 6:
			return func_649(iParam0);
		
		case 7:
			return func_648(iParam0);
		
		case 8:
			return func_647(iParam0);
		
		case 9:
			return func_646(iParam0);
		
		default:
	}
	return 0;
}

bool func_659(int iParam0)//Position - 0x18EF6
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_660(int iParam0, int iParam1)//Position - 0x18F21
{
	switch (iParam1)
	{
		case 0:
			return func_664(iParam0);
		
		case 1:
			return func_663(iParam0);
		
		case 2:
			return func_662(iParam0);
		
		case 3:
			return func_661(iParam0);
		
		case 4:
			return func_669(iParam0);
		
		default:
	}
	return 0;
}

bool func_661(int iParam0)//Position - 0x18F7C
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_662(int iParam0)//Position - 0x18FA8
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_663(int iParam0)//Position - 0x18FD4
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_664(int iParam0)//Position - 0x19000
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_665(int iParam0)//Position - 0x1902B
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_666(int iParam0)//Position - 0x19040
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_650(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_650(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_650(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_650(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_667(int iParam0)//Position - 0x1909F
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1675228);
	func_668();
}

void func_668()//Position - 0x190B3
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

bool func_669(int iParam0)//Position - 0x191A6
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

bool func_670(int iParam0)//Position - 0x191C3
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_671(int iParam0)//Position - 0x191EE
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

var func_672(int iParam0)//Position - 0x1921A
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_673(int iParam0)//Position - 0x1922F
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1675094);
	func_674();
}

void func_674()//Position - 0x19243
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

bool func_675()//Position - 0x19351
{
	return func_451(6156, -1, 0) != 0;
}

int func_676(int iParam0)//Position - 0x19364
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_677()//Position - 0x1938A
{
	return func_451(6164, -1, 0) == 3;
}

bool func_678()//Position - 0x1939D
{
	return func_451(6164, -1, 0) == 2;
}

bool func_679()//Position - 0x193B0
{
	return func_451(6164, -1, 0) == 1;
}

void func_680(int iParam0)//Position - 0x193C3
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1675040);
	func_681();
}

void func_681()//Position - 0x193D7
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

void func_682()//Position - 0x19523
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
		iVar2 = (iVar0 + func_693(12));
		func_692(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_684(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_683(Global_1323611[iVar1 /*141*/].f_66))
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

int func_683(int iParam0)//Position - 0x19669
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

int func_684(int iParam0, bool bParam1)//Position - 0x197A5
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
		if (!func_691())
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
		if ((((!func_690() && !func_689()) && !func_688()) && !func_687()) && !func_691())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_688())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_686(iParam0))
		{
			return 0;
		}
	}
	if (!func_685(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_685(int iParam0)//Position - 0x19925
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_481())
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

int func_686(int iParam0)//Position - 0x199F1
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

int func_687()//Position - 0x1BEBC
{
	return 0;
}

int func_688()//Position - 0x1BEC5
{
	return 1;
}

int func_689()//Position - 0x1BECE
{
	return 1;
}

int func_690()//Position - 0x1BED7
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_691()//Position - 0x1BEF0
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

void func_692(int iParam0, int iParam1, bool bParam2)//Position - 0x1BFAB
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

int func_693(int iParam0)//Position - 0x1BFEB
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
		iVar0 = func_636(iParam0);
		return func_695(iVar0);
	}
	return (func_694(iParam0, -1) * iParam0);
}

int func_694(int iParam0, int iParam1)//Position - 0x1C128
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_412(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_418(iParam1))
			{
				return 0;
			}
			else if (func_410(iParam1, -1))
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

int func_695(int iParam0)//Position - 0x1C35B
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

var func_696()//Position - 0x1C38C
{
	var uVar0;
	
	uVar0 = func_697();
	if (!func_465())
	{
		if (func_484() != func_65())
		{
			uVar0 = func_729(func_484()) + 1;
		}
	}
	return uVar0;
}

int func_697()//Position - 0x1C3BB
{
	return func_729(PLAYER::PLAYER_ID()) + 1;
}

int func_698()//Position - 0x1C3CD
{
	return func_451(6113, -1, 0);
}

int func_699(int iParam0)//Position - 0x1C3DE
{
	if (func_189(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

void func_700(int iParam0)//Position - 0x1C402
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674996);
	func_701();
}

void func_701()//Position - 0x1C41C
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_702(int iParam0)//Position - 0x1C445
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_703(int iParam0)//Position - 0x1C462
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_704(int iParam0)//Position - 0x1C47F
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_705(int iParam0)//Position - 0x1C4E0
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_706(int iParam0)//Position - 0x1C53E
{
	if (iParam0 != func_65())
	{
		if (((((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_707(int iParam0, int iParam1)//Position - 0x1C5E7
{
	if (iParam1 == func_65())
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

int func_708(int iParam0)//Position - 0x1C93B
{
	if (iParam0 != func_65())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_709(int iParam0)//Position - 0x1C99A
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_710(int iParam0)//Position - 0x1C9B7
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_711(int iParam0)//Position - 0x1C9D3
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

bool func_712(int iParam0)//Position - 0x1C9FD
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_713(int iParam0)//Position - 0x1CA27
{
	if (iParam0 == func_65())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_714(int iParam0, int iParam1)//Position - 0x1CA51
{
	return func_451(func_715(iParam1), iParam0, 0);
}

int func_715(int iParam0)//Position - 0x1CA66
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

void func_716(int iParam0)//Position - 0x1CAC0
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674933);
	func_717();
}

void func_717()//Position - 0x1CADA
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

void func_718(int iParam0)//Position - 0x1CC44
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674879);
	func_719();
}

void func_719()//Position - 0x1CC5E
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

int func_720(int iParam0, int iParam1)//Position - 0x1CD92
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_594(iParam0, iParam1, 2);
	bVar1 = func_594(iParam0, iParam1, 1);
	bVar2 = func_594(iParam0, iParam1, 0);
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

int func_721(int iParam0, int iParam1)//Position - 0x1CE48
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
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

int func_722(int iParam0, bool bParam1, bool bParam2)//Position - 0x1CEA7
{
	int iVar0;
	int iVar1;
	
	if (func_137(iParam0))
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
	else if (func_408(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_220(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_318(iParam0))
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
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_640(func_484()), func_639(func_484()), func_737(), func_736(), iVar1, iVar0);
	}
	func_724(iVar0);
	func_723(iVar0);
	return iVar0;
}

void func_723(int iParam0)//Position - 0x1CF9A
{
	int iVar0;
	
	iVar0 = func_451(3968, -1, 0);
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
	func_449(3968, iVar0, -1, 1, 0);
}

void func_724(int iParam0)//Position - 0x1CFE8
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

int func_725(bool bParam0)//Position - 0x1D062
{
	if (bParam0)
	{
		return 0;
	}
	if (func_123(PLAYER::PLAYER_ID()) || func_149(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_726(var uParam0)//Position - 0x1D091
{
	STATS::_0x316DB59CD14C1774(&Global_1675140);
	func_727();
}

void func_727()//Position - 0x1D0A5
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

int func_728(int iParam0)//Position - 0x1D186
{
	if (iParam0 != func_65())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_729(int iParam0)//Position - 0x1D1AC
{
	if (func_66(iParam0) == func_65())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_730()//Position - 0x1D1D2
{
	int iVar0;
	
	if (func_452())
	{
		return 4;
	}
	else if (func_465())
	{
		if (func_621(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_249(1))
	{
		iVar0 = func_699(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_482(1))
	{
		if (func_621(func_484()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_731(bool bParam0)//Position - 0x1D245
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_732(bool bParam0)//Position - 0x1D257
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_181(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_735(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_734(PLAYER::PLAYER_ID());
			if (func_441(func_442(PLAYER::PLAYER_ID())))
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
			iVar2 = func_734(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_733(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_733(PLAYER::PLAYER_ID());
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

int func_733(int iParam0)//Position - 0x1D38F
{
	if (func_104(PLAYER::PLAYER_ID()) == 238 || func_104(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_734(int iParam0)//Position - 0x1D3C8
{
	if (func_104(PLAYER::PLAYER_ID()) == 237 || func_104(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_735(int iParam0)//Position - 0x1D401
{
	if (func_181(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_736()//Position - 0x1D426
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_737()//Position - 0x1D442
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_738(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x1D45E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_65();
	iVar1 = func_65();
	iVar2 = func_65();
	return func_739(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_739(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x1D499
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
	func_383(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	func_228(&(Var0.f_69), 4);
	return func_347(&Var0);
}

int func_740(int iParam0)//Position - 0x1D54D
{
	int iVar0;
	
	iVar0 = func_193(iParam0);
	if (iVar0 != -1)
	{
		return func_191(iVar0);
	}
	return 1;
}

char* func_741(int iParam0)//Position - 0x1D56D
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_431(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return iVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		iVar0 = func_432(iParam0, 0);
		return iVar0;
	}
	if (((func_108(iParam0, 28) || func_108(PLAYER::PLAYER_ID(), 28)) || func_435(iParam0)) && !func_434(iParam0))
	{
		return func_432(iParam0, 0);
	}
	iVar1 = func_66(iParam0);
	if (iVar1 != func_65())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_432(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_65())
	{
		iVar0 = func_431(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
		{
			return func_432(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

void func_742()//Position - 0x1D672
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_888() && !func_299())
	{
		return;
	}
	if (!func_384())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	}
	iVar1 = func_140(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_112.f_847)))
	{
		iVar2 = (func_10() - func_756(&(Local_112.f_847), 0, 0));
		iVar3 = (func_755() - Local_112.f_115);
		func_753(iVar2);
		if (iVar2 > 30000)
		{
			func_743(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_743(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_743(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_743(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x1D742
{
	char* sVar0;
	
	if (func_751(0) == 0)
	{
		return;
	}
	func_750();
	func_747(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_525(sParam4))
	{
		sVar0 = sParam4;
	}
	func_744(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_744(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x1D7A9
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_746(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_745(7, iVar0);
		Global_1375006.f_4453[iVar0] = uParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = uParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = uParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_745(int iParam0, int iParam1)//Position - 0x1D906
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_746(int iParam0, int iParam1)//Position - 0x1D91F
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_747(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x1D938
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_746(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_745(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = iParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_749())
		{
			Global_1375006.f_1109 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_748())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_748()//Position - 0x1DBA9
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_749()//Position - 0x1DBCD
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_750()//Position - 0x1DC0B
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_751(bool bParam0)//Position - 0x1DC2E
{
	if (func_752())
	{
		return 0;
	}
	if (func_282())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1000(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_752()//Position - 0x1DC65
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_753(int iParam0)//Position - 0x1DC77
{
	if (MISC::IS_BIT_SET(iLocal_1434, 8))
	{
		func_754();
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1434, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				MISC::SET_BIT(&iLocal_1434, 15);
				MISC::SET_BIT(&iLocal_1434, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_1434, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(iLocal_1434, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					MISC::SET_BIT(&iLocal_1434, 11);
				}
			}
			else
			{
				MISC::IS_BIT_SET(iLocal_1434, 11);
				if (!MISC::IS_BIT_SET(iLocal_1434, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						MISC::SET_BIT(&iLocal_1434, 14);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_1434, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(iLocal_1434, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(&iLocal_1434, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							MISC::CLEAR_BIT(&iLocal_1434, 9);
						}
					}
				}
			}
		}
	}
}

void func_754()//Position - 0x1DDA8
{
	if (MISC::IS_BIT_SET(iLocal_1434, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_1434, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_1434, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_1434, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_1434, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1434, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_1434, 16);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_1434, 16))
				{
					if (!MISC::IS_BIT_SET(iLocal_1434, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_1434, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_1434, 13))
					{
						MISC::SET_BIT(&iLocal_1434, 10);
					}
				}
			}
		}
	}
}

int func_755()//Position - 0x1DE68
{
	return 4;
}

int func_756(var uParam0, bool bParam1, bool bParam2)//Position - 0x1DE71
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

void func_757()//Position - 0x1DEB8
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = PLAYER::PLAYER_ID();
	iVar18 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar18 = func_300();
		iVar17 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	}
	iVar19 = func_140(iVar17);
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_384())
		{
			if (func_774("HUNT_OBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_OBJ1L"))
			{
				func_820();
			}
			if (func_774("HUNT_TOBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_DOBJ"))
			{
				func_820();
			}
			if (func_774("HUNT_DOBJ1L"))
			{
				func_820();
			}
			return;
		}
	}
	else if (!MISC::IS_BIT_SET(Local_984[iVar18 /*14*/].f_1, 6))
	{
		func_820();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_774("HUNT_OBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_OBJ1L"))
		{
			func_820();
		}
		if (func_774("HUNT_TOBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_DOBJ"))
		{
			func_820();
		}
		if (func_774("HUNT_DOBJ1L"))
		{
			func_820();
		}
		return;
	}
	bVar20 = func_773() == true;
	if (iVar18 == Local_112.f_118)
	{
		if (!bVar20)
		{
			if (!func_774("HUNT_OBJ"))
			{
				func_770("HUNT_OBJ", 0);
			}
		}
		else if (!func_774("HUNT_OBJ1L"))
		{
			func_770("HUNT_OBJ1L", 0);
		}
	}
	else if (func_889() == Local_112.f_118)
	{
		if (!bVar20)
		{
			if (!func_774("HUNT_OBJ"))
			{
				func_770("HUNT_OBJ", 0);
			}
		}
		else if (!func_774("HUNT_OBJ1L"))
		{
			func_770("HUNT_OBJ1L", 0);
		}
	}
	else if (func_299())
	{
		if (Local_112.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_774("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_741(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)), 64);
					iVar0 = func_740(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
					func_758("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_774("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_741(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)), 64);
				iVar0 = func_740(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119));
				func_758("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_758(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1E0D7
{
	if (func_759(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_759(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x1E0FC
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
	if (func_769(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_763();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_762();
	func_761(bParam2);
	func_760();
	return 1;
}

void func_760()//Position - 0x1E1A6
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_761(bool bParam0)//Position - 0x1E1B9
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_762()//Position - 0x1E1DF
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_763()//Position - 0x1E204
{
	func_765();
	func_764(0);
}

void func_764(bool bParam0)//Position - 0x1E215
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

void func_765()//Position - 0x1E2A3
{
	if (!func_768())
	{
	}
	if (func_767())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_766();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_766()//Position - 0x1E2CC
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

int func_767()//Position - 0x1E53E
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_768()//Position - 0x1E554
{
	if (!func_767())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_766();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_769(int iParam0, int iParam1)//Position - 0x1E57A
{
	if (!func_767())
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

void func_770(char* sParam0, bool bParam1)//Position - 0x1E5D2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_771(sParam0))
	{
		return;
	}
	func_763();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_762();
	func_761(bParam1);
	func_760();
}

bool func_771(int iParam0)//Position - 0x1E63D
{
	if (!func_767())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_772(iParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_772(int iParam0)//Position - 0x1E681
{
	if (!func_767())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_773()//Position - 0x1E6B3
{
	return (4 - Local_112.f_115);
}

int func_774(int iParam0)//Position - 0x1E6C1
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!func_767())
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
	return func_771(iParam0);
}

void func_775()//Position - 0x1E712
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_888() && !func_299())
	{
		return;
	}
	if (!func_384())
	{
		return;
	}
	iVar1 = func_65();
	iVar2 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = func_300();
		iVar1 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1433, 1))
	{
		iVar0 = func_140(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_112.f_118 || func_889() == Local_112.f_118)
			{
				if (func_799(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_346(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1, 0);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_798(1);
						func_776(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_776(-1, 0, 0, -1, 0, 0);
				}
				func_346(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1, 0);
			}
		}
		MISC::SET_BIT(&iLocal_1433, 1);
	}
}

void func_776(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x1E827
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_181(PLAYER::PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_484() != func_65())
		{
			Global_1675140.f_2 = func_640(func_484());
			Global_1675140.f_3 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_28 = func_728(PLAYER::PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_731(func_249(1));
		}
	}
	else
	{
		iVar0 = func_104(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_318(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_137(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_408(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_220(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_446(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_484() != func_65())
		{
			Global_1674879.f_4 = func_640(func_484());
			Global_1674879.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674879.f_6), &(Global_1674879.f_7));
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
			Global_1674879.f_40 = func_478(iParam1);
			Global_1674879.f_41 = func_797();
			Global_1674879.f_42 = func_597(PLAYER::PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_721(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_465() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_406(iVar0))
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
			Global_1674996 = func_796(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_443(PLAYER::PLAYER_ID()) == 0)
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
		if (func_484() != func_65())
		{
			Global_1674996.f_4 = func_640(func_484());
			Global_1674996.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_323(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_484() != func_65())
		{
			Global_1674933.f_4 = func_640(func_484());
			Global_1674933.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_404(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_484() != func_65())
		{
			Global_1675040.f_4 = func_640(func_484());
			Global_1675040.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_714(func_19(), 5);
		Global_1675040.f_28 = func_731(func_575(PLAYER::PLAYER_ID()));
		Global_1675040.f_29 = func_451(6107, -1, 0);
		Global_1675040.f_30 = func_451(6103, -1, 0);
		Global_1675040.f_31 = func_451(6104, -1, 0);
		Global_1675040.f_32 = func_451(6106, -1, 0);
		Global_1675040.f_33 = func_451(6105, -1, 0);
		Global_1675040.f_34 = func_451(6108, -1, 0);
		Global_1675040.f_7 = func_730();
		Global_1675040.f_51 = func_731(bParam4);
	}
	else if (func_402(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_484() != func_65())
		{
			Global_1675094.f_4 = func_640(func_484());
			Global_1675094.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_451(6157, -1, 0);
		Global_1675094.f_25 = func_451(6162, -1, 0);
		Global_1675094.f_26 = func_451(6163, -1, 0);
		Global_1675094.f_27 = func_731((((func_679() || func_678()) || func_677()) || func_676(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_451(6164, -1, 0);
		Global_1675094.f_29 = func_731(func_675());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_730();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_441(func_442(PLAYER::PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_730();
		if (func_484() != func_65())
		{
			Global_1675228.f_4 = func_640(func_484());
			Global_1675228.f_5 = func_639(func_484());
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_484() != -1)
		{
			Global_1675228.f_17 = func_672(func_484());
		}
		Global_1675228.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_28 = func_728(PLAYER::PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_731(func_249(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_730();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_484() != func_65())
		{
			Global_1675175.f_4 = func_640(func_484());
			Global_1675175.f_5 = func_639(func_484());
		}
		Global_1675175.f_28 = func_728(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_666(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_650(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_669(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_731(func_649(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_731(func_648(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_731(func_647(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_731(func_646(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_645(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_644(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_643(PLAYER::PLAYER_ID());
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_731(func_249(1));
		}
		if (func_252() != func_65())
		{
			func_483(func_252(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_28 = func_728(PLAYER::PLAYER_ID());
	}
	else if (func_439(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_443(PLAYER::PLAYER_ID());
		Global_1675312.f_2 = func_737();
		Global_1675312.f_3 = func_736();
		Global_1675312.f_4 = func_640(func_484());
		Global_1675312.f_5 = func_639(func_484());
		Global_1675312.f_7 = func_730();
		Global_1675312.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_484() != -1)
		{
			Global_1675312.f_17 = func_672(func_484());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_731(func_637(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_634(21, -1);
	}
	else if (func_395(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_640(func_484());
		Global_1675387.f_7 = func_639(func_484());
		if (func_189(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_731(func_249(1));
		}
		if (func_484() != -1)
		{
			Global_1675387.f_9 = func_672(func_484());
		}
		Global_1675387.f_10 = func_730();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_484() != func_65())
		{
			Global_1674861 = func_640(func_484());
			Global_1674861.f_1 = func_639(func_484());
		}
		Global_1674861.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674861.f_13 = func_795();
		Global_1674861.f_15 = 0;
		if (func_482(1))
		{
			if (func_252() == func_484())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_794())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_793() || func_792()) || func_791()) || func_790()) || func_789()) || func_788(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_786(func_787(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_780(func_785(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_713(PLAYER::PLAYER_ID()) || func_712(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_709(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_710(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_707(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_779(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_779(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_778(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_777(PLAYER::PLAYER_ID(), iVar2);
				if (func_594(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_594(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_594(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_777(int iParam0, int iParam1)//Position - 0x1F3E5
{
	var uVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_589(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_778(int iParam0)//Position - 0x1F43E
{
	int iVar0;
	
	if (iParam0 == func_65())
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

int func_779(int iParam0, int iParam1, var uParam2)//Position - 0x1F480
{
	int iVar0;
	
	if (iParam0 != func_65())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_707(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_780(int iParam0)//Position - 0x1F4BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_634(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_693(11));
		func_692(iVar1, &iVar0, 1);
		iVar2 = func_634(func_782(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_451(func_781(4, iVar0), -1, 0);
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

int func_781(int iParam0, int iParam1)//Position - 0x1F536
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

int func_782(int iParam0)//Position - 0x2523E
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_693(iVar0) && iParam0 < func_783(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_783(int iParam0)//Position - 0x25281
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
		iVar0 = func_636(iParam0);
		return func_784(iVar0);
	}
	return (func_694(iParam0, -1) * iParam0 + 1);
}

int func_784(int iParam0)//Position - 0x253B3
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

int func_785(int iParam0)//Position - 0x253E4
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

int func_786(int iParam0)//Position - 0x2546D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_692(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_451(func_781(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_787(int iParam0)//Position - 0x254B3
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_788(int iParam0)//Position - 0x254D0
{
	if (iParam0 != func_65())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_789()//Position - 0x254F9
{
	return func_451(6542, -1, 0) != 0;
}

bool func_790()//Position - 0x2550C
{
	return func_451(6163, -1, 0) != 0;
}

bool func_791()//Position - 0x2551F
{
	return func_451(5380, -1, 0) != 0;
}

bool func_792()//Position - 0x25532
{
	return func_451(3828, -1, 0) != 0;
}

bool func_793()//Position - 0x25545
{
	return func_451(3223, -1, 0) != 0;
}

bool func_794()//Position - 0x25558
{
	return func_451(5379, -1, 0) != 0;
}

int func_795()//Position - 0x2556B
{
	int iVar0;
	
	iVar0 = func_484();
	if (iVar0 != func_65())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x25593
{
	if (func_104(iParam0) == 225 || func_104(iParam0) == 226)
	{
		return func_443(iParam0);
	}
	return -1;
}

var func_797()//Position - 0x255C0
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_596(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_798(bool bParam0)//Position - 0x255F2
{
	if (bParam0)
	{
		if (!func_108(PLAYER::PLAYER_ID(), 9))
		{
			if (func_140(PLAYER::PLAYER_ID()) != 0)
			{
				func_109(9);
			}
		}
	}
	else if (func_108(PLAYER::PLAYER_ID(), 9))
	{
		func_107(9);
	}
}

int func_799(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x25638
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
	if (func_801(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_800(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_800(int iParam0)//Position - 0x256C7
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_801(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x256DA
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_813();
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
	if (func_812() == 0)
	{
		func_810();
		return 0;
	}
	func_809(Global_21872);
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
		func_808(0);
		func_808(2);
		func_808(1);
	}
	else
	{
		func_813();
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
					func_808(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_808(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_808(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_808(3);
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
		func_813();
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
			if (!func_426())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_807(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_804(1);
			func_807(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_802(iParam0, sParam1);
	return 1;
}

void func_802(int iParam0, char* sParam1)//Position - 0x25B98
{
	if (!func_803())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_803()//Position - 0x25BBD
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_65())
	{
		return 0;
	}
	if (func_149(PLAYER::PLAYER_ID()))
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

void func_804(int iParam0)//Position - 0x25C23
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
		if (func_806(14))
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
								func_168(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_168(&(Global_7363[iVar1 /*15*/]));
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
								func_168(&(Global_7363[iVar1 /*15*/]));
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
								func_168(&(Global_7363[iVar1 /*15*/]));
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
								func_168(&(Global_7363[iVar1 /*15*/]));
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
								func_168(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_805(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_805(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x261BC
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
		func_168(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_168(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_168(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_168(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_168(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_806(int iParam0)//Position - 0x2626F
{
	return Global_41396 == iParam0;
}

void func_807(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2627D
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

void func_808(int iParam0)//Position - 0x262E0
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_809(int iParam0)//Position - 0x262FF
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

void func_810()//Position - 0x26391
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
		if (!func_811(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_811(struct<6> Param0, struct<6> Param6)//Position - 0x2645C
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

int func_812()//Position - 0x26547
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
			if (!func_811(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
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

void func_813()//Position - 0x266AF
{
	if (func_806(14))
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
		Global_19486 = func_814();
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

var func_814()//Position - 0x26751
{
	func_815();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_815()//Position - 0x2676A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_818(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_817(PLAYER::PLAYER_PED_ID());
			if (func_816(iVar0) && (!func_806(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_816(Global_111560.f_2358.f_539.f_4321))
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

bool func_816(int iParam0)//Position - 0x26867
{
	return iParam0 < 3;
}

int func_817(int iParam0)//Position - 0x26873
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_818(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_818(int iParam0)//Position - 0x268B0
{
	if (func_816(iParam0))
	{
		return func_819(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_819(int iParam0)//Position - 0x268D5
{
	return Global_1798[iParam0 /*29*/];
}

void func_820()//Position - 0x268E4
{
	if (!func_767())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_763();
}

void func_821()//Position - 0x26911
{
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_823();
			func_311();
			if (Local_112.f_117 == 2)
			{
				Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_112.f_117 == 3)
			{
				Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_311();
			if (func_822())
			{
				func_754();
			}
			if (Local_112.f_117 == 3)
			{
				Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_902();
			break;
	}
}

bool func_822()//Position - 0x269AD
{
	return ((MISC::IS_BIT_SET(Local_112.f_1, 1) || MISC::IS_BIT_SET(Local_112.f_1, 3)) || MISC::IS_BIT_SET(Local_112.f_1, 5));
}

void func_823()//Position - 0x269DC
{
	func_843();
	func_842();
	func_775();
	func_757();
	func_832();
	func_831();
	func_826();
	func_825();
	func_742();
	func_824();
}

void func_824()//Position - 0x26A0C
{
}

void func_825()//Position - 0x26A14
{
	if (func_822())
	{
		return;
	}
	if (!func_888())
	{
		return;
	}
	if (!Global_262145.f_15006)
	{
		return;
	}
	if (Local_112.f_115 == 0)
	{
		return;
	}
}

void func_826()//Position - 0x26A4A
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_888())
	{
		return;
	}
	if (func_822())
	{
		return;
	}
	fVar4 = func_150(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1440 != iVar0)
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), false) };
				func_92(10, 0, 0, 0, 0);
				func_827(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_1440 = iVar0;
				MISC::SET_BIT(&iLocal_1433, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_342();
	}
}

void func_827(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x26AED
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
	if (func_828(PLAYER::PLAYER_ID()))
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

int func_828(int iParam0)//Position - 0x26C16
{
	if (((func_829(iParam0, 1) || func_131(iParam0)) || func_105(iParam0, 0)) || func_392(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_829(int iParam0, bool bParam1)//Position - 0x26C52
{
	if (Global_1312448 != 0)
	{
		return func_830(iParam0) != 0;
	}
	return func_279(iParam0, bParam1, 0);
}

int func_830(int iParam0)//Position - 0x26C79
{
	if (func_1000(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

void func_831()//Position - 0x26C9B
{
	int iVar0;
	
	if (iLocal_1437 != Local_112.f_115)
	{
		if (func_888())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_112.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_15003)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15003, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_15004)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15004, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_15005)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_15005);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_15005, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
						}
						iLocal_1437 = Local_112.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1437 = Local_112.f_115;
		}
	}
}

void func_832()//Position - 0x26D8C
{
	int iVar0;
	
	if (!func_384())
	{
		if (func_841("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	iVar0 = func_140(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_841("HUNT_HELPA", "HUNT_TARBLP"))
		{
			HUD::CLEAR_HELP(1);
		}
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1433, 2))
	{
		if (!func_840(86))
		{
			if (func_834(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118)
				{
					func_833("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_320(1);
					MISC::SET_BIT(&iLocal_1433, 2);
				}
				else if (func_889() == Local_112.f_118)
				{
					func_833("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_320(1);
					MISC::SET_BIT(&iLocal_1433, 2);
				}
				else if (func_299())
				{
					func_833("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_320(1);
					MISC::SET_BIT(&iLocal_1433, 2);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_1433, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_1433, 3))
		{
			if (func_834(0, 1, 1, 1))
			{
				if (!func_841("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118 || func_889() == Local_112.f_118)
					{
						func_321("HUNT_HELPB", -1);
						func_320(1);
						MISC::SET_BIT(&iLocal_1433, 3);
					}
				}
			}
		}
	}
}

void func_833(char[4] cParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x26ED3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_834(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x26EFE
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_839())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_289())
	{
		return 0;
	}
	if (func_427())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_279(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_838(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_837())
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
	if (func_836())
	{
		return 0;
	}
	if (func_835())
	{
		return 0;
	}
	if (func_282())
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
	if (func_94(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_835()//Position - 0x26FFB
{
	return Global_2448961.f_591;
}

bool func_836()//Position - 0x2700A
{
	return Global_2448961.f_744;
}

bool func_837()//Position - 0x27019
{
	return Global_2437549.f_3032.f_578;
}

int func_838(int iParam0)//Position - 0x2702B
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_839()//Position - 0x27047
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_840(int iParam0)//Position - 0x27069
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

int func_841(char* sParam0, char* sParam1)//Position - 0x27080
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_842()//Position - 0x27099
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_150(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_126(PLAYER::PLAYER_ID()))
		{
			func_125();
		}
	}
}

void func_843()//Position - 0x270C5
{
	if (func_143())
	{
		if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			func_111(0);
			MISC::CLEAR_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_140(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_888())
		{
			if (!func_142())
			{
				if (MISC::IS_BIT_SET(Local_112.f_1, 6))
				{
					func_111(1);
					MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_844()//Position - 0x27153
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_65();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_110, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_889() == Local_112.f_118)
							{
								if (func_862(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1)))
								{
									MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_112, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
				{
					if (func_861(iVar0))
					{
						MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, iVar0))
		{
			if (!MISC::IS_BIT_SET(Local_112.f_111, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), true), 10f, 1))
						{
							MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_860(iVar0);
		if (func_384())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_1448[iVar0]))
			{
				if (!func_822())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							iLocal_1448[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1));
							if (func_889() == Local_112.f_118)
							{
								HUD::SET_BLIP_PRIORITY(iLocal_1448[iVar0], 12);
								HUD::SET_BLIP_SPRITE(iLocal_1448[iVar0], 432);
								func_859(&(iLocal_1448[iVar0]), 6);
							}
							else
							{
								HUD::SET_BLIP_SPRITE(iLocal_1448[iVar0], 480);
								func_859(&(iLocal_1448[iVar0]), 9);
							}
							HUD::SET_BLIP_FLASHES(iLocal_1448[iVar0], 1);
							HUD::SET_BLIP_FLASH_TIMER(iLocal_1448[iVar0], 7000);
							HUD::SET_BLIP_SCALE(iLocal_1448[iVar0], 1.1f);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1448[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					HUD::REMOVE_BLIP(&(iLocal_1448[iVar0]));
				}
				else if (func_822())
				{
					HUD::REMOVE_BLIP(&(iLocal_1448[iVar0]));
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_1448[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1448[iVar0]));
		}
		func_858(iVar0);
		func_857(iVar0);
		func_855(iVar0);
		switch (Local_112.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_112.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || MISC::IS_BIT_SET(Local_112.f_108, iVar0))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_112.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (MISC::IS_BIT_SET(Local_112.f_108, iVar0))
											{
												MISC::CLEAR_BIT(&(Local_112.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										TASK::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
									{
										iVar2 = func_851(iVar0);
										if (!PED::IS_PED_INJURED(iVar2))
										{
											TASK::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), iVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 187, true);
						}
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_850(iVar0, &fVar5);
									if (iVar4 != func_65())
									{
										TASK::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_112.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_853(Local_112.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_112.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_853(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), true);
											TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), 3, true);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_888())
	{
		func_845();
	}
}

void func_845()//Position - 0x27D8B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_846(uLocal_1694[iVar0], &(Local_1453[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_846(int iParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x27DC4
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_849())
		{
			Global_2437549 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_848(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_848(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2437549, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_847(iParam1);
	}
}

void func_847(int iParam0)//Position - 0x27E3F
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

int func_848(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x27EB1
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

bool func_849()//Position - 0x28087
{
	return Global_1312850;
}

int func_850(int iParam0, float fParam1)//Position - 0x28093
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_65();
	fVar1 = 1E+08f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
	iVar6 = 0;
	while (iVar6 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6)))
		{
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
			if (!func_17(iVar7, 0))
			{
				iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
				if (iVar6 == Local_112.f_118 || Local_984[iVar6 /*14*/].f_10 == Local_112.f_118)
				{
					if (!PED::IS_PED_INJURED(iVar8))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar8, true), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar7;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != func_65())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

int func_851(int iParam0)//Position - 0x28159
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_852(iParam0);
	if (iVar1 != func_65())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return iVar0;
}

int func_852(int iParam0)//Position - 0x2817C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	iVar0 = func_65();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), false) };
	iVar3 = 0;
	while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			iVar8 = PLAYER::GET_PLAYER_PED(iVar7);
			if (func_189(iVar7, 1))
			{
				if (!MISC::IS_BIT_SET(Local_984[iVar3 /*14*/].f_1, 1))
				{
					if (func_66(iVar7) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118)))
					{
						if (!PED::IS_PED_INJURED(iVar8))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar8, true), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar7;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_853(int iParam0)//Position - 0x2823F
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_854(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_854(int iParam0)//Position - 0x28262
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_44(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_855(int iParam0)//Position - 0x28292
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	int iVar7;
	
	if (!func_384())
	{
		return;
	}
	if (func_140(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_888() && !func_299())
	{
		return;
	}
	if (func_822())
	{
		return;
	}
	if (func_888())
	{
		HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
				GRAPHICS::DRAW_MARKER(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar0, iVar1, iVar2, 100, 1, 1, 2, 0, 0, 0, false);
			}
			else
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0);
				func_856(iVar7, iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_856(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x283A2
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

void func_857(int iParam0)//Position - 0x28439
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_889() != Local_112.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar4) < 5625f)
	{
		MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
	}
}

void func_858(int iParam0)//Position - 0x28578
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (Local_112.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_112.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_889() != Local_112.f_118)
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_112.f_2[iParam0 /*26*/].f_1))
	{
		MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
	if (SYSTEM::VDIST2(vVar1, vVar4) < 62500f)
	{
		MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_889() == Local_112.f_118)
				{
					if (SYSTEM::VDIST2(vVar1, vVar4) < 40000f)
					{
						MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
					if (func_862(iVar7))
					{
						MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_859(var uParam0, int iParam1)//Position - 0x28712
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_339(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_860(int iParam0)//Position - 0x28738
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	if (Local_112.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_112.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), true) };
							vVar5 = { vVar2 };
							vVar5.z = (vVar5.z + 500f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar1, 0, 0))
							{
								if (MISC::ABSF((vVar2.z - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_112.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_861(int iParam0)//Position - 0x2881A
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_112.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_112.f_2[iParam0 /*26*/].f_2), 1, 40000))
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

int func_862(int iParam0)//Position - 0x28886
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
	if (func_863())
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

bool func_863()//Position - 0x288F8
{
	return Global_1574401;
}

void func_864()//Position - 0x28904
{
	int iVar0;
	int iVar1;
	
	if (Local_112 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_1436);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_822())
				{
					if (!func_888())
					{
						if (func_299())
						{
							if (func_189(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118));
								if (func_76(iVar1, iVar0, 1))
								{
									if (!MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_1436))
									{
										func_340(iVar1, 432, 1, 0);
										func_333(iVar1, func_339(iLocal_1725), 1, 0);
										MISC::SET_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_1436);
									}
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_1436))
			{
				func_340(iVar1, 432, 0, 0);
				func_333(iVar1, func_339(iLocal_1725), 0, 0);
				MISC::CLEAR_BIT(&(Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_1436);
			}
		}
	}
	iLocal_1436++;
	if (iLocal_1436 >= 32)
	{
		iLocal_1436 = 0;
	}
}

int func_865(bool bParam0)//Position - 0x28A02
{
	if (func_868(1))
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
		if (func_252() == func_65() || !func_1000(func_252(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_397(PLAYER::PLAYER_ID()))
	{
		if (func_867(PLAYER::PLAYER_ID()) && func_866())
		{
			return 1;
		}
	}
	return 0;
}

int func_866()//Position - 0x28A7B
{
	switch (func_330(func_388(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_867(int iParam0)//Position - 0x28AA5
{
	if (iParam0 != func_65() && func_1000(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_868(bool bParam0)//Position - 0x28AD9
{
	bool bVar0;
	
	if (!func_482(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_65())
		{
			if (func_1000(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_139(func_104(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_538(31);
				if (func_318(func_104(PLAYER::PLAYER_ID())))
				{
					func_538(81);
				}
				if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_65() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_359(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_251(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_538(88);
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

void func_869()//Position - 0x28C2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_112.f_2[iVar1 /*26*/] == 2)
			{
				if (func_45(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1694[iVar0] = Local_112.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_870()//Position - 0x28CB0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_112.f_118 || func_889() == Local_112.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_112.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_871()//Position - 0x28D57
{
	if (Local_112.f_118 > -1)
	{
		iLocal_1725 = func_740(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_112.f_118)));
	}
}

void func_872(float fParam0)//Position - 0x28D7A
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_336())
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

void func_873(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x28DE6
{
	float fVar0;
	
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_887(-1);
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_886() != -1)
		{
			func_885(-1);
		}
		if (func_884() != -1)
		{
			func_883(-1);
		}
		func_882(iParam2);
		func_880(iParam0);
		if (!func_115(iParam0))
		{
			fVar0 = func_114(iParam0);
			if (fVar0 != 1f)
			{
				func_872(fVar0);
				MISC::SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_118(iParam0) || iParam3)
		{
			if (func_116(iParam0, iParam2) && iParam3 == 1)
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
		if (func_142())
		{
			func_109(27);
		}
		if (bParam1)
		{
			if (!func_143())
			{
				func_111(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2531497.f_4555, 1) || MISC::IS_BIT_SET(Global_2531497.f_4555, 4)) || MISC::IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_538(6);
			}
			func_879();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_131(PLAYER::PLAYER_ID()) && func_123(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
		}
		func_875();
		if (func_874(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_874(int iParam0)//Position - 0x29003
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

void func_875()//Position - 0x2904D
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_878();
	iVar2 = func_66(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_76(iVar1, iVar2, 1) || func_876(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_876(int iParam0, int iParam1)//Position - 0x290BD
{
	if (func_189(iParam0, 1) && func_189(iParam1, 1))
	{
		return (func_877(iParam0) == func_66(iParam1) || func_877(iParam1) == func_66(iParam0));
	}
	return 0;
}

int func_877(int iParam0)//Position - 0x290FF
{
	if (func_189(iParam0, 1))
	{
		return Global_1628955[func_66(iParam0) /*614*/].f_11.f_484;
	}
	return func_65();
}

int func_878()//Position - 0x2912A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_484();
	if (iVar0 != func_65())
	{
		if (func_1000(iVar0, 0, 1))
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

void func_879()//Position - 0x2916B
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

void func_880(int iParam0)//Position - 0x29209
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_451(3791, -1, 0);
	iVar1 = func_881(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_449(3791, iVar0, -1, 1, 0);
	}
}

int func_881(int iParam0)//Position - 0x2923E
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

void func_882(int iParam0)//Position - 0x292D5
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_883(int iParam0)//Position - 0x29304
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_884()//Position - 0x29327
{
	return Global_2531497.f_4898.f_338;
}

void func_885(int iParam0)//Position - 0x29339
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_886()//Position - 0x2935C
{
	return Global_2531497.f_4898.f_337;
}

void func_887(int iParam0)//Position - 0x2936E
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

int func_888()//Position - 0x29387
{
	int iVar0;
	
	iVar0 = func_889();
	if (iVar0 > -1)
	{
		if (Local_112.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_889()//Position - 0x293A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_65();
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = func_300();
		iVar1 = Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_735;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_984[iVar0 /*14*/].f_10 != -1)
	{
		return Local_984[iVar0 /*14*/].f_10;
	}
	if (func_122(iVar1))
	{
		Local_984[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_112.f_118)
		{
			func_798(1);
		}
	}
	else if (func_189(iVar1, 1))
	{
		iVar2 = func_66(iVar1);
		if (iVar2 != func_65())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_984[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_984[iVar0 /*14*/].f_10;
}

int func_890()//Position - 0x29470
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_45(iVar0))
		{
			if (!func_36(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_891()//Position - 0x294F9
{
	return Local_112;
}

int func_892(int iParam0)//Position - 0x29503
{
	return Local_984[iParam0 /*14*/];
}

int func_893()//Position - 0x29512
{
	var uVar0;
	
	func_898(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_897())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_896())
	{
		return 1;
	}
	if (func_895(159))
	{
		if (!func_894())
		{
			return 1;
		}
	}
	if (func_895(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_336() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_336()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_894()//Position - 0x2959C
{
	return Global_2448961.f_598;
}

int func_895(int iParam0)//Position - 0x295AB
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_896()//Position - 0x295C2
{
	return Global_2458999;
}

bool func_897()//Position - 0x295CE
{
	return Global_2448961.f_593;
}

void func_898(var uParam0)//Position - 0x295DD
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
					func_899(iVar0);
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

void func_899(int iParam0)//Position - 0x29650
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1000(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_900(iVar4, &bVar5))
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

int func_900(int iParam0, var uParam1)//Position - 0x296D1
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

void func_901()//Position - 0x29730
{
	SYSTEM::WAIT(0);
}

void func_902()//Position - 0x2973D
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_1433, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_888() || func_299())
				{
					func_628(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					MISC::SET_BIT(&iLocal_1433, 6);
				}
			}
		}
		uVar0 = Local_112.f_115;
		uVar1 = Local_112.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_948(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1438)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1439);
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_1433, 18))
	{
		func_345(1);
		MISC::CLEAR_BIT(&iLocal_1433, 18);
	}
	func_947();
	if (Local_112.f_119 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_1433, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_112.f_119)))
			{
			}
		}
	}
	if (func_81(0))
	{
		func_80(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (MISC::IS_BIT_SET(Local_112.f_871, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_112.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (MISC::IS_BIT_SET(iLocal_1433, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1727);
		MISC::CLEAR_BIT(&iLocal_1433, 17);
	}
	func_342();
	MISC::SET_BIT(&iLocal_1434, 8);
	func_754();
	OBJECT::_0x78857FC65CADB909(1);
	func_798(0);
	func_904(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_332();
	func_903();
}

void func_903()//Position - 0x298B4
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_904(bool bParam0, int iParam1)//Position - 0x298C0
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
		func_945();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_452() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_927(PLAYER::PLAYER_ID(), iParam1, 1, 0);
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
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_131(PLAYER::PLAYER_ID()))
		{
			func_111(0);
		}
	}
	else if (func_925(PLAYER::PLAYER_ID()) != -1)
	{
		func_887(-1);
	}
	func_924(func_65());
	if (func_81(16))
	{
		func_80(16);
	}
	func_921(0);
	func_882(-1);
	func_920();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_919(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_917(iVar1);
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
	iVar2 = func_325();
	if ((func_219(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_916(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_137(iVar2))
	{
		func_913(-1, 1);
	}
	else if (((((func_324(iVar2) || func_912(iVar2)) || func_911(iVar2)) || func_406(iVar2)) || func_404(iVar2)) || func_402(iVar2))
	{
	}
	else
	{
		func_913(-1, 1);
	}
	func_107(19);
	func_107(20);
	func_107(21);
	func_107(22);
	func_107(27);
	func_80(3);
	func_80(4);
	func_80(7);
	func_910();
	if (func_123(PLAYER::PLAYER_ID()))
	{
		func_798(0);
	}
	func_107(29);
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_65();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_82();
	}
	if (!func_131(PLAYER::PLAYER_ID()))
	{
		func_106();
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
		func_909("IMPEXP_SELFDES", 0);
		func_907("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_905(iVar2, 0);
}

void func_905(int iParam0, bool bParam1)//Position - 0x29C89
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_906(iParam0));
			MISC::SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674852.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_906(iParam0));
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_906(int iParam0)//Position - 0x29CE5
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

void func_907(char* sParam0)//Position - 0x29D5E
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
					func_813();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_908(iVar0))
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

int func_908(int iParam0)//Position - 0x29E12
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_909(char* sParam0, int iParam1)//Position - 0x29E67
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

void func_910()//Position - 0x29F7F
{
	if (func_126(PLAYER::PLAYER_ID()))
	{
		func_107(25);
	}
}

int func_911(int iParam0)//Position - 0x29F98
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

int func_912(int iParam0)//Position - 0x29FB8
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_913(int iParam0, bool bParam1)//Position - 0x29FE3
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_325();
	}
	if (iParam0 > 0)
	{
		if (func_484() != func_65())
		{
			if (func_398(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2509053.f_93[func_915(iParam0)] = 1;
			}
		}
		iVar0 = func_915(159);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(157);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(148);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(164);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(142);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(152);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(166);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(170);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(173);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(179);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(200);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(201);
		if (func_914(iVar0, Global_262145.f_12606, bParam1))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(182);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(183);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(185);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(186);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(180);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(195);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(197);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(198);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(207);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(208);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(209);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(214);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(215);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(216);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(217);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(218);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(219);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(220);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(221);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_914(int iParam0, int iParam1, bool bParam2)//Position - 0x2A65F
{
	if (bParam2)
	{
		if ((!func_108(PLAYER::PLAYER_ID(), 19) && !func_108(PLAYER::PLAYER_ID(), 20)) && !func_108(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_8(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_756(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_915(int iParam0)//Position - 0x2A6E5
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

void func_916(int iParam0)//Position - 0x2A8E7
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_325();
	}
	if (iParam0 > 0)
	{
		if (func_484() != func_65())
		{
			Global_2509053.f_93[func_915(iParam0)] = 1;
		}
		iVar0 = func_915(155);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(163);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(160);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(153);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(162);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(154);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(171);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(172);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(199);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(194);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(193);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(210);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(205);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(189);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_915(211);
		if (func_914(iVar0, Global_262145.f_12607, 0))
		{
			func_161(&(Global_2509053[iVar0 /*2*/]));
			func_7(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_917(int iParam0)//Position - 0x2AC18
{
	if (!func_28(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_918() };
	}
	if (!func_28(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_918() };
	}
}

Vector3 func_918()//Position - 0x2AC9A
{
	vector3 vVar0;
	
	return vVar0;
}

void func_919(int iParam0)//Position - 0x2ACA6
{
	if (!func_28(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_918() };
	}
	if (!func_28(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_918(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_918() };
	}
}

void func_920()//Position - 0x2AD24
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_65();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_921(bool bParam0)//Position - 0x2AD7E
{
	if (bParam0)
	{
		if (!func_429(PLAYER::PLAYER_ID(), 14))
		{
			func_923(14);
		}
	}
	else if (func_429(PLAYER::PLAYER_ID(), 14))
	{
		func_922(14);
	}
}

void func_922(int iParam0)//Position - 0x2ADB5
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_923(int iParam0)//Position - 0x2ADD2
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_924(int iParam0)//Position - 0x2ADEF
{
	if (func_122(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_65())
				{
				}
			}
		}
	}
}

int func_925(int iParam0)//Position - 0x2AE3E
{
	if (func_926(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_926(int iParam0, int iParam1)//Position - 0x2AE61
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_927(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2AE9C
{
	int iVar0;
	
	if (func_596(iParam0, iParam1) && func_944(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		func_931(iVar0, bParam2, bParam3);
		func_928(iVar0, 1);
	}
}

void func_928(int iParam0, bool bParam1)//Position - 0x2AED7
{
	if (!func_930(iParam0))
	{
		return;
	}
	func_582(func_929(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_929(int iParam0)//Position - 0x2AF13
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

bool func_930(int iParam0)//Position - 0x2AF6D
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_931(int iParam0, bool bParam1, bool bParam2)//Position - 0x2AF82
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_777(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_943(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_942(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_941(iParam0, 0, bParam2);
	}
	else if (func_939(iParam0, bParam2))
	{
		iVar0 = func_938(iVar2, 0);
		iVar3 = func_721(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_937(iVar2, bParam2);
		iVar5 = func_938(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_936(iVar2) && func_935(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_943(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_934(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_933(iParam0, (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_937(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_938(iVar2, bParam2) / func_934(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_936(iVar2) && func_935(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_932(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_932(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2B0F3
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return;
	}
	if (func_589(iParam1))
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

void func_933(int iParam0, int iParam1)//Position - 0x2B167
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_934(int iParam0, int iParam1)//Position - 0x2B1AC
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1))
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

int func_935(int iParam0, int iParam1)//Position - 0x2B20B
{
	int iVar0;
	
	if (iParam0 == func_65())
	{
		return 0;
	}
	if (func_589(iParam1) && func_936(iParam1))
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

bool func_936(int iParam0)//Position - 0x2B275
{
	return func_478(iParam0) == 5;
}

int func_937(int iParam0, bool bParam1)//Position - 0x2B285
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_478(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_938(int iParam0, bool bParam1)//Position - 0x2B3BC
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_478(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 0))
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
			if (func_594(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_935(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_939(int iParam0, bool bParam1)//Position - 0x2B5C6
{
	if (bParam1)
	{
		return func_583(15384, -1, -1);
	}
	return func_583(func_940(iParam0), -1, -1);
}

int func_940(int iParam0)//Position - 0x2B5EB
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

void func_941(int iParam0, bool bParam1, bool bParam2)//Position - 0x2B645
{
	if (bParam2)
	{
		func_582(15384, bParam1, -1, 1);
		return;
	}
	func_582(func_940(iParam0), bParam1, -1, 1);
}

int func_942(int iParam0, bool bParam1)//Position - 0x2B670
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_777(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_936(iVar1))
	{
		if (func_935(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_943(int iParam0, int iParam1, bool bParam2)//Position - 0x2B6B8
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_944(int iParam0, int iParam1)//Position - 0x2B6D8
{
	int iVar0;
	
	if (func_596(iParam0, iParam1))
	{
		iVar0 = func_595(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_945()//Position - 0x2B72C
{
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_946(24);
}

void func_946(int iParam0)//Position - 0x2B754
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_947()//Position - 0x2B77D
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1438);
}

void func_948(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2B78C
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
			Var32.f_16 = uParam1;
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
			Var65.f_16 = uParam1;
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
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			STATS::_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674861.f_15;
			STATS::_0x5FF2C33B13A02A11(&Var116);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674861.f_15;
			STATS::_0x282B6739644F4347(&Var134);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674861.f_15;
			STATS::_0xF06A6F41CB445443(&Var153);
		}
	}
	func_949();
}

void func_949()//Position - 0x2BA2A
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_950(struct<21> Param0)//Position - 0x2BA3E
{
	func_998(func_999(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_997(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_984, 449);
	if (!func_996())
	{
		func_902();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_993();
		func_951(0, 0, 0);
		Local_984[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_902();
	}
}

void func_951(int iParam0, int iParam1, bool bParam2)//Position - 0x2BAB7
{
	func_992();
	if (func_397(PLAYER::PLAYER_ID()))
	{
		func_954(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_953(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_465() && !func_189(PLAYER::PLAYER_ID(), 1))
	{
		if (func_146())
		{
			func_110(3);
		}
	}
	func_110(4);
	if (func_482(0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_484();
	}
	if (func_318(iParam0))
	{
		func_719();
		Global_1674879.f_18 = func_699(func_252());
	}
	else if (func_323(func_925(PLAYER::PLAYER_ID())))
	{
		func_717();
		Global_1674933.f_18 = func_699(func_252());
	}
	if (bParam2)
	{
		if (!func_143())
		{
			func_111(1);
		}
	}
	func_952();
}

void func_952()//Position - 0x2BBA5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_65();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_953(int iParam0, bool bParam1)//Position - 0x2BBDF
{
	return func_76(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_954(bool bParam0)//Position - 0x2BBF3
{
	int iVar0;
	
	func_946(33);
	func_946(34);
	func_946(35);
	func_946(36);
	func_946(37);
	func_946(38);
	func_946(39);
	func_946(40);
	func_946(43);
	func_946(41);
	func_946(54);
	func_946(42);
	func_946(47);
	func_991(23);
	func_991(24);
	func_946(92);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_990();
	func_985();
	func_980();
	func_975();
	func_964();
	func_960();
	func_956();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_955(3))
	{
		func_991(3);
	}
	else if (func_955(4))
	{
		func_991(4);
	}
	else if (func_955(5))
	{
		func_991(5);
	}
	else if (func_955(6))
	{
		func_991(6);
	}
	else if (func_955(7))
	{
		func_991(7);
	}
	else if (((((((((((((((((func_955(0) || func_955(1)) || func_955(2)) || func_955(8)) || func_955(9)) || func_955(10)) || func_955(11)) || func_955(12)) || func_955(13)) || func_955(14)) || func_955(15)) || func_955(16)) || func_955(17)) || func_955(18)) || func_955(19)) || func_955(20)) || func_955(21)) || func_955(22))
	{
		func_991(8);
		func_991(0);
		func_991(1);
		func_991(2);
		func_991(9);
		func_991(10);
		func_991(11);
		func_991(12);
		func_991(13);
		func_991(14);
		func_991(15);
		func_991(16);
		func_991(17);
		func_991(18);
		func_991(19);
		func_991(20);
		func_991(21);
		func_991(22);
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

bool func_955(int iParam0)//Position - 0x2BE59
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_956()//Position - 0x2BE82
{
	if (func_958())
	{
		func_957(0);
		func_957(1);
		func_957(2);
		func_957(3);
	}
}

void func_957(int iParam0)//Position - 0x2BEA5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_958()//Position - 0x2BECE
{
	if (((func_959(0) || func_959(1)) || func_959(2)) || func_959(3))
	{
		return 1;
	}
	return 0;
}

bool func_959(int iParam0)//Position - 0x2BF04
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_960()//Position - 0x2BF2D
{
	if (func_962())
	{
		func_961(4);
		func_961(5);
		func_961(6);
		func_961(7);
	}
}

void func_961(int iParam0)//Position - 0x2BF50
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_962()//Position - 0x2BF79
{
	if (((func_963(4) || func_963(5)) || func_963(6)) || func_963(7))
	{
		return 1;
	}
	return 0;
}

bool func_963(int iParam0)//Position - 0x2BFAF
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_964()//Position - 0x2BFD8
{
	int iVar0;
	
	if (func_974())
	{
		func_973(8);
		func_973(9);
		func_973(10);
		func_973(12);
		func_973(13);
		func_973(14);
		func_973(19);
		func_973(20);
		func_973(21);
		func_973(22);
		func_973(23);
		func_973(24);
		func_973(25);
		func_973(26);
		func_973(15);
		func_973(16);
		func_973(17);
		func_973(18);
		func_973(35);
		func_973(45);
		func_973(46);
		if (func_972(11))
		{
			func_973(11);
			iVar0 = func_451(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_449(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_972(48))
	{
		if (func_970(151, 3))
		{
			func_968(151, 3);
		}
		func_973(48);
	}
	if (func_972(49))
	{
		if (func_970(152, 3))
		{
			func_968(152, 3);
		}
		func_973(49);
	}
	if (func_972(50))
	{
		if (func_970(153, 3))
		{
			func_968(153, 3);
		}
		func_973(50);
	}
	if (func_972(51))
	{
		if (func_970(func_965(), 3))
		{
			func_968(func_965(), 3);
		}
		func_973(51);
	}
}

int func_965()//Position - 0x2C124
{
	if (func_967())
	{
		func_966(154, Global_19486, 1);
	}
	return 154;
}

void func_966(int iParam0, int iParam1, int iParam2)//Position - 0x2C13F
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

int func_967()//Position - 0x2C184
{
	int iVar0;
	
	iVar0 = func_66(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_65()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_968(int iParam0, int iParam1)//Position - 0x2C1C5
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
			func_969(iParam0, iVar0, 0);
			func_966(iParam0, iVar0, 0);
		}
	}
}

void func_969(int iParam0, int iParam1, int iParam2)//Position - 0x2C1FA
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

int func_970(int iParam0, int iParam1)//Position - 0x2C23F
{
	if (func_971(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0, int iParam1)//Position - 0x2C25B
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_972(int iParam0)//Position - 0x2C285
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_973(int iParam0)//Position - 0x2C2AE
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_974()//Position - 0x2C2D7
{
	if (((((((((((((((((((((func_972(8) || func_972(9)) || func_972(10)) || func_972(12)) || func_972(11)) || func_972(13)) || func_972(14)) || func_972(19)) || func_972(20)) || func_972(21)) || func_972(22)) || func_972(23)) || func_972(24)) || func_972(25)) || func_972(26)) || func_972(15)) || func_972(16)) || func_972(17)) || func_972(18)) || func_972(35)) || func_972(45)) || func_972(46))
	{
		return 1;
	}
	return 0;
}

void func_975()//Position - 0x2C3E9
{
	if (func_979())
	{
		func_978(0);
		func_978(1);
		func_978(2);
		func_978(3);
		func_978(4);
		func_978(5);
		if (func_977(32))
		{
			if (func_970(func_976(), 3))
			{
				func_968(func_976(), 3);
			}
			func_978(32);
		}
	}
}

int func_976()//Position - 0x2C43D
{
	if (func_967())
	{
		func_966(12, Global_19486, 1);
	}
	return 12;
}

bool func_977(int iParam0)//Position - 0x2C458
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_978(int iParam0)//Position - 0x2C481
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_979()//Position - 0x2C4AA
{
	if ((((func_977(1) || func_977(0)) || func_977(2)) || func_977(4)) || func_977(5))
	{
		return 1;
	}
	return 0;
}

void func_980()//Position - 0x2C4EB
{
	if (func_984())
	{
		func_983(0);
		func_983(1);
		func_983(2);
		func_983(3);
		func_983(4);
		func_983(5);
		func_983(6);
		func_983(7);
		if (func_982(8))
		{
			func_983(8);
		}
		if (func_982(15))
		{
			if (func_970(func_981(), 3))
			{
				func_968(func_981(), 3);
			}
			func_983(15);
		}
	}
}

int func_981()//Position - 0x2C558
{
	if (func_967())
	{
		func_966(20, Global_19486, 1);
	}
	return 20;
}

bool func_982(int iParam0)//Position - 0x2C573
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_983(int iParam0)//Position - 0x2C59C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_984()//Position - 0x2C5C5
{
	if ((((((((func_982(0) || func_982(1)) || func_982(2)) || func_982(3)) || func_982(4)) || func_982(5)) || func_982(6)) || func_982(7)) || func_982(8))
	{
		return 1;
	}
	return 0;
}

void func_985()//Position - 0x2C633
{
	if (func_989())
	{
		func_988(0);
		func_988(1);
		func_988(2);
		func_988(3);
		func_988(4);
		func_988(5);
		func_988(6);
		func_988(7);
		func_988(8);
		func_988(9);
		func_988(10);
		func_988(11);
		func_988(12);
		if (func_987(13))
		{
			if (func_970(func_986(), 3))
			{
				func_968(func_986(), 3);
			}
			func_988(13);
		}
	}
}

int func_986()//Position - 0x2C6AF
{
	if (func_967())
	{
		func_966(76, Global_19486, 1);
	}
	return 76;
}

bool func_987(int iParam0)//Position - 0x2C6CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_988(int iParam0)//Position - 0x2C6F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_989()//Position - 0x2C71C
{
	if ((((((((((((func_987(0) || func_987(1)) || func_987(2)) || func_987(3)) || func_987(4)) || func_987(5)) || func_987(6)) || func_987(7)) || func_987(8)) || func_987(9)) || func_987(10)) || func_987(11)) || func_987(12))
	{
		return 1;
	}
	return 0;
}

void func_990()//Position - 0x2C7BA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_991(int iParam0)//Position - 0x2C7E2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_992()//Position - 0x2C80B
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

void func_993()//Position - 0x2C82D
{
	int iVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_1438);
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574964[iVar1], iLocal_1438);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1438, Global_1574964[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar1], Global_1575009);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575009, Global_1574964[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, iLocal_1438, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, -1533126372, iLocal_1438);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1438, Global_1575012[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575012[5], iLocal_1438);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1438, Global_1574997);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574997, iLocal_1438);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1438, Global_1575009);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1575009, iLocal_1438);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1575009);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1438);
	func_995(1, &Global_1575009);
	func_994(&Global_1575009);
	func_994(&iLocal_1438);
}

void func_994(int iParam0)//Position - 0x2C946
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_995(int iParam0, var uParam1)//Position - 0x2CA38
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_996()//Position - 0x2CA94
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
		if (func_897())
		{
			return 0;
		}
		if (func_895(157))
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

int func_997(int iParam0, int iParam1, bool bParam2)//Position - 0x2CAED
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_903();
			}
			else
			{
				return 0;
			}
		}
		if (!func_849())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_903();
					}
					else
					{
						return 0;
					}
				}
				if (func_897())
				{
					if (!bParam2)
					{
						func_903();
					}
					else
					{
						return 0;
					}
				}
				if (func_895(157))
				{
					if (!bParam2)
					{
						func_903();
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
					func_903();
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
				func_903();
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
			func_903();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_998(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x2CC02
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_903();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_999(int iParam0)//Position - 0x2CC21
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

int func_1000(int iParam0, bool bParam1, bool bParam2)//Position - 0x2D333
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

