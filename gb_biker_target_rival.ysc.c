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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	func_88();
	while (true)
	{
		func_87();
		if (func_79())
		{
			func_78();
		}
		if (Global_2531497.f_4898.f_747 == 0)
		{
			func_78();
		}
		switch (iLocal_35)
		{
			case 0:
				iLocal_35 = 1;
				break;
			
			case 1:
				if (func_11())
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (!func_1())
				{
					iLocal_35 = 4;
				}
				break;
			
			case 4:
				func_78();
				break;
		}
	}
}

int func_1()//Position - 0xD3
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2531497.f_4898.f_746;
		if (iVar0 != func_6())
		{
			if (func_4(iVar0))
			{
				func_2(iVar0);
				return 0;
			}
		}
		else
		{
			func_2(iVar0);
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_2(int iParam0)//Position - 0x120
{
	if (iParam0 != func_6())
	{
		func_3(iParam0);
	}
	Global_2531497.f_4898.f_746 = func_6();
}

void func_3(int iParam0)//Position - 0x145
{
	int iVar0;
	
	iVar0 = iParam0;
	MISC::CLEAR_BIT(&(Global_2416074.f_388), iVar0);
	MISC::CLEAR_BIT(&(Global_2416074.f_389), iVar0);
	MISC::CLEAR_BIT(&(Global_2416074.f_390), iVar0);
	MISC::CLEAR_BIT(&(Global_2416074.f_392), iVar0);
	MISC::CLEAR_BIT(&(Global_2416074.f_396), iVar0);
	MISC::CLEAR_BIT(&(Global_2416074.f_391), iVar0);
}

int func_4(int iParam0)//Position - 0x19F
{
	if (!func_5(iParam0, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B8
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

int func_6()//Position - 0x202
{
	return -1;
}

bool func_7(bool bParam0)//Position - 0x20B
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

int func_8(int iParam0, bool bParam1)//Position - 0x21D
{
	return func_9(iParam0, bParam1, 1);
}

int func_9(int iParam0, bool bParam1, int iParam2)//Position - 0x22E
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_10(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_6() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0, int iParam1)//Position - 0x28A
{
	if (iParam0 != func_6())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_6())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()//Position - 0x2D9
{
	int iVar0;
	
	if (func_7(1))
	{
		iVar0 = Global_2531497.f_4898.f_746;
		if (iVar0 != func_6())
		{
			if (func_12(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0)//Position - 0x30C
{
	if (func_5(iParam0, 0, 1))
	{
		func_76(iParam0, 432, 1, 0);
		if (func_75(iParam0))
		{
			func_72(iParam0, func_73(func_74(PLAYER::PLAYER_ID())), 1, 0);
		}
		if (func_70(iParam0))
		{
			func_68(iParam0, 1, 1, 0);
		}
		func_62(iParam0, 1, 0);
		func_13(iParam0, 1, 5000);
		return 1;
	}
	return 0;
}

void func_13(int iParam0, bool bParam1, int iParam2)//Position - 0x370
{
	int iVar0;
	
	if (iParam0 == func_6())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2437549)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
		{
			MISC::SET_BIT(&(Global_2416074.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2416074.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2416074[iVar0], 1);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2416074[iVar0], 250);
			func_14(iParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2416074.f_375), iVar0);
			}
			else
			{
				Global_2416074.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2416074.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2416074.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2416074.f_375), iVar0);
			}
			else
			{
				Global_2416074.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2416074.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2416074.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
		{
			func_14(iParam0);
			HUD::SET_BLIP_FLASHES(Global_2416074[iVar0], 0);
		}
	}
}

void func_14(int iParam0)//Position - 0x4A5
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
		{
			Global_2416074.f_1402[iVar0] = func_15(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2416074[iVar0], Global_2416074.f_1402[iVar0]);
		}
	}
}

int func_15(int iParam0)//Position - 0x4F3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_5(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2416074[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2416074[iVar0]);
			if (MISC::IS_BIT_SET(Global_2416074.f_386, iVar0) || MISC::IS_BIT_SET(Global_2416074.f_385, iVar0))
			{
				return 1;
			}
			else if ((MISC::IS_BIT_SET(Global_2416074.f_371, iVar0) || MISC::IS_BIT_SET(Global_2416074.f_370, iVar0)) || MISC::IS_BIT_SET(Global_2416074.f_388, iVar0))
			{
				return func_59(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_59(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_59(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2437549))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2437549))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_58(Global_2437549, iParam0, -2, 0))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					
					case 303:
					case 418:
						return func_59(10);
						break;
					
					case 364:
						if (func_20(Global_2437549, iParam0, 1))
						{
							return func_59(10);
						}
						else
						{
							return func_59(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_59(10);
						break;
					
					case 417:
						if ((func_19(iParam0) || func_18(iParam0)) || func_16(iParam0))
						{
							if (func_20(Global_2437549, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_20(Global_2437549, iParam0, 1))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_20(Global_2437549, iParam0, 1))
						{
							return func_59(6);
						}
						else
						{
							return func_59(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_16(int iParam0)//Position - 0x76D
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_17(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)//Position - 0x7B4
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

int func_18(int iParam0)//Position - 0xB7C
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_17(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)//Position - 0xBC3
{
	if (iParam0 != func_6())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_17(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_20(int iParam0, int iParam1, bool bParam2)//Position - 0xC0A
{
	if (func_23(iParam0, -2, 0, 0, 0) == func_23(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_21(func_23(iParam0, -2, 0, 0, 0)) && func_21(func_23(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)//Position - 0xC63
{
	if (iParam0 == func_22(1) || iParam0 == func_22(0))
	{
		return 1;
	}
	return 0;
}

int func_22(bool bParam0)//Position - 0xC89
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xCA0
{
	int iVar0;
	int iVar1;
	
	if (func_53(iParam0) && !bParam4)
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
	if (((func_53(PLAYER::PLAYER_ID()) || (func_52() && func_51())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_50();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_5(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_48(iParam1, iParam0, 0);
							}
							else
							{
								return func_35(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_35(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_48(iParam1, iParam0, 0);
				}
				else
				{
					return func_24(0, -1, 0);
				}
			}
			else
			{
				return func_24(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_48(iParam1, iParam0, 0);
		}
		else
		{
			return func_35(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_35(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_24(bool bParam0, int iParam1, bool bParam2)//Position - 0xE80
{
	return func_25(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_25(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xE96
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_34() || (func_33() && func_31())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_30(iParam2, iVar0);
		}
		else
		{
			return func_30(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_29(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_22(1);
				}
				else
				{
					return func_22(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_26(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_26(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_22(1);
	}
	return func_22(0);
}

int func_26(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xF9D
{
	int iVar0;
	
	iVar0 = func_28(iParam0, iParam1, iParam3);
	if (func_27(Global_4456448.f_154360, 1))
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

int func_27(int iParam0, bool bParam1)//Position - 0x10B5
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

int func_28(int iParam0, int iParam1, int iParam2)//Position - 0x1106
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
			if (!func_29(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x114D
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

int func_30(int iParam0, int iParam1)//Position - 0x1318
{
	if (iParam0 == -1)
	{
		iParam0 = func_28(iParam1, iParam0, 4);
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

bool func_31()//Position - 0x1366
{
	if (func_32())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_32()//Position - 0x1388
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_33()//Position - 0x13A0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_34()//Position - 0x13ED
{
	if (func_32() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x140A
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
			if (func_43())
			{
				iVar3 = func_39(iParam0);
				if (!iVar3 == -1)
				{
					return func_37(iVar3);
				}
			}
			if ((func_58(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_29(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_22(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_36(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_22(1);
			}
			else
			{
				return func_25(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_39(iParam0);
	if (!iVar4 == -1)
	{
		return func_37(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_36(bool bParam0)//Position - 0x15AD
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_37(int iParam0)//Position - 0x15C4
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_38(iParam0);
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

var func_38(int iParam0)//Position - 0x1687
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_39(int iParam0)//Position - 0x169E
{
	if (!iParam0 == func_6())
	{
		if (func_41(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_40(iParam0)];
		}
	}
	return -1;
}

int func_40(int iParam0)//Position - 0x16D0
{
	if (iParam0 != func_6())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_6();
}

bool func_41(int iParam0, bool bParam1)//Position - 0x16F3
{
	if (!bParam1)
	{
		if (func_42(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_6();
}

int func_42(int iParam0)//Position - 0x171E
{
	if (iParam0 != func_6())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_6())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_43()//Position - 0x1753
{
	if (((func_47() || func_46()) || func_45()) || func_44())
	{
		return 1;
	}
	return 0;
}

var func_44()//Position - 0x1785
{
	return Global_2448961.f_19;
}

var func_45()//Position - 0x1793
{
	return Global_2448961.f_17;
}

var func_46()//Position - 0x17A1
{
	return Global_2448961.f_16;
}

var func_47()//Position - 0x17AF
{
	return Global_2448961.f_15;
}

int func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x17BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_43())
	{
		iVar2 = func_39(iParam1);
		if (!iVar2 == -1)
		{
			return func_37(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_6())
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
			iVar0 = func_25(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_49(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_29(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_36(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_49(int iParam0)//Position - 0x194A
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

var func_50()//Position - 0x1A1F
{
	return Global_2359302.f_2;
}

bool func_51()//Position - 0x1A2D
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_52()//Position - 0x1A3E
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

int func_53(int iParam0)//Position - 0x1A5B
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
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

bool func_54()//Position - 0x1A9D
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_55(int iParam0, int iParam1)//Position - 0x1AAE
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)//Position - 0x1AF9
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()//Position - 0x1B3A
{
	return Global_1312745;
}

bool func_58(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1B46
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

int func_59(int iParam0)//Position - 0x1BBE
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_61())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_60(iParam0);
}

int func_60(int iParam0)//Position - 0x1BF8
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_61()//Position - 0x1C83
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2437549);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return MISC::IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_6502, 4);
	}
	return 0;
}

void func_62(int iParam0, bool bParam1, bool bParam2)//Position - 0x1CBC
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	func_63(&(Global_2416074.f_718[iParam0]), &(Global_2416074.f_1081[iParam0]), &(Global_2416074.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_63(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)//Position - 0x1CFA
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

int func_64(int iParam0)//Position - 0x1DBF
{
	if (iParam0 == func_6())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_65())
	{
		return 1;
	}
	return 0;
}

int func_65()//Position - 0x1DE8
{
	switch (func_67())
	{
		case 0:
			return func_66();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_66()//Position - 0x1E1B
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_67()//Position - 0x1E3F
{
	return Global_30736;
}

void func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1E4A
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_2416074.f_817[iParam0]), &(Global_2416074.f_1180[iParam0]), &(Global_2416074.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_69(iParam0, bParam2);
	}
}

void func_69(int iParam0, bool bParam1)//Position - 0x1E92
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

bool func_70(int iParam0)//Position - 0x1EED
{
	return func_71(&(Global_2416074.f_817[iParam0]));
}

int func_71(var uParam0)//Position - 0x1F04
{
	if (SCRIPT::IS_THREAD_ACTIVE(*uParam0))
	{
		if (!*uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return 0;
		}
	}
	return 1;
}

void func_72(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1F27
{
	var uVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_73(int iParam0)//Position - 0x1F79
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

int func_74(int iParam0)//Position - 0x21E1
{
	int iVar0;
	
	iVar0 = func_39(iParam0);
	if (iVar0 != -1)
	{
		return func_37(iVar0);
	}
	return 1;
}

bool func_75(int iParam0)//Position - 0x2201
{
	return func_71(&(Global_2416074.f_619[iParam0]));
}

void func_76(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2218
{
	bool bVar0;
	
	if (func_64(iParam0))
	{
		return;
	}
	if (func_63(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_77();
		}
	}
}

void func_77()//Position - 0x2273
{
	Global_2416074.f_1515 = 1;
}

void func_78()//Position - 0x2283
{
	func_2(Global_2531497.f_4898.f_746);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_79()//Position - 0x229D
{
	var uVar0;
	
	func_84(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_83())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81(159))
	{
		if (!func_80())
		{
			return 1;
		}
	}
	if (func_81(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_65() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_65()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_80()//Position - 0x2327
{
	return Global_2448961.f_598;
}

int func_81(int iParam0)//Position - 0x2336
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_82()//Position - 0x234D
{
	return Global_2458999;
}

bool func_83()//Position - 0x2359
{
	return Global_2448961.f_593;
}

void func_84(var uParam0)//Position - 0x2368
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
					func_85(iVar0);
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

void func_85(int iParam0)//Position - 0x23DB
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_86(iVar4, &bVar5))
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

int func_86(int iParam0, var uParam1)//Position - 0x245C
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

void func_87()//Position - 0x24BB
{
	SYSTEM::WAIT(0);
}

int func_88()//Position - 0x24C8
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	return 1;
}

