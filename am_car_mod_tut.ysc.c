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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 32;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 32;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	vector3 vLocal_138[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<21> Local_151 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_139 = -1;
	func_207(ScriptParam_151);
	while (true)
	{
		func_206();
		if (func_196())
		{
			func_186();
		}
		switch (func_185(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_184() == 2)
				{
					vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 2;
				}
				else if (func_184() == 6)
				{
					vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 2:
				if (func_184() == 2)
				{
					if (!func_183(0))
					{
						func_74();
					}
					else if (!MISC::IS_BIT_SET(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
					{
						func_8();
					}
				}
				else if (func_184() == 6)
				{
					vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 5;
				}
				break;
			
			case 5:
				func_6(&(vLocal_61.f_2));
				if (func_5(&(vLocal_61.f_2)))
				{
					vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
				}
				break;
			
			case 3:
				vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 6;
			
			case 6:
				func_186();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_184())
			{
				case 0:
					vLocal_61.x = 2;
					break;
				
				case 2:
					func_3();
					func_2();
					if (func_1())
					{
						vLocal_61.x = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (MISC::IS_BIT_SET(vLocal_61.y, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_3()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_137 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_140, 0);
			MISC::SET_BIT(&iLocal_140, 1);
		}
		iVar0 = iLocal_137;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!MISC::IS_BIT_SET(vLocal_138[iLocal_137 /*3*/].f_2, 0))
			{
				MISC::CLEAR_BIT(&iLocal_140, 1);
			}
			if (func_4(iVar1, 0, 1))
			{
				if (!MISC::IS_BIT_SET(Global_1590446[iLocal_137 /*871*/].f_146, 4))
				{
				}
			}
		}
		iLocal_137++;
		if (iLocal_137 == 32)
		{
			if (MISC::IS_BIT_SET(iLocal_140, 1))
			{
				MISC::SET_BIT(&(vLocal_61.f_1), 0);
			}
			MISC::SET_BIT(&iLocal_140, 0);
			iLocal_137 = 0;
		}
	}
}

int func_4(int iParam0, bool bParam1, bool bParam2)
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

int func_5(var uParam0)
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

void func_6(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
		iLocal_139 = -1;
	}
	MISC::SET_BIT(&(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
	MISC::SET_BIT(&(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 1);
	func_70(10, 0);
	func_69(0);
	func_30(1);
	func_23();
	func_9(43, 1, 0);
	func_9(42, 1, 0);
}

void func_9(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 0, 0))
		{
			if (iParam2 && Global_98721.f_18[iParam0])
			{
				if (func_21(iParam0) == 3 && !func_20(iParam0))
				{
					func_19(iParam0);
					func_18(iParam0, 0, 0);
					func_11(iParam0, 1, 0);
					func_10(iParam0);
				}
				else
				{
					func_18(iParam0, 1, 0);
					func_10(iParam0);
				}
			}
			else
			{
				func_18(iParam0, 0, 0);
				func_11(iParam0, 1, 0);
				func_10(iParam0);
			}
		}
		else
		{
			func_11(iParam0, 1, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 0, 0))
	{
		func_11(iParam0, 0, 0);
		func_11(iParam0, 1, 0);
		func_10(iParam0);
	}
}

void func_10(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_11(int iParam0, int iParam1, bool bParam2)
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
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_16(int iParam0)
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

int func_17()
{
	return Global_30736;
}

void func_18(int iParam0, int iParam1, bool bParam2)
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
		if (func_17() == 0)
		{
			iVar0 = func_15(func_16(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_12(func_16(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_19(int iParam0)
{
	if (Global_98721.f_18[iParam0])
	{
		func_18(iParam0, 10, 1);
		func_18(iParam0, 19, 1);
	}
}

bool func_20(int iParam0)
{
	return func_22(iParam0, 5, 1);
}

int func_21(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_22(int iParam0, int iParam1, bool bParam2)
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
		if (func_17() == 0)
		{
			return MISC::IS_BIT_SET(func_15(func_16(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_23()
{
	if (!func_29())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_24();
}

void func_24()
{
	func_26();
	func_25(0);
}

void func_25(bool bParam0)
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

void func_26()
{
	if (!func_28())
	{
	}
	if (func_29())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_27();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_27()
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

int func_28()
{
	if (!func_29())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_27();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_29()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_30(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312447)
	{
		if (!func_68())
		{
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				Global_1574634[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_65(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_63(iVar1, bParam0);
	if (!func_62(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			Global_1574634[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Global_1574634[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 255)
	{
		iVar3 = func_61(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_59(iVar4))
			{
				func_50(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_44(func_45(59, 0, 0), 0);
	func_40(func_45(135, 0, 0), 1);
	func_38(func_45(22, 0, 0), func_45(73, 0, 0));
	if (func_68())
	{
		if (func_37(77, -1))
		{
			func_36(1);
			func_35(1);
		}
	}
	if (func_34() || func_33())
	{
		func_31(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_9(28, 1, 0);
			func_9(29, 1, 0);
			func_9(30, 1, 0);
			func_9(31, 1, 0);
			func_9(32, 1, 0);
			func_9(33, 1, 0);
			func_9(34, 1, 0);
			func_9(35, 1, 0);
			func_9(36, 1, 0);
			func_9(37, 1, 0);
			func_9(38, 1, 0);
		}
	}
	if (func_45(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_968399 = 0;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_32())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_13(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_32()
{
	return 1;
	return 0;
}

bool func_33()
{
	return Global_1312861;
}

bool func_34()
{
	return Global_1312863;
}

void func_35(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(28, bParam0, 0);
	func_9(30, bParam0, 0);
	func_9(31, bParam0, 0);
	func_9(33, bParam0, 0);
	func_9(34, bParam0, 0);
	func_9(38, bParam0, 0);
}

void func_36(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_9(29, bParam0, 0);
	func_9(32, bParam0, 0);
	func_9(36, bParam0, 0);
	func_9(35, bParam0, 0);
	func_9(37, bParam0, 0);
}

int func_37(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_13(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_9(0, bParam0, 1);
	func_9(1, bParam0, 1);
	func_9(2, bParam0, 1);
	func_9(3, bParam0, 1);
	func_9(4, bParam0, 1);
	func_9(5, bParam0, 1);
	func_9(6, bParam0, 1);
	func_9(7, bParam0, bVar0);
	func_9(8, bParam0, 1);
	func_9(9, bParam0, 1);
	func_9(10, bParam0, 1);
	func_9(11, bParam0, 1);
	func_9(12, bParam0, bVar0);
	func_9(13, bParam0, 1);
	func_9(21, bParam0, 1);
	func_9(14, bParam0, 1);
	func_9(15, bParam0, 1);
	func_9(16, bParam0, 1);
	func_9(17, bParam0, 1);
	func_9(18, bParam0, 1);
	func_9(19, bParam0, 1);
	func_9(20, bParam0, 1);
	func_9(22, bParam0, 1);
	func_9(23, bParam0, 1);
	func_9(24, bParam0, 1);
	func_9(25, bParam0, 1);
	func_9(26, bParam0, 1);
	func_9(27, bParam0, 1);
	func_39(1, !bParam1);
	if (!bVar0)
	{
		func_19(12);
	}
}

void func_39(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_98721.f_9[iParam0] = 1;
	}
	else
	{
		Global_98721.f_9[iParam0] = 0;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_183(0);
	if (Global_262145.f_63 == 1 && func_45(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(44))
		{
			func_19(44);
		}
	}
	if (bParam0)
	{
		if (func_41(0) > 1)
		{
			MISC::SET_BIT(&(Global_2531497.f_1735), 10);
		}
	}
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (Global_1672263[iParam0 /*8*/] == -1)
	{
		iVar0 = func_15(func_43(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_42(iParam0, 0);
			iVar0 = 0;
		}
		Global_1672263[iParam0 /*8*/] = iVar0;
	}
	return Global_1672263[iParam0 /*8*/];
}

void func_42(int iParam0, int iParam1)
{
	Global_1672263[iParam0 /*8*/] = iParam1;
	func_12(func_43(iParam0), iParam1, -1, 1, 0);
}

int func_43(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9471;
		
		default:
	}
	return 9471;
}

void func_44(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = func_183(0);
	func_9(39, bParam0, 0);
	func_9(40, bParam0, 0);
	func_9(41, bParam0, 0);
	if (!bParam0 || (bParam0 && bVar0))
	{
		func_9(43, bParam0, 0);
		func_9(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_20(39))
		{
			func_19(39);
		}
		if (!func_20(40))
		{
			func_19(40);
		}
		if (!func_20(41))
		{
			func_19(41);
		}
		if (!func_20(42))
		{
			func_19(42);
		}
		if (!func_20(43))
		{
			func_19(43);
		}
	}
}

bool func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_47(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_34() || func_33())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_46())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574634[iVar1], iVar0);
}

int func_46()
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1731, 23))
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	iVar0 = Global_1384267[func_13(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2531497.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_68())
	{
		return 0;
	}
	if (func_49())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_725, iVar1);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_49()
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146, 3);
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_58(-1))
			{
				if (!func_68())
				{
					return;
				}
			}
			if (!func_58(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_57() && !func_56())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_55())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_58(-1))
				{
					if (!func_51())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1574634[iVar1]), iVar0);
	}
}

int func_51()
{
	int iVar0;
	
	if (func_54(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = Global_1384267[func_13(-1)];
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		func_52(1);
		return 1;
	}
	return 0;
}

void func_52(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_142, 25))
		{
			func_53(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_142), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_142, 25))
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_142), 25);
	}
}

void func_53(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_48(iParam1);
	iVar1 = uVar0;
	MISC::SET_BIT(&(Global_1590446[iParam0 /*871*/].f_725), iVar1);
}

bool func_54(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 25);
}

int func_55()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_2531497.f_1731, 6))
	{
		return 1;
	}
	iVar0 = Global_1384267[func_13(-1)];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_1731, 6))
		{
			MISC::SET_BIT(&(Global_2531497.f_1731), 6);
		}
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146, 7);
}

int func_57()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(121, -1);
}

bool func_58(int iParam0)
{
	return func_37(123, iParam0);
}

int func_59(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_15(func_60(iParam0), -1, 0);
			if (MISC::IS_BIT_SET(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1200;
		
		case 1:
			return 1201;
		
		case 2:
			return 1202;
		
		case 3:
			return 1203;
		
		case 4:
			return 1204;
		
		case 5:
			return 1206;
		
		case 6:
			return 3815;
		
		case 7:
			return 4018;
		
		case 8:
			return 5472;
		
		default:
	}
	return 1200;
}

int func_61(int iParam0)
{
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
			if (!func_58(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_62(int iParam0)
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(119, iParam0);
}

int func_63(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_64(iParam0, 0);
}

int func_64(int iParam0, int iParam1)
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

int func_65(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_66(iParam0);
}

int func_66(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_13(-1)];
			}
			else if (func_67(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_13(-1)];
	}
	return 0;
}

int func_67(int iParam0)
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

int func_68()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	return func_37(120, -1);
}

void func_69(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146), 18);
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	if (HUD::DOES_BLIP_EXIST(Global_98721.f_235[iParam0]))
	{
	}
}

void func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_73(39, bParam1);
			break;
		
		case 40:
			func_73(40, bParam1);
			break;
		
		case 41:
			func_73(41, bParam1);
			break;
		
		case 42:
			func_73(42, bParam1);
			break;
		
		case 43:
			func_73(43, bParam1);
			break;
		
		case 44:
			func_73(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_22(iParam0, 8, 0))
		{
			func_18(iParam0, 8, 0);
			func_10(iParam0);
		}
	}
	else if (func_22(iParam0, 8, 0))
	{
		func_11(iParam0, 8, 0);
		func_10(iParam0);
	}
}

void func_74()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	switch (vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1)
	{
		case 0:
			if (!MISC::IS_BIT_SET(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!MISC::IS_BIT_SET(iLocal_140, 5))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (MISC::IS_BIT_SET(iLocal_140, 3))
							{
								MISC::CLEAR_BIT(&iLocal_140, 10);
							}
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (MISC::IS_BIT_SET(iLocal_140, 3))
								{
									MISC::CLEAR_BIT(&iLocal_140, 3);
								}
								if (MISC::IS_BIT_SET(iLocal_140, 7))
								{
									MISC::CLEAR_BIT(&iLocal_140, 7);
								}
								if (MISC::IS_BIT_SET(iLocal_140, 8))
								{
									MISC::CLEAR_BIT(&iLocal_140, 8);
								}
								if (MISC::IS_BIT_SET(iLocal_140, 11))
								{
									MISC::CLEAR_BIT(&iLocal_140, 11);
								}
								if (!MISC::IS_BIT_SET(iLocal_140, 2))
								{
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									MISC::CLEAR_BIT(&iLocal_140, 3);
									func_179("FM_CTUT_CAR", 0);
									MISC::SET_BIT(&iLocal_140, 2);
								}
							}
							else
							{
								if (MISC::IS_BIT_SET(iLocal_140, 2))
								{
									MISC::CLEAR_BIT(&iLocal_140, 2);
								}
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								if ((!func_152(iVar0, 0, &uVar1) || !func_151(iVar0)) || func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
								{
									if (func_149())
									{
										func_148(0);
									}
									if (MISC::IS_BIT_SET(iLocal_140, 3))
									{
										MISC::CLEAR_BIT(&iLocal_140, 3);
									}
									if (!MISC::IS_BIT_SET(iLocal_140, 7))
									{
										func_179("FM_CTUT_ANO", 0);
										MISC::SET_BIT(&iLocal_140, 7);
									}
									if (!MISC::IS_BIT_SET(iLocal_140, 8))
									{
										if (func_143())
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
											{
												if (iLocal_148 > 0)
												{
													if (func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
													{
														func_142("FM_CTUT_PRM", -1);
														MISC::SET_BIT(&iLocal_140, 8);
														MISC::SET_BIT(&iLocal_140, 11);
														func_7(&uLocal_145, 0, 0);
													}
													else if (!func_151(iVar0))
													{
														MISC::SET_BIT(&iLocal_140, 8);
														func_142("FM_CTUT_DRI", -1);
													}
													else if (!func_152(iVar0, 0, &uVar1))
													{
														MISC::SET_BIT(&iLocal_140, 8);
														func_142("FM_CTUT_HMD", -1);
													}
												}
											}
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_140, 11))
									{
										if (func_141(&uLocal_145, 30000, 0))
										{
											if (func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
											{
												if (func_143())
												{
													func_142("FM_CTUT_PRM", -1);
													func_140(&uLocal_145);
													func_7(&uLocal_145, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (MISC::IS_BIT_SET(iLocal_140, 7))
									{
										MISC::CLEAR_BIT(&iLocal_140, 7);
									}
									if (!func_149())
									{
										func_148(1);
									}
									if (func_139("FM_CTUT_HMD"))
									{
										HUD::CLEAR_HELP(1);
									}
									if (!func_138() || (func_138() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
									{
										if (!MISC::IS_BIT_SET(iLocal_140, 3))
										{
											func_179("FM_CTUT_MOD", 0);
											MISC::SET_BIT(&iLocal_140, 3);
											func_140(&uLocal_141);
											func_7(&uLocal_141, 0, 0);
											if (!func_137(PLAYER::PLAYER_ID()))
											{
												func_69(1);
											}
											if (iLocal_139 == -1)
											{
												iLocal_139 = func_121(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4, -1);
												if (iLocal_139 != -1)
												{
													func_72(iLocal_139, 1);
													func_71(iLocal_139, 1);
												}
											}
										}
									}
									else if (func_138() && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
									{
										if (!MISC::IS_BIT_SET(iLocal_140, 3))
										{
											MISC::SET_BIT(&iLocal_140, 3);
										}
									}
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_140, 4))
							{
								if (MISC::IS_BIT_SET(iLocal_140, 3))
								{
									if (func_141(&uLocal_141, 10000, 0))
									{
										if (!HUD::IS_PAUSE_MENU_ACTIVE())
										{
											if (!func_120())
											{
												if (func_143())
												{
													MISC::SET_BIT(&iLocal_140, 4);
												}
											}
										}
									}
								}
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_140, 10))
							{
								if (!MISC::IS_BIT_SET(iLocal_140, 9))
								{
									func_179("FM_IHELP_LCP", 0);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
									MISC::CLEAR_BIT(&iLocal_140, 3);
									MISC::CLEAR_BIT(&iLocal_140, 2);
									MISC::CLEAR_BIT(&iLocal_140, 7);
									MISC::CLEAR_BIT(&iLocal_140, 8);
									MISC::SET_BIT(&iLocal_140, 10);
								}
							}
							if (func_149())
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										if ((!func_152(iVar0, 0, &uVar2) || !func_151(iVar0)) || func_150(ENTITY::GET_ENTITY_MODEL(iVar0)))
										{
											func_148(0);
										}
									}
									else
									{
										func_148(0);
									}
								}
							}
						}
					}
					if (MISC::IS_BIT_SET(iLocal_140, 3) || (func_138() && MISC::IS_BIT_SET(iLocal_140, 10)))
					{
						if (func_138())
						{
							if (((func_139("FM_IHELP_CAR") || func_139("FM_IHELP_MOD")) || func_139("FM_CMOD_GPS")) || func_139("FM_CMOD_STOL"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (func_117("FM_IHELP_LCP"))
							{
								func_23();
							}
							if (!MISC::IS_BIT_SET(iLocal_140, 9))
							{
								if (func_115())
								{
									MISC::SET_BIT(&iLocal_140, 9);
									MISC::SET_BIT(&(Global_2531497.f_1729), 25);
									if (func_117("FM_CTUT_MOD"))
									{
										func_23();
									}
								}
							}
							if (func_114())
							{
								if (!MISC::IS_BIT_SET(Global_2531497.f_1729, 25))
								{
									MISC::SET_BIT(&(Global_2531497.f_1729), 25);
								}
								if (!func_113(PLAYER::PLAYER_ID()))
								{
									if (!func_112(PLAYER::PLAYER_ID()))
									{
										func_111(1);
										iLocal_147 = 1;
										func_30(1);
									}
								}
								if ((func_117("FM_CTUT_RSP") || func_117("FM_IHELP_PTRK")) || func_117("FM_IHELP_PINS"))
								{
									func_23();
								}
							}
							else if (MISC::IS_BIT_SET(iLocal_140, 9))
							{
								if (func_110(PLAYER::PLAYER_ID()) || (!func_108() && func_107()))
								{
									iVar3 = func_104(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
									if (iVar3 > 0)
									{
										if (!func_117("FM_CTUT_REP"))
										{
											func_179("FM_CTUT_REP", 0);
										}
									}
									else if (!func_102())
									{
										if (!func_117("FM_CTUT_RSP"))
										{
											func_179("FM_CTUT_RSP", 0);
										}
									}
									else if (!func_100())
									{
										if (!func_117("FM_IHELP_PTRK"))
										{
											func_179("FM_IHELP_PTRK", 0);
										}
									}
									else if (!func_97())
									{
										if (!func_117("FM_IHELP_PINS"))
										{
											func_179("FM_IHELP_PINS", 0);
										}
									}
								}
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_140, 9))
						{
							if (!func_114())
							{
								if (CAM::IS_SCREEN_FADED_IN())
								{
									MISC::CLEAR_BIT(&iLocal_140, 9);
									MISC::CLEAR_BIT(&iLocal_140, 3);
									MISC::CLEAR_BIT(&iLocal_140, 10);
									func_23();
									iLocal_139 = -1;
									func_85(PLAYER::PLAYER_ID(), 1, 0, 0);
								}
							}
							else if (!MISC::IS_BIT_SET(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
							{
								MISC::SET_BIT(&(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2), 0);
							}
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_140, 9))
					{
						MISC::CLEAR_BIT(&iLocal_140, 9);
						MISC::CLEAR_BIT(&iLocal_140, 3);
						MISC::CLEAR_BIT(&iLocal_140, 10);
						func_23();
						iLocal_139 = -1;
					}
					if (!MISC::IS_BIT_SET(iLocal_140, 5))
					{
						if (((func_82(PLAYER::PLAYER_ID(), 1, 0) || func_81()) || func_80() > 0) || (!func_78() && !func_138()))
						{
							MISC::SET_BIT(&iLocal_140, 5);
							func_23();
						}
					}
					else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || func_138())
					{
						if (CAM::IS_SCREEN_FADED_IN())
						{
							if ((((!func_82(PLAYER::PLAYER_ID(), 1, 0) && !func_81()) && func_80() == 0) && func_78()) || func_138())
							{
								if (!func_77(&uLocal_143))
								{
									func_7(&uLocal_143, 0, 0);
								}
								else if (func_141(&uLocal_143, 7000, 0) || func_138())
								{
									MISC::CLEAR_BIT(&iLocal_140, 5);
									MISC::CLEAR_BIT(&iLocal_140, 2);
									MISC::CLEAR_BIT(&iLocal_140, 3);
									MISC::CLEAR_BIT(&iLocal_140, 7);
									MISC::CLEAR_BIT(&iLocal_140, 10);
									func_140(&uLocal_143);
									if (iLocal_139 != -1)
									{
										func_72(iLocal_139, 0);
										func_71(iLocal_139, 0);
										iLocal_139 = -1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
	if (!MISC::IS_BIT_SET(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 1))
	{
		if (func_76())
		{
			func_8();
		}
		else
		{
			func_75();
		}
	}
}

void func_75()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (func_138())
	{
		return;
	}
	switch (iLocal_148)
	{
		case 0:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_142("FM_IHELP_CAR", -1);
				iLocal_148++;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_142("FM_IHELP_MOD", -1);
					iLocal_148++;
				}
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(iLocal_140, 3))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_77(&uLocal_149))
							{
								func_7(&uLocal_149, 0, 0);
							}
							else if (func_141(&uLocal_149, 1000, 0))
							{
								func_142("FM_CMOD_GPS", -1);
								iLocal_148++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_141(&uLocal_149, 1000, 0))
					{
						func_142("FM_CMOD_STOL", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!func_77(&uLocal_149))
					{
						func_7(&uLocal_149, 0, 0);
					}
					else if (func_141(&uLocal_149, 5000, 0))
					{
						func_142("FM_IHELP_BLP", -1);
						iLocal_148++;
					}
				}
			}
			break;
		
		case 5:
			if (MISC::IS_BIT_SET(iLocal_140, 3))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_148++;
				}
			}
			break;
	}
}

int func_76()
{
	if (MISC::IS_BIT_SET(vLocal_138[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2, 0))
	{
		return 1;
	}
	return 0;
}

bool func_77(var uParam0)
{
	return uParam0->f_1;
}

int func_78()
{
	if (func_79() == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	return Global_1312467.f_18;
}

int func_80()
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_197;
}

bool func_81()
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_83(iParam0))
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

bool func_83(int iParam0)
{
	return func_84(iParam0);
}

bool func_84(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_96())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		bVar24 = iParam2 & 16777216 != false;
		if (!func_78())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			iVar26 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_94(PLAYER::PLAYER_ID(), 0) && !func_93()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_90(0, 0, 0);
				if (bVar24)
				{
					STREAMING::CLEAR_FOCUS();
				}
				if (!func_89(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar26, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar26))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar26, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar26, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar26, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar26, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar26) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar26))
				{
					PED::_0x4668D80430D6C299(iVar26);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar26, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_88();
					func_87();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_89(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar26, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar26))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar26, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar26, 1);
						}
					}
					if (func_86(Global_4456448.f_190930))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar26, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar26) && !PED::IS_PED_IN_ANY_VEHICLE(iVar26, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar27);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_88()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_92();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_94(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_91(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_93()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_96()
{
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (Global_98721.f_1423)
	{
		return 1;
	}
	if (func_98() >= 0)
	{
		if (MISC::IS_BIT_SET(Global_1323611[func_98() /*141*/].f_102, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_98()
{
	if (Global_2097152[func_99() /*10828*/].f_6168.f_2 >= 281)
	{
		Global_2097152[func_99() /*10828*/].f_6168.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_99() /*10828*/].f_6168.f_2;
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_100()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_101(iVar0, 1) || Global_98721.f_1422)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, bool bParam1)
{
	if (Global_76577)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_103(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_103(int iParam0)
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_104(int iParam0)
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
	int iVar11;
	
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (VEHICLE::_IS_VEHICLE_DAMAGED(iParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 1))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, 1))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, 0))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, 0))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	if (VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, 0))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::_0x5DB8010EE71FDEF2(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_106(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11551));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11551)))
		{
			iVar4 = Global_262145.f_11549;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11550)
		{
			iVar0 = Global_262145.f_11550;
		}
	}
	else if (func_105(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11554));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11554)))
		{
			iVar4 = Global_262145.f_11552;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11553)
		{
			iVar0 = Global_262145.f_11553;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_105(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14207)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14208)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14206)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14209)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14211)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14210)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18657)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18659)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18663)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18660)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18667)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18665)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18670)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20613)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20614)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

bool func_107()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_108()
{
	if (((((func_109(39) || func_109(40)) || func_109(41)) || func_109(42)) || func_109(43)) || func_109(44))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	return func_22(iParam0, 20, 1);
}

bool func_110(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_146, 19);
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_146), 20);
	}
}

bool func_112(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_146, 20);
}

bool func_113(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_146, 21);
}

int func_114()
{
	if (!func_100())
	{
		return 0;
	}
	if (!func_97())
	{
		return 0;
	}
	if (!func_102())
	{
		return 0;
	}
	return 1;
}

int func_115()
{
	if (((((func_116(39) || func_116(40)) || func_116(41)) || func_116(42)) || func_116(43)) || func_116(44))
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
{
	return func_22(iParam0, 6, 1);
}

int func_117(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_118(sParam0);
}

bool func_118(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_119(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_119(char* sParam0)
{
	if (!func_29())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

bool func_120()
{
	return Global_1312873;
}

int func_121(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam1 == 6 || iParam1 == func_21(iVar0))
		{
			iVar4 = iVar0;
			if (func_136(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_122(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_122(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_133(Global_100764);
			break;
		
		case 46:
			if (Global_1590285 != func_132())
			{
				if (func_131(Global_1590285))
				{
					return func_124(2, 2);
				}
				else if (func_123(Global_1590285))
				{
					return func_124(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696181;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_123(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_124(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590285 != func_132())
	{
		if (iParam1 == 3)
		{
			if (func_125(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 4))
			{
				if (func_125(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 5))
			{
				if (func_125(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_125(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_130(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_130(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_128(iParam0) };
	}
	else
	{
		Var2 = { func_127(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_126(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_126(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_126(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_127(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_128(int iParam0)
{
	return func_129(iParam0);
}

struct<6> func_129(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 != func_132())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_132()
{
	return -1;
}

Vector3 func_133(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_134() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_134()
{
	return func_135(PLAYER::PLAYER_ID());
}

var func_135(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

bool func_136(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[43]);
			break;
		
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_98721.f_235[44]);
			break;
	}
	return bVar0;
}

bool func_137(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_146, 18);
}

int func_138()
{
	if (((((func_20(39) || func_20(40)) || func_20(41)) || func_20(42)) || func_20(43)) || func_20(44))
	{
		return 1;
	}
	return 0;
}

bool func_139(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_140(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_141(var uParam0, int iParam1, bool bParam2)
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

void func_142(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_143()
{
	if (((((((((((((!func_4(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_147(8, -1)) || func_147(15, -1)) || func_146()) || func_147(3, -1)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_82(PLAYER::PLAYER_ID(), 1, 0)) || func_81()) || func_107()) || func_145()) || func_144()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	return 1;
}

var func_144()
{
	return Global_2437549.f_3032.f_578;
}

bool func_145()
{
	return Global_98721.f_346 > 0;
}

var func_146()
{
	return Global_2394809;
}

bool func_147(int iParam0, int iParam1)
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

void func_148(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2531497.f_1732), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1732), 4);
	}
}

bool func_149()
{
	return MISC::IS_BIT_SET(Global_2531497.f_1732, 4);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case 1234311532:
		case -1405937764:
		case 719660200:
		case -982130927:
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 884483972:
		case -1210451983:
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -212993243:
		case 447548909:
		case 1561920505:
		case -1848994066:
		case 1741861769:
		case 1104234922:
		case 1871995513:
		case 1352136073:
		case -313185164:
		case -2079788230:
		case 600450546:
		case -410205223:
		case 867799010:
		case -1529242755:
		case 903794909:
		case -1532697517:
		case 15219735:
		case 661493923:
		case 838982985:
		case -391595372:
		case -121446169:
		case 1909189272:
		case 1617472902:
		case -1267543371:
		case 931280609:
		case 1046206681:
		case -1259134696:
		case 1115909093:
		case 1031562256:
		case -376434238:
		case -986944621:
		case -1134706562:
		case -2120700196:
		case -214906006:
		case -988501280:
		case 1254014755:
		case -726768679:
		case 1945374990:
		case 1653666139:
		case 219613597:
		case 2069146067:
		case -638562243:
		case -54332285:
		case 2044532910:
		case -420911112:
		case 321186144:
		case 500482303:
		case -1988428699:
		case 1692272545:
		case 345756458:
		case -307958377:
		case -1566607184:
		case 1591739866:
		case 1279262537:
		case -2096690334:
		case -1146969353:
		case -507495760:
		case -1168952148:
		case -49115651:
		case 1456744817:
		case 1721676810:
		case 1009171724:
		case 668439077:
		case -801550069:
		case -688189648:
		case 444994115:
		case 628003514:
		case -331467772:
		case -27326686:
		case -2061049099:
		case 2139203625:
		case 1637620610:
		case -755532233:
		case -1374500452:
		case -1812949672:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
		case -286046740:
		case 540101442:
		case -1349095620:
		case 686471183:
		case 310284501:
		case 722226637:
		case 1934384720:
		case -362150785:
		case 1854776567:
		case -664141241:
		case -941272559:
		case -882629065:
		case -1620126302:
		case -1829436850:
		case -324618589:
		case 1044193113:
		case 1862507111:
		case -682108547:
		case 1323778901:
		case -1804415708:
		case 916547552:
		case -447711397:
		case 1416466158:
		case -208911803:
		case 1118611807:
		case 409049982:
		case 340154634:
		case -1132721664:
		case -834353991:
		case 83136452:
		case 987469656:
		case 1284356689:
		case 1456336509:
		case -1756021720:
		case 872704284:
		case 394110044:
		case 408825843:
		case 740289177:
		case 301304410:
		case 2031587082:
		case -1960756985:
		case 1693751655:
			return 1;
			break;
	}
	if (iParam0 == 960812448)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_152(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_177(iVar0, bParam1, uParam2) && !func_176(PLAYER::PLAYER_ID())) && !func_161(iParam0))
	{
		return 0;
	}
	if (func_176(PLAYER::PLAYER_ID()))
	{
		if (func_160(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_159(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_157(iParam0)) && !bVar1) && !(func_156(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_154(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_153(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_153(int iParam0)
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

int func_154(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
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

int func_156(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_158(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case -1254331310:
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (func_175(PLAYER::PLAYER_ID()) || func_174(PLAYER::PLAYER_ID()))
	{
		if (func_162(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_165(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (func_163(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
				case 1416466158:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_164(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_165(int iParam0, bool bParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_167(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2531497.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_166(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_166(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437549.f_627[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_167(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_106(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_173();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14207)
			{
				return func_172();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14208)
			{
				return func_172();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14206)
			{
				return func_172();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14209)
			{
				return func_172();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14211)
			{
				return func_172();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_171();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18657)
			{
				return func_170();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18659)
			{
				return func_170();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18663)
			{
				return func_170();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18660)
			{
				return func_170();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18667)
			{
				return func_170();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18665)
			{
				return func_170();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18670)
			{
				return func_170();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20613)
			{
				return func_169();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20614)
			{
				return func_169();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_168();
			break;
		
		case joaat("glendale"):
			return func_168();
			break;
		
		case -2096690334:
			return func_168();
			break;
		
		case 931280609:
			return func_168();
			break;
		
		case joaat("gargoyle"):
			return func_168();
			break;
		
		case joaat("dominator"):
			return func_168();
			break;
		
		case joaat("dominator2"):
			return func_168();
			break;
		
		case 444994115:
			return func_168();
			break;
		
		case 1637620610:
			return func_168();
			break;
		
		case -755532233:
			return func_168();
			break;
		
		case -27326686:
			return func_168();
			break;
		
		case -1812949672:
			return func_168();
			break;
		
		case -1374500452:
			return func_168();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_168();
			break;
	}
	return 0;
}

bool func_168()
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

bool func_169()
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

bool func_170()
{
	return DLC::IS_DLC_PRESENT(-957277403);
}

bool func_171()
{
	return DLC::IS_DLC_PRESENT(210122941);
}

bool func_172()
{
	return DLC::IS_DLC_PRESENT(-1894522408);
}

bool func_173()
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

int func_174(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_132())
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_132())
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 != func_132())
	{
		if (func_4(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_155(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_177(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_159(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if ((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && iParam0 != 916547552) && iParam0 != 301304410) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_178(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_179(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_118(sParam0))
	{
		return;
	}
	func_24();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_182();
	func_181(bParam1);
	func_180();
}

void func_180()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_181(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_182()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

int func_183(bool bParam0)
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	if (func_33())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_1726, 26))
		{
			iVar0 = func_15(1191, -1, 0);
			if (!MISC::IS_BIT_SET(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_37(122, -1);
}

int func_184()
{
	return vLocal_61.x;
}

int func_185(int iParam0)
{
	return vLocal_138[iParam0 /*3*/];
}

void func_186()
{
	func_23();
	func_70(10, 0);
	if (func_55())
	{
		func_188();
	}
	if (iLocal_139 != -1)
	{
		func_72(iLocal_139, 0);
		func_71(iLocal_139, 0);
	}
	if (!func_183(0))
	{
		if (func_112(PLAYER::PLAYER_ID()) || iLocal_147)
		{
			func_31(122, 1, -1, 1);
		}
	}
	func_69(0);
	func_187();
}

void func_187()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_188()
{
	if (!func_195(1, -1))
	{
		func_193(1, -1);
	}
	if (func_120() && func_17() == 0)
	{
	}
	else
	{
		NETWORK::NETWORK_BLOCK_INVITES(0);
	}
	if (func_192(1))
	{
		NETWORK::_0x4A9FDE3A5A6D0437(1);
	}
	else
	{
		NETWORK::_0x4A9FDE3A5A6D0437(0);
	}
	Global_2448961.f_643 = 0;
	if (func_189())
	{
		if (!func_37(133, -1))
		{
			func_31(133, 1, -1, 1);
		}
	}
}

int func_189()
{
	if (func_191() && func_190(0))
	{
		return 1;
	}
	return 0;
}

var func_190(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_191()
{
	return func_190(func_14() + 1);
}

bool func_192(int iParam0)
{
	return Global_1662701.f_16[iParam0 /*44*/].f_3;
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	Global_1384128 = 0;
	if (MISC::ARE_PROFILE_SETTINGS_VALID() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			iVar1 = func_194(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		
		default:
			iVar1 = func_194(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			func_31(121, 0, iParam1, 1);
			func_31(122, 0, iParam1, 1);
			func_31(125, 0, iParam1, 1);
			func_12(1303, 0, iParam1, 1, 0);
			func_12(7233, 0, iParam1, 1, 0);
			break;
	}
}

int func_194(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

bool func_195(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = func_194(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

int func_196()
{
	var uVar0;
	
	func_203(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_202())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_201())
	{
		return 1;
	}
	if (func_200(159))
	{
		if (!func_199())
		{
			return 1;
		}
	}
	if (func_200(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_197() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_197()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_197()
{
	switch (func_17())
	{
		case 0:
			return func_198();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_198()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_199()
{
	return Global_2448961.f_598;
}

int func_200(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_201()
{
	return Global_2458999;
}

bool func_202()
{
	return Global_2448961.f_593;
}

void func_203(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
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
					func_204(iVar0);
					break;
				
				case -498955166:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_204(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_4(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_205(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_205(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
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

void func_206()
{
	SYSTEM::WAIT(0);
}

void func_207(struct<21> Param0)
{
	func_213(func_214(Param0), Param0);
	func_211(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&vLocal_61, 78);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_138, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_210())
	{
		func_186();
	}
	func_70(10, 1);
	func_208();
}

void func_208()
{
	NETWORK::NETWORK_BLOCK_INVITES(1);
	func_209(1, -1);
	NETWORK::_0x4A9FDE3A5A6D0437(1);
	if (func_37(133, -1))
	{
		func_31(133, 0, -1, 1);
	}
	Global_2448961.f_643 = 1;
}

void func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x0D01D20616FC73FB(0, iParam1);
			break;
		
		default:
			iVar1 = func_194(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x0D01D20616FC73FB(iVar0, iParam1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			func_31(120, 0, iParam1, 1);
			func_31(124, 0, iParam1, 1);
			func_31(115, 0, iParam1, 1);
			func_31(119, 0, iParam1, 1);
			break;
	}
}

int func_210()
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
		if (func_202())
		{
			return 0;
		}
		if (func_200(157))
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

int func_211(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_187();
			}
			else
			{
				return 0;
			}
		}
		if (!func_212())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_187();
					}
					else
					{
						return 0;
					}
				}
				if (func_202())
				{
					if (!bParam2)
					{
						func_187();
					}
					else
					{
						return 0;
					}
				}
				if (func_200(157))
				{
					if (!bParam2)
					{
						func_187();
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
					func_187();
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
				func_187();
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
			func_187();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_212()
{
	return Global_1312850;
}

void func_213(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_187();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_214(int iParam0)
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

