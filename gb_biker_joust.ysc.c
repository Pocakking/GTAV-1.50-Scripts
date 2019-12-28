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
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = -1;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<20> Local_121[32];
	vector3 vLocal_762[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	var uLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885[4] = { 0, 0, 0, 0 };
	var uLocal_890[2] = { 0, 0 };
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	struct<8> Local_896 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	struct<8> Local_912 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930[4] = { 0, 0, 0, 0 };
	struct<35> Local_935 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_970[32];
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
	iLocal_112 = Global_262145.f_18286;
	iLocal_879 = AUDIO::GET_SOUND_ID();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_997(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_946(ScriptParam_0))
			{
				func_889(0, 1);
				func_822();
			}
		}
		else
		{
			func_822();
		}
	}
	else
	{
		func_889(0, 1);
		func_822();
	}
	while (true)
	{
		func_821();
		if (func_816(1))
		{
			func_889(0, 1);
			func_822();
		}
		if (func_808())
		{
			func_889(0, 1);
			func_822();
		}
		func_804();
		func_802();
		func_801();
		func_798();
		func_797();
		func_791();
		switch (func_790(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_789() == 1)
				{
					if (func_781())
					{
						func_780(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_789() == 1)
				{
					func_50();
				}
				else if (func_789() == 3)
				{
					func_780(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_822();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_33();
			if (func_32())
			{
				func_889(0, 1);
				func_31(3);
			}
			switch (func_789())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_822();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1D9
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			STATS::_0x6DEE77AFF8C21BD1(&(Local_935.f_33), &(Local_935.f_34));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_935.f_5)))
				{
					func_4(&(Local_935.f_5), 0, 0);
				}
				else if (func_2(&(Local_935.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)//Position - 0x2D4
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

int func_3()//Position - 0x332
{
	return (1000 * Global_262145.f_18275);
}

void func_4(var uParam0, bool bParam1, bool bParam2)//Position - 0x345
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

bool func_5(var uParam0)//Position - 0x38A
{
	return uParam0->f_1;
}

void func_6()//Position - 0x396
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!MISC::IS_BIT_SET(Local_935.f_32, iVar1))
		{
			vVar2 = { func_12(iVar1) };
			if (!func_11(vVar2, 0f, 0f, 0f, 0))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_935.f_19[iVar1]))
				{
					if (func_8(&(uLocal_930[iVar1]), &(Local_935.f_19[iVar1]), vVar2, 1))
					{
						MISC::SET_BIT(&(Local_935.f_32), iVar1);
						if (!func_5(&uLocal_880))
						{
							func_4(&uLocal_880, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_880, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (MISC::IS_BIT_SET(Local_935.f_32, iVar1))
			{
				MISC::CLEAR_BIT(&(Local_935.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_880);
	}
}

void func_7(var uParam0)//Position - 0x477
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, vector3 vParam2, int iParam5)//Position - 0x484
{
	int iVar0;
	int iVar1;
	
	if (!func_10(vParam2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			MISC::SET_BIT(&iVar1, 0);
			MISC::SET_BIT(&iVar1, 1);
			MISC::SET_BIT(&iVar1, 9);
			MISC::SET_BIT(&iVar1, 4);
			*uParam0 = OBJECT::CREATE_AMBIENT_PICKUP(-301062413, vParam2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam5, 1);
			*uParam1 = NETWORK::OBJ_TO_NET(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)//Position - 0x4F3
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_10(vector3 vParam0)//Position - 0x511
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x53B
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_12(int iParam0)//Position - 0x582
{
	switch (Local_935.f_31)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()//Position - 0x6E7
{
	switch (Local_935.f_31)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)//Position - 0x718
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_935.f_14 = iParam0;
}

void func_15(int iParam0)//Position - 0x732
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_935.f_1), iParam0);
}

bool func_16()//Position - 0x750
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)//Position - 0x769
{
	return MISC::IS_BIT_SET(Local_935.f_1, iParam0);
}

void func_18()//Position - 0x77C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_935.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_935.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_935.f_9)))
			{
				func_7(&(Local_935.f_9));
			}
			if (!func_5(&(Local_935.f_7)))
			{
				func_4(&(Local_935.f_7), 0, 0);
				if (Local_935.f_4 > 0)
				{
					iVar2 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), (-1 * Local_935.f_4));
					func_20(&(Local_935.f_7), iVar2);
					Local_935.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_935.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_935.f_7)))
				{
					Local_935.f_4 = func_22(&(Local_935.f_7), 0, 0);
				}
			}
			else
			{
				Local_935.f_4 = 0;
			}
			if (func_5(&(Local_935.f_7)))
			{
				func_7(&(Local_935.f_7));
			}
			if (!func_5(&(Local_935.f_9)))
			{
				func_4(&(Local_935.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_935.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_935.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()//Position - 0x8F7
{
	return 600000;
}

void func_20(var uParam0, int iParam1)//Position - 0x903
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()//Position - 0x915
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)//Position - 0x920
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

int func_23()//Position - 0x967
{
	return 180000;
}

var func_24()//Position - 0x973
{
	return (func_17(8) || func_17(9));
}

int func_25()//Position - 0x98D
{
	return Local_935.f_14;
}

void func_26(int iParam0)//Position - 0x99A
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_935.f_13 = iParam0;
}

int func_27()//Position - 0x9B4
{
	return Local_935.f_13;
}

bool func_28()//Position - 0x9C1
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_935.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_935.f_31 = 1;
			}
			else
			{
				Local_935.f_31 = 2;
			}
		}
		else
		{
			Local_935.f_31 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		if (Global_262145.f_18280)
		{
			if (Local_935.f_31 == 0)
			{
				if (!Global_262145.f_18281)
				{
					Local_935.f_31 = 1;
				}
				else
				{
					Local_935.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_18281)
		{
			if (Local_935.f_31 == 1)
			{
				if (!Global_262145.f_18282)
				{
					Local_935.f_31 = 2;
				}
				else
				{
					Local_935.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_18282)
		{
			if (Local_935.f_31 == 2)
			{
				if (!Global_262145.f_18281)
				{
					Local_935.f_31 = 0;
				}
				else
				{
					Local_935.f_31 = 1;
				}
			}
		}
		Local_935.f_15 = PLAYER::PLAYER_ID();
		Local_935.f_16[0] = PLAYER::PLAYER_ID();
		Local_935.f_24[0] = iLocal_112;
		Local_935.f_16[1] = func_29();
		Local_935.f_24[1] = iLocal_112;
		func_15(1);
	}
	return func_17(1);
}

int func_29()//Position - 0xADC
{
	return -1;
}

int func_30()//Position - 0xAE5
{
	return Global_2531497.f_4898.f_337;
}

void func_31(int iParam0)//Position - 0xAF7
{
	Local_935 = iParam0;
}

int func_32()//Position - 0xB04
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

void func_33()//Position - 0xB27
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_935 != 3)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (!func_47(iVar13, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_935.f_16[1] == func_29())
						{
							if (func_45(iVar13))
							{
								if (iVar13 != Local_935.f_15)
								{
									Local_935.f_16[1] = iVar13;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar13 == Local_935.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar13 == Local_935.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar13 == Local_935.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar13 == Local_935.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!MISC::IS_BIT_SET(Local_935.f_2, iVar0))
							{
								iVar5++;
								MISC::SET_BIT(&(Local_935.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (MISC::IS_BIT_SET(Local_935.f_2, iVar0))
						{
							MISC::CLEAR_BIT(&(Local_935.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_970[iVar0 /*6*/].f_3 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar7[iVar11] = (iVar7[iVar11] + Local_970[iVar0 /*6*/].f_3);
						}
						if (Local_970[iVar0 /*6*/].f_4 > 0)
						{
							iVar11 = func_34(iVar13);
							iVar12 = (1 - iVar11);
							iVar7[iVar12] = (iVar7[iVar12] + Local_970[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar13))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar10++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar10++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_935.f_11)))
			{
				func_4(&(Local_935.f_11), 0, 0);
			}
			else if (func_2(&(Local_935.f_11), 10000, 0))
			{
				if (iVar10 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar16 = iVar7[1];
			iVar15 = (iLocal_112 - iVar16);
			Local_935.f_27[0] = iVar7[0];
			Local_935.f_27[1] = iVar7[1];
			if (Local_935.f_24[0] != iVar15)
			{
				iVar14 = 0;
				if (Local_935.f_24[0] < iVar15)
				{
					iVar14 = (iVar15 - Local_935.f_24[0]);
				}
				Local_935.f_24[0] = (iVar15 - iVar14);
			}
			iVar16 = iVar7[0];
			iVar15 = (iLocal_112 - iVar16);
			if (Local_935.f_24[1] != iVar15)
			{
				iVar14 = 0;
				if (Local_935.f_24[1] < iVar15)
				{
					iVar14 = (iVar15 - Local_935.f_24[1]);
				}
				Local_935.f_24[1] = (iVar15 - iVar14);
			}
			if (Local_935.f_27[0] >= iLocal_112)
			{
				Local_935.f_30 = 0;
			}
			else if (Local_935.f_27[1] >= iLocal_112)
			{
				Local_935.f_30 = 1;
			}
			if (iVar10 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_935.f_30 == -1)
			{
				if (Local_935.f_27[0] == Local_935.f_27[1])
				{
					Local_935.f_30 = 99;
				}
				else if (Local_935.f_27[0] > Local_935.f_27[1])
				{
					Local_935.f_30 = 0;
				}
				else
				{
					Local_935.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_935.f_3 != iVar5)
	{
		Local_935.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_935.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)//Position - 0xFC0
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)//Position - 0xFE2
{
	return func_36() == iParam0;
}

int func_36()//Position - 0xFF1
{
	return Local_935.f_15;
}

int func_37(int iParam0)//Position - 0xFFE
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x1011
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1024
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			if (iParam1 == Global_1628955[iParam0 /*614*/].f_11)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)//Position - 0x1087
{
	if (func_41(iParam0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x10AD
{
	if (iParam0 != func_29())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)//Position - 0x10E2
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					if (Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)//Position - 0x113A
{
	MISC::CLEAR_BIT(&(Local_935.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)//Position - 0x114D
{
	return MISC::IS_BIT_SET(Local_970[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)//Position - 0x1164
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)//Position - 0x1173
{
	if (iParam0 != func_29())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x11C2
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_48(-1, 0) == 8;
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

int func_48(int iParam0, bool bParam1)//Position - 0x120D
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

int func_49()//Position - 0x124E
{
	return Global_1312745;
}

void func_50()//Position - 0x125A
{
	if (iLocal_875 > -1)
	{
		if ((!func_775() && !func_774()) && !func_773(179))
		{
			if (func_737(1, 1, 1, 0))
			{
				switch (Local_970[iLocal_875 /*6*/].f_5)
				{
					case 0:
						if (!func_736(2))
						{
							func_715(179, 1, -1, 0);
							iLocal_894 = func_714(PLAYER::PLAYER_ID());
							StringCopy(&Local_896, func_713(), 64);
							func_712(2);
						}
						if (!func_736(4))
						{
							func_628(-1, 0, 0, -1, 0, 0);
							func_712(4);
						}
						if (Local_935.f_13 > 0)
						{
							if (Local_935.f_13 > 1)
							{
								Local_970[iLocal_875 /*6*/].f_5 = 4;
							}
							else
							{
								Local_970[iLocal_875 /*6*/].f_5 = Local_935.f_13;
							}
						}
						break;
					
					case 1:
						func_586();
						func_585();
						func_562();
						func_548();
						if (Local_935.f_13 != 1)
						{
							if (func_44(NETWORK::PARTICIPANT_ID(), 1))
							{
								func_538(1);
								Local_970[iLocal_875 /*6*/].f_5 = Local_935.f_13;
							}
							else
							{
								func_531();
								Local_970[iLocal_875 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_586();
						func_530();
						PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 345, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 346, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 347, 1);
						if (func_44(NETWORK::PARTICIPANT_ID(), 1) || func_44(NETWORK::PARTICIPANT_ID(), 2))
						{
							if (!func_44(NETWORK::PARTICIPANT_ID(), 6))
							{
								func_529(1);
							}
							func_548();
						}
						func_524();
						if (Local_935.f_13 != 2)
						{
							func_523(&iLocal_115);
							Local_970[iLocal_875 /*6*/].f_5 = Local_935.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_935.f_5)))
						{
							func_516((func_3() - func_22(&(Local_935.f_5), 0, 0)), func_25() != 0, &iLocal_113, -1);
						}
						if (!func_736(3))
						{
							if (func_2(&(Local_935.f_5), 10000, 0))
							{
								func_515();
								func_712(3);
							}
						}
						if (func_25() == 0)
						{
							func_586();
							func_514();
							func_513();
							func_512();
							if (func_511())
							{
								if (Local_970[iLocal_875 /*6*/].f_5 == 3)
								{
									func_510();
								}
							}
							if (iLocal_875 > -1)
							{
								if (iLocal_875 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									func_524();
									func_389(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
								}
							}
						}
						if (Local_935.f_13 != 3)
						{
							Local_970[iLocal_875 /*6*/].f_5 = Local_935.f_13;
						}
						break;
					
					case 4:
						if (Local_935.f_13 > 4)
						{
							Local_970[iLocal_875 /*6*/].f_5 = Local_935.f_13;
						}
						break;
					
					case 5:
						func_531();
						func_83();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()//Position - 0x1532
{
	int iVar0;
	
	if (!func_736(5))
	{
		func_531();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 4))
			{
				func_82(4);
				func_80(1);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_883))
		{
			HUD::REMOVE_BLIP(&iLocal_883);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_882))
		{
			HUD::REMOVE_BLIP(&iLocal_882);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_884))
		{
			HUD::REMOVE_BLIP(&iLocal_884);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_885[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_885[iVar0]));
			}
			iVar0++;
		}
		func_70();
		func_68();
		func_67();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		func_523(&iLocal_115);
		func_52();
		func_712(5);
	}
}

void func_52()//Position - 0x1618
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)//Position - 0x1626
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x163E
{
	if (bParam0)
	{
		if (func_66())
		{
			func_65();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_68();
		func_58(8, 0, 0, 0, 0);
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
		func_55();
	}
}

void func_55()//Position - 0x1729
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_68();
		func_58(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_56()//Position - 0x1771
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_57()//Position - 0x17B9
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x17F8
{
	if (Global_2437549.f_1893.f_690.f_16 != func_29())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_59())
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

int func_59()//Position - 0x1897
{
	if (((((func_63(PLAYER::PLAYER_ID()) == 229 || func_63(PLAYER::PLAYER_ID()) == 191) || func_62()) || func_61()) || func_60(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)//Position - 0x18F3
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

var func_61()//Position - 0x195F
{
	return Global_1574402;
}

int func_62()//Position - 0x196B
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x1980
{
	if (func_64(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_64(int iParam0, int iParam1)//Position - 0x19A3
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_65()//Position - 0x19DE
{
	if (func_57())
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

int func_66()//Position - 0x1A4C
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_67()//Position - 0x1A8B
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405071.f_1745[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405071.f_1744 = 0;
}

void func_68()//Position - 0x1ABF
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	func_69();
	Global_2405071.f_704 = 0;
}

void func_69()//Position - 0x1AE8
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

void func_70()//Position - 0x1B23
{
	int iVar0;
	int iVar1;
	
	if (!func_736(8))
	{
		func_712(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (MISC::IS_BIT_SET(iLocal_876, iVar0))
					{
						func_78(iVar1, 432, 0, 0);
						func_71(iVar1, func_77(iLocal_895), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_71(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1B8E
{
	var uVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_72(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x1BE0
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

int func_73(int iParam0)//Position - 0x1CA5
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_74())
	{
		return 1;
	}
	return 0;
}

int func_74()//Position - 0x1CCE
{
	switch (func_76())
	{
		case 0:
			return func_75();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_75()//Position - 0x1D01
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_76()//Position - 0x1D25
{
	return Global_30736;
}

int func_77(int iParam0)//Position - 0x1D30
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

void func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1F98
{
	bool bVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_79();
		}
	}
}

void func_79()//Position - 0x1FF3
{
	Global_2416074.f_1515 = 1;
}

void func_80(bool bParam0)//Position - 0x2003
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_81())
		{
			if (func_997(PLAYER::PLAYER_ID(), 1, 0))
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
			if (func_997(PLAYER::PLAYER_ID(), 1, 1))
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

bool func_81()//Position - 0x20FC
{
	return Global_1312417;
}

void func_82(int iParam0)//Position - 0x2108
{
	MISC::CLEAR_BIT(&(Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

void func_83()//Position - 0x2121
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar25;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_18 = -1;
	Var3.f_19 = -1;
	if (!func_736(1))
	{
		if (func_25() != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_737(1, 1, 1, 0))
				{
					if (((!func_775() && !func_774()) && !func_773(179)) && func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						if (func_387())
						{
							iVar1 = func_34(PLAYER::PLAYER_ID());
							iVar2 = Local_935.f_30;
							switch (func_25())
							{
								case 2:
									HUD::CLEAR_HELP(1);
									break;
								
								case 3:
									HUD::CLEAR_HELP(1);
									break;
								
								case 1:
									HUD::CLEAR_HELP(1);
									if (Local_935.f_30 > -1)
									{
										if (Local_935.f_30 == 99)
										{
											func_385(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_385(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_366(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2, 1, 0);
									}
									break;
								
								case 5:
									HUD::CLEAR_HELP(1);
									func_366(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2, 1, 0);
									break;
								
								case 4:
									HUD::CLEAR_HELP(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_385(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_896, iLocal_894, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar25 = PLAYER::PLAYER_ID();
				func_364(1, iVar25);
				if (bVar0)
				{
				}
				func_123(179, bVar0, &Var3, 0);
				func_889(bVar0, 0);
				func_51();
				func_712(1);
			}
		}
	}
	if (func_85(&uLocal_859, 1, 0))
	{
		func_84(0);
	}
}

void func_84(int iParam0)//Position - 0x2342
{
	MISC::SET_BIT(&(Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), iParam0);
}

int func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x235B
{
	bool bVar0;
	
	func_122(29);
	if ((*uParam0 > 0 && !func_121()) && func_113(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_110())
		{
			func_109();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2531497.f_4588), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_108(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
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
				func_97(iParam2);
				func_108(uParam0, 2);
			}
			break;
		
		case 2:
			func_97(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_86(func_87(0)))
				{
					HUD::CLEAR_HELP(1);
				}
				func_108(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
				MISC::CLEAR_BIT(&(Global_1674852.f_3), 2);
				func_108(uParam0, 4);
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

int func_86(char* sParam0)//Position - 0x24D5
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_87(int iParam0)//Position - 0x24E8
{
	if (((func_95(PLAYER::PLAYER_ID()) || func_94(PLAYER::PLAYER_ID())) || func_91()) || iParam0)
	{
		if (func_94(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_88(func_90()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_88(int iParam0)//Position - 0x2546
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
	return func_89(iParam0, 0);
	return 0;
}

int func_89(int iParam0, int iParam1)//Position - 0x25A0
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

int func_90()//Position - 0x25F5
{
	return Global_1651198;
}

bool func_91()//Position - 0x2601
{
	return (func_93() && func_45(func_92()));
}

int func_92()//Position - 0x261A
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_93()//Position - 0x2631
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

bool func_94(int iParam0)//Position - 0x2647
{
	return func_89(func_63(iParam0), 0);
}

bool func_95(int iParam0)//Position - 0x265A
{
	return func_96(func_63(iParam0));
}

int func_96(int iParam0)//Position - 0x266C
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148 && func_46(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35, 1))
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

void func_97(int iParam0)//Position - 0x274E
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_997(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !CAM::IS_SCREEN_FADED_OUT()) && !func_107(PLAYER::PLAYER_ID(), 22)) && func_113(PLAYER::PLAYER_ID()) != 0) && !func_105(func_106())) && !func_95(PLAYER::PLAYER_ID())) && !func_104(func_63(PLAYER::PLAYER_ID()))) && !func_103(func_63(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2531497.f_4588), 1);
			func_102(func_87(iParam0), -1);
			func_98(1);
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_98(int iParam0)//Position - 0x2832
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_99(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_121())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_99(bool bParam0)//Position - 0x2866
{
	return func_100(PLAYER::PLAYER_ID(), bParam0);
}

bool func_100(int iParam0, bool bParam1)//Position - 0x2878
{
	return func_101(iParam0, bParam1, 1);
}

int func_101(int iParam0, bool bParam1, int iParam2)//Position - 0x2889
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_29() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_102(char[4] cParam0, int iParam1)//Position - 0x28E5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_103(int iParam0)//Position - 0x28FC
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

int func_104(int iParam0)//Position - 0x2952
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

int func_105(int iParam0)//Position - 0x29A2
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

int func_106()//Position - 0x29C8
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

bool func_107(int iParam0, int iParam1)//Position - 0x2F79
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_108(var uParam0, int iParam1)//Position - 0x2F94
{
	*uParam0 = iParam1;
}

void func_109()//Position - 0x2FA1
{
	Global_2460541 = 1;
}

int func_110()//Position - 0x2FAE
{
	if (((((((func_63(PLAYER::PLAYER_ID()) == 170 || func_63(PLAYER::PLAYER_ID()) == 219) || func_63(PLAYER::PLAYER_ID()) == 221) || func_63(PLAYER::PLAYER_ID()) == 220) || func_63(PLAYER::PLAYER_ID()) == 216) || func_63(PLAYER::PLAYER_ID()) == 215) || func_63(PLAYER::PLAYER_ID()) == 214) || func_63(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_111(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x304F
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)//Position - 0x3095
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

int func_113(int iParam0)//Position - 0x345D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_120(iParam0) && !func_119(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_118(iParam0);
	bVar3 = func_81();
	bVar4 = func_775();
	if ((bVar1 && (func_117(iParam0) || func_116(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_115(iParam0)) && !func_114(iParam0)))
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

bool func_114(int iParam0)//Position - 0x351B
{
	return func_107(iParam0, 19);
}

int func_115(int iParam0)//Position - 0x352B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_116(int iParam0)//Position - 0x3549
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_117(int iParam0)//Position - 0x356F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_118(int iParam0)//Position - 0x3595
{
	return func_107(iParam0, 20);
}

bool func_119(int iParam0)//Position - 0x35A5
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_120(int iParam0)//Position - 0x35BD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_121()//Position - 0x35DE
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_122(int iParam0)//Position - 0x35F4
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

void func_123(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x3611
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
	
	func_362(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_361(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_360(iParam0, bParam3));
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
	if (func_358(iParam0))
	{
		if (bParam1)
		{
			if (func_357(PLAYER::PLAYER_ID()) > 0)
			{
				func_356();
			}
			else
			{
				func_355();
			}
		}
		else
		{
			func_354();
		}
	}
	func_338(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_336(iParam0, uParam2, &iVar0, &iVar5);
	func_313(iParam0, uParam2, &iVar0, &iVar5);
	func_299(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_282(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_92();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_281(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_279(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_235(&iVar0, 1);
			}
		}
	}
	func_230(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_229();
		func_177(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_151(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_150(iParam0, iVar0);
		if (func_149(iParam0))
		{
			if (func_148(iParam0) > -1)
			{
				func_147(func_148(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_146(&Global_2459463, 0, 0);
	}
	if (func_115(PLAYER::PLAYER_ID()) || func_118(PLAYER::PLAYER_ID()))
	{
		func_134(iParam0);
	}
	if (func_96(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_133(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_132(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_131(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_103(iParam0))
	{
		if (func_130(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_126(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_125(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_124(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_124(int iParam0)//Position - 0x39F0
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x3A0A
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x3A24
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_127(func_128(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x3AAD
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

int func_128(int iParam0)//Position - 0x3AE5
{
	if (func_63(iParam0) == 237 || func_63(iParam0) == 250)
	{
		return func_129(iParam0);
	}
	return -1;
}

int func_129(int iParam0)//Position - 0x3B12
{
	if (func_64(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_130(int iParam0)//Position - 0x3B35
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x3B49
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x3B63
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

int func_133(int iParam0)//Position - 0x3B83
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

void func_134(int iParam0)//Position - 0x3BA9
{
	if (func_145(PLAYER::PLAYER_ID()) && func_144())
	{
		if (func_143(iParam0))
		{
			func_137(9639, -1);
		}
		else if (func_136(iParam0))
		{
			func_137(9641, -1);
		}
		else if (func_89(iParam0, 1))
		{
			func_137(9642, -1);
		}
		else if (func_135(iParam0))
		{
			func_137(9643, -1);
		}
	}
}

int func_135(int iParam0)//Position - 0x3C13
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

int func_136(int iParam0)//Position - 0x3C3F
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

void func_137(int iParam0, int iParam1)//Position - 0x3C6B
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_142(iParam1), 0);
	iVar0++;
	if (!func_140(iParam0))
	{
		func_139(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_138(iParam0, iVar0, iParam1, 1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3CAC
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_142(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_142(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_142(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_142(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_142(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_142(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_142(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_142(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_142(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_142(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_142(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_142(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_142(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_142(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_142(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_142(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_142(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_142(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_142(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_142(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_142(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_142(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_142(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_142(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_142(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_142(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_142(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_142(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_142(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_142(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_142(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_142(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_142(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_142(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_142(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_142(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_142(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_142(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_142(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_142(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_142(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_142(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_142(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_142(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_142(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_142(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x462F
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_140(int iParam0)//Position - 0x465F
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

int func_141(int iParam0, int iParam1, int iParam2)//Position - 0x48C3
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x48F5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

int func_143(int iParam0)//Position - 0x4929
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

bool func_144()//Position - 0x497F
{
	return func_45(PLAYER::PLAYER_ID());
}

bool func_145(int iParam0)//Position - 0x498F
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_146(var uParam0, bool bParam1, bool bParam2)//Position - 0x49B5
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

void func_147(int iParam0, int iParam1)//Position - 0x49F2
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

int func_148(int iParam0)//Position - 0x4A64
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

int func_149(int iParam0)//Position - 0x4B45
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

void func_150(int iParam0, int iParam1)//Position - 0x4BAD
{
	if (func_145(PLAYER::PLAYER_ID()) && func_144())
	{
		if (func_143(iParam0) && iParam1 > 0)
		{
			func_139(9640, (func_141(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4BF1
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_176();
	if (iVar5 != func_29())
	{
		func_175(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_174(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_173())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_144())
			{
				if (!func_173())
				{
					Var7 = { func_172() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_171(Var7)), func_170(Var7), iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_157())
			{
				if (!func_173())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_171(func_156(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_157())
			{
				if (!func_173())
				{
					iVar2 = func_152(uParam5->f_16, iParam4);
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
			else if (func_173())
			{
				func_158(463142405, iParam1, &iVar4, 0, 1, 0);
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
			if (func_173())
			{
				func_158(1407278493, iParam1, &iVar4, 0, 1, 0);
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
			if (func_157())
			{
				if (!func_173())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
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
			if (func_173())
			{
				func_158(-961034881, iParam1, &iVar4, 0, 1, 0);
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
			if (func_173())
			{
				func_158(1135468152, iParam1, &iVar4, 0, 1, 0);
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
			if (func_173())
			{
				func_158(-634726636, iParam1, &iVar4, 0, 1, 0);
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
			if (func_173())
			{
				func_158(1698417709, iParam1, &iVar4, 0, 1, 0);
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
				if (func_173())
				{
					func_158(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_173())
			{
				func_158(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
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

int func_152(int iParam0, int iParam1)//Position - 0x5097
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_155(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_153(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_153(int iParam0, int iParam1)//Position - 0x50C0
{
	return (func_154(iParam0) * iParam1);
}

int func_154(int iParam0)//Position - 0x50D1
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

float func_155(int iParam0, int iParam1)//Position - 0x5171
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

int func_156(int iParam0)//Position - 0x5289
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_157()//Position - 0x52AF
{
	return func_41(PLAYER::PLAYER_ID());
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x52BF
{
	int iVar0;
	
	if (!func_173())
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
				func_159(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_159(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_159(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_159(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x592C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_49()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_165(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_160(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5AD7
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)//Position - 0x5B0F
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_164(iParam0))
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
		func_162(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_162(var uParam0)//Position - 0x5B63
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
	func_163(&(uParam0->f_13));
	func_163(&(uParam0->f_13.f_13));
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

void func_163(var uParam0)//Position - 0x5C6E
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

int func_164(int iParam0)//Position - 0x5CB6
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)//Position - 0x5CE0
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x5CF4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_173())
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
				func_167(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x5E30
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
	iVar35 = func_169(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_168();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar35);
	}
}

void func_168()//Position - 0x5EC2
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_169(int iParam0)//Position - 0x5ED2
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_170(int iParam0)//Position - 0x5EEA
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

char* func_171(int iParam0)//Position - 0x6030
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

struct<2> func_172()//Position - 0x6212
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_193;
}

int func_173()//Position - 0x622B
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_174(bool bParam0)//Position - 0x6242
{
	return func_281(PLAYER::PLAYER_ID(), bParam0);
}

void func_175(int iParam0, var uParam1, var uParam2)//Position - 0x6254
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_176()//Position - 0x6282
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

int func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x6297
{
	return func_178(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_178(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x62B9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_184(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_179(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_179(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x6332
{
	vector3 vVar0;
	
	vVar0 = { func_182(iParam0, 1) };
	if (iParam0 == func_181(PLAYER::PLAYER_PED_ID()))
	{
		func_180(1);
	}
	func_184(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_180(int iParam0)//Position - 0x6366
{
	Global_2437549.f_1890 = iParam0;
}

int func_181(int iParam0)//Position - 0x6377
{
	return iParam0;
}

Vector3 func_182(int iParam0, bool bParam1)//Position - 0x6381
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
	if (iParam0 == func_183(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_183(int iParam0)//Position - 0x6445
{
	return iParam0;
}

void func_184(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x644F
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_187(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_186();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_185();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_185()//Position - 0x6566
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_186()//Position - 0x6590
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_187(vector3 vParam0, var uParam3, var uParam4)//Position - 0x65AB
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

var func_188(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x6644
{
	var uVar0;
	
	uVar0 = func_189(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_189(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x6667
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_228(PLAYER::PLAYER_ID()) || func_227(PLAYER::PLAYER_ID()))
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
		else if (func_224() || func_223(PLAYER::PLAYER_ID()))
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
		else if (func_222())
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
	if (func_221(sParam2))
	{
	}
	if (func_220())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_218(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_217(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_214(0, &iVar1);
					break;
				
				case 3:
					func_214(1, &iVar1);
					break;
				
				case 1:
					func_210(&iVar1);
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
			func_209(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_200((func_207(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_209(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_194(iVar1);
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
				func_190((func_192(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_190((func_192(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_190(int iParam0)//Position - 0x6894
{
	if (func_220())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_191(joaat("mpply_globalxp"), iParam0);
	}
}

void func_191(int iParam0, int iParam1)//Position - 0x68BF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_192(int iParam0)//Position - 0x68DB
{
	if (iParam0 > -1)
	{
		if (func_997(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_193(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_193(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x692C
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

void func_194(int iParam0)//Position - 0x694A
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_199(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_197(func_198(&Var0));
			if (iVar13 == 0)
			{
				func_196(&Global_1384134, iParam0);
				func_195(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_196(&Global_1384135, iParam0);
				func_195(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_196(&Global_1384136, iParam0);
				func_195(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_196(&Global_1384137, iParam0);
				func_195(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_196(&Global_1384138, iParam0);
				func_195(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_195(int iParam0, int iParam1)//Position - 0x6A1E
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

void func_196(var uParam0, int iParam1)//Position - 0x6B43
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_197(int iParam0)//Position - 0x6B54
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

int func_198(var uParam0)//Position - 0x6BB1
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

struct<13> func_199(int iParam0)//Position - 0x6BD4
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0x6BEB
{
	if (func_220())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_142(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_142(-1)])
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
		if (func_206(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_204(iParam0, 1);
		}
		func_138(639, iParam0, -1, 1);
		func_139(640, func_204(iParam0, 1), -1, 1, 0);
		Global_1384279[func_142(-1)] = iParam0;
		func_201(-1109644434, 7, 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)//Position - 0x6D11
{
	int iVar0;
	
	if (func_203(iParam1, iParam2))
	{
		iVar0 = func_202();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_202()//Position - 0x6D3E
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

int func_203(int iParam0, var uParam1)//Position - 0x6D73
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

int func_204(int iParam0, bool bParam1)//Position - 0x6DF9
{
	if (bParam1)
	{
	}
	return func_205(iParam0, 0);
}

int func_205(int iParam0, int iParam1)//Position - 0x6E0D
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

int func_206(int iParam0)//Position - 0x6ECC
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

int func_207(int iParam0, bool bParam1)//Position - 0x6EF1
{
	if (bParam1)
	{
	}
	return func_208(iParam0);
}

int func_208(int iParam0)//Position - 0x6F04
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_142(-1)];
			}
			else if (func_206(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_142(-1)];
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2)//Position - 0x6F61
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_142(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_140(iParam0))
	{
		func_139(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_138(iParam0, iVar0, iParam2, 1);
	}
}

void func_210(int iParam0)//Position - 0x6FA3
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_213(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_212(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_211(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_211(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_211(int iParam0, int iParam1)//Position - 0x708E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_212(int iParam0, int iParam1)//Position - 0x70AF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_199(iParam0) };
		Global_2507684 = { func_199(iParam1) };
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

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0x711C
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

void func_214(bool bParam0, int iParam1)//Position - 0x72E7
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
				if (func_997(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_212(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_997(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_215(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_212(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_211(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_211(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_215(int iParam0, int iParam1)//Position - 0x73FF
{
	return SYSTEM::VDIST(func_216(iParam0), func_216(iParam1));
	return 0f;
}

Vector3 func_216(int iParam0)//Position - 0x741B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_217(int iParam0)//Position - 0x742E
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_211(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_218(int iParam0)//Position - 0x7465
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_207(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_207(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_219(8000, 0, 0) > 0)
	{
		if (func_219(8000, 0, 0) < (iParam0 + func_207(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_219(8000, 0, 0) - func_207(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_219(int iParam0, bool bParam1, int iParam2)//Position - 0x74CD
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

int func_220()//Position - 0x74F5
{
	return 1;
}

int func_221(char* sParam0)//Position - 0x74FE
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

bool func_222()//Position - 0x7538
{
	return Global_2448961.f_19;
}

int func_223(int iParam0)//Position - 0x7546
{
	return func_131(func_63(iParam0));
}

bool func_224()//Position - 0x7558
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_226();
	}
	return func_225(Global_4456448.f_154360);
}

int func_225(int iParam0)//Position - 0x757C
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

bool func_226()//Position - 0x75B6
{
	return Global_2448961.f_17;
}

bool func_227(int iParam0)//Position - 0x75C4
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_228(int iParam0)//Position - 0x75D9
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_229()//Position - 0x75EE
{
	Global_2460540 = 1;
}

void func_230(int iParam0, var uParam1, var uParam2)//Position - 0x75FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_234(7))
	{
		return;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_232(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2531497.f_4898.f_263, NETWORK::GET_NETWORK_TIME()));
	if (func_231(iParam0) != -1)
	{
		if (iVar2 > func_231(iParam0))
		{
			iVar2 = func_231(iParam0);
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

int func_231(int iParam0)//Position - 0x76A5
{
	if (func_89(iParam0, 0) || func_136(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_143(iParam0))
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

int func_232(int iParam0)//Position - 0x77B8
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
			if (!func_157())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_157())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_157())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_157())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_157())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_157())
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
			if (!func_157())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_157())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_157())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_157())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_157())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x7C83
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
			if (func_99(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_99(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_99(0))
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
			if (func_99(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_99(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_99(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_99(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_99(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_99(0))
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
			if (func_99(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_99(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_99(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_99(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_234(int iParam0)//Position - 0x8152
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_235(int iParam0, int iParam1)//Position - 0x8169
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_157())
		{
			if (func_174(0))
			{
				if (!func_99(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_176()))
					{
						if (func_278() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_278());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_276(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_240("GB_BCUT_TICK1", func_176(), iVar0, 0, 0, 1, 1);
						}
						func_239(20);
						func_236(func_176(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2)//Position - 0x820A
{
	struct<8> Var0;
	
	if (func_997(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_238(iParam0);
		func_237(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_169(iParam0));
	}
}

void func_237(var uParam0, var uParam1)//Position - 0x8260
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_238(int iParam0)//Position - 0x827A
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_239(int iParam0)//Position - 0x828E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_240(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x82B7
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_247(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_245(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_241(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_241(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x834F
{
	int iVar0;
	
	if ((!func_244() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_47(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_242(iParam2);
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

int func_242(int iParam0)//Position - 0x8457
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_243(iVar0);
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

void func_243(int iParam0)//Position - 0x84B9
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_244()//Position - 0x84F2
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_245(char* sParam0)//Position - 0x8503
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_246(&cVar0);
}

var func_246(char[4] cParam0)//Position - 0x8527
{
	return cParam0;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8531
{
	int iVar0;
	int iVar1;
	
	if (func_274(iParam0) && !bParam4)
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
	if (((func_274(PLAYER::PLAYER_ID()) || (func_273() && func_272())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_271();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_997(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_269(iParam1, iParam0, 0);
							}
							else
							{
								return func_259(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_259(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_269(iParam1, iParam0, 0);
				}
				else
				{
					return func_248(0, -1, 0);
				}
			}
			else
			{
				return func_248(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_269(iParam1, iParam0, 0);
		}
		else
		{
			return func_259(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_259(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_248(bool bParam0, int iParam1, bool bParam2)//Position - 0x8711
{
	return func_249(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_249(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x8727
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_258() || (func_257() && func_255())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_254(iParam2, iVar0);
		}
		else
		{
			return func_254(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_213(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_253(1);
				}
				else
				{
					return func_253(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_250(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_250(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_253(1);
	}
	return func_253(0);
}

int func_250(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x882E
{
	int iVar0;
	
	iVar0 = func_252(iParam0, iParam1, iParam3);
	if (func_251(Global_4456448.f_154360, 1))
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

int func_251(int iParam0, bool bParam1)//Position - 0x8946
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

int func_252(int iParam0, int iParam1, int iParam2)//Position - 0x8997
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
			if (!func_213(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_253(bool bParam0)//Position - 0x89DE
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_254(int iParam0, int iParam1)//Position - 0x89F5
{
	if (iParam0 == -1)
	{
		iParam0 = func_252(iParam1, iParam0, 4);
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

bool func_255()//Position - 0x8A43
{
	if (func_256())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_256()//Position - 0x8A65
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_257()//Position - 0x8A7D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_258()//Position - 0x8ACA
{
	if (func_256() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8AE7
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
			if (func_266())
			{
				iVar3 = func_264(iParam0);
				if (!iVar3 == -1)
				{
					return func_262(iVar3);
				}
			}
			if ((func_261(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_213(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_253(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_260(1);
			}
			else
			{
				return func_249(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_253(1);
			}
			else
			{
				return func_249(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_264(iParam0);
	if (!iVar4 == -1)
	{
		return func_262(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_260(bool bParam0)//Position - 0x8C8A
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_261(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8CA1
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

int func_262(int iParam0)//Position - 0x8D19
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_263(iParam0);
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

var func_263(int iParam0)//Position - 0x8DDC
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_264(int iParam0)//Position - 0x8DF3
{
	if (!iParam0 == func_29())
	{
		if (func_281(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_265(iParam0)];
		}
	}
	return -1;
}

int func_265(int iParam0)//Position - 0x8E25
{
	if (iParam0 != func_29())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_29();
}

int func_266()//Position - 0x8E48
{
	if (((func_268() || func_267()) || func_226()) || func_222())
	{
		return 1;
	}
	return 0;
}

var func_267()//Position - 0x8E7A
{
	return Global_2448961.f_16;
}

var func_268()//Position - 0x8E88
{
	return Global_2448961.f_15;
}

int func_269(int iParam0, int iParam1, bool bParam2)//Position - 0x8E96
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_266())
	{
		iVar2 = func_264(iParam1);
		if (!iVar2 == -1)
		{
			return func_262(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
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
			iVar0 = func_249(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_270(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_213(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_260(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_270(int iParam0)//Position - 0x9023
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

var func_271()//Position - 0x90F8
{
	return Global_2359302.f_2;
}

bool func_272()//Position - 0x9106
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_273()//Position - 0x9117
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

int func_274(int iParam0)//Position - 0x9134
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()//Position - 0x9176
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_276(int iParam0, bool bParam1)//Position - 0x9187
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_277(1);
	}
	else
	{
		iVar1 = func_277(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_277(bool bParam0)//Position - 0x91B9
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_278()//Position - 0x91DF
{
	return Global_262145.f_12389;
}

int func_279(int iParam0, int iParam1, bool bParam2)//Position - 0x91EE
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_280(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1)//Position - 0x9238
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
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

bool func_281(int iParam0, bool bParam1)//Position - 0x927D
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_29();
}

void func_282(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x92A8
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
	
	bVar18 = func_99(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_157())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_176();
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
				iVar2 = func_298(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
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
			iVar10 = func_297(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_296("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_295(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_293(*uParam3);
				}
				iVar6 = func_292(&uVar5);
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
						func_239(140);
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
								if (func_291(iVar23))
								{
									func_283(iVar23, 1, 198210293);
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
					func_239(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0x950F
{
	var uVar0;
	
	uVar0 = func_285(iParam0);
	func_284(iParam0, uVar0, iParam1, iParam2);
}

void func_284(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x952B
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_238(iParam0);
	func_237(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_169(iParam0));
		}
	}
}

int func_285(int iParam0)//Position - 0x9591
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_290();
	iVar0 = func_288(iParam0, iVar0);
	iVar1 = Global_1628955[func_176() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_287())
	{
		iVar0 = func_287();
	}
	if (iVar0 > func_286())
	{
		iVar0 = func_286();
	}
	return iVar0;
}

int func_286()//Position - 0x95EA
{
	return Global_262145.f_14944;
}

int func_287()//Position - 0x95F9
{
	return Global_262145.f_16119;
}

int func_288(int iParam0, int iParam1)//Position - 0x9608
{
	int iVar0;
	
	iVar0 = (func_357(iParam0) * func_289());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_289()//Position - 0x9626
{
	return Global_262145.f_16118;
}

var func_290()//Position - 0x9635
{
	return Global_262145.f_12381;
}

int func_291(int iParam0)//Position - 0x9644
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_279(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_107(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_292(var uParam0)//Position - 0x967D
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
			if (!func_47(iVar2, 0) && !func_279(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_293(int iParam0)//Position - 0x96E9
{
	func_294(iParam0, 7236);
}

void func_294(int iParam0, int iParam1)//Position - 0x96FA
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_141(iParam1, -1, 0);
	func_139(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_295(int iParam0)//Position - 0x9723
{
	func_294(iParam0, 7231);
}

int func_296(char* sParam0, int iParam1, int iParam2)//Position - 0x9734
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_241(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_297(int iParam0)//Position - 0x976A
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

int func_298(struct<5> Param0, int iParam5)//Position - 0x979E
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

void func_299(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x9808
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
	bVar16 = func_99(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_157())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_176();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_311(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_302(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_153(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_152(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_301(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_296("SMTICK_RONCUT", func_301(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_301(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_300(iVar2, iVar9);
				iVar6 = func_292(&uVar5);
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
						func_239(44);
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
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, 1160415507);
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
					func_239(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_300(int iParam0, int iParam1)//Position - 0x9A4E
{
	if (iParam0 > 0)
	{
		func_294(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_294(iParam1, 6117);
	}
}

int func_301(int iParam0)//Position - 0x9A74
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

int func_302(int iParam0)//Position - 0x9AB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_309())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_311(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_304(func_305(func_308(iVar0), -1, -1));
		if (func_303(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_303(int iParam0)//Position - 0x9B12
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

int func_304(int iParam0)//Position - 0x9BC2
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

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x9CB2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_307(iParam0, iParam1);
	iVar2 = func_306(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_306(int iParam0)//Position - 0x9CF8
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

int func_307(int iParam0, int iParam1)//Position - 0xA0F9
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_308(int iParam0)//Position - 0xA4A7
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

bool func_309()//Position - 0xA711
{
	return func_310() != 0;
}

int func_310()//Position - 0xA71F
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_260;
}

int func_311(int iParam0)//Position - 0xA738
{
	if (iParam0 != func_29() && func_312(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_312(int iParam0)//Position - 0xA76A
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_313(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xA790
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
	
	bVar17 = func_99(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_157())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_176();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_156(iVar15);
			iVar0 = (func_335(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_331(iVar15, iVar16, iVar1);
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
				func_328(iVar16, iVar2);
				if (func_324(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_314(5);
				}
				iVar6 = func_292(&uVar5);
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
						func_239(108);
					}
					else
					{
						func_239(110);
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
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, -1905128202);
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
					func_239(112);
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

void func_314(int iParam0)//Position - 0xA9CB
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_316(Global_262145.f_20560))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_316(Global_262145.f_20562))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_316(Global_262145.f_20564))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_316(Global_262145.f_20566))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_316(Global_262145.f_20568))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_316(Global_262145.f_20570))
				{
					func_296("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_316(Global_262145.f_20573))
				{
					func_296("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_316(Global_262145.f_20576))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_316(Global_262145.f_20578))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_316(Global_262145.f_20580))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_316(Global_262145.f_20582))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_316(Global_262145.f_20584))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_316(Global_262145.f_20586))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_316(Global_262145.f_20588))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_316(Global_262145.f_20590))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xACC8
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
		Global_2507671 = { func_199(PLAYER::PLAYER_ID()) };
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
	func_241(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_316(int iParam0)//Position - 0xADBC
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_321(15417, -1, -1))
			{
				func_320(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_321(15418, -1, -1))
			{
				func_320(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_321(15425, -1, -1))
			{
				func_320(15425, 1, -1, 1);
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
			if (!func_321(15405, -1, -1))
			{
				func_320(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_321(15393, -1, -1))
			{
				func_320(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_321(15409, -1, -1))
			{
				func_320(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_321(15396, -1, -1))
			{
				func_320(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_321(15412, -1, -1))
			{
				func_320(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_321(15403, -1, -1))
			{
				func_320(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_321(15389, -1, -1))
			{
				func_320(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_321(15398, -1, -1))
			{
				func_320(15398, 1, -1, 1);
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
			if (!func_321(15400, -1, -1))
			{
				func_320(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_321(15408, -1, -1))
			{
				func_320(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_321(15411, -1, -1))
			{
				func_320(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_321(15397, -1, -1))
			{
				func_320(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_321(15413, -1, -1))
			{
				func_320(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_321(15391, -1, -1))
			{
				func_320(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_321(15388, -1, -1))
			{
				func_320(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_321(15401, -1, -1))
			{
				func_320(15401, 1, -1, 1);
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
			if (!func_321(15394, -1, -1))
			{
				func_320(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_321(15406, -1, -1))
			{
				func_320(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_321(15395, -1, -1))
			{
				func_320(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_321(15410, -1, -1))
			{
				func_320(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_321(15407, -1, -1))
			{
				func_320(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_321(15414, -1, -1))
			{
				func_320(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_321(15415, -1, -1))
			{
				func_320(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_321(15399, -1, -1))
			{
				func_320(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_321(15404, -1, -1))
			{
				func_320(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_321(15392, -1, -1))
			{
				func_320(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_321(15390, -1, -1))
			{
				func_320(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_321(15402, -1, -1))
			{
				func_320(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_321(15416, -1, -1))
			{
				func_320(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
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
			if (!func_321(15426, -1, -1))
			{
				func_320(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_321(15422, -1, -1))
			{
				func_320(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_321(15423, -1, -1))
			{
				func_320(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_321(15421, -1, -1))
			{
				func_320(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_321(15427, -1, -1))
			{
				func_320(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_321(15419, -1, -1))
			{
				func_320(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_321(15420, -1, -1))
			{
				func_320(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB931
{
	int iVar0;
	
	if (func_318())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_142(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_318()//Position - 0xB963
{
	return 1;
	return 0;
}

int func_319(int iParam0, int iParam1)//Position - 0xB970
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_142(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xB99C
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
		iParam2 = func_49();
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

int func_321(int iParam0, int iParam1, int iParam2)//Position - 0xBFEE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_323(iParam0, iParam1);
	uVar2 = func_322(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_322(int iParam0)//Position - 0xC02B
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

int func_323(int iParam0, int iParam1)//Position - 0xC3C7
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_324(int iParam0)//Position - 0xC740
{
	int iVar0;
	
	iVar0 = func_326(iParam0);
	return func_141(func_325(iVar0), -1, 0);
}

int func_325(int iParam0)//Position - 0xC75C
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

int func_326(int iParam0)//Position - 0xC7B6
{
	int iVar0;
	
	if (func_327(iParam0))
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

int func_327(int iParam0)//Position - 0xC7F8
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_328(int iParam0, int iParam1)//Position - 0xC817
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_326(iParam0);
	iVar1 = func_325(iVar0);
	iVar2 = (func_141(iVar1, -1, 0) + iParam1);
	func_139(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_305(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_325(iVar0);
				iVar3 = (iVar3 + func_141(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_330(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_329(9357, iVar5, -1, 1);
	}
}

var func_329(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC8CC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
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

int func_330(int iParam0)//Position - 0xCE8E
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

int func_331(int iParam0, int iParam1, int iParam2)//Position - 0xCECE
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_170(iParam1);
	if (func_327(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_332(int iParam0, int iParam1, int iParam2)//Position - 0xD0A6
{
	int iVar0;
	
	if (func_334(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_333(int iParam0, int iParam1)//Position - 0xD0E1
{
	int iVar0;
	
	if (func_327(iParam1) && iParam0 != func_29())
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

int func_334(int iParam0, int iParam1)//Position - 0xD12D
{
	int iVar0;
	
	if (func_327(iParam1) && iParam0 != func_29())
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

int func_335(int iParam0, int iParam1)//Position - 0xD178
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
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

void func_336(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0xD1D7
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
			if (func_144())
			{
				Var0 = { func_172() };
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
				iVar7 = func_331(PLAYER::PLAYER_ID(), Var0, *uParam3);
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
				iVar11 = func_292(&uVar10);
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
					func_239(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_99(0))
			{
				Var15 = { func_337(func_176()) };
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
				iVar22 = func_331(func_176(), Var15, *uParam3);
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

struct<2> func_337(int iParam0)//Position - 0xD47A
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_338(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0xD491
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
		if (func_41(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_353();
			}
			func_352();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_344(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_343(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_292(&uVar2);
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
						func_239(44);
					}
				}
				func_341(*iParam3);
				func_340();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_291(iVar9))
						{
							func_283(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(PLAYER::PLAYER_ID()))
		{
			func_339();
		}
	}
}

void func_339()//Position - 0xD5FD
{
	int iVar0;
	
	iVar0 = Global_2578770[func_49()];
	iVar0++;
	func_138(3667, iVar0, -1, 1);
}

void func_340()//Position - 0xD622
{
	int iVar0;
	
	iVar0 = Global_2578776[func_49()];
	iVar0++;
	func_138(3666, iVar0, -1, 1);
}

void func_341(int iParam0)//Position - 0xD647
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_138(3668, iVar0, -1, 1);
	if (func_305(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_342(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_329(7666, iVar2, -1, 1);
	}
}

int func_342(int iParam0)//Position - 0xD6A9
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

var func_343(int iParam0)//Position - 0xD881
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

int func_344(int iParam0)//Position - 0xDA81
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_351(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_350(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_349(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_345(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_345(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_349(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_345(int iParam0)//Position - 0xDAFD
{
	int iVar0;
	
	if (func_348(iParam0))
	{
		iVar0 = func_346(func_347(iParam0));
		return func_141(iVar0, -1, 0);
	}
	return 0;
}

int func_346(int iParam0)//Position - 0xDB26
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

int func_347(int iParam0)//Position - 0xDB79
{
	int iVar0;
	
	if (func_348(iParam0))
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

int func_348(int iParam0)//Position - 0xDBBB
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_349(int iParam0)//Position - 0xDBDA
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

int func_350(int iParam0, int iParam1)//Position - 0xDC52
{
	int iVar0;
	
	if (func_348(iParam0))
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

int func_351(int iParam0)//Position - 0xDC98
{
	int iVar0;
	
	if (func_348(iParam0))
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

void func_352()//Position - 0xDCD9
{
	int iVar0;
	
	iVar0 = Global_2578767[func_49()];
	iVar0++;
	Global_2578767[func_49()] = iVar0;
	func_138(3665, iVar0, -1, 1);
}

void func_353()//Position - 0xDD0A
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_49()];
	iVar1 = Global_2578773[func_49()];
	iVar0++;
	iVar1++;
	Global_2578764[func_49()] = iVar0;
	Global_2578773[func_49()] = iVar1;
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_138(3663, iVar0, -1, 1);
	func_138(3664, iVar1, -1, 1);
}

void func_354()//Position - 0xDD76
{
	if (func_157())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_355()//Position - 0xDDA8
{
	if (func_157())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_356()//Position - 0xDDF2
{
	if (func_157())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_357(int iParam0)//Position - 0xDE3B
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_358(int iParam0)//Position - 0xDE50
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
			if (func_174(1) && !func_99(1))
			{
				if (func_359(func_176()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_359(int iParam0)//Position - 0xDECB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_360(int iParam0, bool bParam1)//Position - 0xDEF1
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

int func_361(int iParam0, bool bParam1, bool bParam2)//Position - 0xE2B5
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
			if (func_157())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_157())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_144())
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
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_144())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_362(int iParam0, var uParam1, var uParam2)//Position - 0xEA4B
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_363(iParam0))
	{
		if (!func_157())
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
	if (func_281(PLAYER::PLAYER_ID(), 1))
	{
		if (func_96(iParam0))
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
	else if (func_96(iParam0))
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
	iVar0 = func_92();
	if (iVar0 != func_29())
	{
		if (func_279(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_363(int iParam0)//Position - 0xECAE
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

void func_364(int iParam0, int iParam1)//Position - 0xECF2
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_365(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_997(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			Global_2531497.f_4898.f_381 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_365(int iParam0, int iParam1)//Position - 0xED69
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_265(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_265(iParam1);
		}
	}
	return 0;
}

int func_366(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xEDA5
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
	func_384(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_382(&(Var0.f_69), iParam7);
	}
	return func_367(&Var0);
}

int func_367(var uParam0)//Position - 0xEE25
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_381(uParam0, uParam0->f_17);
	func_378(uParam0);
	if (func_226())
	{
		func_378(uParam0);
	}
	if (func_377(uParam0->f_1))
	{
		func_370();
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
				func_370();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_369(uParam0->f_69, 128))
			{
				if (func_368(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0xEFF7
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

bool func_369(var uParam0, int iParam1)//Position - 0xF07D
{
	return (uParam0 && iParam1) != 0;
}

void func_370()//Position - 0xF08C
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
	func_371();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_371()//Position - 0xF0BF
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_375(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_372(&(Global_2437549.f_3032.f_1));
}

void func_372(var uParam0)//Position - 0xF100
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_374(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_373(0);
}

void func_373(int iParam0)//Position - 0xF1A7
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_374(bool bParam0)//Position - 0xF1BB
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_375(var uParam0)//Position - 0xF1E6
{
	func_376(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_376(var uParam0)//Position - 0xF210
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

int func_377(int iParam0)//Position - 0xF28F
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0)//Position - 0xF39C
{
	if (func_380(uParam0->f_1))
	{
		uParam0->f_72 = func_379();
	}
}

int func_379()//Position - 0xF3B7
{
	return 21;
}

int func_380(int iParam0)//Position - 0xF3C1
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

void func_381(var uParam0, int iParam1)//Position - 0xF453
{
	if (func_380(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_29() || !func_997(iParam1, 0, 1))
	{
		return;
	}
	if (func_368(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_247(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_382(var uParam0, int iParam1)//Position - 0xF4AA
{
	func_383(uParam0, iParam1);
}

void func_383(var uParam0, var uParam1)//Position - 0xF4BA
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_384(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0xF4CB
{
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_19 = func_29();
	uParam1->f_20 = func_29();
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

int func_385(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0xF54B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_386(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_386(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0xF586
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
	func_384(uParam0, &Var0, uParam9, sParam2, sParam1);
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
	func_382(&(Var0.f_69), 4);
	return func_367(&Var0);
}

int func_387()//Position - 0xF63A
{
	if ((func_997(PLAYER::PLAYER_ID(), 1, 1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_388())
	{
		return 1;
	}
	return 0;
}

bool func_388()//Position - 0xF668
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_389(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)//Position - 0xF67D
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
	
	if (func_509(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_507() || iParam2 == 27)
	{
		if (func_458(iParam1, iParam2, uParam3, Global_1574182, 0, func_505(), iParam7))
		{
			func_457(1);
			if ((!func_456() && !func_455()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_454())
				{
					func_452();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_451(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_450(iParam1, 0, 0);
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
								if (func_997(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_47(iVar35, 0))
									{
										if ((func_449(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_448(iVar35))
										{
											iVar44 = iVar35;
											if (func_41(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_447(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_446(PLAYER::PLAYER_ID(), 0) && func_63(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_445())
							{
								if (func_997(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_29();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_444(iVar35) && func_440(iVar35, iParam2)) && func_997(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_435(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_199(iVar35) };
								iVar37 = func_429(iVar35);
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
									if (!func_445())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_424(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_423(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_422(iVar35, 0);
								if (bVar34)
								{
									if (func_281(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_421(iParam5))
								{
									func_420(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_420(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_997(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_29();
							}
							if (func_444(iVar35))
							{
								if (func_997(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_435(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_199(iVar35) };
									iVar37 = func_429(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574182++;
									iVar51 = func_422(iVar35, 1);
									if (bVar34)
									{
										if (func_281(iVar35, 1))
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
									func_402(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_399(uParam3, iParam1);
						}
						func_7(&(uParam3->f_21));
						func_398();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_397(uParam3, iParam1);
							func_396(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_397(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_392(uParam3))
						{
							Global_1574403 = 1;
						}
						func_390(uParam3);
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
			func_398();
			func_451(0);
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

void func_390(var uParam0)//Position - 0xFCD0
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_391(0);
	}
}

void func_391(bool bParam0)//Position - 0xFD0C
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

int func_392(var uParam0)//Position - 0xFD52
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_29() && func_997(iVar15, 0, 1))
	{
		Var2 = { func_199(iVar15) };
		iVar1 = func_395(uParam0, uParam0->f_37);
		if (func_394(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_393(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_393(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_393(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_393(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_393(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_393(uParam0, iVar0, 0);
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

void func_393(var uParam0, int iParam1, int iParam2)//Position - 0xFE7F
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_394(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0xFE91
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_395(var uParam0, int iParam1)//Position - 0xFEA1
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_396(int iParam0, bool bParam1, int iParam2)//Position - 0xFEB1
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

void func_397(var uParam0, int iParam1)//Position - 0xFEE9
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_398()//Position - 0xFF21
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_399(var uParam0, int iParam1)//Position - 0xFF36
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_29())
		{
			if (func_997(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_401(uParam0->f_38[iVar0 /*2*/], 0);
					func_400(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFFA9
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

int func_401(int iParam0, bool bParam1)//Position - 0xFFE6
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

void func_402(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x10020
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_419() && iParam4 < func_418())
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
				func_417("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_417(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_417("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_417("");
			if (uParam3->f_108 == 6)
			{
				func_417("");
			}
			else
			{
				func_417(&sParam5);
			}
			func_407(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_406(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_404(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_403(uParam3))
			{
				func_405("DPAD_CREW");
			}
			else
			{
				func_405("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_403(var uParam0)//Position - 0x1014F
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_404(var uParam0)//Position - 0x10160
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_405(char* sParam0)//Position - 0x10171
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_406(var uParam0)//Position - 0x10183
{
	if (func_404(uParam0) && func_403(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_407(var uParam0, int iParam1)//Position - 0x101A4
{
	if (func_416(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_411(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_408())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_408()//Position - 0x10225
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_409() || func_268())
		{
			return 1;
		}
	}
	return 0;
}

int func_409()//Position - 0x1024A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_268();
	}
	return func_410(Global_4456448.f_154360);
}

int func_410(int iParam0)//Position - 0x1026E
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

int func_411(int iParam0)//Position - 0x102A8
{
	if ((func_997(iParam0, 0, 1) && func_412()) && func_100(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_412()//Position - 0x102D5
{
	if (func_120(PLAYER::PLAYER_ID()) || func_415())
	{
		if (!func_413(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_413(int iParam0, int iParam1)//Position - 0x10305
{
	if (func_414(iParam0) == iParam1)
	{
		return func_117(iParam0);
	}
	return 0;
}

int func_414(int iParam0)//Position - 0x10322
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_415()//Position - 0x10341
{
	switch (func_63(PLAYER::PLAYER_ID()))
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

int func_416(int iParam0)//Position - 0x1037F
{
	if (func_408())
	{
		if (func_997(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_997(iParam0, 0, 1) && func_412()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_417(char* sParam0)//Position - 0x103C7
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_418()//Position - 0x103D5
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

int func_419()//Position - 0x103F1
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_420(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x10409
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_419() && iParam3 < func_418())
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
					func_417("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_405(sParam16);
				}
				else
				{
					func_417(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_417("");
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
				if (func_445())
				{
					func_417("");
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
						func_405(&(uParam2->f_104));
					}
					else
					{
						func_417("");
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
					func_417("");
				}
				if (uParam2->f_108 == 6)
				{
					func_417("");
				}
				else
				{
					func_417(&sParam4);
				}
				func_407(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
				{
					func_417("");
					func_417("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(iParam8);
				}
				if (func_406(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_404(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_403(uParam2))
				{
					func_405("DPAD_CREW");
				}
				else
				{
					func_405("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_421(int iParam0)//Position - 0x1076C
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

int func_422(int iParam0, bool bParam1)//Position - 0x10790
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_120(iParam0)) && !func_118(iParam0))
	{
		iVar0 = func_379();
	}
	iVar1 = func_264(iParam0);
	if (!iVar1 == -1)
	{
		return func_262(iVar1);
	}
	return iVar0;
}

char* func_423(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x107DA
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

int func_424(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1096A
{
	if (func_428(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_421(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_425(int iParam0, int iParam1)//Position - 0x109BA
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
				return func_427(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_426(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_426(float fParam0)//Position - 0x10A5D
{
	return (fParam0 / 1.609344f);
}

float func_427(float fParam0)//Position - 0x10A6D
{
	return (fParam0 / 0.3048f);
}

int func_428(int iParam0)//Position - 0x10A7D
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

int func_429(int iParam0)//Position - 0x10AD9
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		func_430(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_430(int iParam0, bool bParam1)//Position - 0x10B0F
{
	if (!func_997(iParam0, 0, 1))
	{
		return;
	}
	if (func_432(iParam0) != -1)
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
	if (func_431(iParam0))
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

int func_431(int iParam0)//Position - 0x10B7B
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

int func_432(int iParam0)//Position - 0x10BAD
{
	int iVar0;
	
	if (!func_997(iParam0, 0, 1))
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
			func_433(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_433(int iParam0)//Position - 0x10C2C
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
	func_434(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_434(var uParam0)//Position - 0x10CE2
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_435(int iParam0)//Position - 0x10D0F
{
	char cVar0[32];
	
	if (func_997(iParam0, 0, 1))
	{
		Global_2507671 = { func_199(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_394(Global_2507671))
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
		if (func_439(&Global_2507671))
		{
			Global_2507601 = { func_437(iParam0) };
			func_436(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_436(var uParam0, char* sParam1)//Position - 0x10D90
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_437(int iParam0)//Position - 0x10DA2
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_438(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_199(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_438(int iParam0)//Position - 0x10DDE
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_439(var uParam0)//Position - 0x10DF4
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

int func_440(int iParam0, int iParam1)//Position - 0x10E1A
{
	if (iParam1 == 26)
	{
		if ((func_119(iParam0) || func_443(iParam0)) || func_442(iParam0))
		{
			return 0;
		}
	}
	if (!func_441(iParam0))
	{
		return 0;
	}
	if ((!func_449(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_448(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_441(int iParam0)//Position - 0x10E89
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_442(int iParam0)//Position - 0x10EA2
{
	if (func_119(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_443(int iParam0)//Position - 0x10EC8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_444(int iParam0)//Position - 0x10F06
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
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

int func_445()//Position - 0x10F4B
{
	switch (func_63(PLAYER::PLAYER_ID()))
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
	switch (func_414(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_118(PLAYER::PLAYER_ID()))
	{
		switch (func_63(PLAYER::PLAYER_ID()))
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
	if (func_413(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0, int iParam1)//Position - 0x11087
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_88(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_88(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x110ED
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_997(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_449(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_448(iVar1))
				{
					if (func_279(iVar1, iParam1, 0))
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

bool func_448(int iParam0)//Position - 0x11177
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_449(int iParam0)//Position - 0x1118C
{
	if (func_997(iParam0, 0, 1))
	{
		if (func_997(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_63(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_450(int iParam0, int iParam1, int iParam2)//Position - 0x111CD
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_451(bool bParam0)//Position - 0x111FB
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

void func_452()//Position - 0x1122D
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_121())
		{
			func_453();
		}
	}
}

void func_453()//Position - 0x1124F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_454()//Position - 0x1129A
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_121())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_121())
	{
		return 1;
	}
	return 0;
}

int func_455()//Position - 0x112DB
{
	if (func_121())
	{
		if (func_368(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_456()//Position - 0x11302
{
	if (func_121())
	{
		if (func_380(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_457(int iParam0)//Position - 0x11329
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

int func_458(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x11357
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_504(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_503();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_502())
		{
			if (func_501() > 0 && Global_1574184)
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
		if (!func_485())
		{
			func_484(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_484(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_501() == 1)
		{
			func_483(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_484(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_501() == 0 && !bParam5))
		{
			func_484(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_482();
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
					func_482();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_483(bVar6, iParam0, 0))
				{
					func_450(iParam0, 0, 0);
					sVar4 = func_480(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_478(iParam1) };
					if (bParam4)
					{
						func_475(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_468(iParam0, func_472(uParam2), func_469(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_466(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam6))
						{
							sVar9 = iParam6;
						}
						func_464(iParam0, sVar9, func_465(), -1);
					}
					else if (func_408())
					{
						uParam2->f_34 = Global_1574183;
						func_475(iParam0, sVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_459(iParam1);
						uParam2->f_34 = Global_1574183;
						func_475(iParam0, sVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_459(iParam1);
						func_475(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
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

int func_459(int iParam0)//Position - 0x11639
{
	int iVar0;
	
	iVar0 = -1;
	if (func_463())
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
			if (func_462(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_461(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_460(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_224())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_460(int iParam0)//Position - 0x11792
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_461(int iParam0)//Position - 0x117A7
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_462(int iParam0)//Position - 0x117BC
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_463()//Position - 0x117D1
{
	return Global_4456448.f_1 == 0;
}

void func_464(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x117E1
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_405(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_405("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_465()//Position - 0x11841
{
	switch (func_63(PLAYER::PLAYER_ID()))
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

char* func_466(var uParam0)//Position - 0x1189A
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
	switch (func_63(PLAYER::PLAYER_ID()))
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
			if (func_91())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_99(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_99(1))
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
			if (func_467(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_467(int iParam0)//Position - 0x11CC7
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

void func_468(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x11CF9
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(iParam2))
		{
			func_405(sParam1);
		}
		else if (func_414(PLAYER::PLAYER_ID()) == 133)
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
		func_405("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_469(var uParam0)//Position - 0x11D81
{
	int iVar0;
	
	iVar0 = func_414(PLAYER::PLAYER_ID());
	if (func_471())
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
			switch (func_470())
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

int func_470()//Position - 0x11F31
{
	if (func_414(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_471()//Position - 0x11F54
{
	return Global_1590319;
}

char* func_472(var uParam0)//Position - 0x11F60
{
	int iVar0;
	
	iVar0 = func_414(PLAYER::PLAYER_ID());
	if (func_471())
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
			if (func_474() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_474() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_470())
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
			if (func_473() == 1)
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

int func_473()//Position - 0x12156
{
	return Global_2531497.f_4822;
}

int func_474()//Position - 0x12165
{
	if (func_414(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_475(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x12188
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_417(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_405(sParam1);
		}
		if (func_502() && iParam6)
		{
			if (func_477())
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
			func_405(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_476(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_226())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_476(int iParam0)//Position - 0x12249
{
	if (func_462(iParam0) || func_461(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_477()//Position - 0x1226B
{
	return Global_1574184;
}

struct<4> func_478(int iParam0)//Position - 0x12277
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_479(PLAYER::PLAYER_ID()) || func_460(PLAYER::PLAYER_ID()))
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
	if (func_408() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_479(int iParam0)//Position - 0x12313
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

int func_480(int iParam0, int iParam1, bool bParam2)//Position - 0x12328
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_408() || MISC::IS_STRING_NULL_OR_EMPTY(iParam1)))
	{
		uVar0 = func_481();
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

char* func_481()//Position - 0x1248C
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

void func_482()//Position - 0x124D0
{
	Global_42316 = 1;
}

bool func_483(bool bParam0, int iParam1, bool bParam2)//Position - 0x124DC
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

void func_484(int iParam0, var uParam1, bool bParam2)//Position - 0x1251C
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_398();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
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

int func_485()//Position - 0x1258E
{
	if (func_388())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (!func_498())
	{
		return 0;
	}
	if (!func_496())
	{
		return 0;
	}
	if (func_495(8, -1))
	{
		return 0;
	}
	if (func_501() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	else if (!func_491(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_490(1) || func_488(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_487() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_274(PLAYER::PLAYER_ID()) && !func_487())
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
	if (func_234(0))
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
	if (func_486(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_486(int iParam0)//Position - 0x12759
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_487()//Position - 0x12781
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_488(bool bParam0)//Position - 0x127A3
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_489(PLAYER::PLAYER_PED_ID()))
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

int func_489(int iParam0)//Position - 0x1288E
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

bool func_490(bool bParam0)//Position - 0x128EB
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_491(int iParam0, bool bParam1, bool bParam2)//Position - 0x12914
{
	if (bParam1)
	{
		if (func_492(iParam0))
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

bool func_492(int iParam0)//Position - 0x12946
{
	return func_493(iParam0);
}

bool func_493(int iParam0)//Position - 0x12954
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_494()//Position - 0x1296E
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_495(int iParam0, int iParam1)//Position - 0x12985
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

int func_496()//Position - 0x129C0
{
	if (func_497() == 0)
	{
		return 1;
	}
	return 0;
}

int func_497()//Position - 0x129D5
{
	return Global_1312467.f_18;
}

int func_498()//Position - 0x129E3
{
	if (func_499())
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

bool func_499()//Position - 0x12A22
{
	return Global_1312439;
}

bool func_500()//Position - 0x12A2E
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

int func_501()//Position - 0x12A43
{
	return Global_1373500.f_68;
}

int func_502()//Position - 0x12A51
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_503()//Position - 0x12A67
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_504(int iParam0)//Position - 0x12A8B
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

int func_505()//Position - 0x12AB7
{
	if (func_506(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_506(int iParam0)//Position - 0x12AD2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_47(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_507()//Position - 0x12AF5
{
	if (func_505())
	{
		return 1;
	}
	if (func_442(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_471())
	{
		return 1;
	}
	if (func_120(PLAYER::PLAYER_ID()))
	{
		switch (func_414(PLAYER::PLAYER_ID()))
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
				if (!func_508(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_508(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_508(PLAYER::PLAYER_ID()))
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

bool func_508(int iParam0)//Position - 0x12BD0
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_509(int iParam0)//Position - 0x12BE8
{
	if (iParam0 == 27)
	{
		if ((func_120(PLAYER::PLAYER_ID()) && !func_118(PLAYER::PLAYER_ID())) && !func_413(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_64(PLAYER::PLAYER_ID(), 0) && func_118(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_113(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_510()//Position - 0x12C59
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_530();
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 345, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 346, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 347, 1);
	}
}

bool func_511()//Position - 0x12CBD
{
	return func_27() >= 2;
}

void func_512()//Position - 0x12CCB
{
	func_53(3000, 3000);
}

void func_513()//Position - 0x12CDD
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (((((VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iVar0) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("hydra")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("savage")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("buzzard")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("valkyrie"))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		}
	}
}

void func_514()//Position - 0x12D77
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_885[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_935.f_19[iVar0]))
			{
				iLocal_885[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_935.f_19[iVar0]));
				HUD::SET_BLIP_SPRITE(iLocal_885[iVar0], 351);
				HUD::SET_BLIP_COLOUR(iLocal_885[iVar0], 2);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_885[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_515()//Position - 0x12DF4
{
	MISC::SET_BIT(&(Global_2531497.f_4897), 1);
}

void func_516(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x12E08
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_118(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_522(iParam2);
		return;
	}
	iVar1 = func_63(PLAYER::PLAYER_ID());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (MISC::ARE_STRINGS_EQUAL(func_521(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > -1)
	{
		iVar0 = iParam2->f_1;
	}
	if (!MISC::IS_BIT_SET(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(func_521(iVar1)))
			{
				MISC::SET_BIT(iParam2, 0);
				MISC::SET_BIT(iParam2, 1);
			}
		}
	}
	if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!MISC::IS_BIT_SET(*iParam2, 2))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT(func_520(iVar1)))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					MISC::SET_BIT(iParam2, 2);
				}
			}
			if (!MISC::IS_BIT_SET(*iParam2, 3))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(func_519(iVar1)))
				{
					MISC::SET_BIT(iParam2, 3);
				}
			}
			if (MISC::IS_BIT_SET(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!MISC::IS_BIT_SET(*iParam2, 4))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						MISC::SET_BIT(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_518(iVar1))
					{
						if (!MISC::IS_BIT_SET(*iParam2, 8))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							MISC::SET_BIT(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT(func_517(iVar1)))
						{
							AUDIO::CANCEL_MUSIC_EVENT(func_520(iVar1));
							MISC::CLEAR_BIT(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_517(int iParam0)//Position - 0x12FAB
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
		case 236:
		case 243:
		case 158:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_518(int iParam0)//Position - 0x1306D
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

char* func_519(int iParam0)//Position - 0x130B7
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
		case 236:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_520(int iParam0)//Position - 0x13179
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
		case 236:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_521(int iParam0)//Position - 0x1323B
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
		case 236:
		case 243:
		case 158:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_522(int iParam0)//Position - 0x132FD
{
	int iVar0;
	
	iVar0 = func_63(PLAYER::PLAYER_ID());
	if (MISC::IS_BIT_SET(*iParam0, 1))
	{
		if (!MISC::IS_BIT_SET(*iParam0, 5))
		{
			if (MISC::IS_BIT_SET(*iParam0, 2))
			{
				if (!MISC::IS_BIT_SET(*iParam0, 4))
				{
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
				}
			}
			if (!MISC::IS_BIT_SET(*iParam0, 6))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(func_520(iVar0)))
				{
					MISC::SET_BIT(iParam0, 6);
				}
			}
			if (MISC::IS_BIT_SET(*iParam0, 6))
			{
				if (!MISC::IS_BIT_SET(*iParam0, 7))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT(func_517(iVar0)))
					{
						MISC::SET_BIT(iParam0, 7);
					}
				}
				if (MISC::IS_BIT_SET(*iParam0, 7))
				{
					MISC::SET_BIT(iParam0, 5);
				}
			}
		}
	}
}

void func_523(int iParam0)//Position - 0x133A8
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_524()//Position - 0x133BE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
		{
			if (func_527())
			{
				func_84(8);
				if (func_5(&uLocal_928))
				{
					func_7(&uLocal_928);
				}
			}
		}
		else if (!func_527())
		{
			func_82(8);
		}
		if (iLocal_879 >= 0)
		{
			if (func_527())
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_879))
				{
					AUDIO::STOP_SOUND(iLocal_879);
				}
			}
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			if (Local_970[iLocal_875 /*6*/].f_5 == 3)
			{
				if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_222 == 99)
				{
					if (!func_44(NETWORK::PARTICIPANT_ID(), 8))
					{
						if (!func_5(&uLocal_928))
						{
							if (func_525())
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_879, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								AUDIO::PLAY_SOUND_FRONTEND(iLocal_879, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_928, 0, 0);
						}
						if (func_5(&uLocal_928))
						{
							if (!func_2(&uLocal_928, 10000, 0))
							{
							}
							else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
								NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
								Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
							else
							{
								ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
						}
					}
					if (!func_525())
					{
						func_530();
						PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_928))
				{
					func_7(&uLocal_928);
				}
			}
		}
	}
}

int func_525()//Position - 0x13570
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (func_526(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x135B1
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_527()//Position - 0x13619
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	func_528(&vVar0, &vVar3, &fVar6);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vVar0, vVar3, fVar6, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_528(var uParam0, var uParam1, var uParam2)//Position - 0x13654
{
	switch (Local_935.f_31)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_529(bool bParam0)//Position - 0x1370B
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
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
}

void func_530()//Position - 0x137F0
{
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}

void func_531()//Position - 0x13861
{
	if (!func_537())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_532();
}

void func_532()//Position - 0x1388E
{
	func_534();
	func_533(0);
}

void func_533(bool bParam0)//Position - 0x1389F
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

void func_534()//Position - 0x13935
{
	if (!func_536())
	{
	}
	if (func_537())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_535();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_535()//Position - 0x1395E
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

int func_536()//Position - 0x13BD0
{
	if (!func_537())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_535();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_537()//Position - 0x13BF6
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_538(bool bParam0)//Position - 0x13C0C
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iLocal_893 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_890[iVar0]);
		func_80(0);
		func_541();
		func_539();
	}
}

void func_539()//Position - 0x13C4A
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	func_67();
	switch (Local_935.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_540(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_540(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_540(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_540(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_540(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_540(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_540(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_540(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_540(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_540(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_540(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_540(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_540(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_540(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_540(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_540(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_540(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_540(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_540(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_540(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_540(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_540(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_540(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_540(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_540(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_540(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_540(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_540(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_540(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_540(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_540(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_540(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_540(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_540(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_540(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_540(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_540(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_540(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_540(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_540(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_540(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_540(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_540(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_540(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_540(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_540(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_540(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_540(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_540(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_540(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_540(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_540(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_540(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_540(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_540(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_540(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_540(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_540(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_540(vector3 vParam0, float fParam3)//Position - 0x14243
{
	if (Global_2405071.f_1744 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_1745[Global_2405071.f_1744 /*4*/] = { vParam0 };
		Global_2405071.f_1745[Global_2405071.f_1744 /*4*/].f_3 = fParam3;
		Global_2405071.f_1744++;
	}
}

void func_541()//Position - 0x142A8
{
	int iVar0;
	
	iVar0 = func_34(PLAYER::PLAYER_ID());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0, 1109393408);
	func_544(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0);
	switch (Local_935.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_542(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_542(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_542(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_542(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_542(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_542(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_542(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_542(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_542(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_542(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_542(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_542(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_542(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_542(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_542(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_542(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_542(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_542(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_542(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_542(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_542(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_542(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_542(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_542(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_542(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_542(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_542(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_542(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_542(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_542(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_542(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_542(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_542(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_542(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_542(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_542(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_542(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_542(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_542(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_542(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_542(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_542(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_542(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_542(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_542(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_542(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_542(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_542(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_542(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_542(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_542(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_542(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_542(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_542(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_542(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_542(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_542(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_542(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_542(vector3 vParam0, float fParam3, int iParam4)//Position - 0x149FA
{
	func_543(vParam0, fParam3, iParam4);
}

void func_543(vector3 vParam0, var uParam3, var uParam4)//Position - 0x14A0E
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

void func_544(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14A98
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !STREAMING::IS_MODEL_IN_CDIMAGE(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405071.f_45.f_65 = bParam0;
	Global_2405071.f_45.f_67 = iParam1;
	Global_2405071.f_45.f_68 = bParam2;
	Global_2405071.f_45.f_173 = iParam3;
	Global_2405071.f_45.f_66 = iParam4;
	Global_2405071.f_45.f_175 = bParam5;
	Global_2405071.f_45.f_176 = bParam7;
	Global_2405071.f_45.f_180 = iParam6;
	Global_2405071.f_45.f_177 = iParam8;
	Global_2405071.f_45.f_178 = iParam9;
	Global_2405071.f_45.f_179 = bParam10;
	if (!bParam0)
	{
		func_547();
	}
	if (bParam2)
	{
		iVar0 = func_546();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, 1);
					bVar1 = true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK::VEH_TO_NET(iVar0));
					}
				}
			}
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (bVar1)
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
				if (bParam5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam6, iParam6);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_545(iVar0);
				}
			}
		}
	}
}

void func_545(int iParam0)//Position - 0x14C02
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (Global_1687738 > -1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("GBMissionFire", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "GBMissionFire"))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "GBMissionFire", Global_1687738);
					}
				}
			}
		}
	}
}

var func_546()//Position - 0x14C69
{
	return Global_2405071.f_2658;
}

void func_547()//Position - 0x14C78
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405071.f_45.f_69 = { Var0 };
	Global_2405071.f_45.f_171 = 0;
}

void func_548()//Position - 0x14CD0
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
	{
		return;
	}
	if (!func_736(7))
	{
		func_561(&iLocal_115);
		func_712(7);
		MISC::CLEAR_AREA_OF_PROJECTILES(func_560(func_34(PLAYER::PLAYER_ID())), 50f, 1);
	}
	if (!func_44(NETWORK::PARTICIPANT_ID(), 7))
	{
		if (func_559(&iLocal_115))
		{
			if (func_17(10))
			{
				if (func_549(&iLocal_115, 1, 0, 1))
				{
					func_84(7);
				}
			}
		}
	}
}

int func_549(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x14D42
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_559(iParam0))
	{
		if (!func_558(&(iParam0->f_3)))
		{
			func_556(&(iParam0->f_3));
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_553(&(iParam0->f_3)));
		iVar1 = MISC::ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_369(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_369(iParam0->f_1, 16))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_382(&(iParam0->f_1), 16);
					AUDIO::STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_369(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_369(iParam0->f_1, 1))
			{
				func_382(&(iParam0->f_1), 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_369(iParam0->f_1, 2))
			{
				func_382(&(iParam0->f_1), 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_369(iParam0->f_1, 4))
			{
				func_382(&(iParam0->f_1), 4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_369(iParam0->f_1, 8))
			{
				func_382(&(iParam0->f_1), 8);
				AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_FIGHT");
				HUD::GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				func_405("CNTDWN_GO");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_84(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_551()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_550(&(iParam0->f_3));
			}
			AUDIO::STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			AUDIO::START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7)))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar7));
					if (iVar8 != PLAYER::PLAYER_ID())
					{
						iVar9 = PLAYER::GET_PLAYER_PED(iVar8);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar9, 0))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iVar9, 0);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_550(var uParam0)//Position - 0x14FC9
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_551()//Position - 0x14FDF
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_552(int iParam0, int iParam1)//Position - 0x15011
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_553(var uParam0)//Position - 0x15064
{
	if (func_558(uParam0))
	{
		if (func_555(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_554(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_554(bool bParam0)//Position - 0x150A3
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

bool func_555(var uParam0)//Position - 0x150FB
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_556(int iParam0)//Position - 0x1510B
{
	func_557(iParam0, 0f);
}

void func_557(int iParam0, float fParam1)//Position - 0x1511A
{
	iParam0->f_1 = (func_554(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_558(var uParam0)//Position - 0x15148
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_559(int iParam0)//Position - 0x15158
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_560(int iParam0)//Position - 0x15170
{
	switch (Local_935.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_561(int iParam0)//Position - 0x1521E
{
	*iParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
}

void func_562()//Position - 0x15231
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_82(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_82(2);
		}
		return;
	}
	if (func_584() || func_581())
	{
		func_530();
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 345, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 346, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 347, 1);
	}
	if (func_584())
	{
		if (!func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_84(4);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (func_580(2))
			{
				func_579(2);
			}
			if (!func_81())
			{
				if (func_580(3))
				{
					func_579(3);
				}
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar0 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (func_526(iVar0))
				{
					VEHICLE::_0x73561D4425A021A2(iVar1, 1);
					func_578(3);
					if (func_580(4))
					{
						func_579(4);
					}
					if (!func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_84(2);
					}
					if (MISC::IS_BIT_SET(Local_935.f_2, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("BIKER_JOUST_START");
							func_84(1);
							func_576();
							NETWORK::_0x13F1FCB111B820B0(1);
						}
						if (!func_575() || !func_574())
						{
							if (func_45(PLAYER::PLAYER_ID()))
							{
								if (!func_575())
								{
									func_563(6);
								}
							}
							else
							{
								func_563(7);
							}
						}
						else
						{
							func_563(8);
						}
					}
				}
				else
				{
					if (func_44(NETWORK::PARTICIPANT_ID(), 1))
					{
						func_82(1);
					}
					if (func_44(NETWORK::PARTICIPANT_ID(), 2))
					{
						func_82(2);
					}
					func_563(4);
				}
			}
			else
			{
				if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					func_82(1);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 2))
				{
					func_82(2);
				}
				if (func_44(NETWORK::PARTICIPANT_ID(), 4))
				{
					func_82(4);
				}
				func_563(3);
			}
		}
		else
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				func_82(1);
			}
			if (func_44(NETWORK::PARTICIPANT_ID(), 2))
			{
				func_82(2);
			}
			func_563(2);
		}
	}
	else
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_82(1);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 2))
		{
			func_82(2);
		}
		if (func_44(NETWORK::PARTICIPANT_ID(), 4))
		{
			func_82(4);
			func_80(0);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		}
	}
}

void func_563(int iParam0)//Position - 0x154AC
{
	struct<8> Var0;
	int iVar16;
	
	if (func_573())
	{
		if (!func_580(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_102("JST_PASSMD", -1);
					break;
				
				case 2:
					func_102("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_102("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_102("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_102("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_102("JST_KBIKE", -1);
					break;
				
				case 11:
					func_102("JST_OAREA", -1);
					break;
				
				case 12:
					func_102("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_144())
					{
						func_572("JST_HTBLAUNCH", "JST_BLIP", iLocal_894, -1);
					}
					else
					{
						func_572("JST_HGNLNCH", "JST_BLIP", iLocal_894, -1);
					}
					break;
				
				case 14:
					func_572("JST_HGNLNCH", "JST_BLIP", iLocal_894, -1);
					break;
				
				case 10:
					func_572("JST_FIGHT", "HUNT_TARBLP", iLocal_895, -1);
					break;
				
				case 15:
					func_572("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&Var0, func_566(func_36()), 64);
					iVar16 = func_714(func_36());
					func_565("JST_RVLLNCH", &Var0, iVar16, "JST_BLIP", iLocal_894, -1);
					break;
				
				case 17:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) != 884483972)
						{
							func_102("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_98(1);
			func_564(iParam0);
		}
	}
}

void func_564(int iParam0)//Position - 0x15656
{
	MISC::SET_BIT(&iLocal_867, iParam0);
}

void func_565(char[4] cParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x15667
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam5);
}

char* func_566(int iParam0)//Position - 0x156A6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = func_571(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return iVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		iVar0 = func_569(iParam0, 0);
		return iVar0;
	}
	if (((func_107(iParam0, 28) || func_107(PLAYER::PLAYER_ID(), 28)) || func_568(iParam0)) && !func_567(iParam0))
	{
		return func_569(iParam0, 0);
	}
	iVar1 = func_265(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_569(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		iVar0 = func_571(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
		{
			return func_569(iVar1, 0);
		}
		else
		{
			return iVar0;
		}
	}
	return "";
}

int func_567(int iParam0)//Position - 0x157AD
{
	struct<13> Var0;
	
	Var0 = { func_199(iParam0) };
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

int func_568(int iParam0)//Position - 0x157DD
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_199(iParam0) };
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

char* func_569(int iParam0, bool bParam1)//Position - 0x15836
{
	if (!bParam1)
	{
		if (func_100(iParam0, 1))
		{
			return func_570();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_570()//Position - 0x1585D
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_571(var uParam0)//Position - 0x1586D
{
	return uParam0;
}

void func_572(char[4] cParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x15877
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_573()//Position - 0x158A2
{
	if (((((!func_388() && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && func_997(PLAYER::PLAYER_ID(), 1, 1)) && !func_121()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}

bool func_574()//Position - 0x158EE
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(PLAYER::PLAYER_ID());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_575()//Position - 0x15917
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_576()//Position - 0x15942
{
	if (!func_577(PLAYER::PLAYER_ID()))
	{
		func_122(25);
	}
}

bool func_577(int iParam0)//Position - 0x1595C
{
	return func_107(iParam0, 25);
}

void func_578(int iParam0)//Position - 0x1596C
{
	Global_2405071.f_45.f_302 = iParam0;
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2405071.f_45.f_302);
	if (Global_2405071.f_45.f_302 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 115, false);
	}
}

void func_579(int iParam0)//Position - 0x159B6
{
	MISC::CLEAR_BIT(&iLocal_867, iParam0);
}

bool func_580(int iParam0)//Position - 0x159C7
{
	return MISC::IS_BIT_SET(iLocal_867, iParam0);
}

int func_581()//Position - 0x159D8
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar3 = { func_560(func_583(PLAYER::PLAYER_ID())) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, false);
	fVar7 = (func_582(func_583(PLAYER::PLAYER_ID())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (MISC::ABSF((vVar3.z - vVar0.z)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

float func_582(int iParam0)//Position - 0x15A3C
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_583(int iParam0)//Position - 0x15A57
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_584()//Position - 0x15A79
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar3 = { func_560(func_34(PLAYER::PLAYER_ID())) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, false);
	fVar7 = (func_582(func_34(PLAYER::PLAYER_ID())) / 2f);
	if (fVar6 <= fVar7)
	{
		if (MISC::ABSF((vVar3.z - vVar0.z)) <= fVar7)
		{
			return 1;
		}
	}
	return 0;
}

void func_585()//Position - 0x15ADD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	HUD::GET_HUD_COLOUR(iLocal_894, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_582(func_34(PLAYER::PLAYER_ID()));
	vVar7 = { func_560(func_34(PLAYER::PLAYER_ID())) };
	vVar7.z = (vVar7.z - fVar5);
	GRAPHICS::DRAW_MARKER(1, vVar7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
}

void func_586()//Position - 0x15B4F
{
	if (func_625())
	{
		func_619();
		func_618();
		func_605();
		func_588();
		func_587();
	}
	else
	{
		switch (func_113(PLAYER::PLAYER_ID()))
		{
			case 0:
				func_531();
				break;
			
			case 1:
				func_619();
				break;
			
			case 2:
				func_587();
				break;
			
			case 3:
				func_619();
				func_618();
				func_605();
				func_587();
				func_588();
				break;
			}
	}
}

void func_587()//Position - 0x15BC6
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(NETWORK::PARTICIPANT_ID(), 1))
			{
				if (!func_580(10))
				{
					func_563(10);
				}
				else
				{
					func_563(15);
				}
				if (!func_580(17))
				{
					func_563(17);
				}
			}
		}
		else if (!func_44(NETWORK::PARTICIPANT_ID(), 1))
		{
			func_563(12);
		}
		else
		{
			func_563(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_625())
		{
			if (PLAYER::PLAYER_ID() == Local_935.f_16[0])
			{
				func_563(13);
			}
			else
			{
				func_563(14);
			}
		}
		else
		{
			func_563(16);
		}
	}
}

void func_588()//Position - 0x15C6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_928))
	{
		if (func_5(&(Local_935.f_5)))
		{
			iLocal_878 = (func_3() - func_22(&(Local_935.f_5), 0, 0));
			if (iLocal_878 < func_3())
			{
				if (iLocal_878 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_604();
				iVar2 = func_34(PLAYER::PLAYER_ID());
				iVar3 = (1 - iVar2);
				iVar4 = func_714(PLAYER::PLAYER_ID());
				iVar5 = Local_935.f_16[iVar3];
				if (Local_935.f_24[iVar2] > 0)
				{
					func_601(Local_935.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				else
				{
					func_601(Local_935.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				if (iVar5 != func_29())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_912))
						{
							iVar4 = func_714(iVar5);
							func_601(Local_935.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
						}
					}
				}
				if (iLocal_878 > 0)
				{
					func_600(iLocal_878, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_600(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
		else
		{
			func_589();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_928, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_997(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_604();
			func_600(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
		}
	}
}

void func_589()//Position - 0x15E2E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_511())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_599();
		if (iVar2 > iLocal_872)
		{
			iVar2 = iLocal_872;
		}
		if (iVar3 != Local_935.f_3)
		{
			iVar3 = Local_935.f_3;
		}
		if ((iVar1 - func_22(&(Local_935.f_7), 0, 0)) >= 0)
		{
			func_598((iVar1 - func_22(&(Local_935.f_7), 0, 0)));
			func_590(iVar3, iVar2, (iVar1 - func_22(&(Local_935.f_7), 0, 0)), 1, func_597(-1));
		}
		else
		{
			func_590(iVar3, iVar2, 0, 1, func_597(-1));
		}
	}
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x15ED5
{
	char* sVar0;
	
	if (func_595(0) == 0)
	{
		return;
	}
	func_594();
	func_591(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_221(sParam4))
	{
		sVar0 = sParam4;
	}
	func_600(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_591(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x15F35
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_593(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(4, iVar0);
		Global_1375006.f_3163[iVar0] = iParam0;
		Global_1375006.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_3163.f_183[iVar0] = iParam3;
		Global_1375006.f_3163.f_216[iVar0] = iParam5;
		Global_1375006.f_3163.f_194[iVar0] = iParam4;
		Global_1375006.f_3163.f_227[iVar0] = iParam6;
		Global_1375006.f_3163.f_270[iVar0] = iParam7;
		Global_1375006.f_3163.f_281[iVar0] = iParam8;
		Global_1375006.f_3163.f_292[iVar0] = iParam9;
		Global_1375006.f_3163.f_303[iVar0] = iParam10;
		Global_1375006.f_3163.f_314[iVar0] = iParam11;
		Global_1375006.f_3163.f_325[iVar0] = iParam13;
		Global_1375006.f_3163.f_336[iVar0] = iParam14;
		Global_1375006.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1375006.f_1109 = 1;
		}
	}
}

void func_592(int iParam0, int iParam1)//Position - 0x1608F
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_593(int iParam0, int iParam1)//Position - 0x160A8
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_594()//Position - 0x160C1
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_595(bool bParam0)//Position - 0x160E4
{
	if (func_596())
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_997(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_596()//Position - 0x1611B
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

char* func_597(int iParam0)//Position - 0x1612D
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_598(int iParam0)//Position - 0x16337
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2531497.f_4735 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2531497.f_4735 = 0;
			MISC::SET_BIT(&(Global_2531497.f_4735), 1);
		}
	}
}

int func_599()//Position - 0x1638F
{
	return 16;
}

void func_600(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x16399
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_593(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(7, iVar0);
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

void func_601(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x164F6
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
			if (func_593(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(6, iVar0);
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
		Global_1375006.f_3835.f_227[iVar0] = uParam13;
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
		if (iParam15 == 5 && func_603())
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
			if (func_602())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_602()//Position - 0x16767
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

int func_603()//Position - 0x1678B
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_604()//Position - 0x167C9
{
	Global_1375006.f_1109 = 1;
}

void func_605()//Position - 0x167D9
{
	if (iLocal_875 > -1)
	{
		if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_875), 1))
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_875), 6))
			{
				if (func_527())
				{
					if (func_525())
					{
						if (!func_617("JST_OBJ_KILL"))
						{
							func_616("JST_OBJ_KILL", &Local_912, iLocal_895, 0);
						}
					}
					else
					{
						if (func_617("JST_OBJ_KILL"))
						{
							func_531();
						}
						if (!func_617("JST_FBIKE"))
						{
							func_613("JST_FBIKE", 0);
						}
						if (!func_44(NETWORK::PARTICIPANT_ID(), 10))
						{
							func_84(10);
							func_612("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_525())
				{
					if (!func_617("JST_OBKAREA"))
					{
						func_613("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_617("JST_OBJ_KILL"))
					{
						func_531();
					}
					if (!func_617("JST_FBIKE"))
					{
						func_613("JST_FBIKE", 0);
					}
				}
			}
			else if (func_736(9))
			{
				if (func_525())
				{
					if (!func_617("JST_OBJ_CHARGE"))
					{
						func_616("JST_OBJ_CHARGE", &Local_912, iLocal_895, 0);
					}
				}
			}
		}
		else if (!func_584())
		{
			if (!func_617("JST_OGOAREA"))
			{
				func_606("JST_OGOAREA", "JST_START", iLocal_894, 0);
			}
		}
		else if (!func_525())
		{
			if (!func_617("JST_OBIKE"))
			{
				func_613("JST_OBIKE", 0);
			}
		}
	}
}

void func_606(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x1692E
{
	if (func_607(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_607(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x16953
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
	if (func_611(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_532();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_610();
	func_609(bParam2);
	func_608();
	return 1;
}

void func_608()//Position - 0x169FD
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_609(bool bParam0)//Position - 0x16A10
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_610()//Position - 0x16A36
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_611(int iParam0, int iParam1)//Position - 0x16A5B
{
	if (!func_537())
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

void func_612(char[4] cParam0, int iParam1)//Position - 0x16AB3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_613(char* sParam0, bool bParam1)//Position - 0x16ACA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_614(sParam0))
	{
		return;
	}
	func_532();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_610();
	func_609(bParam1);
	func_608();
}

bool func_614(int iParam0)//Position - 0x16B35
{
	if (!func_537())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_615(iParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_615(int iParam0)//Position - 0x16B79
{
	if (!func_537())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_616(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x16BAB
{
	if (func_607(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_617(int iParam0)//Position - 0x16BD0
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!func_537())
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
	return func_614(iParam0);
}

void func_618()//Position - 0x16C21
{
}

void func_619()//Position - 0x16C29
{
	if (!func_511())
	{
		func_624();
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_883))
		{
			HUD::REMOVE_BLIP(&iLocal_883);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_882))
		{
			HUD::REMOVE_BLIP(&iLocal_882);
		}
		if (iLocal_875 > -1)
		{
			if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_875), 1))
			{
				func_620();
			}
		}
	}
}

void func_620()//Position - 0x16C7C
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	func_623(&vVar0);
	if (!HUD::DOES_BLIP_EXIST(iLocal_884))
	{
		func_622(&fVar3, &fVar4, &iVar5);
		iLocal_884 = HUD::_ADD_BLIP_FOR_AREA(vVar0, fVar3, fVar4);
		HUD::SET_BLIP_ROTATION(iLocal_884, iVar5);
		func_621(&iLocal_884, 29);
		HUD::SET_BLIP_ALPHA(iLocal_884, 180);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_884, false);
	}
}

void func_621(int iParam0, int iParam1)//Position - 0x16CD1
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_77(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

void func_622(var uParam0, var uParam1, var uParam2)//Position - 0x16CF7
{
	if (Local_935.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_935.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_935.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_623(var uParam0)//Position - 0x16D5F
{
	switch (Local_935.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_624()//Position - 0x16DC5
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_883))
	{
		iLocal_883 = HUD::ADD_BLIP_FOR_COORD(func_560(func_34(PLAYER::PLAYER_ID())));
		HUD::SET_BLIP_SPRITE(iLocal_883, 495);
		HUD::SET_BLIP_FLASHES(iLocal_883, 1);
		HUD::SET_BLIP_FLASH_TIMER(iLocal_883, 7000);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_883, "CELL_JOUST");
		HUD::SET_BLIP_PRIORITY(iLocal_883, 9);
		Global_2531497.f_267 = 1;
		func_621(&iLocal_883, iLocal_894);
		if (!func_736(6))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			func_712(6);
		}
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_882))
	{
		iLocal_882 = HUD::ADD_BLIP_FOR_RADIUS(func_560(func_34(PLAYER::PLAYER_ID())), (func_582(func_34(PLAYER::PLAYER_ID())) / 2f));
		func_621(&iLocal_882, iLocal_894);
		HUD::SET_BLIP_ALPHA(iLocal_882, 100);
		HUD::SET_BLIP_SCALE(iLocal_882, 1.4f);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_882, false);
	}
}

int func_625()//Position - 0x16E92
{
	if (func_627() || func_626())
	{
		return 1;
	}
	return 0;
}

int func_626()//Position - 0x16EB0
{
	return func_37(PLAYER::PLAYER_ID());
}

bool func_627()//Position - 0x16EC0
{
	return func_35(PLAYER::PLAYER_ID());
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x16ED0
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_414(PLAYER::PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_176() != func_29())
		{
			Global_1675140.f_2 = func_711(func_176());
			Global_1675140.f_3 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_28 = func_709(PLAYER::PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_708(func_99(1));
		}
	}
	else
	{
		iVar0 = func_63(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_96(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_143(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_707(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_89(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_135(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_176() != func_29())
		{
			Global_1674879.f_4 = func_711(func_176());
			Global_1674879.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674879.f_6), &(Global_1674879.f_7));
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
			Global_1674879.f_40 = func_170(iParam1);
			Global_1674879.f_41 = func_706();
			Global_1674879.f_42 = func_335(PLAYER::PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_705(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_157() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_133(iVar0))
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
			Global_1674996 = func_704(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_129(PLAYER::PLAYER_ID()) == 0)
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
		if (func_176() != func_29())
		{
			Global_1674996.f_4 = func_711(func_176());
			Global_1674996.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_104(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_176() != func_29())
		{
			Global_1674933.f_4 = func_711(func_176());
			Global_1674933.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_132(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_176() != func_29())
		{
			Global_1675040.f_4 = func_711(func_176());
			Global_1675040.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_702(func_49(), 5);
		Global_1675040.f_28 = func_708(func_312(PLAYER::PLAYER_ID()));
		Global_1675040.f_29 = func_141(6107, -1, 0);
		Global_1675040.f_30 = func_141(6103, -1, 0);
		Global_1675040.f_31 = func_141(6104, -1, 0);
		Global_1675040.f_32 = func_141(6106, -1, 0);
		Global_1675040.f_33 = func_141(6105, -1, 0);
		Global_1675040.f_34 = func_141(6108, -1, 0);
		Global_1675040.f_7 = func_700();
		Global_1675040.f_51 = func_708(bParam4);
	}
	else if (func_131(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_176() != func_29())
		{
			Global_1675094.f_4 = func_711(func_176());
			Global_1675094.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_141(6157, -1, 0);
		Global_1675094.f_25 = func_141(6162, -1, 0);
		Global_1675094.f_26 = func_141(6163, -1, 0);
		Global_1675094.f_27 = func_708((((func_699() || func_698()) || func_697()) || func_696(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_141(6164, -1, 0);
		Global_1675094.f_29 = func_708(func_695());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_700();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_127(func_128(PLAYER::PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_700();
		if (func_176() != func_29())
		{
			Global_1675228.f_4 = func_711(func_176());
			Global_1675228.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_176() != -1)
		{
			Global_1675228.f_17 = func_694(func_176());
		}
		Global_1675228.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_28 = func_709(PLAYER::PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_708(func_99(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_700();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_176() != func_29())
		{
			Global_1675175.f_4 = func_711(func_176());
			Global_1675175.f_5 = func_710(func_176());
		}
		Global_1675175.f_28 = func_709(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_693(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_677(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_676(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_708(func_675(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_708(func_674(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_708(func_673(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_708(func_672(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_671(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_670(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_669(PLAYER::PLAYER_ID());
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_708(func_99(1));
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_28 = func_709(PLAYER::PLAYER_ID());
	}
	else if (func_125(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_129(PLAYER::PLAYER_ID());
		Global_1675312.f_2 = func_668();
		Global_1675312.f_3 = func_667();
		Global_1675312.f_4 = func_711(func_176());
		Global_1675312.f_5 = func_710(func_176());
		Global_1675312.f_7 = func_700();
		Global_1675312.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_176() != -1)
		{
			Global_1675312.f_17 = func_694(func_176());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_708(func_666(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_664(21, -1);
	}
	else if (func_124(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_711(func_176());
		Global_1675387.f_7 = func_710(func_176());
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_708(func_99(1));
		}
		if (func_176() != -1)
		{
			Global_1675387.f_9 = func_694(func_176());
		}
		Global_1675387.f_10 = func_700();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else
	{
		if (func_176() != func_29())
		{
			Global_1674861 = func_711(func_176());
			Global_1674861.f_1 = func_710(func_176());
		}
		Global_1674861.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674861.f_13 = func_663();
		Global_1674861.f_15 = 0;
		if (func_174(1))
		{
			if (func_92() == func_176())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_662())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_661() || func_660()) || func_659()) || func_658()) || func_657()) || func_656(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_654(func_655(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_637(func_653(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_636(PLAYER::PLAYER_ID()) || func_635(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_634(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_633(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_632(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_631(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_631(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_630(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_629(PLAYER::PLAYER_ID(), iVar2);
				if (func_332(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_332(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_332(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_629(int iParam0, int iParam1)//Position - 0x17A8E
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_327(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_630(int iParam0)//Position - 0x17AE7
{
	int iVar0;
	
	if (iParam0 == func_29())
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

int func_631(int iParam0, int iParam1, var uParam2)//Position - 0x17B29
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_632(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_632(int iParam0, int iParam1)//Position - 0x17B63
{
	if (iParam1 == func_29())
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

bool func_633(int iParam0)//Position - 0x17EB7
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_634(int iParam0)//Position - 0x17ED3
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_635(int iParam0)//Position - 0x17EF0
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_636(int iParam0)//Position - 0x17F1A
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_637(int iParam0)//Position - 0x17F44
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_664(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_651(11));
		func_650(iVar1, &iVar0, 1);
		iVar2 = func_664(func_639(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_141(func_638(4, iVar0), -1, 0);
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

int func_638(int iParam0, int iParam1)//Position - 0x17FC0
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

int func_639(int iParam0)//Position - 0x1DCCF
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_651(iVar0) && iParam0 < func_640(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_640(int iParam0)//Position - 0x1DD12
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
		iVar0 = func_649(iParam0);
		return func_648(iVar0);
	}
	return (func_641(iParam0, -1) * iParam0 + 1);
}

int func_641(int iParam0, int iParam1)//Position - 0x1DE44
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_644(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_643(iParam1))
			{
				return 0;
			}
			else if (func_642(iParam1, -1))
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

int func_642(int iParam0, int iParam1)//Position - 0x1E077
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

int func_643(int iParam0)//Position - 0x1E154
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

int func_644(int iParam0, bool bParam1, bool bParam2)//Position - 0x1E183
{
	if (bParam2)
	{
		return func_645(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_645(PLAYER::PLAYER_ID(), 0))
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

bool func_645(int iParam0, bool bParam1)//Position - 0x1E25E
{
	if (Global_1590284 != func_29())
	{
		if (!func_647(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_646(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_646(int iParam0)//Position - 0x1E2CA
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_647(int iParam0)//Position - 0x1E2F0
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x1E31C
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

int func_649(int iParam0)//Position - 0x1E34D
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_650(int iParam0, int iParam1, bool bParam2)//Position - 0x1E373
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

int func_651(int iParam0)//Position - 0x1E3B3
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
		iVar0 = func_649(iParam0);
		return func_652(iVar0);
	}
	return (func_641(iParam0, -1) * iParam0);
}

int func_652(int iParam0)//Position - 0x1E4E2
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

int func_653(int iParam0)//Position - 0x1E513
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

int func_654(int iParam0)//Position - 0x1E59C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_650(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_141(func_638(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_655(int iParam0)//Position - 0x1E5E2
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_656(int iParam0)//Position - 0x1E5FF
{
	if (iParam0 != func_29())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_657()//Position - 0x1E628
{
	return func_141(6542, -1, 0) != 0;
}

bool func_658()//Position - 0x1E63B
{
	return func_141(6163, -1, 0) != 0;
}

bool func_659()//Position - 0x1E64E
{
	return func_141(5380, -1, 0) != 0;
}

bool func_660()//Position - 0x1E661
{
	return func_141(3828, -1, 0) != 0;
}

bool func_661()//Position - 0x1E674
{
	return func_141(3223, -1, 0) != 0;
}

bool func_662()//Position - 0x1E687
{
	return func_141(5379, -1, 0) != 0;
}

int func_663()//Position - 0x1E69A
{
	int iVar0;
	
	iVar0 = func_176();
	if (iVar0 != func_29())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_664(int iParam0, int iParam1)//Position - 0x1E6C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_649(iParam0);
		if (iVar1 == 0 && func_141(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_665(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_709(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_665(int iParam0)//Position - 0x1E79D
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_141(7207, iParam0, 0) != 0;
}

int func_666(int iParam0)//Position - 0x1E7C0
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_667()//Position - 0x1E7E6
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_668()//Position - 0x1E802
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_669(int iParam0)//Position - 0x1E81E
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_670(int iParam0)//Position - 0x1E848
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_671(int iParam0)//Position - 0x1E872
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_672(int iParam0)//Position - 0x1E89C
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_673(int iParam0)//Position - 0x1E8C7
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_674(int iParam0)//Position - 0x1E8F2
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_675(int iParam0)//Position - 0x1E91D
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

bool func_676(int iParam0)//Position - 0x1E948
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

int func_677(int iParam0, int iParam1, int iParam2)//Position - 0x1E965
{
	if (iParam0 == func_29() || !func_692(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_687(iParam0, iParam2);
		
		case 1:
			return func_685(iParam0, iParam2);
		
		case 3:
			return func_684(iParam0);
		
		case 2:
			return func_679(iParam0, iParam2);
		
		case 4:
			return func_678(iParam0);
		
		default:
	}
	return 0;
}

bool func_678(int iParam0)//Position - 0x1E9E1
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_679(int iParam0, int iParam1)//Position - 0x1EA0C
{
	switch (iParam1)
	{
		case 10:
			return func_683(iParam0);
		
		case 11:
			return func_682(iParam0);
		
		case 12:
			return func_681(iParam0);
		
		case 13:
			return func_680(iParam0);
		
		default:
	}
	return 0;
}

bool func_680(int iParam0)//Position - 0x1EA58
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_681(int iParam0)//Position - 0x1EA84
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_682(int iParam0)//Position - 0x1EAB0
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_683(int iParam0)//Position - 0x1EADC
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_684(int iParam0)//Position - 0x1EB08
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_685(int iParam0, int iParam1)//Position - 0x1EB33
{
	switch (iParam1)
	{
		case 5:
			return func_686(iParam0);
		
		case 6:
			return func_675(iParam0);
		
		case 7:
			return func_674(iParam0);
		
		case 8:
			return func_673(iParam0);
		
		case 9:
			return func_672(iParam0);
		
		default:
	}
	return 0;
}

bool func_686(int iParam0)//Position - 0x1EB8E
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_687(int iParam0, int iParam1)//Position - 0x1EBB9
{
	switch (iParam1)
	{
		case 0:
			return func_691(iParam0);
		
		case 1:
			return func_690(iParam0);
		
		case 2:
			return func_689(iParam0);
		
		case 3:
			return func_688(iParam0);
		
		case 4:
			return func_676(iParam0);
		
		default:
	}
	return 0;
}

bool func_688(int iParam0)//Position - 0x1EC14
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_689(int iParam0)//Position - 0x1EC40
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_690(int iParam0)//Position - 0x1EC6C
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_691(int iParam0)//Position - 0x1EC98
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_692(int iParam0)//Position - 0x1ECC3
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_693(int iParam0)//Position - 0x1ECD8
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_677(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_677(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_677(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_677(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_694(int iParam0)//Position - 0x1ED37
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

bool func_695()//Position - 0x1ED4C
{
	return func_141(6156, -1, 0) != 0;
}

int func_696(int iParam0)//Position - 0x1ED5F
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_697()//Position - 0x1ED85
{
	return func_141(6164, -1, 0) == 3;
}

bool func_698()//Position - 0x1ED98
{
	return func_141(6164, -1, 0) == 2;
}

bool func_699()//Position - 0x1EDAB
{
	return func_141(6164, -1, 0) == 1;
}

int func_700()//Position - 0x1EDBE
{
	int iVar0;
	
	if (func_144())
	{
		return 4;
	}
	else if (func_157())
	{
		if (func_359(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_99(1))
	{
		iVar0 = func_701(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_174(1))
	{
		if (func_359(func_176()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_701(int iParam0)//Position - 0x1EE31
{
	if (func_281(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

int func_702(int iParam0, int iParam1)//Position - 0x1EE55
{
	return func_141(func_703(iParam1), iParam0, 0);
}

int func_703(int iParam0)//Position - 0x1EE6A
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

int func_704(int iParam0)//Position - 0x1EEC4
{
	if (func_63(iParam0) == 225 || func_63(iParam0) == 226)
	{
		return func_129(iParam0);
	}
	return -1;
}

int func_705(int iParam0, int iParam1)//Position - 0x1EEF1
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
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

var func_706()//Position - 0x1EF50
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_334(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_707(int iParam0)//Position - 0x1EF82
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

int func_708(bool bParam0)//Position - 0x1EFA8
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_709(int iParam0)//Position - 0x1EFBA
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_710(int iParam0)//Position - 0x1EFE0
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_711(int iParam0)//Position - 0x1F005
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_712(int iParam0)//Position - 0x1F02A
{
	MISC::SET_BIT(&iLocal_866, iParam0);
}

char* func_713()//Position - 0x1F03B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_265(PLAYER::PLAYER_ID());
	if (iVar0 != func_29())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_107(iVar0, 28) || func_107(PLAYER::PLAYER_ID(), 28)) || func_568(iVar0)) && !func_567(iVar0))
			{
				return func_569(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_569(iVar0, 0);
			}
		}
		iVar1 = func_571(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			return func_569(iVar0, 0);
		}
		else
		{
			return iVar1;
		}
	}
	return "";
}

int func_714(int iParam0)//Position - 0x1F0ED
{
	int iVar0;
	
	iVar0 = func_264(iParam0);
	if (iVar0 != -1)
	{
		return func_262(iVar0);
	}
	return 1;
}

void func_715(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1F10D
{
	float fVar0;
	
	if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_735(-1);
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_30() != -1)
		{
			func_734(-1);
		}
		if (func_733() != -1)
		{
			func_732(-1);
		}
		func_731(iParam2);
		func_729(iParam0);
		if (!func_728(iParam0))
		{
			fVar0 = func_727(iParam0);
			if (fVar0 != 1f)
			{
				func_726(fVar0);
				MISC::SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_725(iParam0) || iParam3)
		{
			if (func_724(iParam0, iParam2) && iParam3 == 1)
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
		if (func_81())
		{
			func_122(27);
		}
		if (bParam1)
		{
			if (!func_775())
			{
				func_722(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2531497.f_4555, 1) || MISC::IS_BIT_SET(Global_2531497.f_4555, 4)) || MISC::IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_239(6);
			}
			func_721();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_120(PLAYER::PLAYER_ID()) && func_115(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 8);
		}
		func_717();
		if (func_716(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_716(int iParam0)//Position - 0x1F32A
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

void func_717()//Position - 0x1F374
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_720();
	iVar2 = func_265(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_279(iVar1, iVar2, 1) || func_718(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_718(int iParam0, int iParam1)//Position - 0x1F3E4
{
	if (func_281(iParam0, 1) && func_281(iParam1, 1))
	{
		return (func_719(iParam0) == func_265(iParam1) || func_719(iParam1) == func_265(iParam0));
	}
	return 0;
}

int func_719(int iParam0)//Position - 0x1F426
{
	if (func_281(iParam0, 1))
	{
		return Global_1628955[func_265(iParam0) /*614*/].f_11.f_484;
	}
	return func_29();
}

int func_720()//Position - 0x1F451
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176();
	if (iVar0 != func_29())
	{
		if (func_997(iVar0, 0, 1))
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

void func_721()//Position - 0x1F492
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

void func_722(int iParam0)//Position - 0x1F530
{
	if (func_723() && iParam0)
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

int func_723()//Position - 0x1F565
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0, int iParam1)//Position - 0x1F5AB
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

int func_725(int iParam0)//Position - 0x1F72C
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

void func_726(float fParam0)//Position - 0x1F82A
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_74())
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

float func_727(int iParam0)//Position - 0x1F896
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

int func_728(int iParam0)//Position - 0x1FA36
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

void func_729(int iParam0)//Position - 0x1FAFE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(3791, -1, 0);
	iVar1 = func_730(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_139(3791, iVar0, -1, 1, 0);
	}
}

int func_730(int iParam0)//Position - 0x1FB33
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

void func_731(int iParam0)//Position - 0x1FBCA
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_732(int iParam0)//Position - 0x1FBF9
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_733()//Position - 0x1FC1C
{
	return Global_2531497.f_4898.f_338;
}

void func_734(int iParam0)//Position - 0x1FC2E
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

void func_735(int iParam0)//Position - 0x1FC51
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

bool func_736(int iParam0)//Position - 0x1FC6A
{
	return MISC::IS_BIT_SET(iLocal_866, iParam0);
}

int func_737(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1FC7B
{
	if (func_772(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_771(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_771(PLAYER::PLAYER_ID(), 25))
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
	if (!func_441(PLAYER::PLAYER_ID()))
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
	if (func_770(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_769())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (func_768())
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_492(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_496())
	{
		return 0;
	}
	if (func_771(PLAYER::PLAYER_ID(), 0) || func_771(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_771(PLAYER::PLAYER_ID(), 12) || func_771(PLAYER::PLAYER_ID(), 14)) || func_771(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_761(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_746())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_745())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_744(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_743())
	{
		return 0;
	}
	if (func_742(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_741(PLAYER::PLAYER_ID()) && func_740(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_739())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_738(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_60(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_738(int iParam0)//Position - 0x1FE6F
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_739()//Position - 0x1FEA3
{
	return Global_1676879.f_4090 != -1;
}

int func_740(int iParam0)//Position - 0x1FEB4
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_741(int iParam0)//Position - 0x1FEE5
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_742(int iParam0)//Position - 0x1FF19
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

int func_743()//Position - 0x1FF58
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_744(int iParam0)//Position - 0x1FF70
{
	if (!func_997(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_745()//Position - 0x1FF93
{
	return Global_98721.f_346 > 0;
}

int func_746()//Position - 0x1FFA4
{
	int iVar0;
	
	iVar0 = func_63(PLAYER::PLAYER_ID());
	if (((func_643(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_26) || func_760(PLAYER::PLAYER_ID())) || func_759(PLAYER::PLAYER_ID())) || func_758(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_757(PLAYER::PLAYER_ID()))
	{
		if (func_143(iVar0) || func_707(iVar0))
		{
			return 1;
		}
	}
	if (func_111(PLAYER::PLAYER_ID()))
	{
		if (func_707(iVar0))
		{
			return 1;
		}
	}
	if (func_756(PLAYER::PLAYER_ID()))
	{
		if (func_133(iVar0))
		{
			return 1;
		}
	}
	if (func_755(PLAYER::PLAYER_ID()))
	{
		if (func_132(iVar0))
		{
			return 1;
		}
	}
	if (func_754(PLAYER::PLAYER_ID()))
	{
		if (func_131(iVar0))
		{
			return 1;
		}
	}
	if (func_753(PLAYER::PLAYER_ID()))
	{
		if (func_752(iVar0))
		{
			return 1;
		}
	}
	if (func_751(PLAYER::PLAYER_ID(), 0))
	{
		if (func_750(iVar0))
		{
			if (func_748(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_747(PLAYER::PLAYER_ID()))
	{
		if (func_124(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_747(int iParam0)//Position - 0x200FF
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)//Position - 0x20146
{
	if (func_749(iParam0) != func_29())
	{
		return func_749(iParam0) == func_265(iParam0);
	}
	return 0;
}

int func_749(int iParam0)//Position - 0x2016C
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_750(int iParam0)//Position - 0x20181
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

int func_751(int iParam0, bool bParam1)//Position - 0x201B9
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
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_752(int iParam0)//Position - 0x20247
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

int func_753(int iParam0)//Position - 0x20273
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_754(int iParam0)//Position - 0x202BA
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)//Position - 0x20301
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_756(int iParam0)//Position - 0x20347
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_757(int iParam0)//Position - 0x2038D
{
	if (func_642(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_758(int iParam0)//Position - 0x203B0
{
	if (func_644(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_759(int iParam0)//Position - 0x203D4
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_760(int iParam0)//Position - 0x2041A
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_761(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x20460
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
		if (func_760(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_111(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_759(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_756(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_755(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_754(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_767(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_753(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_766(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_751(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_765(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_747(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_764(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_763(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_762(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_762(int iParam0)//Position - 0x205BF
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_763(int iParam0)//Position - 0x20606
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_764(int iParam0)//Position - 0x2064D
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_765(int iParam0)//Position - 0x20694
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_766(int iParam0)//Position - 0x206DB
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_767(int iParam0)//Position - 0x20722
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_768()//Position - 0x20782
{
	return Global_1312873;
}

bool func_769()//Position - 0x2078E
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

int func_770(int iParam0)//Position - 0x207AA
{
	if (func_491(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_771(int iParam0, int iParam1)//Position - 0x207CF
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_772(int iParam0, int iParam1)//Position - 0x207E8
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_773(int iParam0)//Position - 0x20803
{
	if (!func_157() && !func_281(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_115(PLAYER::PLAYER_ID()))
		{
			if (func_775())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_774()//Position - 0x2085C
{
	return 0;
}

int func_775()//Position - 0x20865
{
	if ((func_107(PLAYER::PLAYER_ID(), 21) || func_107(PLAYER::PLAYER_ID(), 22)) || func_779())
	{
		return 1;
	}
	if (func_776())
	{
		func_122(22);
		return 1;
	}
	return 0;
}

int func_776()//Position - 0x208AA
{
	if (func_64(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_81() && !func_778()) || func_771(PLAYER::PLAYER_ID(), 21)) || func_771(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_777(27);
		}
	}
	return 0;
}

void func_777(int iParam0)//Position - 0x208FD
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

bool func_778()//Position - 0x2091A
{
	return Global_1312417.f_1;
}

bool func_779()//Position - 0x20928
{
	return func_319(356, -1);
}

void func_780(int iParam0, int iParam1)//Position - 0x20938
{
	Local_970[iParam0 /*6*/] = iParam1;
}

bool func_781()//Position - 0x20949
{
	if (!func_44(NETWORK::PARTICIPANT_ID(), 3))
	{
		if (func_17(1))
		{
			func_783("JCMcBpPl9UWmcdOYFza0Tg");
			func_783("jDF4fBBUqG9ZuI9TR7mw");
			func_84(3);
			func_782();
		}
	}
	return func_44(NETWORK::PARTICIPANT_ID(), 3);
}

void func_782()//Position - 0x20988
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

void func_783(int iParam0)//Position - 0x20A9A
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
			if (func_784(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
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

int func_784(var uParam0)//Position - 0x20B1E
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_786(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_785(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_785(var uParam0)//Position - 0x20B85
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_786(uParam0);
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

int func_786(var uParam0)//Position - 0x20BFC
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_788(uParam0->f_1))
	{
		if (func_787(uParam0))
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

int func_787(var uParam0)//Position - 0x20E6C
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

bool func_788(int iParam0)//Position - 0x20E91
{
	return iParam0 == 9999;
}

int func_789()//Position - 0x20E9F
{
	return Local_935;
}

int func_790(int iParam0)//Position - 0x20EAA
{
	return Local_970[iParam0 /*6*/];
}

void func_791()//Position - 0x20EB9
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &uVar2, 2);
				break;
			
			case 185:
				func_792(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_792(int iParam0)//Position - 0x20F0A
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0))
		{
			if (ENTITY::IS_ENTITY_A_PED(Var0))
			{
				iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
				if (PED::IS_PED_A_PLAYER(iVar11))
				{
					iVar12 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar12))
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
										if (iVar13 == PLAYER::PLAYER_ID())
										{
											if (func_525())
											{
												if (func_527())
												{
													if (!func_365(iVar13, iVar12) && func_795(iVar13))
													{
														if (func_793(Var0))
														{
															if (func_45(iVar12))
															{
																Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18284 * Global_262145.f_18285));
															}
															else
															{
																Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18283 * Global_262145.f_18285));
															}
														}
														else if (func_45(iVar12))
														{
															Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18284);
														}
														else
														{
															Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18283);
														}
													}
													else if (iVar13 == iVar12 || !func_365(iVar13, iVar12))
													{
														if (func_793(Var0))
														{
															Local_970[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_563(11);
												}
											}
											else
											{
												func_563(9);
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

int func_793(struct<10> Param0, var uParam10)//Position - 0x210C5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1), 0))
	{
		if (func_794(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
		{
			iVar0 = WEAPON::GET_WEAPON_DAMAGE_TYPE(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == -728555052) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_794(int iParam0)//Position - 0x21148
{
	int iVar0;
	
	if (PED::IS_PED_ON_ANY_BIKE(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if ((((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("chimera") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer3")) || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_795(int iParam0)//Position - 0x211CB
{
	int iVar0;
	int iVar1;
	
	PLAYER::GET_PLAYER_NAME(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
		iVar1 = func_796(iVar0);
		if (func_365(iVar1, iParam0) || iVar1 == iParam0)
		{
			PLAYER::GET_PLAYER_NAME(iParam0);
			PLAYER::GET_PLAYER_NAME(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x21226
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_997(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_797()//Position - 0x2127D
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_736(9))
		{
			iVar0 = (1 - func_34(PLAYER::PLAYER_ID()));
			if (Local_935.f_16[1] != Local_935.f_16[0])
			{
				if (Local_935.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_912, func_566(Local_935.f_16[iVar0]), 64);
					iLocal_895 = func_714(Local_935.f_16[iVar0]);
					func_712(9);
				}
			}
		}
	}
}

void func_798()//Position - 0x212EE
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::_0x21D04D7BC538C146(PLAYER::PLAYER_PED_ID()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (!MISC::IS_BIT_SET(iLocal_874, iVar0))
				{
					NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
					MISC::SET_BIT(&iLocal_874, iVar0);
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!MISC::IS_BIT_SET(iLocal_873, iVar0))
							{
								if (((!func_800(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !func_799(PLAYER::GET_PLAYER_PED(iVar1))) && !func_365(PLAYER::PLAYER_ID(), iVar1)) && (func_584() || func_581()))
								{
									NETWORK::_0xA7C511FA1C5BDA38(iVar1, 1);
									MISC::SET_BIT(&iLocal_873, iVar0);
								}
							}
							else if (func_800(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
								MISC::CLEAR_BIT(&iLocal_873, iVar0);
							}
							else if (func_799(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
								MISC::CLEAR_BIT(&iLocal_873, iVar0);
							}
							else if (func_365(PLAYER::PLAYER_ID(), iVar1))
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
								MISC::CLEAR_BIT(&iLocal_873, iVar0);
							}
							else if (!func_584() && !func_581())
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
								MISC::CLEAR_BIT(&iLocal_873, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(NETWORK::PARTICIPANT_ID(), 1))
				{
					if (Local_970[iLocal_875 /*6*/].f_5 >= 2)
					{
						if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							if (!MISC::IS_BIT_SET(iLocal_873, iVar0))
							{
								if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
								{
									if (!func_800(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) && !func_799(PLAYER::GET_PLAYER_PED(iVar1)))
									{
										NETWORK::_0xA7C511FA1C5BDA38(iVar1, 1);
										MISC::SET_BIT(&iLocal_873, iVar0);
									}
								}
							}
							else if (!(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1))))
							{
								if (func_800(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar1)) || func_799(PLAYER::GET_PLAYER_PED(iVar1)))
								{
									NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
									MISC::CLEAR_BIT(&iLocal_873, iVar0);
								}
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_873, iVar0))
						{
							if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
							{
								NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
								MISC::CLEAR_BIT(&iLocal_873, iVar0);
							}
						}
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(iLocal_873, iVar0))
					{
						if (func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							NETWORK::_0xA7C511FA1C5BDA38(iVar1, 1);
							MISC::SET_BIT(&iLocal_873, iVar0);
						}
					}
					if (!func_44(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
					{
						if (MISC::IS_BIT_SET(iLocal_873, iVar0))
						{
							NETWORK::_0xA7C511FA1C5BDA38(iVar1, 0);
							MISC::CLEAR_BIT(&iLocal_873, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_799(int iParam0)//Position - 0x215C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_800(iParam0, iVar2))
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

bool func_800(int iParam0, int iParam1)//Position - 0x21628
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return PED::GET_VEHICLE_PED_IS_IN(iParam0, 0) == PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_801()//Position - 0x21667
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_877);
	iVar2 = func_34(PLAYER::PLAYER_ID());
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (iLocal_875 > -1)
			{
				if (func_44(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_875), 1))
				{
					if (func_736(9))
					{
						if (iVar0 != NETWORK::PARTICIPANT_ID())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!MISC::IS_BIT_SET(iLocal_876, iLocal_877))
										{
											func_78(iVar1, 432, 1, 0);
											func_71(iVar1, func_77(iLocal_895), 1, 0);
											MISC::SET_BIT(&iLocal_876, iLocal_877);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_876, iLocal_877))
		{
			func_78(iVar1, 432, 0, 0);
			func_71(iVar1, func_77(iLocal_895), 0, 0);
			MISC::CLEAR_BIT(&iLocal_876, iLocal_877);
		}
	}
	iLocal_877++;
	if (iLocal_877 >= 32)
	{
		iLocal_877 = 0;
	}
}

void func_802()//Position - 0x21760
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar20;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_762[iVar1 /*3*/] = func_29();
		vLocal_762[iVar1 /*3*/].f_1 = -1;
		vLocal_762[iVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&iLocal_869, iVar1);
		MISC::CLEAR_BIT(&iLocal_871, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_121[iVar0 /*20*/] = func_803();
		Local_121[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&iLocal_870, iVar0);
		Local_121[iVar0 /*20*/].f_2 = { Var4 };
		Local_121[iVar0 /*20*/].f_18 = 0;
		Local_121[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar20 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_121[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&iLocal_870, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_121[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_997(iVar2, 0, 1))
			{
				iVar20++;
				vLocal_762[iVar1 /*3*/] = iVar2;
				Local_121[iVar0 /*20*/].f_1 = iVar1;
				vLocal_762[iVar1 /*3*/].f_1 = iVar0;
				vLocal_762[iVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_121[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&iLocal_869, iVar1);
				if (ENTITY::IS_ENTITY_DEAD(vLocal_762[iVar1 /*3*/].f_2, 0))
				{
					MISC::SET_BIT(&iLocal_871, iVar1);
				}
				if (func_45(vLocal_762[iVar1 /*3*/]))
				{
					Local_121[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_100(vLocal_762[iVar1 /*3*/], 0))
				{
					Local_121[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_875 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(vLocal_762[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_121[iVar0 /*20*/].f_18)
				{
					if (!MISC::IS_BIT_SET(iLocal_871, iVar1) && !MISC::IS_BIT_SET(iLocal_871, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_121[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_872 != iVar20)
	{
		iLocal_872 = iVar20;
	}
}

int func_803()//Position - 0x21942
{
	return -1;
}

void func_804()//Position - 0x2194B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_875 = -1;
	if (MISC::IS_BIT_SET(iLocal_869, PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_870, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!func_274(PLAYER::PLAYER_ID()))
			{
				iLocal_875 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (func_272() && !func_807())
			{
				iVar0 = func_805();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_875 = iVar2;
					}
				}
			}
		}
	}
}

var func_805()//Position - 0x219C7
{
	if (ENTITY::DOES_ENTITY_EXIST(func_806()))
	{
		return func_806();
	}
	return func_271();
}

var func_806()//Position - 0x219E5
{
	return Global_2359302.f_3;
}

bool func_807()//Position - 0x219F3
{
	return MISC::IS_BIT_SET(Global_2359302, 11);
}

int func_808()//Position - 0x21A05
{
	var uVar0;
	
	func_813(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_812())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_811())
	{
		return 1;
	}
	if (func_810(159))
	{
		if (!func_809())
		{
			return 1;
		}
	}
	if (func_810(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_74() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_74()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_809()//Position - 0x21A8F
{
	return Global_2448961.f_598;
}

int func_810(int iParam0)//Position - 0x21A9E
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_811()//Position - 0x21AB5
{
	return Global_2458999;
}

bool func_812()//Position - 0x21AC1
{
	return Global_2448961.f_593;
}

void func_813(var uParam0)//Position - 0x21AD0
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
					func_814(iVar0);
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

void func_814(int iParam0)//Position - 0x21B43
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_997(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_815(iVar4, &bVar5))
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

int func_815(int iParam0, var uParam1)//Position - 0x21BC4
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

int func_816(bool bParam0)//Position - 0x21C23
{
	if (func_819(1))
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
		if (func_92() == func_29() || !func_997(func_92(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_748(PLAYER::PLAYER_ID()))
	{
		if (func_818(PLAYER::PLAYER_ID()) && func_817())
		{
			return 1;
		}
	}
	return 0;
}

int func_817()//Position - 0x21C9C
{
	switch (func_112(func_740(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_818(int iParam0)//Position - 0x21CC6
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_819(bool bParam0)//Position - 0x21CFA
{
	bool bVar0;
	
	if (!func_174(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_29())
		{
			if (func_997(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_820(func_63(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_239(31);
				if (func_96(func_63(PLAYER::PLAYER_ID())))
				{
					func_239(81);
				}
				if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 != func_29() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_247(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_45(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_239(88);
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

int func_820(int iParam0)//Position - 0x21E4C
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

void func_821()//Position - 0x2200C
{
	SYSTEM::WAIT(0);
}

void func_822()//Position - 0x22019
{
	int iVar0;
	int iVar1;
	
	if (!func_888(&iLocal_113))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
	}
	NETWORK::_0x13F1FCB111B820B0(0);
	func_522(&iLocal_113);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_890[0] || PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == uLocal_890[1])
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_893);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(NETWORK::PARTICIPANT_ID(), 9))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			func_82(9);
		}
	}
	func_51();
	Global_2531497.f_267 = 0;
	func_886(Global_1674861, -1, -1, -1, -1);
	func_826(1, 0);
	func_825();
	func_531();
	func_67();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (func_526(iVar1))
		{
			VEHICLE::_0x73561D4425A021A2(iVar0, 0);
		}
	}
	func_578(0);
	func_824();
	func_823();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_823()//Position - 0x22106
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_890[0]);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_890[1]);
}

void func_824()//Position - 0x22122
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

void func_825()//Position - 0x22222
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_29();
	if (MISC::IS_BIT_SET(Global_1573343, 3))
	{
		MISC::CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_826(bool bParam0, int iParam1)//Position - 0x2227C
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
		func_884();
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_144() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_866(PLAYER::PLAYER_ID(), iParam1, 1, 0);
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
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_120(PLAYER::PLAYER_ID()))
		{
			func_722(0);
		}
	}
	else if (func_864(PLAYER::PLAYER_ID()) != -1)
	{
		func_735(-1);
	}
	func_863(func_29());
	if (func_234(16))
	{
		func_862(16);
	}
	func_859(0);
	func_731(-1);
	func_825();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_858(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_856(iVar1);
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
	iVar2 = func_106();
	if ((func_88(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_855(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_143(iVar2))
	{
		func_852(-1, 1);
	}
	else if (((((func_105(iVar2) || func_851(iVar2)) || func_850(iVar2)) || func_133(iVar2)) || func_132(iVar2)) || func_131(iVar2))
	{
	}
	else
	{
		func_852(-1, 1);
	}
	func_777(19);
	func_777(20);
	func_777(21);
	func_777(22);
	func_777(27);
	func_862(3);
	func_862(4);
	func_862(7);
	func_849();
	if (func_115(PLAYER::PLAYER_ID()))
	{
		func_848(0);
	}
	func_777(29);
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_29();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_841();
	}
	if (!func_120(PLAYER::PLAYER_ID()))
	{
		func_840();
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
		func_839("IMPEXP_SELFDES", 0);
		func_829("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_827(iVar2, 0);
}

void func_827(int iParam0, bool bParam1)//Position - 0x22645
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_828(iParam0));
			MISC::SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1674852.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_828(iParam0));
		MISC::CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_828(int iParam0)//Position - 0x226A1
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

void func_829(char* sParam0)//Position - 0x2271C
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
					func_831();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_830(iVar0))
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

int func_830(int iParam0)//Position - 0x227D0
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_831()//Position - 0x22825
{
	if (func_838(14))
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
		Global_19486 = func_832();
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

var func_832()//Position - 0x228C7
{
	func_833();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_833()//Position - 0x228E0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_836(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_835(PLAYER::PLAYER_PED_ID());
			if (func_834(iVar0) && (!func_838(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_834(Global_111560.f_2358.f_539.f_4321))
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

bool func_834(int iParam0)//Position - 0x229DD
{
	return iParam0 < 3;
}

int func_835(int iParam0)//Position - 0x229E9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_836(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_836(int iParam0)//Position - 0x22A26
{
	if (func_834(iParam0))
	{
		return func_837(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_837(int iParam0)//Position - 0x22A4B
{
	return Global_1798[iParam0 /*29*/];
}

bool func_838(int iParam0)//Position - 0x22A5A
{
	return Global_41396 == iParam0;
}

void func_839(char* sParam0, int iParam1)//Position - 0x22A68
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

void func_840()//Position - 0x22B80
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

void func_841()//Position - 0x22BC7
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_846();
	func_842(1, 1, 0);
	func_52();
}

void func_842(bool bParam0, bool bParam1, bool bParam2)//Position - 0x22BFD
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
		func_845();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_844(0);
	func_843();
}

void func_843()//Position - 0x22CA3
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_844(bool bParam0)//Position - 0x22CC8
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

void func_845()//Position - 0x22CE8
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_846()//Position - 0x22D01
{
	func_847();
	Global_2405071.f_2252 = 0;
}

void func_847()//Position - 0x22D15
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

void func_848(bool bParam0)//Position - 0x22D41
{
	if (bParam0)
	{
		if (!func_107(PLAYER::PLAYER_ID(), 9))
		{
			if (func_113(PLAYER::PLAYER_ID()) != 0)
			{
				func_122(9);
			}
		}
	}
	else if (func_107(PLAYER::PLAYER_ID(), 9))
	{
		func_777(9);
	}
}

void func_849()//Position - 0x22D87
{
	if (func_577(PLAYER::PLAYER_ID()))
	{
		func_777(25);
	}
}

int func_850(int iParam0)//Position - 0x22DA0
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

int func_851(int iParam0)//Position - 0x22DC0
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_852(int iParam0, bool bParam1)//Position - 0x22DEB
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_176() != func_29())
		{
			if (func_749(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2509053.f_93[func_854(iParam0)] = 1;
			}
		}
		iVar0 = func_854(159);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(157);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(148);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(164);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(142);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(152);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(166);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(170);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(173);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(179);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(200);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(201);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(182);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(183);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(185);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(186);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(180);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(195);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(197);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(198);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(207);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(208);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(209);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(214);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(215);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(216);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(217);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(218);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(219);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(220);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(221);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_853(int iParam0, int iParam1, bool bParam2)//Position - 0x23467
{
	if (bParam2)
	{
		if ((!func_107(PLAYER::PLAYER_ID(), 19) && !func_107(PLAYER::PLAYER_ID(), 20)) && !func_107(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_5(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_854(int iParam0)//Position - 0x234ED
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

void func_855(int iParam0)//Position - 0x236EF
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_176() != func_29())
		{
			Global_2509053.f_93[func_854(iParam0)] = 1;
		}
		iVar0 = func_854(155);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(163);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(160);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(153);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(162);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(154);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(171);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(172);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(199);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(194);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(193);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(210);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(205);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(189);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(211);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_856(int iParam0)//Position - 0x23A20
{
	if (!func_11(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_857() };
	}
	if (!func_11(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_857() };
	}
}

Vector3 func_857()//Position - 0x23AA2
{
	vector3 vVar0;
	
	return vVar0;
}

void func_858(int iParam0)//Position - 0x23AAE
{
	if (!func_11(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_857() };
	}
	if (!func_11(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_857() };
	}
}

void func_859(bool bParam0)//Position - 0x23B2C
{
	if (bParam0)
	{
		if (!func_772(PLAYER::PLAYER_ID(), 14))
		{
			func_861(14);
		}
	}
	else if (func_772(PLAYER::PLAYER_ID(), 14))
	{
		func_860(14);
	}
}

void func_860(int iParam0)//Position - 0x23B63
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_861(int iParam0)//Position - 0x23B80
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_5), iParam0);
}

void func_862(int iParam0)//Position - 0x23B9D
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_863(int iParam0)//Position - 0x23BB4
{
	if (func_41(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_864(int iParam0)//Position - 0x23C03
{
	if (func_865(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_865(int iParam0, int iParam1)//Position - 0x23C26
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x23C61
{
	int iVar0;
	
	if (func_334(iParam0, iParam1) && func_883(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		func_870(iVar0, bParam2, bParam3);
		func_867(iVar0, 1);
	}
}

void func_867(int iParam0, bool bParam1)//Position - 0x23C9C
{
	if (!func_869(iParam0))
	{
		return;
	}
	func_320(func_868(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_868(int iParam0)//Position - 0x23CD8
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

bool func_869(int iParam0)//Position - 0x23D32
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_870(int iParam0, bool bParam1, bool bParam2)//Position - 0x23D47
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_629(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_882(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_881(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_880(iParam0, 0, bParam2);
	}
	else if (func_878(iParam0, bParam2))
	{
		iVar0 = func_877(iVar2, 0);
		iVar3 = func_705(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_876(iVar2, bParam2);
		iVar5 = func_877(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_875(iVar2) && func_874(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_882(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_873(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_872(iParam0, (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_876(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_877(iVar2, bParam2) / func_873(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_875(iVar2) && func_874(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_871(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_871(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x23EB8
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_327(iParam1))
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

void func_872(int iParam0, int iParam1)//Position - 0x23F2C
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_873(int iParam0, int iParam1)//Position - 0x23F71
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
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

int func_874(int iParam0, int iParam1)//Position - 0x23FD0
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1) && func_875(iParam1))
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

bool func_875(int iParam0)//Position - 0x2403B
{
	return func_170(iParam0) == 5;
}

int func_876(int iParam0, bool bParam1)//Position - 0x2404B
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_170(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_877(int iParam0, bool bParam1)//Position - 0x24182
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_170(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 0))
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
			if (func_332(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_874(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_878(int iParam0, bool bParam1)//Position - 0x2438C
{
	if (bParam1)
	{
		return func_321(15384, -1, -1);
	}
	return func_321(func_879(iParam0), -1, -1);
}

int func_879(int iParam0)//Position - 0x243B1
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

void func_880(int iParam0, bool bParam1, bool bParam2)//Position - 0x2440B
{
	if (bParam2)
	{
		func_320(15384, bParam1, -1, 1);
		return;
	}
	func_320(func_879(iParam0), bParam1, -1, 1);
}

int func_881(int iParam0, bool bParam1)//Position - 0x24436
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_629(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_875(iVar1))
	{
		if (func_874(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_882(int iParam0, int iParam1, bool bParam2)//Position - 0x2447E
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_883(int iParam0, int iParam1)//Position - 0x2449E
{
	int iVar0;
	
	if (func_334(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_884()//Position - 0x244F2
{
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 28);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_885(24);
}

void func_885(int iParam0)//Position - 0x2451A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_886(struct<14> Param0, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x24543
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var16;
	struct<19> Var35;
	struct<16> Var54;
	struct<17> Var70;
	struct<15> Var87;
	struct<17> Var102;
	struct<17> Var119;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam14;
			STATS::_0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var16 = { Param0 };
			Var16.f_14 = Global_1674861.f_14;
			Var16.f_15 = iParam14;
			Var16.f_16 = iParam15;
			Var16.f_17 = iParam16;
			Var16.f_18 = iParam17;
			STATS::_0x06EAF70AE066441E(&Var16);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var35 = { Param0 };
			Var35.f_14 = Global_1674861.f_14;
			Var35.f_15 = iParam14;
			Var35.f_16 = iParam15;
			Var35.f_17 = iParam16;
			Var35.f_18 = iParam17;
			STATS::_0x14EDA9EE27BD1626(&Var35);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var54 = { Param0 };
			Var54.f_14 = Global_1674861.f_14;
			Var54.f_15 = iParam14;
			STATS::_0x930F504203F561C9(&Var54);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var70 = { Param0 };
			Var70.f_14 = Global_1674861.f_14;
			Var70.f_15 = iParam14;
			Var70.f_16 = iParam15;
			STATS::_0xE3261D791EB44ACB(&Var70);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var87 = { Param0 };
			Var87.f_14 = Global_1674861.f_14;
			STATS::_0x73001E34F85137F8(&Var87);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var102 = { Param0 };
			Var102.f_14 = iParam14;
			Var102.f_15 = (SYSTEM::TO_FLOAT(iParam14) / SYSTEM::TO_FLOAT(iParam15));
			Var102.f_16 = iParam16;
			STATS::_0x53CAE13E9B426993(&Var102);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var119 = { Param0 };
			Var119.f_14 = iParam14;
			Var119.f_15 = iParam15;
			Var119.f_16 = Global_1674861.f_14;
			STATS::_0x7D36291161859389(&Var119);
		}
	}
	func_887();
}

void func_887()//Position - 0x24706
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

bool func_888(var uParam0)//Position - 0x2471A
{
	return MISC::IS_BIT_SET(*uParam0, 0);
}

void func_889(bool bParam0, bool bParam1)//Position - 0x2472A
{
	bool bVar0;
	var uVar1;
	
	if (!func_736(0))
	{
		uVar1 = func_945(func_25(), bParam0, bVar0, bParam1);
		Global_1674861.f_2 = Local_935.f_33;
		Global_1674861.f_3 = Local_935.f_34;
		func_890(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_712(0);
	}
}

void func_890(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x24776
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
		iVar0 = func_414(PLAYER::PLAYER_ID());
		Global_1675140.f_4 = func_668();
		Global_1675140.f_5 = func_667();
		if (func_116(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_941(bParam9);
		Global_1675140.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675140.f_9 = func_708(bParam0);
		Global_1675140.f_10 = uParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_700();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_708(func_99(1));
		}
		Global_1675140.f_24 = func_940(PLAYER::PLAYER_ID());
		Global_1675140.f_28 = func_709(PLAYER::PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_938(iVar0);
	}
	else
	{
		iVar0 = func_63(PLAYER::PLAYER_ID());
	}
	if (func_96(iVar0))
	{
		Global_1674879.f_2 = func_668();
		Global_1674879.f_3 = func_667();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = uParam1;
		Global_1674879.f_19 = func_934(iVar0, bParam0, func_937(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
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
			Global_1674879.f_45 = func_705(func_176(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_933(func_176(), iParam2);
		}
		func_931(iVar0);
	}
	else if (func_104(iVar0))
	{
		Global_1674933.f_2 = func_668();
		Global_1674933.f_3 = func_667();
		Global_1674933.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = uParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_929(iVar0);
	}
	else if (func_133(iVar0))
	{
		Global_1674996.f_2 = func_668();
		Global_1674996.f_3 = func_667();
		Global_1674996.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = uParam1;
		Global_1674996.f_7 = func_700();
		Global_1674996.f_42 = func_702(func_49(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_156(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_708((func_636(iVar1) || func_635(iVar1)));
		Global_1674996.f_30 = func_708(func_928(iVar1));
		Global_1674996.f_32 = func_708(func_633(iVar1));
		Global_1674996.f_33 = func_708(func_634(iVar1));
		Global_1674996.f_34 = func_708(func_927(iVar1));
		Global_1674996.f_35 = func_708(func_632(0, iVar1) == 1);
		Global_1674996.f_36 = func_708(func_926(iVar1));
		Global_1674996.f_37 = func_708(func_925(iVar1));
		Global_1674996.f_38 = func_708(func_924(iVar1));
		Global_1674996.f_39 = func_708(func_332(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_708(func_332(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_708(func_332(iVar1, iVar2, 1));
		if (func_923(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_922(iVar1))
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
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_920(iVar0);
	}
	else if (func_132(iVar0))
	{
		Global_1675040.f_2 = func_668();
		Global_1675040.f_3 = func_667();
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675040.f_10 = func_708(bParam0);
		Global_1675040.f_11 = uParam1;
		Global_1675040.f_17 = func_701(func_92());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_919();
		Global_1675040.f_29 = func_141(6107, -1, 0);
		Global_1675040.f_30 = func_141(6103, -1, 0);
		Global_1675040.f_31 = func_141(6104, -1, 0);
		Global_1675040.f_32 = func_141(6106, -1, 0);
		Global_1675040.f_33 = func_141(6105, -1, 0);
		Global_1675040.f_34 = func_141(6108, -1, 0);
		Global_1675040.f_36 = func_708(func_99(1));
		Global_1675040.f_37 = func_917();
		func_907();
		func_905(iVar0);
	}
	else if (func_131(iVar0))
	{
		Global_1675094.f_2 = func_668();
		Global_1675094.f_3 = func_667();
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675094.f_10 = func_708(bParam0);
		Global_1675094.f_11 = uParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_141(6157, -1, 0);
		Global_1675094.f_25 = func_141(6162, -1, 0);
		Global_1675094.f_26 = func_141(6163, -1, 0);
		Global_1675094.f_27 = func_708((((func_699() || func_698()) || func_697()) || func_696(PLAYER::PLAYER_ID())));
		Global_1675094.f_28 = func_141(6164, -1, 0);
		Global_1675094.f_29 = func_708(func_695());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_668();
		Global_1675094.f_42 = func_708(func_99(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_903(iVar0);
	}
	else if (func_126(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_668();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_667();
		}
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_941(0);
		Global_1675228.f_7 = func_700();
		Global_1675228.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675228.f_10 = func_708(bParam0);
		Global_1675228.f_11 = uParam1;
		if (func_176() != -1)
		{
			Global_1675228.f_17 = func_694(func_176());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_709(PLAYER::PLAYER_ID());
		Global_1675228.f_29 = func_708(func_902(PLAYER::PLAYER_ID()));
		Global_1675228.f_30 = func_708(func_901(PLAYER::PLAYER_ID()));
		Global_1675228.f_31 = func_676(PLAYER::PLAYER_ID());
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_708(func_99(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_899(iVar0);
	}
	else if (func_130(iVar0))
	{
		Global_1675175.f_2 = func_668();
		Global_1675175.f_3 = func_667();
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_941(0);
		Global_1675175.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675175.f_10 = func_708(bParam0);
		Global_1675175.f_11 = uParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_709(PLAYER::PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_693(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_677(PLAYER::PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_676(PLAYER::PLAYER_ID());
		Global_1675175.f_32 = func_708(func_675(PLAYER::PLAYER_ID()));
		Global_1675175.f_33 = func_708(func_674(PLAYER::PLAYER_ID()));
		Global_1675175.f_34 = func_708(func_673(PLAYER::PLAYER_ID()));
		Global_1675175.f_35 = func_708(func_672(PLAYER::PLAYER_ID()));
		Global_1675175.f_36 = func_671(PLAYER::PLAYER_ID());
		Global_1675175.f_37 = func_670(PLAYER::PLAYER_ID());
		Global_1675175.f_39 = func_669(PLAYER::PLAYER_ID());
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_708(func_99(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_897(iVar0);
	}
	else if (func_125(iVar0))
	{
		Global_1675312.f_2 = func_668();
		Global_1675312.f_3 = func_667();
		Global_1675312.f_4 = func_711(func_176());
		Global_1675312.f_5 = func_710(func_176());
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_700();
		Global_1675312.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1675312.f_10 = func_708(bParam0);
		Global_1675312.f_11 = uParam1;
		if (func_92() != -1)
		{
			Global_1675312.f_17 = func_694(func_92());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_896(PLAYER::PLAYER_ID());
		Global_1675312.f_27 = func_708(func_666(PLAYER::PLAYER_ID()));
		Global_1675312.f_28 = func_664(21, -1);
		Global_1675312.f_29 = func_708(func_895(PLAYER::PLAYER_ID()));
		func_893(iVar0);
	}
	else if (func_124(iVar0))
	{
		Global_1675387.f_6 = func_711(func_176());
		Global_1675387.f_7 = func_710(func_176());
		if (func_281(PLAYER::PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_708(func_99(1));
		}
		Global_1675387.f_10 = func_700();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703065);
		Global_1675387.f_14 = uParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_891(iVar0);
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
		Global_1674861.f_8 = uParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_891(int iParam0)//Position - 0x25365
{
	if (iParam0 == 0)
	{
	}
	unk_0x53C31853EC9531FF(&Global_1675387);
	func_892();
}

void func_892()//Position - 0x2537F
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_893(int iParam0)//Position - 0x253A8
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1675312);
	func_894();
}

void func_894()//Position - 0x253C2
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_895(int iParam0)//Position - 0x253D6
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_896(int iParam0)//Position - 0x25401
{
	if (func_63(iParam0) == 243)
	{
		return func_129(iParam0);
	}
	return -1;
}

void func_897(int iParam0)//Position - 0x2541E
{
	STATS::_0x2D7A9B577E72385E(&Global_1675175);
	func_898();
}

void func_898()//Position - 0x25432
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

void func_899(int iParam0)//Position - 0x2555B
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1675228);
	func_900();
}

void func_900()//Position - 0x2556F
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

bool func_901(int iParam0)//Position - 0x25662
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_902(int iParam0)//Position - 0x2568D
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

void func_903(int iParam0)//Position - 0x256B9
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1675094);
	func_904();
}

void func_904()//Position - 0x256CD
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

void func_905(int iParam0)//Position - 0x257DB
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1675040);
	func_906();
}

void func_906()//Position - 0x257EF
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

void func_907()//Position - 0x2593B
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
		iVar2 = (iVar0 + func_651(12));
		func_650(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_909(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_908(Global_1323611[iVar1 /*141*/].f_66))
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

int func_908(int iParam0)//Position - 0x25A81
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

int func_909(int iParam0, bool bParam1)//Position - 0x25BBD
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
		if (!func_916())
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
		if ((((!func_915() && !func_914()) && !func_913()) && !func_912()) && !func_916())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_913())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_911(iParam0))
		{
			return 0;
		}
	}
	if (!func_910(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_910(int iParam0)//Position - 0x25D3D
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_173())
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

int func_911(int iParam0)//Position - 0x25E09
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

int func_912()//Position - 0x282D5
{
	return 0;
}

int func_913()//Position - 0x282DE
{
	return 1;
}

int func_914()//Position - 0x282E7
{
	return 1;
}

int func_915()//Position - 0x282F0
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_916()//Position - 0x28309
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

var func_917()//Position - 0x283C4
{
	var uVar0;
	
	uVar0 = func_918();
	if (!func_157())
	{
		if (func_176() != func_29())
		{
			uVar0 = func_940(func_176()) + 1;
		}
	}
	return uVar0;
}

int func_918()//Position - 0x283F3
{
	return func_940(PLAYER::PLAYER_ID()) + 1;
}

int func_919()//Position - 0x28405
{
	return func_141(6113, -1, 0);
}

void func_920(int iParam0)//Position - 0x28416
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1674996);
	func_921();
}

void func_921()//Position - 0x28430
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_922(int iParam0)//Position - 0x28459
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_923(int iParam0)//Position - 0x28476
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_924(int iParam0)//Position - 0x28493
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_925(int iParam0)//Position - 0x284F4
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_926(int iParam0)//Position - 0x28552
{
	if (iParam0 != func_29())
	{
		if (((((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_927(int iParam0)//Position - 0x285FB
{
	if (iParam0 != func_29())
	{
		if ((MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_928(int iParam0)//Position - 0x2865A
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

void func_929(int iParam0)//Position - 0x28684
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1674933);
	func_930();
}

void func_930()//Position - 0x2869E
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

void func_931(int iParam0)//Position - 0x28808
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1674879);
	func_932();
}

void func_932()//Position - 0x28822
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

int func_933(int iParam0, int iParam1)//Position - 0x28956
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_332(iParam0, iParam1, 2);
	bVar1 = func_332(iParam0, iParam1, 1);
	bVar2 = func_332(iParam0, iParam1, 0);
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

int func_934(int iParam0, bool bParam1, bool bParam2)//Position - 0x28A0C
{
	int iVar0;
	int iVar1;
	
	if (func_143(iParam0))
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
	else if (func_707(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_89(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_96(iParam0))
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
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_711(func_176()), func_710(func_176()), func_668(), func_667(), iVar1, iVar0);
	}
	func_936(iVar0);
	func_935(iVar0);
	return iVar0;
}

void func_935(int iParam0)//Position - 0x28AFF
{
	int iVar0;
	
	iVar0 = func_141(3968, -1, 0);
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
	func_139(3968, iVar0, -1, 1, 0);
}

void func_936(int iParam0)//Position - 0x28B4D
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

int func_937(bool bParam0)//Position - 0x28BC7
{
	if (bParam0)
	{
		return 0;
	}
	if (func_115(PLAYER::PLAYER_ID()) || func_118(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_938(var uParam0)//Position - 0x28BF6
{
	STATS::_0x316DB59CD14C1774(&Global_1675140);
	func_939();
}

void func_939()//Position - 0x28C0A
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

int func_940(int iParam0)//Position - 0x28CEB
{
	if (func_265(iParam0) == func_29())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_941(bool bParam0)//Position - 0x28D11
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_414(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_63(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_944(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_943(PLAYER::PLAYER_ID());
			if (func_127(func_128(PLAYER::PLAYER_ID())))
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
			iVar2 = func_943(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_942(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_942(PLAYER::PLAYER_ID());
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

int func_942(int iParam0)//Position - 0x28E49
{
	if (func_63(PLAYER::PLAYER_ID()) == 238 || func_63(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_943(int iParam0)//Position - 0x28E82
{
	if (func_63(PLAYER::PLAYER_ID()) == 237 || func_63(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_944(int iParam0)//Position - 0x28EBB
{
	if (func_414(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_945(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x28EE0
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_946(struct<21> Param0)//Position - 0x28F3F
{
	func_995(func_996(Param0), Param0);
	func_992(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_935, 35);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_970, 193);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_949(0, 0, 0);
	func_947();
	return 1;
}

void func_947()//Position - 0x28F81
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PED::ADD_RELATIONSHIP_GROUP("relJoust0", &(uLocal_890[0]));
	PED::ADD_RELATIONSHIP_GROUP("relJoust1", &(uLocal_890[1]));
	iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar1], uLocal_890[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_890[iVar2], Global_1574964[iVar1]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, uLocal_890[iVar2], -1533126372);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, -1533126372, uLocal_890[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_890[iVar2], Global_1575012[5]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575012[5], uLocal_890[iVar2]);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_890[iVar2], Global_1574997);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574997, uLocal_890[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_890[0], uLocal_890[1]);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_890[1], uLocal_890[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, uLocal_890[iVar2]);
		func_948(&(uLocal_890[iVar2]));
		iVar2++;
	}
}

void func_948(var uParam0)//Position - 0x290C4
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *uParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1285976420);
}

void func_949(int iParam0, int iParam1, bool bParam2)//Position - 0x291B6
{
	func_991();
	if (func_748(PLAYER::PLAYER_ID()))
	{
		func_953(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_952(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_157() && !func_281(PLAYER::PLAYER_ID(), 1))
	{
		if (func_779())
		{
			func_951(3);
		}
	}
	func_951(4);
	if (func_174(0))
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_57 = func_176();
	}
	if (func_96(iParam0))
	{
		func_932();
		Global_1674879.f_18 = func_701(func_92());
	}
	else if (func_104(func_864(PLAYER::PLAYER_ID())))
	{
		func_930();
		Global_1674933.f_18 = func_701(func_92());
	}
	if (bParam2)
	{
		if (!func_775())
		{
			func_722(1);
		}
	}
	func_950();
}

void func_950()//Position - 0x292A4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_29();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_951(int iParam0)//Position - 0x292DE
{
	MISC::SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

int func_952(int iParam0, bool bParam1)//Position - 0x292F5
{
	return func_279(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_953(bool bParam0)//Position - 0x29309
{
	int iVar0;
	
	func_885(33);
	func_885(34);
	func_885(35);
	func_885(36);
	func_885(37);
	func_885(38);
	func_885(39);
	func_885(40);
	func_885(43);
	func_885(41);
	func_885(54);
	func_885(42);
	func_885(47);
	func_990(23);
	func_990(24);
	func_885(92);
	MISC::CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_989();
	func_984();
	func_979();
	func_974();
	func_963();
	func_959();
	func_955();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_954(3))
	{
		func_990(3);
	}
	else if (func_954(4))
	{
		func_990(4);
	}
	else if (func_954(5))
	{
		func_990(5);
	}
	else if (func_954(6))
	{
		func_990(6);
	}
	else if (func_954(7))
	{
		func_990(7);
	}
	else if (((((((((((((((((func_954(0) || func_954(1)) || func_954(2)) || func_954(8)) || func_954(9)) || func_954(10)) || func_954(11)) || func_954(12)) || func_954(13)) || func_954(14)) || func_954(15)) || func_954(16)) || func_954(17)) || func_954(18)) || func_954(19)) || func_954(20)) || func_954(21)) || func_954(22))
	{
		func_990(8);
		func_990(0);
		func_990(1);
		func_990(2);
		func_990(9);
		func_990(10);
		func_990(11);
		func_990(12);
		func_990(13);
		func_990(14);
		func_990(15);
		func_990(16);
		func_990(17);
		func_990(18);
		func_990(19);
		func_990(20);
		func_990(21);
		func_990(22);
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

bool func_954(int iParam0)//Position - 0x2956F
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_955()//Position - 0x29598
{
	if (func_957())
	{
		func_956(0);
		func_956(1);
		func_956(2);
		func_956(3);
	}
}

void func_956(int iParam0)//Position - 0x295BB
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_957()//Position - 0x295E4
{
	if (((func_958(0) || func_958(1)) || func_958(2)) || func_958(3))
	{
		return 1;
	}
	return 0;
}

bool func_958(int iParam0)//Position - 0x2961A
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_959()//Position - 0x29643
{
	if (func_961())
	{
		func_960(4);
		func_960(5);
		func_960(6);
		func_960(7);
	}
}

void func_960(int iParam0)//Position - 0x29666
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_961()//Position - 0x2968F
{
	if (((func_962(4) || func_962(5)) || func_962(6)) || func_962(7))
	{
		return 1;
	}
	return 0;
}

bool func_962(int iParam0)//Position - 0x296C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_963()//Position - 0x296EE
{
	int iVar0;
	
	if (func_973())
	{
		func_972(8);
		func_972(9);
		func_972(10);
		func_972(12);
		func_972(13);
		func_972(14);
		func_972(19);
		func_972(20);
		func_972(21);
		func_972(22);
		func_972(23);
		func_972(24);
		func_972(25);
		func_972(26);
		func_972(15);
		func_972(16);
		func_972(17);
		func_972(18);
		func_972(35);
		func_972(45);
		func_972(46);
		if (func_971(11))
		{
			func_972(11);
			iVar0 = func_141(7226, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_139(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_971(48))
	{
		if (func_969(151, 3))
		{
			func_967(151, 3);
		}
		func_972(48);
	}
	if (func_971(49))
	{
		if (func_969(152, 3))
		{
			func_967(152, 3);
		}
		func_972(49);
	}
	if (func_971(50))
	{
		if (func_969(153, 3))
		{
			func_967(153, 3);
		}
		func_972(50);
	}
	if (func_971(51))
	{
		if (func_969(func_964(), 3))
		{
			func_967(func_964(), 3);
		}
		func_972(51);
	}
}

int func_964()//Position - 0x29838
{
	if (func_966())
	{
		func_965(154, Global_19486, 1);
	}
	return 154;
}

void func_965(int iParam0, int iParam1, int iParam2)//Position - 0x29853
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

int func_966()//Position - 0x29898
{
	int iVar0;
	
	iVar0 = func_265(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_29()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_967(int iParam0, int iParam1)//Position - 0x298D9
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
			func_968(iParam0, iVar0, 0);
			func_965(iParam0, iVar0, 0);
		}
	}
}

void func_968(int iParam0, int iParam1, int iParam2)//Position - 0x2990E
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

int func_969(int iParam0, int iParam1)//Position - 0x29953
{
	if (func_970(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_970(int iParam0, int iParam1)//Position - 0x2996F
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_971(int iParam0)//Position - 0x29999
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_972(int iParam0)//Position - 0x299C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_973()//Position - 0x299EB
{
	if (((((((((((((((((((((func_971(8) || func_971(9)) || func_971(10)) || func_971(12)) || func_971(11)) || func_971(13)) || func_971(14)) || func_971(19)) || func_971(20)) || func_971(21)) || func_971(22)) || func_971(23)) || func_971(24)) || func_971(25)) || func_971(26)) || func_971(15)) || func_971(16)) || func_971(17)) || func_971(18)) || func_971(35)) || func_971(45)) || func_971(46))
	{
		return 1;
	}
	return 0;
}

void func_974()//Position - 0x29AFD
{
	if (func_978())
	{
		func_977(0);
		func_977(1);
		func_977(2);
		func_977(3);
		func_977(4);
		func_977(5);
		if (func_976(32))
		{
			if (func_969(func_975(), 3))
			{
				func_967(func_975(), 3);
			}
			func_977(32);
		}
	}
}

int func_975()//Position - 0x29B51
{
	if (func_966())
	{
		func_965(12, Global_19486, 1);
	}
	return 12;
}

bool func_976(int iParam0)//Position - 0x29B6C
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_977(int iParam0)//Position - 0x29B95
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_978()//Position - 0x29BBE
{
	if ((((func_976(1) || func_976(0)) || func_976(2)) || func_976(4)) || func_976(5))
	{
		return 1;
	}
	return 0;
}

void func_979()//Position - 0x29BFF
{
	if (func_983())
	{
		func_982(0);
		func_982(1);
		func_982(2);
		func_982(3);
		func_982(4);
		func_982(5);
		func_982(6);
		func_982(7);
		if (func_981(8))
		{
			func_982(8);
		}
		if (func_981(15))
		{
			if (func_969(func_980(), 3))
			{
				func_967(func_980(), 3);
			}
			func_982(15);
		}
	}
}

int func_980()//Position - 0x29C6C
{
	if (func_966())
	{
		func_965(20, Global_19486, 1);
	}
	return 20;
}

bool func_981(int iParam0)//Position - 0x29C87
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_982(int iParam0)//Position - 0x29CB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_983()//Position - 0x29CD9
{
	if ((((((((func_981(0) || func_981(1)) || func_981(2)) || func_981(3)) || func_981(4)) || func_981(5)) || func_981(6)) || func_981(7)) || func_981(8))
	{
		return 1;
	}
	return 0;
}

void func_984()//Position - 0x29D47
{
	if (func_988())
	{
		func_987(0);
		func_987(1);
		func_987(2);
		func_987(3);
		func_987(4);
		func_987(5);
		func_987(6);
		func_987(7);
		func_987(8);
		func_987(9);
		func_987(10);
		func_987(11);
		func_987(12);
		if (func_986(13))
		{
			if (func_969(func_985(), 3))
			{
				func_967(func_985(), 3);
			}
			func_987(13);
		}
	}
}

int func_985()//Position - 0x29DC3
{
	if (func_966())
	{
		func_965(76, Global_19486, 1);
	}
	return 76;
}

bool func_986(int iParam0)//Position - 0x29DDE
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_987(int iParam0)//Position - 0x29E07
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_988()//Position - 0x29E30
{
	if ((((((((((((func_986(0) || func_986(1)) || func_986(2)) || func_986(3)) || func_986(4)) || func_986(5)) || func_986(6)) || func_986(7)) || func_986(8)) || func_986(9)) || func_986(10)) || func_986(11)) || func_986(12))
	{
		return 1;
	}
	return 0;
}

void func_989()//Position - 0x29ECE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_990(int iParam0)//Position - 0x29EF6
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_991()//Position - 0x29F1F
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

int func_992(int iParam0, int iParam1, bool bParam2)//Position - 0x29F41
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_994();
			}
			else
			{
				return 0;
			}
		}
		if (!func_993())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_812())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_810(157))
				{
					if (!bParam2)
					{
						func_994();
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
					func_994();
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
				func_994();
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
			func_994();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_993()//Position - 0x2A056
{
	return Global_1312850;
}

void func_994()//Position - 0x2A062
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_995(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x2A06E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_994();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_996(int iParam0)//Position - 0x2A08D
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

int func_997(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A79F
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

