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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	vector3 vLocal_115[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_212 = 0;
	struct<211> Local_213 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_473(ScriptParam_0);
	}
	else
	{
		func_448(0);
	}
	while (true)
	{
		func_447();
		if (func_436())
		{
			func_448(0);
		}
		if (func_431())
		{
			func_448(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xD5
{
}

void func_2()//Position - 0xDD
{
	if (!func_430(5))
	{
		func_429();
		func_428();
		func_427();
		func_424();
		func_422();
		func_421();
	}
	if (func_430(0))
	{
		func_376();
	}
	else if (func_430(1))
	{
		if (!func_375())
		{
			func_369();
			func_354();
		}
		else
		{
			func_353(1);
			func_352(6);
		}
	}
	else if (func_430(2))
	{
		func_344();
	}
	else if (func_430(3))
	{
		func_343();
		func_338();
		func_336();
		func_335();
		func_334();
		func_333();
		func_332();
		func_327();
		func_321();
		func_307();
		func_305();
		func_263();
		func_262();
		func_247();
		func_344();
		if (func_240())
		{
			func_239();
			return;
		}
		func_235();
		func_234();
		func_228();
		func_216(0);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_430(4))
	{
		func_26();
	}
	else if (func_430(5))
	{
		func_22();
		func_20();
	}
	else if (func_430(6))
	{
		func_11();
	}
	if (!func_430(3) && !func_430(5))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()//Position - 0x228
{
	Local_213.f_44++;
	if (Local_213.f_44 >= 32)
	{
		Local_213.f_44 = 0;
	}
}

void func_4()//Position - 0x248
{
	if (Local_213.f_44 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_213.f_44 /*3*/].f_2))
		{
			if (Global_1648604[PLAYER::PLAYER_ID() /*81*/].f_48[Local_213.f_44] != NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_44 /*3*/].f_2))
			{
				Global_1648604[PLAYER::PLAYER_ID() /*81*/].f_48[Local_213.f_44] = NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_44 /*3*/].f_2);
			}
		}
	}
}

void func_5()//Position - 0x2AC
{
	int iVar0;
	
	if (Local_213.f_118)
	{
		if (func_10(&(Local_213.f_178)))
		{
			if (func_9())
			{
				iVar0 = Global_262145.f_24730;
			}
			else
			{
				iVar0 = Global_262145.f_24130;
			}
			if (func_7(&(Local_213.f_178), iVar0, 0))
			{
				func_6(&(Local_213.f_178));
				Local_213.f_17 = 100;
				MISC::CLEAR_BIT(&(Local_213.f_5), 4);
				MISC::CLEAR_BIT(&(Local_213.f_5), 3);
				MISC::CLEAR_BIT(&(Local_213.f_5), 24);
				Local_213.f_118 = 0;
			}
		}
	}
}

void func_6(var uParam0)//Position - 0x31F
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)//Position - 0x32C
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

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x38A
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

bool func_9()//Position - 0x3CF
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 2);
}

bool func_10(var uParam0)//Position - 0x3E2
{
	return uParam0->f_1;
}

void func_11()//Position - 0x3EE
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			if (!func_12())
			{
				func_448(1);
			}
			else
			{
				func_448(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
	else if (!func_12())
	{
		func_448(1);
	}
	else
	{
		func_448(0);
	}
}

int func_12()//Position - 0x445
{
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17() && func_13(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)//Position - 0x47C
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)//Position - 0x4C3
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

int func_15(int iParam0, bool bParam1, bool bParam2)//Position - 0x88B
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

int func_16()//Position - 0x8D5
{
	return -1;
}

bool func_17()//Position - 0x8DE
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 5);
}

bool func_18()//Position - 0x8F1
{
	return MISC::IS_BIT_SET(Global_1687880, 24);
}

bool func_19()//Position - 0x903
{
	return MISC::IS_BIT_SET(Global_1687880, 16);
}

void func_20()//Position - 0x915
{
	char* sVar0;
	
	if (Local_213.f_44 == -1)
	{
		return;
	}
	if (!func_21(Local_213.f_44))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_213.f_44 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_136[Local_213.f_44]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_213.f_136[Local_213.f_44] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_44 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_136[Local_213.f_44]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_213.f_136[Local_213.f_44], 0);
	}
}

int func_21(int iParam0)//Position - 0x9C3
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_22()//Position - 0x9E5
{
	if (Local_213.f_44 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_213.f_44 /*3*/].f_2) && func_25(NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_44 /*3*/].f_2)))
		{
			if (func_24(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_213.f_119 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_213.f_45[Local_213.f_44] == -1)
			{
				Local_213.f_45[Local_213.f_44] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_45[Local_213.f_44], "Flight_Loop", NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_44 /*3*/].f_2), Local_213.f_119, 0, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_45[Local_213.f_44], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_45[Local_213.f_44], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_213.f_45[Local_213.f_44] != -1)
		{
			AUDIO::STOP_SOUND(Local_213.f_45[Local_213.f_44]);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_45[Local_213.f_44]);
			Local_213.f_45[Local_213.f_44] = -1;
		}
	}
}

int func_23(int iParam0)//Position - 0xB03
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)//Position - 0xB25
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0)//Position - 0xB47
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

void func_26()//Position - 0xB68
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 200, 1);
	func_63();
	func_61();
	func_54(1);
	if (!MISC::IS_BIT_SET(Local_213.f_5, 1))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 1);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_33))
		{
			Local_213.f_33 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_33, "HUD_Static_Loop", Local_213.f_119, 1);
		}
		if (!func_28())
		{
			PAD::SET_PAD_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("RemixDrone");
			MISC::SET_BIT(&(Local_213.f_6), 0);
		}
		MISC::SET_BIT(&(Local_213.f_5), 1);
	}
	else if (!func_10(&(Local_213.f_174)))
	{
		func_8(&(Local_213.f_174), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_27())
		{
			iVar0 = 500;
		}
		if (func_7(&(Local_213.f_174), iVar0, 0) || func_28())
		{
			if (Local_213.f_37 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_37))
				{
					Local_213.f_37 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_37, "HUD_Disconnect", Local_213.f_119, 1);
				}
			}
			func_353(1);
			func_352(6);
		}
	}
}

bool func_27()//Position - 0xCC4
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 4);
}

bool func_28()//Position - 0xCD7
{
	return MISC::IS_BIT_SET(Global_1687880, 20);
}

bool func_29()//Position - 0xCE9
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 3);
}

bool func_30()//Position - 0xCFC
{
	return MISC::IS_BIT_SET(Global_1687880, 11);
}

bool func_31()//Position - 0xD0E
{
	return Global_2508063;
}

int func_32()//Position - 0xD1A
{
	if ((func_53(PLAYER::PLAYER_ID(), 0) && Global_1319106 == 1) && func_33())
	{
		return 1;
	}
	return 0;
}

int func_33()//Position - 0xD47
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 1;
}

int func_34()//Position - 0xE62
{
	int iVar0;
	
	if (func_50(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_49(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_46(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_45(Global_4456448.f_154360))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 1;
					}
					else if (func_48(PLAYER::PLAYER_ID()) || func_43())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687909)
	{
		return 1;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_41(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_40(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER::PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_39(PLAYER::PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590293 != func_16() && func_48(Global_1590293)) && func_14(func_47(Global_1590293)) == 11) && func_38(Global_1590293, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590293), 0), -1988428699))
			{
				return 1;
			}
			else if (func_37(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER::PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_42(PLAYER::PLAYER_ID()) || func_36(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319112)
		{
			case 1:
				if (Global_262145.f_22572)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22573)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22574)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319110 == 1)
	{
		return 1;
	}
	if (func_35(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574439 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_35(int iParam0)//Position - 0x114E
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_154360;
}

int func_36(int iParam0)//Position - 0x116C
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x11B3
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_38(int iParam0, int iParam1)//Position - 0x11DB
{
	int iVar0;
	
	if (func_15(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x1228
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_40(int iParam0)//Position - 0x124C
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x1274
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_42(int iParam0)//Position - 0x1298
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_43()//Position - 0x12F8
{
	return MISC::IS_BIT_SET(Global_1676879, 6);
}

int func_44(int iParam0)//Position - 0x1309
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

bool func_45(int iParam0)//Position - 0x132F
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_46(int iParam0)//Position - 0x1344
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == 387748548 || ENTITY::GET_ENTITY_MODEL(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)//Position - 0x1372
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_48(int iParam0)//Position - 0x13A3
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x13D7
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_50(int iParam0)//Position - 0x13FB
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x145A
{
	if (func_52(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x148D
{
	if (func_25(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, bool bParam1)//Position - 0x14AD
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
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x153B
{
	if (func_60())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_59(0))
		{
			func_55(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_55(int iParam0)//Position - 0x156E
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_57(1, 1);
		}
		else
		{
			func_57(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
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
	if (!func_56())
	{
		Global_19486.f_1 = 3;
	}
}

int func_56()//Position - 0x15F8
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)//Position - 0x161F
{
	if (bParam0)
	{
		if (func_59(0))
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

bool func_58()//Position - 0x1693
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_59(int iParam0)//Position - 0x16A4
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

bool func_60()//Position - 0x16FE
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

void func_61()//Position - 0x1710
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_62();
}

void func_62()//Position - 0x1720
{
	Global_22211.f_134 = 1;
}

void func_63()//Position - 0x172E
{
	Global_1312666 = 1;
}

void func_64()//Position - 0x173B
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, 1);
			}
		}
	}
}

void func_65()//Position - 0x1767
{
	char* sVar0;
	
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_136[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_213.f_136[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_213.f_121), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
}

void func_66()//Position - 0x17D7
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_213.f_123))
		{
			STREAMING::REQUEST_MODEL(func_80());
			if (STREAMING::HAS_MODEL_LOADED(func_80()))
			{
				if (!MISC::IS_BIT_SET(Local_213.f_5, 6))
				{
					if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) + 1);
						MISC::SET_BIT(&(Local_213.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_213.f_123 = PED::CREATE_PED(26, func_80(), Local_213.f_112, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_121)), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_213.f_123, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_213.f_123, false, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_213.f_123, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_213.f_123, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_80());
					PED::SET_PED_CONFIG_FLAG(Local_213.f_123, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_213.f_123, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_213.f_123, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_213.f_123, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_123, NETWORK::NET_TO_OBJ(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_213.f_123, 0, 0);
					Global_1687880.f_23 = Local_213.f_123;
				}
			}
		}
		else if (func_25(Local_213.f_123))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_123))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_213.f_123, false, 0);
			}
			if (!func_72(PLAYER::PLAYER_ID()) && !func_69(PLAYER::PLAYER_ID(), 236))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_68(Global_1575008);
				}
			}
			else if ((Global_1687880.f_4 == -1 || Global_1687880.f_4 == 0) || Global_1687880.f_4 == Global_1574997)
			{
				func_68(Global_1575008);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_213.f_123) != func_67())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_213.f_123, func_67());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_213.f_123))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_123, NETWORK::NET_TO_OBJ(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_213.f_123, 0, 0);
			}
		}
	}
}

int func_67()//Position - 0x19D5
{
	if (Global_1687880.f_4 != -1 && Global_1687880.f_4 != 0)
	{
		return Global_1687880.f_4;
	}
	return Global_1575008;
}

void func_68(int iParam0)//Position - 0x1A02
{
	if (Global_1687880.f_4 != iParam0)
	{
		Global_1687880.f_4 = iParam0;
	}
}

int func_69(int iParam0, int iParam1)//Position - 0x1A1D
{
	if (func_71(iParam0) == iParam1)
	{
		return func_70(iParam0);
	}
	return 0;
}

int func_70(var uParam0)//Position - 0x1A3A
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_71(var uParam0)//Position - 0x1A60
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

bool func_72(int iParam0)//Position - 0x1A7F
{
	return func_73(iParam0, 20);
}

bool func_73(int iParam0, int iParam1)//Position - 0x1A8F
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)//Position - 0x1AAA
{
	return func_75(2, iParam0, 1, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1ABE
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[PLAYER::PLAYER_ID() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x1B87
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x1BC1
{
	switch (iParam0)
	{
		case 0:
			return Global_1385512.f_1;
			break;
		
		case 1:
			return Global_1385512.f_2;
			break;
		
		case 2:
			return Global_1385512.f_3;
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)//Position - 0x1C07
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x1CA4
{
	switch (iParam0)
	{
		case 0:
			return Global_1385520;
			break;
		
		case 1:
			return Global_1385521;
			break;
		
		case 2:
			return Global_1385522;
			break;
	}
	return 0;
}

int func_80()//Position - 0x1CE4
{
	return joaat("g_m_m_chigoon_01");
}

void func_81()//Position - 0x1CF1
{
	if (func_155())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_RENDERING(Local_213.f_131))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			func_83(1);
			func_82(2);
		}
	}
}

void func_82(int iParam0)//Position - 0x1D62
{
	Global_1315712 = iParam0;
}

void func_83(int iParam0)//Position - 0x1D70
{
	Global_1375006.f_1100 = iParam0;
}

void func_84()//Position - 0x1D81
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_213.f_132))
	{
		Local_213.f_132 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_213.f_132, 0);
	func_86(Local_213.f_132, 3, 3, 3);
	func_85(Local_213.f_132, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_213.f_132, 255, 255, 255, 0, 0);
}

void func_85(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x1DFC
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E32
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_87(var uParam0, bool bParam1)//Position - 0x1E5B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_88()//Position - 0x1E78
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1687880.f_20;
	}
	return -1;
}

var func_89()//Position - 0x1E92
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_184556)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x67D02A194A2FC2BD(sVar0);
}

void func_90()//Position - 0x1EEB
{
	if (!MISC::IS_BIT_SET(Local_213.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(20, "DRONE_SPACE", -1);
			func_104(21, "DRONE_POSITION", -1);
			if (!PAD::_IS_INPUT_DISABLED(0))
			{
				func_103(208, "DRONE_SPEEDU", -1, 0);
				func_103(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_103(209, "DRONE_SPEEDU", -1, 0);
				func_103(210, "DRONE_SLOWD", -1, 0);
			}
			func_103(75, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 17))
		{
			MISC::SET_BIT(&(Local_213.f_5), 17);
			MISC::CLEAR_BIT(&(Local_213.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_213.f_5), 17);
		MISC::CLEAR_BIT(&(Local_213.f_5), 16);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x1FD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_94(PLAYER::PLAYER_ID(), 0))
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
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5039[iVar1], 1), 64);
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
					func_93(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_93(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_92(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_93(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_92(&(Global_4268271.f_16));
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

void func_92(char* sParam0)//Position - 0x24DE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_93(char* sParam0)//Position - 0x24F0
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_94(int iParam0, int iParam1)//Position - 0x24FE
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

int func_95(int iParam0, bool bParam1)//Position - 0x2549
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
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

int func_96()//Position - 0x258A
{
	return Global_1312745;
}

int func_97()//Position - 0x2596
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_98())
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

int func_98()//Position - 0x2604
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0, bool bParam1)//Position - 0x261E
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_101(8, -1) && func_100() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76837) || Global_22350.f_8384) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_100()//Position - 0x26BB
{
	return Global_1312808;
}

bool func_101(int iParam0, int iParam1)//Position - 0x26C7
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

int func_102(var uParam0, bool bParam1, int iParam2)//Position - 0x2702
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

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x279F
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
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

void func_104(int iParam0, char* sParam1, int iParam2)//Position - 0x2854
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 359;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_105(int iParam0)//Position - 0x2904
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_102(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)//Position - 0x29AE
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_102(&iVar0, 1, iParam1))
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
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_107(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)//Position - 0x2AA4
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

void func_108()//Position - 0x2B46
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_213.f_132))
	{
		Local_213.f_132 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 1);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_213.f_83 >= (func_139() - 50f) || Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_138();
			if (MISC::IS_BIT_SET(Local_213.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_213.f_5), 13);
			}
		}
		else
		{
			func_134(func_135());
			if (!MISC::IS_BIT_SET(Local_213.f_5, 13))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_213.f_5), 13);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_213.f_17);
		}
		else
		{
			func_132(Local_213.f_17);
		}
		if (!func_145(0))
		{
			func_131(Local_213.f_18);
		}
	}
	if (func_142())
	{
		func_130(Local_213.f_23);
	}
	if (func_143())
	{
		func_129(Local_213.f_19);
	}
	func_128(0, "DRONE_ZOOM_1");
	func_128(1, "");
	func_128(2, "DRONE_ZOOM_2");
	func_128(3, "");
	func_128(4, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_121)) + 180f)));
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_213.f_132, 255, 255, 255, 0, 0);
}

void func_109()//Position - 0x2E2D
{
	float fVar0;
	
	fVar0 = Local_213.f_83;
	if (fVar0 >= (func_139() - 50f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			Local_213.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			AUDIO::STOP_SOUND(Local_213.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_110(float fParam0)//Position - 0x30AD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_111()//Position - 0x30CC
{
	if (Local_213.f_112.f_2 >= (func_139() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			Local_213.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if (Local_213.f_112.f_2 >= (func_139() - 20f) && Local_213.f_112.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 16f) && Local_213.f_112.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 13f) && Local_213.f_112.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 10f) && Local_213.f_112.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 8f) && Local_213.f_112.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 6f) && Local_213.f_112.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 4f) && Local_213.f_112.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 3f) && Local_213.f_112.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 2f) && Local_213.f_112.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 1f) && Local_213.f_112.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			AUDIO::STOP_SOUND(Local_213.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_112()//Position - 0x337A
{
	if (Local_213.f_83 >= (func_139() - 50f) || Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
	{
		func_113();
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			Local_213.f_36 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if ((Local_213.f_83 >= (func_139() - 50f) && Local_213.f_83 < (func_139() - 45f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 45))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if ((Local_213.f_83 >= (func_139() - 45f) && Local_213.f_83 < (func_139() - 40f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 45)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 40))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if ((Local_213.f_83 >= (func_139() - 40f) && Local_213.f_83 < (func_139() - 35f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 40)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 35))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if ((Local_213.f_83 >= (func_139() - 35f) && Local_213.f_83 < (func_139() - 30f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 35)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 30))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if ((Local_213.f_83 >= (func_139() - 30f) && Local_213.f_83 < (func_139() - 25f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 30)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 25))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if ((Local_213.f_83 >= (func_139() - 25f) && Local_213.f_83 < (func_139() - 20f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 25)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 20))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if ((Local_213.f_83 >= (func_139() - 20f) && Local_213.f_83 < (func_139() - 15f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 20)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 15))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if ((Local_213.f_83 >= (func_139() - 15f) && Local_213.f_83 < (func_139() - 10f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 15)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 10))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if ((Local_213.f_83 >= (func_139() - 10f) && Local_213.f_83 < (func_139() - 5f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 10)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 5))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if ((Local_213.f_83 >= (func_139() - 5f) && Local_213.f_83 < func_139()) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 5)) && Local_213.f_84 < IntToFloat(Global_262145.f_24137)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			AUDIO::STOP_SOUND(Local_213.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_113()//Position - 0x37E1
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !MISC::IS_BIT_SET(Global_1676879.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_116(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_115("HACK_DRONE_DIS", -1);
				iVar0++;
				func_114(22045, iVar0, -1, 1);
				MISC::SET_BIT(&(Global_1676879.f_3), 15);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3842
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
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

void func_115(char[4] cParam0, int iParam1)//Position - 0x3E04
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x3E1B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_117(int iParam0)//Position - 0x3E61
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

int func_118(int iParam0, int iParam1)//Position - 0x4263
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
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

bool func_119()//Position - 0x4611
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 1);
}

void func_120(float fParam0)//Position - 0x4624
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_121(int iParam0)//Position - 0x4643
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_122()//Position - 0x4662
{
	if (func_9())
	{
		if (MISC::IS_BIT_SET(Local_213.f_5, 11) && !Local_213.f_118)
		{
			func_123(1);
		}
		else
		{
			func_123(0);
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 11) || MISC::IS_BIT_SET(Local_213.f_5, 23))
	{
		func_123(1);
	}
	else
	{
		func_123(0);
	}
}

void func_123(bool bParam0)//Position - 0x46C2
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124()//Position - 0x46E1
{
	if (MISC::IS_BIT_SET(Local_213.f_5, 4) || (MISC::IS_BIT_SET(Local_213.f_5, 3) && func_9()))
	{
		if (Local_213.f_17 == 100)
		{
			func_125(1);
		}
		else if (Local_213.f_17 != 0 && Local_213.f_17 != 100)
		{
			func_125(2);
		}
	}
	else
	{
		func_125(0);
	}
}

void func_125(int iParam0)//Position - 0x4740
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_126()//Position - 0x475F
{
	switch (Local_213.f_24)
	{
		case 0:
			func_127(0);
			break;
		
		case 1:
			func_127(2);
			break;
		
		case 2:
			func_127(4);
			break;
	}
}

void func_127(int iParam0)//Position - 0x479A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_128(int iParam0, char* sParam1)//Position - 0x47B9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_92(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_129(int iParam0)//Position - 0x47DE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_130(int iParam0)//Position - 0x47FD
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_131(int iParam0)//Position - 0x481C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_132(int iParam0)//Position - 0x483B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_133(int iParam0)//Position - 0x485A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_134(float fParam0)//Position - 0x4879
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_43))
	{
		Local_213.f_43 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_43, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_43, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_43, "signalstrength", fParam0);
	}
}

float func_135()//Position - 0x48C4
{
	float fVar0;
	
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
		{
			fVar0 = func_136(NETWORK::NET_TO_OBJ(Local_213.f_121), func_137(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, vector3 vParam1, int iParam4)//Position - 0x4A67
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

Vector3 func_137()//Position - 0x4AA1
{
	if (func_140(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1694290;
	}
	return 0f, 0f, 0f;
}

void func_138()//Position - 0x4AC5
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_43))
	{
		AUDIO::STOP_SOUND(Local_213.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_43);
		Local_213.f_43 = -1;
	}
}

float func_139()//Position - 0x4AEE
{
	if (Global_1687880.f_8 == 0f)
	{
		return Global_262145.f_24138;
	}
	return Global_1687880.f_8;
}

int func_140(int iParam0)//Position - 0x4B14
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)//Position - 0x4B37
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_142()//Position - 0x4B72
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 6);
}

int func_143()//Position - 0x4B85
{
	if (func_142())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1687880.f_24))
		{
			return 0;
		}
	}
	return 1;
}

void func_144(char* sParam0, bool bParam1)//Position - 0x4BA6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_132, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_145(bool bParam0)//Position - 0x4BC3
{
	if (func_119())
	{
		if (bParam0)
		{
			if (MISC::IS_BIT_SET(Local_213.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_146()//Position - 0x4BF3
{
	int iVar0;
	int iVar1;
	
	if (func_60())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_213.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(21, "DRONE_MOVE", -1);
			func_104(20, "DRONE_POSITION", -1);
			if (!PAD::_IS_INPUT_DISABLED(0))
			{
				func_103(210, "CELL_284", -1, 0);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(209, "BOOST_DRONE_E", -1, 0);
				}
				func_103(208, "MOVE_DRONE_UP", -1, 0);
				func_103(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_104(29, "CELL_284", -1);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(203, "BOOST_DRONE_E", -1, 0);
				}
				func_103(209, "MOVE_DRONE_UP", -1, 0);
				func_103(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_29())
			{
				iVar0 = 206;
				if (PAD::_IS_INPUT_DISABLED(0))
				{
					iVar0 = 237;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (PAD::_IS_INPUT_DISABLED(0))
				{
					iVar1 = 238;
				}
				if (!func_145(0))
				{
					func_103(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0) || func_152(1)) || func_151()) || RECORDING::_IS_RECORDING()) || func_147(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_103(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_103(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 17))
		{
			MISC::SET_BIT(&(Local_213.f_5), 17);
			MISC::CLEAR_BIT(&(Local_213.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_213.f_5), 17);
		MISC::CLEAR_BIT(&(Local_213.f_5), 16);
	}
}

int func_147(int iParam0)//Position - 0x4E0E
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148()//Position - 0x4E3E
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

int func_149()//Position - 0x4E55
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

int func_150(int iParam0)//Position - 0x4E6A
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_151()//Position - 0x4E8A
{
	return Global_22211.f_135;
}

bool func_152(bool bParam0)//Position - 0x4E97
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_153()//Position - 0x4EC0
{
	if (func_154() <= 0)
	{
		return 0;
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

int func_154()//Position - 0x4EE0
{
	return Global_1687880.f_6;
}

bool func_155()//Position - 0x4EEE
{
	return MISC::IS_BIT_SET(Global_1687880, 7);
}

void func_156()//Position - 0x4EFF
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			if ((CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_RENDERING(Local_213.f_131)) && !func_60())
			{
				iVar0 = 80;
				if (func_27())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_213.f_5, 7))
					{
						MISC::SET_BIT(&(Local_213.f_5), 7);
					}
				}
			}
		}
	}
}

void func_157()//Position - 0x4F8E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_163() || !func_147(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_162(1);
	func_161(iVar0);
	iVar1 = func_162(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_103, 2f, iVar1, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_213.f_124)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_213.f_5, 26))
			{
				func_160(func_149(), 1);
				MISC::SET_BIT(&(Local_213.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_124))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_213.f_124, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_213.f_124) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_213.f_5, 26))
			{
				func_160(func_149(), 1);
				MISC::SET_BIT(&(Local_213.f_5), 26);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_103, 2f, iVar0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_124))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_213.f_124, false, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, 0);
			}
			func_158(1);
		}
	}
}

void func_158(bool bParam0)//Position - 0x50DB
{
	if (bParam0)
	{
		if (!func_159())
		{
			MISC::SET_BIT(&Global_1687880, 1);
		}
	}
	else if (func_159())
	{
		MISC::CLEAR_BIT(&Global_1687880, 1);
	}
}

bool func_159()//Position - 0x510C
{
	return MISC::IS_BIT_SET(Global_1687880, 1);
}

void func_160(int iParam0, int iParam1)//Position - 0x511D
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = 1034081830;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	iVar3 = 0;
	if (iParam0 != func_16())
	{
		MISC::SET_BIT(&iVar3, iParam0);
	}
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

bool func_161(int iParam0)//Position - 0x5163
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_162(bool bParam0)//Position - 0x5181
{
	if (!bParam0)
	{
		if (Global_1687880.f_19 != 0)
		{
			return Global_1687880.f_19;
		}
		else
		{
			return -2143187667;
		}
	}
	else
	{
		return -1184972439;
	}
	return 0;
}

bool func_163()//Position - 0x51B9
{
	return MISC::IS_BIT_SET(Global_1687880, 14);
}

void func_164()//Position - 0x51CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((MISC::IS_BIT_SET(Local_213.f_5, 1) || func_176()) || func_175())
	{
		Local_213.f_17 = 0;
		Local_213.f_18 = 0;
		if (!MISC::IS_BIT_SET(Local_213.f_5, 10))
		{
			MISC::SET_BIT(&(Local_213.f_5), 10);
		}
		return;
	}
	if (!func_175())
	{
		if (MISC::IS_BIT_SET(Local_213.f_5, 10))
		{
			Local_213.f_17 = 100;
			MISC::CLEAR_BIT(&(Local_213.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			if ((CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_RENDERING(Local_213.f_131)) && !MISC::IS_BIT_SET(Local_213.f_5, 2))
			{
				if ((!MISC::IS_BIT_SET(Local_213.f_5, 4) && !MISC::IS_BIT_SET(Local_213.f_5, 3)) && !Local_213.f_118)
				{
					iVar0 = 206;
					if (PAD::_IS_INPUT_DISABLED(0))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !MISC::IS_BIT_SET(Local_213.f_5, 5)) && !MISC::IS_BIT_SET(Local_213.f_5, 24)) && !func_60())
					{
						MISC::SET_BIT(&(Local_213.f_5), 24);
						if (MISC::IS_BIT_SET(Local_213.f_5, 11) || MISC::IS_BIT_SET(Local_213.f_5, 23))
						{
							Local_213.f_26++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_213.f_178)))
				{
					if (func_9())
					{
						iVar1 = Global_262145.f_24730;
					}
					else
					{
						iVar1 = Global_262145.f_24130;
					}
					if (func_7(&(Local_213.f_178), iVar1, 0))
					{
						func_6(&(Local_213.f_178));
						Local_213.f_17 = 100;
						if (Local_213.f_31 != -1)
						{
							AUDIO::STOP_SOUND(Local_213.f_31);
							AUDIO::RELEASE_SOUND_ID(Local_213.f_31);
							Local_213.f_31 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
						{
							AUDIO::STOP_SOUND(Local_213.f_34);
							AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
							Local_213.f_34 = -1;
						}
						MISC::CLEAR_BIT(&(Local_213.f_5), 4);
						MISC::CLEAR_BIT(&(Local_213.f_5), 3);
						MISC::CLEAR_BIT(&(Local_213.f_5), 24);
						Local_213.f_118 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_178)));
						Local_213.f_17 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_31))
							{
								Local_213.f_31 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_31, "HUD_Shock_Recharge", Local_213.f_119, 1);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_31, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

void func_165()//Position - 0x5460
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	int iVar16;
	
	if (func_153())
	{
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!MISC::IS_BIT_SET(Local_213.f_6, 6))
		{
			if (!MISC::IS_BIT_SET(Local_213.f_6, 5))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0))
				{
					MISC::SET_BIT(&(Local_213.f_6), 5);
				}
			}
			else if (Local_213.f_12 == 1)
			{
				if (Local_213.f_173 == 2)
				{
					vVar1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					vVar4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					vVar7 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
					vVar10 = { 10f, 10f, 10f };
					vVar13 = { vVar1 + vVar7 * vVar10 };
					iVar16 = Global_262145.f_24131;
					if (MISC::IS_BIT_SET(Local_213.f_5, 23))
					{
						iVar16 = Global_262145.f_24132;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_213.f_112 + Vector(0f, 0f, 0f), vVar13, iVar16, 1, 849905853, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0, 0, 1, 0, 0);
					Local_213.f_23 = 100;
					PAD::SET_PAD_SHAKE(0, 300, 150);
					if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_80))
					{
						Local_213.f_80 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_80, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_213.f_121), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (MISC::IS_BIT_SET(Local_213.f_5, 11) || MISC::IS_BIT_SET(Local_213.f_5, 23))
					{
						Local_213.f_28++;
					}
					func_167((func_154() - 1));
					if (func_154() <= 0)
					{
						Local_213.f_23 = 0;
						MISC::CLEAR_BIT(&(Local_213.f_5), 16);
					}
					MISC::SET_BIT(&(Local_213.f_6), 6);
					func_8(&(Local_213.f_186), 0, 0);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()//Position - 0x5633
{
	int iVar0;
	int iVar1;
	
	if (func_154() > 0)
	{
		if (func_10(&(Local_213.f_186)))
		{
			iVar0 = Global_262145.f_24130;
			if (func_7(&(Local_213.f_186), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_213.f_6), 6);
				MISC::CLEAR_BIT(&(Local_213.f_6), 5);
				func_6(&(Local_213.f_186));
				Local_213.f_23 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
				{
					AUDIO::STOP_SOUND(Local_213.f_34);
					AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
					Local_213.f_34 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_186)));
				Local_213.f_23 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)//Position - 0x56C6
{
	if (Global_1687880.f_6 != iParam0)
	{
		Global_1687880.f_6 = iParam0;
	}
}

void func_168()//Position - 0x56E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_213.f_210.f_2 = 2;
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		Local_213.f_210.f_3 = 238;
	}
	else
	{
		Local_213.f_210.f_3 = 205;
	}
	iVar0 = Global_262145.f_24133;
	if (!MISC::IS_BIT_SET(Local_213.f_5, 31))
	{
		Local_213.f_21 = 100;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 2);
		if (MISC::IS_BIT_SET(Local_213.f_6, 1))
		{
			Local_213.f_20 = ((Local_213.f_22 * (Global_262145.f_24133 / 2)) / 100);
			Local_213.f_20 = ((Global_262145.f_24133 / 2) - Local_213.f_20);
			MISC::CLEAR_BIT(&(Local_213.f_6), 1);
		}
		if (MISC::IS_BIT_SET(Local_213.f_5, 31))
		{
			iVar0 = Local_213.f_20;
		}
	}
	else
	{
		Local_213.f_21 = 100;
	}
	if (!func_145(1))
	{
		if (!func_60() && func_169(&(Local_213.f_210), 1, iVar0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_35))
			{
				Local_213.f_35 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_35, "Destroyed", NETWORK::NET_TO_OBJ(Local_213.f_121), Local_213.f_119, 1, 0);
			}
			HUD::_0x15CFA549788D35EF();
			iVar1 = 0;
			if (func_9())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_112, iVar1, 0.5f, 1, 0, 1065353216);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			PAD::SET_PAD_SHAKE(0, 300, 200);
			MISC::SET_BIT(&(Local_213.f_5), 2);
		}
	}
	if (func_10(&(Local_213.f_210)))
	{
		PAD::SET_PAD_SHAKE(0, 300, 20);
		if (!MISC::IS_BIT_SET(Local_213.f_5, 5))
		{
			MISC::SET_BIT(&(Local_213.f_5), 5);
		}
		func_6(&(Local_213.f_202));
		if (!func_7(&(Local_213.f_210), iVar0, 0))
		{
			iVar2 = (Local_213.f_21 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_210)));
			if (!func_9())
			{
				Local_213.f_18 = (iVar2 / iVar0);
			}
			else if (!MISC::IS_BIT_SET(Local_213.f_5, 31))
			{
				Local_213.f_18 = (iVar2 / iVar0);
			}
			else
			{
				Local_213.f_18 = (Local_213.f_22 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
			{
				Local_213.f_32 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_32, "HUD_Detonate_Charge", Local_213.f_119, 1);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_213.f_5), 5);
		if (!func_9())
		{
			Local_213.f_18 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_213.f_5), 31);
			Local_213.f_21 = (100 - Local_213.f_18);
			Local_213.f_20 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_210)));
			Local_213.f_22 = Local_213.f_18;
			func_6(&(Local_213.f_202));
		}
		if (Local_213.f_32 != -1)
		{
			AUDIO::STOP_SOUND(Local_213.f_32);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
			Local_213.f_32 = -1;
		}
	}
	else if (func_9())
	{
		if (Local_213.f_18 > 0)
		{
			if (Local_213.f_18 <= 2)
			{
				Local_213.f_18 = 0;
			}
			if (!func_10(&(Local_213.f_202)))
			{
				func_8(&(Local_213.f_202), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24133;
				if (!func_7(&(Local_213.f_202), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_213.f_21)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_202)))));
					Local_213.f_18 = (Local_213.f_18 - SYSTEM::ROUND(fVar4));
					Local_213.f_22 = Local_213.f_18;
					Local_213.f_21 = (100 - Local_213.f_18);
					MISC::SET_BIT(&(Local_213.f_6), 1);
				}
				else
				{
					Local_213.f_18 = 0;
				}
			}
		}
		else
		{
			func_6(&(Local_213.f_210));
			MISC::CLEAR_BIT(&(Local_213.f_5), 31);
			MISC::CLEAR_BIT(&(Local_213.f_6), 1);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)//Position - 0x5A3B
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0, 0);
		}
		else if (func_7(uParam0, iParam2, 0))
		{
			func_6(uParam0);
			return 1;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0;
}

void func_170()//Position - 0x5AA0
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	
	if (MISC::IS_BIT_SET(Local_213.f_5, 24))
	{
		if (Local_213.f_12 == 1)
		{
			if (Local_213.f_173 == 2)
			{
				vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				vVar3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				vVar6 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar9 = { 10f, 10f, 10f };
				vVar12 = { vVar0 + vVar6 * vVar9 };
				iVar15 = Global_262145.f_24131;
				if (MISC::IS_BIT_SET(Local_213.f_5, 23))
				{
					iVar15 = Global_262145.f_24132;
				}
				if (func_142())
				{
					iVar15 = 1;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_213.f_112 + Vector(0f, 0f, 0f), vVar12, iVar15, 1, joaat("weapon_stungun"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0, 0, 1, 0, 0);
				Local_213.f_17 = 100;
				Local_213.f_18 = 0;
				PAD::SET_PAD_SHAKE(0, 300, 150);
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
				{
					Local_213.f_34 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_34, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_213.f_121), Local_213.f_119, 1, 0);
				}
				if (Local_213.f_32 != -1)
				{
					AUDIO::STOP_SOUND(Local_213.f_32);
					AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
					Local_213.f_32 = -1;
				}
				MISC::SET_BIT(&(Local_213.f_5), 4);
				func_8(&(Local_213.f_178), 0, 0);
			}
		}
	}
}

void func_171()//Position - 0x5BF8
{
	if ((MISC::IS_BIT_SET(Local_213.f_5, 24) && !MISC::IS_BIT_SET(Local_213.f_5, 3)) && !Local_213.f_118)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_213.f_121), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_213.f_17 = 100;
		PAD::SET_PAD_SHAKE(0, 300, 150);
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			Local_213.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_34, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_213.f_121), Local_213.f_119, 1, 0);
		}
		if (Local_213.f_32 != -1)
		{
			AUDIO::STOP_SOUND(Local_213.f_32);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
			Local_213.f_32 = -1;
		}
		func_172(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_213.f_121), 1), 0);
		MISC::SET_BIT(&(Local_213.f_5), 3);
		Local_213.f_118 = 1;
		func_8(&(Local_213.f_178), 0, 0);
	}
}

void func_172(vector3 vParam0, bool bParam3)//Position - 0x5CEA
{
	struct<6> Var0;
	
	Var0 = -1949038199;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_174(1, 1) == 0)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_174(1, 1));
		}
	}
	else if (Global_1687880.f_21 != func_16())
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_173(Global_1687880.f_21));
	}
}

var func_173(int iParam0)//Position - 0x5D59
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)//Position - 0x5D71
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()//Position - 0x5DD6
{
	return MISC::IS_BIT_SET(Global_1687880, 8);
}

int func_176()//Position - 0x5DE8
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0)) && !MISC::IS_BIT_SET(Local_213.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (func_147(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2530259, 0))
		{
		}
		else if (func_184())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_213.f_121)))
			{
				Local_213.f_25 = 1;
				return 1;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 2))
	{
		Local_213.f_25 = 4;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 9))
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 7))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_213.f_121)) || func_183(NETWORK::NET_TO_ENT(Local_213.f_121), 0))
		{
			Local_213.f_25 = 3;
			return 1;
		}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_119())
	{
		if (Global_1590293 != func_16())
		{
			if (func_37(Global_1590293))
			{
				Local_213.f_25 = 0;
				return 1;
			}
		}
	}
	if (func_180())
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (func_179(PLAYER::PLAYER_ID()))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_19())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_28())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_18())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
		{
			Local_213.f_25 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_213.f_25 = 6;
			return 1;
		}
		if (func_136(PLAYER::PLAYER_PED_ID(), Local_213.f_115, 1) > 2f)
		{
			Local_213.f_25 = 7;
			return 1;
		}
	}
	return 0;
}

bool func_177()//Position - 0x5FD6
{
	return Global_96008;
}

bool func_178()//Position - 0x5FE2
{
	return MISC::IS_BIT_SET(Global_1687880, 9);
}

int func_179(int iParam0)//Position - 0x5FF4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628955[iVar0 /*614*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()//Position - 0x6019
{
	vector3 vVar0;
	
	if (Local_213.f_16 == -1945204837)
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_213.f_121)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_121)) == -25693127)
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_213.f_121), 1) };
				if (vVar0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_213.f_121)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_213.f_121), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)//Position - 0x60C2
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x60FB
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)//Position - 0x612F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_184()//Position - 0x6170
{
	return MISC::IS_BIT_SET(Global_1687880, 15);
}

void func_185()//Position - 0x6182
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	var uVar19;
	vector3 vVar22;
	int iVar25;
	bool bVar26;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			vVar0 = { Local_213.f_112 };
			switch (Local_213.f_12)
			{
				case 0:
					vVar3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					vVar6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					vVar9 = { (-SYSTEM::SIN(vVar6.z) * SYSTEM::COS(vVar6.x)), (SYSTEM::COS(vVar6.z) * SYSTEM::COS(vVar6.x)), SYSTEM::SIN(vVar6.x) };
					vVar12 = { 10f, 10f, 10f };
					if (func_9())
					{
						vVar12 = { Global_262145.f_24731, Global_262145.f_24731, Global_262145.f_24731 };
					}
					vVar15 = { vVar3 + vVar9 * vVar12 };
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_213.f_112, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_121)), 0f, -0.1f, 0f) };
					Local_213.f_129 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar15, 123, NETWORK::NET_TO_OBJ(Local_213.f_121), 7);
					if (Local_213.f_129 != 0)
					{
						Local_213.f_12 = 1;
					}
					break;
				
				case 1:
					Local_213.f_173 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_213.f_129, &iVar18, &vVar22, &uVar19, &iVar25);
					if (Local_213.f_173 == 2)
					{
						if (iVar18 == 0)
						{
							Local_213.f_13 = 1;
							vVar22 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_213.f_5, 11) && !func_9())
							{
								MISC::CLEAR_BIT(&(Local_213.f_5), 11);
							}
							if (MISC::IS_BIT_SET(Local_213.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_213.f_5), 23);
							}
							func_192();
						}
						else
						{
							Local_213.f_13 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, 0))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_190(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(Local_213.f_5, 23))
											{
												MISC::SET_BIT(&(Local_213.f_5), 23);
												if (MISC::IS_BIT_SET(Local_213.f_5, 11) && !func_9())
												{
													MISC::CLEAR_BIT(&(Local_213.f_5), 11);
												}
											}
											if (!func_72(PLAYER::PLAYER_ID()) && !func_69(PLAYER::PLAYER_ID(), 236))
											{
												if ((func_189(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_188(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_187(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_68(Global_1575008);
													func_186(&(Local_213.f_188), 0, 0);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!MISC::IS_BIT_SET(Local_213.f_5, 11) && !bVar26) && func_25(Global_1687880.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1687880.f_23, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_213.f_5), 11);
											if (MISC::IS_BIT_SET(Local_213.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_213.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (MISC::IS_BIT_SET(Local_213.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_213.f_5), 11);
										}
									}
									if (MISC::IS_BIT_SET(Local_213.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_213.f_5), 23);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_213.f_129 = 0;
							Local_213.f_12 = 0;
						}
					}
					else if (Local_213.f_173 == 0)
					{
						Local_213.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)//Position - 0x64D5
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

int func_187(int iParam0)//Position - 0x6512
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x6536
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x660B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -472287501) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -1533126372)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)//Position - 0x666E
{
	int iVar0;
	
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x6699
{
	if (iParam0 != func_16())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_16();
}

void func_192()//Position - 0x66BC
{
	if (func_10(&(Local_213.f_188)))
	{
		if (func_7(&(Local_213.f_188), 60000, 0))
		{
			func_6(&(Local_213.f_188));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_68(Global_1574997);
			}
		}
	}
}

void func_193()//Position - 0x66FB
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	int iVar20;
	var uVar21;
	vector3 vVar24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if ((func_27() || func_9()) || func_29())
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::_0x7EF7649B64D7FF10(NETWORK::NET_TO_OBJ(Local_213.f_121)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			switch (Local_213.f_10)
			{
				case 0:
					if ((func_9() || func_29()) || func_27())
					{
						fVar13 = 0.3f;
					}
					else
					{
						fVar13 = (func_196(Local_213.f_169) * 1.5f);
					}
					if (func_27())
					{
						vVar14 = { Local_213.f_112 };
						vVar1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						vVar4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						vVar7 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
						vVar10 = { 0.9f, 0.9f, 0.9f };
						vVar17 = { vVar1 + vVar7 * vVar10 };
					}
					else
					{
						vVar14 = { Local_213.f_112 };
						vVar17 = { Local_213.f_112 };
					}
					Local_213.f_128 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar14, vVar17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_213.f_121), 4);
					if (Local_213.f_128 != 0)
					{
						Local_213.f_10 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_213.f_128, &iVar20, &vVar24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_213.f_11 = 1;
							vVar24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, 0) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_213.f_169)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_194(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!MISC::IS_BIT_SET(Local_213.f_5, 9))
											{
												MISC::SET_BIT(&(Local_213.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, 0))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar27)))
										{
											if (Local_213.f_27 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_213.f_27 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_213.f_112, 5000f);
												func_186(&(Local_213.f_194), 0, 0);
											}
										}
									}
								}
							}
							Local_213.f_11 = 2;
							PAD::SET_PAD_SHAKE(0, 300, 50);
							Local_213.f_128 = 0;
							Local_213.f_10 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_213.f_10 = 0;
					}
					break;
			}
			if (Local_213.f_27 != 0)
			{
				if (func_10(&(Local_213.f_194)))
				{
					if (func_7(&(Local_213.f_194), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_213.f_27);
						func_6(&(Local_213.f_194));
						Local_213.f_27 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

int func_194(int iParam0)//Position - 0x69DA
{
	switch (iParam0)
	{
		case -692292317:
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_195(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)//Position - 0x6A36
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

float func_196(int iParam0)//Position - 0x6DAC
{
	vector3 vVar0;
	vector3 vVar3;
	
	func_197(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((vVar0.z - vVar3.z));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6DDA
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0)
		{
			func_198(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6E99
{
	int iVar0;
	
	func_199(iParam0, &Global_1315808);
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

void func_199(int iParam0, var uParam1)//Position - 0x70A5
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

int func_200(int iParam0)//Position - 0x7126
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)//Position - 0x7155
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_202()//Position - 0x7167
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (func_25(NETWORK::NET_TO_OBJ(Local_213.f_121)))
		{
			iVar0 = func_205(NETWORK::NET_TO_OBJ(Local_213.f_121));
			if (iVar0 != -1)
			{
				if (!func_204(&(Global_1573352.f_370), iVar0) && !func_204(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_557), iVar0))
				{
					func_203(1);
				}
			}
		}
	}
}

void func_203(bool bParam0)//Position - 0x71CD
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!MISC::IS_BIT_SET(Global_1687880, 9))
			{
				MISC::SET_BIT(&Global_1687880, 9);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880, 9))
	{
		MISC::CLEAR_BIT(&Global_1687880, 9);
	}
}

bool func_204(var uParam0, int iParam1)//Position - 0x7216
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)//Position - 0x7238
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (func_214(iParam0))
		{
			return 15;
		}
		if (func_211(iParam0))
		{
			return 28;
		}
		if (func_210(iParam0))
		{
			return 23;
		}
		if (func_209(iParam0))
		{
			return 33;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar0 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 34)
			{
				iVar2 = iVar1;
				func_206(iVar2);
				if (Global_1681159[iVar1] == iVar0)
				{
					return iVar2;
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_206(int iParam0)//Position - 0x72CC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1681159[iVar0] == 0)
	{
		Global_1681159[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)//Position - 0x72FC
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)//Position - 0x74C9
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)//Position - 0x7807
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)//Position - 0x78B8
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_211(int iParam0)//Position - 0x7A4F
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_212());
}

int func_212()//Position - 0x7A9C
{
	vector3 vVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_213(PLAYER::PLAYER_ID()), vVar0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(vVar0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_213(int iParam0)//Position - 0x7AED
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

bool func_214(int iParam0)//Position - 0x7B00
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_215());
}

int func_215()//Position - 0x7B65
{
	vector3 vVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_213(PLAYER::PLAYER_ID()), vVar0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(vVar0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_216(int iParam0)//Position - 0x7BC2
{
	int iVar0;
	int iVar1;
	
	if (func_27())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_ACTIVE(Local_213.f_131))
		{
			if (CAM::IS_CAM_RENDERING(Local_213.f_131) || iParam0)
			{
				if (!func_60())
				{
					func_54(0);
				}
				func_227(1);
				if ((!func_226() || MISC::IS_BIT_SET(Local_213.f_5, 1)) || func_176())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_63();
					func_224(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_213.f_121));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1687880.f_24 = iVar0;
						if (!MISC::IS_BIT_SET(Local_213.f_5, 8))
						{
							Local_213.f_86 = func_223(INTERIOR::_GET_INTERIOR_HEADING(iVar0));
							INTERIOR::_GET_INTERIOR_INFO(iVar0, &(Local_213.f_109), &(Local_213.f_16));
							MISC::SET_BIT(&(Local_213.f_5), 8);
						}
						iVar1 = 0;
						if (func_222(Local_213.f_112.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1687880.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1687880.f_9);
						}
						if (!func_147(PLAYER::PLAYER_ID()) && !func_219(PLAYER::PLAYER_ID()))
						{
							if (!func_218())
							{
								func_217(1);
							}
						}
						HUD::SET_BIGMAP_ACTIVE(0, 0);
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_213.f_16, Local_213.f_109, Local_213.f_109.f_1, SYSTEM::FLOOR(Local_213.f_86), iVar1);
					}
					else
					{
						Local_213.f_16 = -1;
						if (Global_1687880.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1687880.f_9);
						}
						if (!func_218())
						{
							func_217(1);
						}
						HUD::SET_BIGMAP_ACTIVE(0, 0);
						Global_1687880.f_24 = -1;
						if (MISC::IS_BIT_SET(Local_213.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_213.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)//Position - 0x7D8A
{
	Global_2461278 = iParam0;
}

bool func_218()//Position - 0x7D98
{
	return Global_2461278;
}

int func_219(int iParam0)//Position - 0x7DA4
{
	if (func_221(iParam0))
	{
		return 1;
	}
	if (func_220(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0x7DC7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_73(iParam0, 9);
	}
	return 0;
}

int func_221(var uParam0)//Position - 0x7DE5
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_222(float fParam0, float fParam1, float fParam2)//Position - 0x7E0B
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_223(float fParam0)//Position - 0x7E2A
{
	return (fParam0 * 57.29578f);
}

void func_224(bool bParam0)//Position - 0x7E3A
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_225(iVar0);
		iVar0++;
	}
}

void func_225(int iParam0)//Position - 0x7E71
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

bool func_226()//Position - 0x7E8B
{
	return MISC::IS_BIT_SET(Global_1687880, 4);
}

void func_227(int iParam0)//Position - 0x7E9C
{
	if (Global_2531497.f_4554 != iParam0)
	{
		Global_2531497.f_4554 = iParam0;
	}
}

void func_228()//Position - 0x7EB9
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	vector3 vVar20;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33;
	float fVar34;
	var uVar35;
	var uVar36;
	vector3 vVar37;
	
	if (!func_27() || func_176())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_213.f_121));
			fVar6 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_213.f_121));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_233();
			PAD::_0x7F4724035FDCA1DD(2);
			func_232(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				iVar4 = 2;
				Local_213[2] = (Local_213[2] * iVar4);
				Local_213[3] = (Local_213[3] * iVar4);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_213[3] = (Local_213[3] * -1);
				Local_213[1] = (Local_213[1] * -1);
			}
			if ((Local_213[2] != 0 || Local_213[3] != 0) || (Local_213[0] != 0 || Local_213[1] != 0))
			{
				if (Local_213[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else if (Local_213[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else if (Local_213[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_213[2] != 0) || Local_213[0] != 0)
				{
					if (Local_213[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[2])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_213[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar19 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar19 = -0.0001f;
							}
						}
						else
						{
							fVar19 = 0f;
						}
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar16 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (vVar16.y > fVar2)
						{
							vVar16.y = fVar2;
						}
						else if (vVar16.y < -fVar2)
						{
							vVar16.y = -fVar2;
						}
					}
					else if (vVar16.y > fVar2)
					{
						vVar16.y = fVar2;
					}
					else if (vVar16.y < -fVar2)
					{
						vVar16.y = -fVar2;
					}
				}
				if (vVar16.x > fVar3)
				{
					vVar16.x = fVar3;
				}
				else if (vVar16.x < -fVar3)
				{
					vVar16.x = -fVar3;
				}
				if (!MISC::IS_BIT_SET(Local_213.f_5, 12))
				{
					MISC::SET_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar16.y, vVar16.x), 2, 1);
			}
			else if (((Local_213[2] != 0 || Local_213[3] != 0) || Local_213[0] != 0) || Local_213[1] != 0)
			{
				vVar20 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar24 = -1f;
						Local_213.f_92 = fVar24;
					}
				}
				else
				{
					if (Local_213[2] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[2])));
						Local_213.f_92 = fVar23;
					}
					else if (Local_213[0] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_92 = fVar23;
					}
					else
					{
						fVar23 = 0f;
					}
					if (Local_213[3] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[3])));
						Local_213.f_92 = fVar23;
					}
					else if (Local_213[1] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_92 = fVar23;
					}
					else
					{
						fVar24 = 0f;
					}
				}
				fVar25 = -(((fVar24 * 0.05f) * fVar7) * fVar1);
				fVar26 = -(((fVar23 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar23 = -1f;
							}
							else
							{
								fVar23 = 1f;
							}
						}
						if (vVar20.y < 2f && vVar20.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar20.y > -2f && vVar20.y < 0f)
						{
							fVar23 = -0.0001f;
						}
						fVar26 = -(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar27 = { Vector(0f, fVar26, fVar25) + vVar20 };
				if (vVar27.y > fVar2)
				{
					vVar27.y = fVar2;
				}
				else if (vVar27.y < -fVar2)
				{
					vVar27.y = -fVar2;
				}
				if (vVar27.x > fVar3)
				{
					vVar27.x = fVar3;
				}
				else if (vVar27.x < -fVar3)
				{
					vVar27.x = -fVar3;
				}
				if (MISC::IS_BIT_SET(Local_213.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar20.z, vVar27.y, vVar27.x), 2, 1);
			}
			else
			{
				Local_213.f_92 = 0f;
				vVar30 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar30.y != 0f)
					{
						if (vVar30.y < 0f)
						{
							fVar33 = -1f;
						}
						else
						{
							fVar33 = 1f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar30.x < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (vVar30.y != 0f)
					{
						if (vVar30.y < 2f && vVar30.y > 0f)
						{
							fVar33 = 0.0001f;
						}
						else if (vVar30.y > -2f && vVar30.y < 0f)
						{
							fVar33 = -0.0001f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (vVar30.x != 0f)
					{
						if (vVar30.x < 2f && vVar30.x > 0f)
						{
							fVar34 = 0.0001f;
						}
						else if (vVar30.x > -2f && vVar30.x < 0f)
						{
							fVar34 = -0.0001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					uVar35 = func_229(-(((fVar34 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar36 = func_229(-(((fVar33 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar37 = { Vector(0f, uVar36, uVar35) + vVar30 };
					if (MISC::IS_BIT_SET(Local_213.f_5, 12))
					{
						vVar37.x = vVar30.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar30.z, vVar37.y, vVar37.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

float func_229(float fParam0)//Position - 0x8603
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_230()//Position - 0x863D
{
	return MISC::IS_BIT_SET(Local_213.f_5, 22);
}

bool func_231()//Position - 0x864F
{
	return MISC::IS_BIT_SET(Local_213.f_5, 21);
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x8661
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_233()//Position - 0x8765
{
	if (func_119())
	{
		switch (Local_213.f_24)
		{
			case 0:
				Local_213.f_90 = 90f;
				Local_213.f_89 = 90f;
				break;
			
			case 1:
				Local_213.f_90 = 75f;
				Local_213.f_89 = 75f;
				break;
			
			case 2:
				Local_213.f_90 = 45f;
				Local_213.f_89 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_213.f_24)
		{
			case 0:
				Local_213.f_90 = 90f;
				Local_213.f_89 = 90f;
				break;
			
			case 1:
				Local_213.f_90 = 80f;
				Local_213.f_89 = 80f;
				break;
			
			case 2:
				Local_213.f_90 = 70f;
				Local_213.f_89 = 70f;
				break;
			}
	}
}

void func_234()//Position - 0x882B
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	float fVar20;
	vector3 vVar21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	vector3 vVar38;
	
	if ((MISC::IS_BIT_SET(Local_213.f_5, 1) || func_176()) || func_27())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_213.f_121));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_213.f_121));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_233();
			PAD::_0x7F4724035FDCA1DD(2);
			func_232(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				iVar3 = 5;
				Local_213[2] = (Local_213[2] * iVar3);
				Local_213[3] = (Local_213[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_213[3] = (Local_213[3] * -1);
			}
			if (func_7(&(Local_213.f_206), 750, 0))
			{
				if (!PAD::_IS_INPUT_DISABLED(0))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_213.f_206), 0, 0);
				}
			}
			if (bVar7 && !func_231())
			{
				if (!PAD::_IS_INPUT_DISABLED(0))
				{
					Local_213.f_24++;
				}
				else if (bVar8)
				{
					Local_213.f_24 = (Local_213.f_24 - 1);
				}
				else
				{
					Local_213.f_24++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_38))
				{
					Local_213.f_38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_38, "HUD_Zoom_Change", Local_213.f_119, 1);
				}
				if (Local_213.f_24 > 2)
				{
					Local_213.f_24 = 0;
				}
				else if (Local_213.f_24 < 0)
				{
					Local_213.f_24 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_38))
			{
				AUDIO::STOP_SOUND(Local_213.f_38);
				AUDIO::RELEASE_SOUND_ID(Local_213.f_38);
				Local_213.f_38 = -1;
			}
			Local_213.f_91 = (Local_213.f_91 + (((Local_213.f_89 - Local_213.f_91) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_213.f_131, Local_213.f_91);
			if (Local_213[2] != 0 || Local_213[3] != 0)
			{
				if (Local_213[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				vVar14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_213.f_93);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_213.f_93);
				if ((fVar4 != 0f || Local_213[0] != 0) && !func_60())
				{
					if (Local_213[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (vVar14.y != 0f)
						{
							if (vVar14.y < 1.5f && vVar14.y > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (vVar14.y > -1.5f && vVar14.y < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				vVar17 = { Vector(fVar12, fVar13, fVar11) + vVar14 };
				if (fVar4 != 0f)
				{
					if (Local_213[0] == 0)
					{
						if (vVar17.y > fVar1)
						{
							vVar17.y = fVar1;
						}
						else if (vVar17.y < -fVar1)
						{
							vVar17.y = -fVar1;
						}
					}
					else if (vVar17.y > fVar1)
					{
						vVar17.y = fVar1;
					}
					else if (vVar17.y < -fVar1)
					{
						vVar17.y = -fVar1;
					}
				}
				if (vVar17.x > fVar2)
				{
					vVar17.x = fVar2;
				}
				else if (vVar17.x < -fVar2)
				{
					vVar17.x = -fVar2;
				}
				if (!MISC::IS_BIT_SET(Local_213.f_5, 12))
				{
					MISC::SET_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar17.z, vVar17.y, vVar17.x), 2, 1);
			}
			else if (((Local_213[0] != 0 || Local_213[1] != 0) && !func_231()) && !func_60())
			{
				vVar21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar25 = -1f;
						Local_213.f_92 = fVar25;
					}
				}
				else
				{
					if (Local_213[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_92 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_213[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_92 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_213[0] == 0 && !func_60()) || func_231())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (vVar21.y < 1.5f && vVar21.y > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (vVar21.y > -1.5f && vVar21.y < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				vVar28 = { Vector(0f, fVar27, fVar26) + vVar21 };
				if (vVar28.y > fVar1)
				{
					vVar28.y = fVar1;
				}
				else if (vVar28.y < -fVar1)
				{
					vVar28.y = -fVar1;
				}
				if (vVar28.x > fVar2)
				{
					vVar28.x = fVar2;
				}
				else if (vVar28.x < -fVar2)
				{
					vVar28.x = -fVar2;
				}
				if (MISC::IS_BIT_SET(Local_213.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar21.z, vVar28.y, vVar28.x), 2, 1);
			}
			else if (!func_230() && !func_231())
			{
				Local_213.f_92 = 0f;
				vVar31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (vVar31.y != 0f)
					{
						if (vVar31.y < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (vVar31.x < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (vVar31.y != 0f)
					{
						if (vVar31.y < 1.5f && vVar31.y > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (vVar31.y > -1.5f && vVar31.y < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (vVar31.x != 0f)
					{
						if (vVar31.x < 1.5f && vVar31.x > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (vVar31.x > -1.5f && vVar31.x < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_229(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_229(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					vVar38 = { Vector(0f, uVar37, uVar36) + vVar31 };
					if (MISC::IS_BIT_SET(Local_213.f_5, 12))
					{
						vVar38.x = vVar31.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(vVar31.z, vVar38.y, vVar38.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

void func_235()//Position - 0x8FE7
{
	int iVar0;
	int iVar1;
	
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_162(0);
		Local_213.f_103 = { func_238(&Local_213) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_213.f_124))
		{
			if (!func_237(Local_213.f_103))
			{
				if (func_161(iVar0))
				{
					Local_213.f_124 = OBJECT::CREATE_OBJECT(iVar0, Local_213.f_103, 0, false, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_213.f_124, Local_213.f_103, 0, 0, 1);
					ENTITY::SET_ENTITY_COLLISION(Local_213.f_124, true, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_213.f_124, 1, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_213.f_124, 1);
					ENTITY::SET_ENTITY_HEADING(Local_213.f_124, func_236());
					ENTITY::FREEZE_ENTITY_POSITION(Local_213.f_124, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_213.f_124, false, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_103, 2f, iVar0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_213.f_124)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_213.f_103 = { func_238(&Local_213) };
	}
}

float func_236()//Position - 0x90FA
{
	if (Global_1687880.f_7 != 0f)
	{
		return Global_1687880.f_7;
	}
	return 0f;
}

int func_237(vector3 vParam0)//Position - 0x9117
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_238(var uParam0)//Position - 0x9141
{
	if (!func_237(Global_1687880.f_10))
	{
		return Global_1687880.f_10;
	}
	else
	{
		return uParam0->f_103;
	}
	return 0f, 0f, 0f;
}

void func_239()//Position - 0x9173
{
	if (Local_213.f_32 != -1)
	{
		AUDIO::STOP_SOUND(Local_213.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
		Local_213.f_32 = -1;
	}
}

int func_240()//Position - 0x9198
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (func_245(PLAYER::PLAYER_ID()) && !func_244())
	{
		return 1;
	}
	if (func_147(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2530259, 0))
		{
			return 1;
		}
	}
	if (Global_1662552 || Global_1312791)
	{
		func_243(1);
		return 1;
	}
	if ((func_241(0) || func_152(1)) || func_151())
	{
		func_54(0);
		func_63();
		func_81();
		return 1;
	}
	return 0;
}

int func_241(bool bParam0)//Position - 0x9248
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_242(PLAYER::PLAYER_PED_ID()))
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

int func_242(int iParam0)//Position - 0x9333
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

void func_243(bool bParam0)//Position - 0x9390
{
	if (bParam0)
	{
		if (!func_28())
		{
			MISC::SET_BIT(&Global_1687880, 20);
		}
	}
	else if (func_28())
	{
		MISC::CLEAR_BIT(&Global_1687880, 20);
	}
}

bool func_244()//Position - 0x93C3
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_245(int iParam0)//Position - 0x93E5
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_246())
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

bool func_246()//Position - 0x9427
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_247()//Position - 0x9438
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_27())
	{
		return;
	}
	if (func_226())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_213.f_133))
			{
				Local_213.f_133 = func_261(Local_213.f_112, 0);
				HUD::SET_BLIP_SPRITE(Local_213.f_133, 627);
				if (func_17() && !HUD::DOES_BLIP_EXIST(Local_213.f_134))
				{
					Local_213.f_134 = func_258(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_213.f_134, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_213.f_134, 0);
					HUD::SET_BLIP_SCALE(Local_213.f_134, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_213.f_134, (13 - 1));
					if (func_255(PLAYER::PLAYER_ID()) != -1)
					{
						func_251(&(Local_213.f_134), func_253(func_255(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_251(&(Local_213.f_134), func_250());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_213.f_134, 1);
				}
			}
			else
			{
				fVar0 = func_249(Local_213.f_87);
				fVar1 = Local_213.f_112;
				fVar2 = Local_213.f_112.f_1;
				HUD::SET_BLIP_DISPLAY(Local_213.f_133, 2);
				HUD::SET_BLIP_COORDS(Local_213.f_133, Local_213.f_112);
				if (((func_9() || func_29()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::_IS_MINIMAP_IN_INTERIOR())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_213.f_133, fVar1, fVar2, 0f);
						HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_213.f_133, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_213.f_133, 1f);
				HUD::SET_BLIP_PRIORITY(Local_213.f_133, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_213.f_134))
				{
					HUD::SET_BLIP_ROTATION(Local_213.f_134, func_248(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_248(int iParam0)//Position - 0x95DA
{
	float fVar0;
	
	fVar0 = ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_249(float fParam0)//Position - 0x95F0
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_250()//Position - 0x9619
{
	return 10;
}

void func_251(var uParam0, int iParam1)//Position - 0x9623
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_252(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_252(int iParam0)//Position - 0x9649
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

int func_253(int iParam0)//Position - 0x98B1
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_254(iParam0);
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

var func_254(int iParam0)//Position - 0x9974
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_255(int iParam0)//Position - 0x998B
{
	if (!iParam0 == func_16())
	{
		if (func_256(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_191(iParam0)];
		}
	}
	return -1;
}

bool func_256(int iParam0, bool bParam1)//Position - 0x99BD
{
	if (!bParam1)
	{
		if (func_257(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_16();
}

int func_257(int iParam0)//Position - 0x99E8
{
	if (iParam0 != func_16())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_16())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)//Position - 0x9A1D
{
	return func_259(iParam0, !bParam1, bParam2);
}

int func_259(int iParam0, bool bParam1, bool bParam2)//Position - 0x9A30
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_260(bool bParam0, float fParam1, float fParam2)//Position - 0x9AD4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_261(vector3 vParam0, int iParam3)//Position - 0x9AEB
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_260(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_262()//Position - 0x9B17
{
	if (func_27())
	{
		if (Local_213.f_112.f_2 >= (func_139() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
			{
				Local_213.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
		{
			AUDIO::STOP_SOUND(Local_213.f_36);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_263()//Position - 0x9B82
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_213.f_171)
		{
			case 0:
				func_286();
				break;
			
			case 1:
				func_273();
				break;
			
			case 2:
				func_271();
				break;
			
			case 3:
				func_264();
				break;
			}
	}
}

void func_264()//Position - 0x9BEC
{
	func_55(1);
	if (!func_270())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_268(0);
	func_266(0);
	func_265(0);
}

void func_265(int iParam0)//Position - 0x9C17
{
	if (Local_213.f_171 != iParam0)
	{
		Local_213.f_171 = iParam0;
	}
}

void func_266(bool bParam0)//Position - 0x9C2E
{
	if (bParam0)
	{
		if (!func_267())
		{
			MISC::SET_BIT(&Global_1687880, 17);
		}
	}
	else if (func_267())
	{
		MISC::CLEAR_BIT(&Global_1687880, 17);
	}
}

bool func_267()//Position - 0x9C61
{
	return MISC::IS_BIT_SET(Global_1687880, 17);
}

void func_268(bool bParam0)//Position - 0x9C73
{
	if (bParam0)
	{
		if (!func_269())
		{
			MISC::SET_BIT(&Global_1687880, 18);
		}
	}
	else if (func_269())
	{
		MISC::CLEAR_BIT(&Global_1687880, 18);
	}
}

bool func_269()//Position - 0x9CA6
{
	return MISC::IS_BIT_SET(Global_1687880, 18);
}

bool func_270()//Position - 0x9CB8
{
	return Global_1676879.f_443;
}

void func_271()//Position - 0x9CC7
{
	if (func_269() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_55(1);
		func_272(0);
		MISC::CLEAR_BIT(&(Local_213.f_5), 16);
		func_265(3);
	}
}

void func_272(bool bParam0)//Position - 0x9CF9
{
	if (bParam0)
	{
		if (!func_60())
		{
			MISC::SET_BIT(&Global_1687880, 19);
		}
	}
	else if (func_60())
	{
		MISC::CLEAR_BIT(&Global_1687880, 19);
	}
}

void func_273()//Position - 0x9D2C
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_7(&(Local_213.f_196), 3000, 0))
		{
			if (func_285())
			{
				if (MISC::IS_BIT_SET(Global_4269615, 2) || func_7(&(Local_213.f_200), 8000, 0))
				{
					if (!MISC::IS_BIT_SET(Global_4269615, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_274(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_6(&(Local_213.f_196));
					func_6(&(Local_213.f_200));
					func_265(2);
				}
			}
			else if (func_7(&(Local_213.f_200), 15000, 0))
			{
				func_6(&(Local_213.f_196));
				func_6(&(Local_213.f_200));
				func_55(1);
				func_272(0);
				MISC::CLEAR_BIT(&(Local_213.f_5), 16);
				func_265(3);
			}
		}
	}
}

void func_274(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x9DE4
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
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_284())
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
		if (!func_282())
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
				else if (bVar13 || (!func_94(PLAYER::PLAYER_ID(), 0) && !func_246()))
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
				func_279(0, 0, 0);
				if (bVar24)
				{
					STREAMING::CLEAR_FOCUS();
				}
				if (!func_278(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					func_277();
					func_276();
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
				if (!func_278(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					if (func_275(Global_4456448.f_190930))
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

bool func_275(int iParam0)//Position - 0xA250
{
	return iParam0 == 17;
}

void func_276()//Position - 0xA25D
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_277()//Position - 0xA2AA
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_278(int iParam0)//Position - 0xA2E8
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

void func_279(int iParam0, int iParam1, int iParam2)//Position - 0xA319
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
				func_281();
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
		func_280(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_280(int iParam0, int iParam1)//Position - 0xA3EF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_281()//Position - 0xA40B
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

int func_282()//Position - 0xA466
{
	if (func_283() == 0)
	{
		return 1;
	}
	return 0;
}

int func_283()//Position - 0xA47B
{
	return Global_1312467.f_18;
}

int func_284()//Position - 0xA489
{
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_285()//Position - 0xA4B7
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_286()//Position - 0xA4D4
{
	if (func_304())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			if (!func_285())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_272(1);
					func_105(-1);
					func_274(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_302(1, -1);
					func_287(3, 1, 1, 0);
					func_8(&(Local_213.f_196), 0, 0);
					func_8(&(Local_213.f_200), 0, 0);
					func_265(1);
				}
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA54F
{
	if (Global_76577)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_4269615, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4269615, 14);
				MISC::SET_BIT(&Global_4269615, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4269615, 14);
				MISC::SET_BIT(&Global_4269615, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4269615, 14);
				MISC::SET_BIT(&Global_4269615, 27);
			}
		}
		if (Global_7363[iParam0 /*15*/].f_9 == 0)
		{
			func_299();
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4269615, 14);
			MISC::CLEAR_BIT(&Global_4269615, 16);
			MISC::CLEAR_BIT(&Global_4269615, 15);
			MISC::CLEAR_BIT(&Global_4269615, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_292();
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_59(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19452 == 1)
	{
		return 0;
	}
	if (Global_19486.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_19483))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_291("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_19483 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		SYSTEM::WAIT(0);
	}
	func_299();
	func_288();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_291(&(Global_7363[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
			{
				Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
		{
			Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_288()//Position - 0xA766
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_290(14))
			{
				func_289(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_289(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_289(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_289(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xA7F4
{
	StringCopy(&(Global_7363[iParam0 /*15*/]), sParam1, 16);
	Global_7363[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7363[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_7363[iParam0 /*15*/].f_10 = iParam4;
	Global_7363[iParam0 /*15*/].f_11 = iParam5;
	Global_7363[iParam0 /*15*/].f_12 = iParam6;
	Global_7363[iParam0 /*15*/].f_13 = iParam7;
	Global_7363[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7363[iParam0 /*15*/].f_12 == 0)
	{
		Global_7363[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_13 == 0)
	{
		Global_7363[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_14 == 0)
	{
		Global_7363[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_290(int iParam0)//Position - 0xA8AA
{
	return Global_41396 == iParam0;
}

void func_291(char* sParam0)//Position - 0xA8B8
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_292()//Position - 0xA8D8
{
	if (func_290(14))
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
		Global_19486 = func_293();
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

var func_293()//Position - 0xA97A
{
	func_294();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_294()//Position - 0xA993
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_297(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_296(PLAYER::PLAYER_PED_ID());
			if (func_295(iVar0) && (!func_290(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_295(Global_111560.f_2358.f_539.f_4321))
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

bool func_295(int iParam0)//Position - 0xAA90
{
	return iParam0 < 3;
}

int func_296(int iParam0)//Position - 0xAA9C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_297(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_297(int iParam0)//Position - 0xAAD9
{
	if (func_295(iParam0))
	{
		return func_298(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_298(int iParam0)//Position - 0xAAFE
{
	return Global_1798[iParam0 /*29*/];
}

void func_299()//Position - 0xAB0D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76577 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_301(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_289(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_300(0) == 0) && Global_7361 == 0)
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_289(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_289(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_289(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_289(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_289(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_289(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_289(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_289(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_289(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4269615, 4) == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_289(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_289(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_289(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_289(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_289(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_289(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_289(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_289(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_289(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_289(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 20) == 1)
			{
				func_289(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 22) == 1)
			{
				func_289(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 26) == 1)
			{
				func_289(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && MISC::IS_BIT_SET(Global_4269615, 20) == 0) && MISC::IS_BIT_SET(Global_4269615, 22) == 0) && MISC::IS_BIT_SET(Global_4269615, 26) == 0)
		{
			func_289(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_300(bool bParam0)//Position - 0xB098
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

int func_301(int iParam0, int iParam1)//Position - 0xB0C3
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_302(bool bParam0, int iParam1)//Position - 0xB0ED
{
	int iVar0;
	
	if (!func_102(&iVar0, 0, iParam1))
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
		HUD::CLEAR_ADDITIONAL_TEXT(9, 0);
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
		func_303(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_303(var uParam0)//Position - 0xB1AB
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_304()//Position - 0xB1D4
{
	if (func_60())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_152(0) || func_151()) || RECORDING::_IS_RECORDING())
	{
		func_6(&(Local_213.f_204));
		func_8(&(Local_213.f_204), 0, 0);
		MISC::CLEAR_BIT(&(Local_213.f_5), 16);
		func_81();
		return 0;
	}
	else if (func_10(&(Local_213.f_204)))
	{
		if (!func_7(&(Local_213.f_204), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_213.f_5), 16);
			func_6(&(Local_213.f_204));
		}
	}
	if (func_147(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_305()//Position - 0xB279
{
	if (func_306())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
			{
				if (!MISC::IS_BIT_SET(Local_213.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_213.f_121), true);
					MISC::SET_BIT(&(Local_213.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_213.f_121), false);
				MISC::CLEAR_BIT(&(Local_213.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
			}
		}
	}
}

int func_306()//Position - 0xB33E
{
	if (func_147(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2530259, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_307()//Position - 0xB362
{
	int iVar0;
	
	if (func_27())
	{
		Global_1687880.f_1 = 0;
	}
	if (func_311() || func_176())
	{
		if (!func_10(&(Local_213.f_176)))
		{
			func_8(&(Local_213.f_176), 0, 0);
		}
		else if (func_7(&(Local_213.f_176), Global_1687880.f_1, 0) || func_176())
		{
			func_6(&(Local_213.f_174));
			if (func_27())
			{
				if (func_25(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_112, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					FIRE::ADD_EXPLOSION(Local_213.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
				}
				PAD::SET_PAD_SHAKE(0, 300, 200);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_121, 1);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_213.f_121);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_213.f_6), 2);
			}
			if (func_18())
			{
				func_310(1);
				if (Local_213.f_25 == 0)
				{
					func_308(6, 0, 0);
				}
				else
				{
					func_308(5, 0, 0);
				}
			}
			func_353(1);
			func_352(4);
		}
	}
	else if (func_10(&(Local_213.f_176)))
	{
		func_186(&(Local_213.f_176), 0, 0);
	}
}

void func_308(int iParam0, bool bParam1, int iParam2)//Position - 0xB487
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_309(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_213.f_78 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_213.f_115, 0f, 0f, Local_213.f_81, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_213.f_78, Local_213.f_120, &cVar0, fVar17, fVar18, iVar16, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_213.f_121), Local_213.f_78, Local_213.f_120, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_309(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_122))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_213.f_122), &cVar0, Local_213.f_120, fVar17, bParam1, iParam2, 0, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_213.f_122));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_213.f_78);
}

char* func_309(int iParam0)//Position - 0xB578
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_310(bool bParam0)//Position - 0xB5E6
{
	int iVar0;
	
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_25(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

int func_311()//Position - 0xB629
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0)) && !MISC::IS_BIT_SET(Local_213.f_5, 2))
	{
		return 1;
	}
	if (Local_213.f_11 == 2)
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 1))
	{
		return 1;
	}
	if (func_320())
	{
		Local_213.f_25 = 5;
		return 1;
	}
	if (func_119() && func_313())
	{
		Local_213.f_25 = 5;
		return 1;
	}
	if (func_18())
	{
		if (func_313())
		{
			Local_213.f_25 = 5;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 2))
	{
		Local_213.f_25 = 4;
		return 1;
	}
	if (func_159())
	{
		if (!func_10(&(Local_213.f_184)))
		{
			func_8(&(Local_213.f_184), 0, 0);
		}
		else if (func_7(&(Local_213.f_184), 3000, 0))
		{
			Local_213.f_25 = 0;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 7))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_213.f_121)) || func_183(NETWORK::NET_TO_ENT(Local_213.f_121), 0))
		{
			Local_213.f_25 = 3;
			return 1;
		}
	}
	if (!func_119() && !func_312())
	{
		if (Local_213.f_112.f_2 >= func_139())
		{
			Local_213.f_25 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_312()//Position - 0xB784
{
	return MISC::IS_BIT_SET(Global_1687880.f_2, 0);
}

int func_313()//Position - 0xB797
{
	vector3 vVar0;
	int iVar3;
	
	if (func_319())
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
		{
			if (func_119())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_318()) && !ENTITY::IS_ENTITY_DEAD(func_318(), 0))
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(func_318(), 1) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar3 = func_314(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8);
					switch (iVar3)
					{
						case 128:
							vVar0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							vVar0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							vVar0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							vVar0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							vVar0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							vVar0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (func_25(NETWORK::NET_TO_OBJ(Local_213.f_121)))
			{
				Local_213.f_83 = func_136(NETWORK::NET_TO_OBJ(Local_213.f_121), vVar0, 1);
				if (Local_213.f_83 > func_139())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(int iParam0)//Position - 0xB92F
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_317(iParam0);
		if (iVar0 != 0)
		{
			return func_315(iVar0);
		}
	}
	return -1;
}

int func_315(int iParam0)//Position - 0xB958
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_316(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_316(int iParam0)//Position - 0xB98F
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_317(int iParam0)//Position - 0xB9DB
{
	if (iParam0 != func_16())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_389;
	}
	return 0;
}

int func_318()//Position - 0xB9FF
{
	if (Global_1590293 != func_16())
	{
		if (!func_37(Global_1590293))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1366586))
			{
				return Global_1366586;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694200[Global_1590293]))
			{
				return Global_1694200[Global_1590293];
			}
		}
	}
	return -1;
}

bool func_319()//Position - 0xBA4F
{
	return MISC::IS_BIT_SET(Global_1687880, 6);
}

int func_320()//Position - 0xBA60
{
	float fVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0))
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_213.f_112, &fVar0, 1, 0))
		{
			Local_213.f_84 = (Local_213.f_112.f_2 - fVar0);
			if (Local_213.f_84 > IntToFloat(Global_262145.f_24137))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321()//Position - 0xBAB9
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	
	if (!func_27())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0)) && CAM::DOES_CAM_EXIST(Local_213.f_131))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			vVar0 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			CAM::SET_CAM_ROT(Local_213.f_131, vVar0, 2);
			if (MISC::IS_BIT_SET(Local_213.f_5, 1) || func_176())
			{
				return;
			}
			vVar3 = { func_324(func_325()) };
			vVar6 = { func_324(func_323(func_325())) };
			vVar9 = { func_322(vVar3, vVar6) };
			fVar12 = 5f;
			if (!PAD::_IS_INPUT_DISABLED(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar13 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar14 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar13 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar14 = 1;
				}
			}
			if (iVar13 && !func_240())
			{
				Local_213.f_82 = 140f;
				fVar12 = 7f;
			}
			else if (iVar14 && !func_240())
			{
				Local_213.f_82 = 60f;
				fVar12 = 3.5f;
			}
			else
			{
				Local_213.f_82 = 100f;
			}
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (Local_213[2] > 0 || Local_213[0] > 0)
			{
				if (Local_213[2] > 0)
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar9 * Vector(fVar15, fVar15, fVar15), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_213[2] < 0 || Local_213[0] < 0)
			{
				if (Local_213[0] < 0)
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar9 * Vector(fVar16, fVar16, fVar16), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

Vector3 func_322(vector3 vParam0, vector3 vParam3)//Position - 0xBDDC
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_323(struct<2> Param0, var uParam2)//Position - 0xBE15
{
	vector3 vVar0;
	
	vVar0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return vVar0;
}

Vector3 func_324(vector3 vParam0)//Position - 0xBE4C
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

Vector3 func_325()//Position - 0xBE8B
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_326(&vVar0);
	return vVar0;
}

void func_326(var uParam0)//Position - 0xBEA4
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_327()//Position - 0xBF6D
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	vector3 vVar24;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	vector3 vVar35;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	
	if (func_27())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_121), 0)) && CAM::DOES_CAM_EXIST(Local_213.f_131))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_231())
				{
					if (func_10(&(Local_213.f_182)))
					{
						iVar1 = Global_262145.f_24135;
						if (func_9())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_7(&(Local_213.f_182), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_182)));
							Local_213.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_213.f_123))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_123, NETWORK::NET_TO_OBJ(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_213.f_19 = 100;
							func_6(&(Local_213.f_182));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_42))
							{
								AUDIO::STOP_SOUND(Local_213.f_42);
								AUDIO::RELEASE_SOUND_ID(Local_213.f_42);
								Local_213.f_42 = -1;
							}
						}
					}
					if (!PAD::_IS_INPUT_DISABLED(0))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if ((((bVar3 && Local_213.f_19 == 100) && !func_240()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_213[1]) != 0f)
						{
							func_331(1);
						}
						else
						{
							func_331(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
						func_8(&(Local_213.f_180), 0, 0);
						func_330(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_41))
						{
							Local_213.f_41 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_41, "HUD_Boost_Loop", Local_213.f_119, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_213.f_131))
					{
						if (!CAM::IS_CAM_SHAKING(Local_213.f_131))
						{
							CAM::SHAKE_CAM(Local_213.f_131, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_213.f_131, 0.15f);
						}
					}
					if (func_10(&(Local_213.f_180)))
					{
						if (func_7(&(Local_213.f_180), Global_262145.f_24134, 0))
						{
							Local_213.f_19 = 0;
							func_331(0);
							func_330(0);
							func_6(&(Local_213.f_182));
							func_8(&(Local_213.f_182), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_213.f_131, 1);
							PAD::STOP_PAD_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_6(&(Local_213.f_180));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_41))
							{
								AUDIO::STOP_SOUND(Local_213.f_41);
								AUDIO::RELEASE_SOUND_ID(Local_213.f_41);
								Local_213.f_41 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_42))
							{
								Local_213.f_42 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_42, "HUD_Boost_Recharge_Loop", Local_213.f_119, 1);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24134) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_180))));
							Local_213.f_19 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_PAD_SHAKE(0, Global_262145.f_24134, 255);
						}
					}
				}
			}
			vVar5 = { Local_213.f_112 };
			vVar8 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_121), 2) };
			vVar8 = { (vVar8.x + 180f), (-vVar8.y + 180f), vVar8.z };
			CAM::SET_CAM_ROT(Local_213.f_131, vVar8, 2);
			if (MISC::IS_BIT_SET(Local_213.f_5, 1) || func_176())
			{
				return;
			}
			vVar11 = { func_324(func_325()) };
			vVar14 = { func_324(func_323(func_325())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar17, 1, 0);
			if (!func_329())
			{
				if (Local_213.f_9 == 2 || (vVar5.z - fVar17) < 2f)
				{
					fVar18 = 24f;
					if (Local_213[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 207, 1);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f || Local_213[1] != 0)
					{
						if ((vVar5.z - fVar17) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
						{
							fVar18 = 24f;
						}
						else
						{
							fVar18 = 10f;
						}
					}
					else
					{
						fVar18 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, fVar18, 0, 1, 1, 0);
				}
			}
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (!PAD::_IS_INPUT_DISABLED(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar19 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar20 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar19 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar20 = 1;
				}
			}
			if (((iVar19 && func_328()) && !func_60()) || (func_231() && !func_230()))
			{
				fVar23 = Local_213.f_82;
				if (func_142())
				{
					fVar23 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar22 = 10f;
				}
				if (func_231() && !func_230())
				{
					if (!PAD::_IS_INPUT_DISABLED(0))
					{
						fVar21 = ((fVar23 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
					}
					else
					{
						fVar21 = ((fVar23 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
					}
				}
				else if (!PAD::_IS_INPUT_DISABLED(0))
				{
					fVar21 = ((fVar23 + fVar22) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
				}
				else
				{
					fVar21 = ((fVar23 + fVar22) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
				}
				vVar24 = { vVar14 * Vector(fVar21, fVar21, fVar21) };
				if (vVar24.z > 149f)
				{
					vVar24.z = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar24, 0, 1, 1, 0);
			}
			else if (((iVar20 && !func_60()) && func_328()) && !func_240())
			{
				if (func_29() || func_9())
				{
					fVar28 = 10f;
				}
				if (!PAD::_IS_INPUT_DISABLED(0))
				{
					fVar27 = ((Local_213.f_82 + fVar28) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar27 = ((Local_213.f_82 + fVar28) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar14 * Vector(-fVar27, -fVar27, -fVar27), 0, 1, 1, 0);
			}
			if (((Local_213[1] > 0 && !func_231()) && !func_240()) && !func_60())
			{
				if (func_29())
				{
					fVar31 = 40f;
				}
				else
				{
					fVar31 = 6.4f;
				}
				fVar29 = (Local_213.f_82 / (127f / IntToFloat(Local_213[1])));
				fVar30 = (fVar31 / (127f / IntToFloat(Local_213[1])));
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar11 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, fVar30, 0, 1, 1, 0);
			}
			else if ((((Local_213[1] < 0 && !func_231()) && !func_240()) && !func_60()) || (func_231() && func_230()))
			{
				if (func_231() && func_230())
				{
					fVar34 = 50f;
					if (func_9())
					{
						fVar32 = (Local_213.f_82 / -1f);
					}
					else
					{
						fVar32 = ((Local_213.f_82 + fVar0) / -1f);
					}
					fVar33 = (fVar34 / -1f);
				}
				else
				{
					if (func_29() || func_9())
					{
						fVar34 = 40f;
					}
					else if (func_17())
					{
						fVar34 = 30f;
					}
					else
					{
						fVar34 = 6.4f;
					}
					if (func_9())
					{
						fVar32 = (Local_213.f_82 / (127f / IntToFloat(Local_213[1])));
					}
					else
					{
						fVar32 = ((Local_213.f_82 + fVar0) / (127f / IntToFloat(Local_213[1])));
					}
					fVar33 = (fVar34 / (127f / IntToFloat(Local_213[1])));
				}
				if (func_9())
				{
					if (!func_230())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
				}
			}
			vVar35 = { func_322(vVar11, vVar14) };
			if ((!func_231() && !func_240()) && !func_60())
			{
				if (Local_213[0] > 0)
				{
					fVar38 = -(Local_213.f_82 / (127f / IntToFloat(Local_213[0])));
					fVar39 = (8f / (127f / IntToFloat(Local_213[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar35 * Vector(fVar38, fVar38, fVar38), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, fVar39, 0, 1, 1, 0);
				}
				else if (Local_213[0] < 0)
				{
					fVar40 = -(Local_213.f_82 / (127f / IntToFloat(Local_213[0])));
					fVar41 = (8f / (127f / IntToFloat(Local_213[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, vVar35 * Vector(fVar40, fVar40, fVar40), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_121), 0, 0f, 0f, -fVar41, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

int func_328()//Position - 0xC8E9
{
	if (func_240())
	{
		return 0;
	}
	if (func_231() && !func_230())
	{
		return 0;
	}
	return 1;
}

bool func_329()//Position - 0xC912
{
	return MISC::IS_BIT_SET(Global_1687880, 2);
}

void func_330(bool bParam0)//Position - 0xC923
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 21))
		{
			MISC::SET_BIT(&(Local_213.f_5), 21);
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_213.f_5), 21);
	}
}

void func_331(bool bParam0)//Position - 0xC962
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 22))
		{
			MISC::SET_BIT(&(Local_213.f_5), 22);
		}
	}
	else if (MISC::IS_BIT_SET(Local_213.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_213.f_5), 22);
	}
}

void func_332()//Position - 0xC9A1
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_213.f_121), 0))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_213.f_112;
				fVar1 = Local_213.f_112.f_1;
			}
			HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::_0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1687880.f_24) && !func_27())
			{
				if (!MISC::IS_BIT_SET(Local_213.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_333()//Position - 0xCA3E
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_40) && Local_213.f_40 == -1)
		{
			Local_213.f_40 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_40, "HUD_Loop", Local_213.f_119, 1);
		}
	}
}

void func_334()//Position - 0xCA80
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_30))
		{
			Local_213.f_30 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_30, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_213.f_121), Local_213.f_119, 0, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_30, "DroneRotationalSpeed", Local_213.f_92);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_30, "DroneRotationalSpeed", Local_213.f_92);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
		{
			AUDIO::RELEASE_SOUND_ID(Local_213.f_39);
			Local_213.f_39 = -1;
		}
	}
}

void func_335()//Position - 0xCAF8
{
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, 1);
	}
}

void func_336()//Position - 0xCB19
{
	int iVar0;
	
	if (func_9())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_213.f_44);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121) && func_15(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0))
			{
				if (func_337(NETWORK::NET_TO_OBJ(Local_213.f_121), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_24731, 1))
				{
					if (!func_190(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_213.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_213.f_5), 11);
	}
}

bool func_337(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xCBBC
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, iParam3), ENTITY::GET_ENTITY_COORDS(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_338()//Position - 0xCBDE
{
	int iVar0;
	
	if (func_25(func_88()))
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_213.f_44);
		if (PLAYER::PLAYER_ID() != iVar0)
		{
			if (func_15(iVar0, 1, 1))
			{
				if (MISC::IS_BIT_SET(Local_213.f_7, Local_213.f_44))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
					{
						MISC::CLEAR_BIT(&(Local_213.f_7), Local_213.f_44);
					}
				}
				if (SYSTEM::VDIST2(func_213(iVar0), Local_213.f_112) < 12100f)
				{
					if (!MISC::IS_BIT_SET(Local_213.f_7, Local_213.f_44) && func_340(iVar0))
					{
						func_339(iVar0, 1);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_121, iVar0, 1);
						MISC::SET_BIT(&(Local_213.f_7), Local_213.f_44);
					}
				}
				else if (SYSTEM::VDIST2(func_213(iVar0), Local_213.f_112) > 14400f)
				{
					if (MISC::IS_BIT_SET(Local_213.f_7, Local_213.f_44))
					{
						func_339(iVar0, 0);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_121, iVar0, 0);
						MISC::CLEAR_BIT(&(Local_213.f_7), Local_213.f_44);
					}
				}
			}
		}
	}
}

void func_339(int iParam0, int iParam1)//Position - 0xCCCF
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = 406857800;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	iVar3 = func_173(iParam0);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_340(int iParam0)//Position - 0xCD09
{
	if (func_342(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_341(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_341(int iParam0)//Position - 0xCD3B
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

int func_342(int iParam0, bool bParam1, bool bParam2)//Position - 0xCD7A
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_343()//Position - 0xCDE4
{
	int iVar0;
	
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 1000;
		if (func_9() || func_29())
		{
			iVar0 = 7000;
		}
		if (!MISC::IS_BIT_SET(Local_213.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_RENDERING(Local_213.f_131))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_213.f_198), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_88(), 1, 0);
						ENTITY::SET_ENTITY_COLLISION(func_88(), true, 0);
						MISC::SET_BIT(&(Local_213.f_5), 29);
					}
				}
			}
		}
	}
}

void func_344()//Position - 0xCE7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_351() || !func_18())
	{
		return;
	}
	switch (Local_213.f_79)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_122))
			{
				iVar0 = -1211202509;
				if (func_161(iVar0))
				{
					if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_213.f_6, 4))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_213.f_6), 4);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_350(&(Local_213.f_122), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_122, PLAYER::PLAYER_ID(), 1);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_122), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_213.f_79 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
			{
				func_308(0, 0, 0);
				Local_213.f_79 = 2;
			}
			break;
		
		case 2:
			if (func_349(0, "CREATE"))
			{
				func_334();
				if (func_348(Local_213.f_122))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_213.f_122)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_213.f_122), true, 0);
					}
				}
				if (func_348(Local_213.f_121))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_213.f_121)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_213.f_121), true, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_213.f_125, false, 0);
					}
				}
			}
			if (func_346(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_125, NETWORK::NET_TO_OBJ(Local_213.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(Local_213.f_125, false, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_213.f_121));
				unk_0x006E4B040ED37EC3(NETWORK::NET_TO_OBJ(Local_213.f_121));
				func_247();
				func_108();
				func_216(1);
				func_234();
				func_327();
				func_345();
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
				{
					Local_213.f_39 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_39, "HUD_Startup", Local_213.f_119, 1);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
				Local_213.f_135 = NETWORK::GET_NETWORK_TIME();
				func_352(3);
				func_308(1, 1, 0);
				Local_213.f_79 = 3;
			}
			break;
		
		case 3:
			if (func_346(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_308(2, 0, 0);
						Local_213.f_172 = 2;
						break;
					
					case 1:
						func_308(3, 0, 0);
						Local_213.f_172 = 3;
						break;
					
					case 2:
						func_308(4, 0, 0);
						Local_213.f_172 = 4;
						break;
				}
				Local_213.f_79 = 4;
			}
			break;
		
		case 4:
			if (func_346(0))
			{
				func_308(1, 1, 0);
				Local_213.f_79 = 3;
			}
			break;
	}
}

void func_345()//Position - 0xD147
{
	if (func_119() || func_18())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_346(bool bParam0)//Position - 0xD1D2
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_25(iVar0))
	{
		fVar1 = func_347();
		iVar2 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_213.f_78);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_310(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_347()//Position - 0xD21F
{
	return 0.95f;
}

int func_348(var uParam0)//Position - 0xD22C
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_349(int iParam0, char* sParam1)//Position - 0xD24E
{
	int iVar0;
	
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_213.f_78);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_213.f_122), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_213.f_121), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0xD2B5
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

bool func_351()//Position - 0xD35A
{
	return MISC::IS_BIT_SET(Global_1687880, 13);
}

void func_352(int iParam0)//Position - 0xD36C
{
	if (Local_213.f_170 != iParam0)
	{
		Local_213.f_170 = iParam0;
	}
}

void func_353(bool bParam0)//Position - 0xD383
{
	if (bParam0)
	{
		if (!func_351())
		{
			MISC::SET_BIT(&Global_1687880, 13);
		}
	}
	else if (func_351())
	{
		MISC::CLEAR_BIT(&Global_1687880, 13);
	}
}

void func_354()//Position - 0xD3B6
{
	vector3 vVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			if (!CAM::DOES_CAM_EXIST(Local_213.f_131) && MISC::IS_BIT_SET(Local_213.f_5, 0))
			{
				if (func_364())
				{
					if (func_312())
					{
						func_274(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_27())
					{
						func_274(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_363())
					{
						HUD::_THEFEED_DISABLE();
					}
					else
					{
						HUD::_0x15CFA549788D35EF();
					}
					Local_213.f_131 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_FOV(Local_213.f_131, Local_213.f_88);
					CAM::SET_CAM_NEAR_CLIP(Local_213.f_131, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_213.f_131, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_27())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						vVar0 = { 0f, -0.038f, -0.006f };
					}
					CAM::ATTACH_CAM_TO_ENTITY(Local_213.f_131, NETWORK::NET_TO_OBJ(Local_213.f_121), vVar0, 1);
					if (func_27())
					{
						CAM::SET_CAM_ROT(Local_213.f_131, func_362() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_213.f_112, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_213.f_112, CAM::GET_CAM_ROT(Local_213.f_131, 2));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_213.f_121), 0);
					if (!func_312())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_18())
					{
						func_345();
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
						{
							Local_213.f_39 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_39, "HUD_Startup", Local_213.f_119, 1);
						}
						func_247();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_216(1);
						func_234();
						func_327();
						CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
						Local_213.f_135 = NETWORK::GET_NETWORK_TIME();
					}
					func_359(1);
					func_358(1);
					func_356(158);
					MISC::SET_BIT(&(vLocal_115[PLAYER::PLAYER_ID() /*3*/]), 0);
					if (!func_18())
					{
						func_352(3);
					}
					else
					{
						Local_213.f_115 = { func_213(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_213.f_115, &(Local_213.f_115.f_2), 0, 0);
						Local_213.f_81 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_355();
						Local_213.f_115 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_213.f_115, Local_213.f_81, -0.0695723f, 0.177497f, 0f) };
						func_352(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_213.f_131))
				{
				}
				if (!MISC::IS_BIT_SET(Local_213.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
		}
	}
}

void func_355()//Position - 0xD686
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_356(int iParam0)//Position - 0xD6CF
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_357() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_357()//Position - 0xD732
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_358(bool bParam0)//Position - 0xD73F
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 26))
		{
			MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 26);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 26))
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 26);
	}
}

void func_359(bool bParam0)//Position - 0xD7B2
{
	if (bParam0)
	{
		if (!func_58())
		{
			MISC::SET_BIT(&Global_1687880, 5);
		}
	}
	else
	{
		if (func_58())
		{
			MISC::CLEAR_BIT(&Global_1687880, 5);
		}
		func_360(0);
	}
}

void func_360(bool bParam0)//Position - 0xD7E8
{
	if (bParam0)
	{
		if (!func_361())
		{
			MISC::SET_BIT(&Global_1687880, 12);
		}
	}
	else if (func_361())
	{
		MISC::CLEAR_BIT(&Global_1687880, 12);
	}
}

bool func_361()//Position - 0xD81B
{
	return MISC::IS_BIT_SET(Global_1687880, 12);
}

Vector3 func_362()//Position - 0xD82D
{
	return Global_1687880.f_16;
}

bool func_363()//Position - 0xD83D
{
	return MISC::IS_BIT_SET(Global_1687880, 10);
}

int func_364()//Position - 0xD84F
{
	if (func_30() && !func_32())
	{
		return 1;
	}
	if (func_367())
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_32() && func_365())
	{
		return 1;
	}
	if (!func_53(PLAYER::PLAYER_ID(), 0) && !func_270())
	{
		return 1;
	}
	return 0;
}

int func_365()//Position - 0xD8B2
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 0;
}

int func_366()//Position - 0xD934
{
	return 0;
}

int func_367()//Position - 0xD93D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (func_32() || func_368())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	return 1;
}

int func_368()//Position - 0xD976
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_369()//Position - 0xD9E0
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("bmx");
	if (func_161(Local_213.f_169) && func_161(iVar0))
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
			{
				if (!func_312())
				{
					if (func_119())
					{
						if (func_25(func_318()))
						{
							vVar1 = { ENTITY::GET_ENTITY_COORDS(func_318(), 1) };
						}
					}
					else
					{
						vVar1 = { Local_213.f_100 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_274(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!MISC::IS_BIT_SET(Local_213.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_213.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!MISC::IS_BIT_SET(Local_213.f_5, 19))
						{
							if (func_374())
							{
								if (func_371())
								{
									MISC::SET_BIT(&(Local_213.f_5), 19);
								}
							}
							else
							{
								if (!func_237(func_370()))
								{
									Local_213.f_100 = { func_370() };
								}
								MISC::SET_BIT(&(Local_213.f_5), 19);
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(Local_213.f_5, 19) || func_312())
				{
					if (!MISC::IS_BIT_SET(Local_213.f_5, 20))
					{
						Local_213.f_125 = VEHICLE::CREATE_VEHICLE(iVar0, Local_213.f_100, 0f, 0, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_213.f_125, 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_213.f_125, Local_213.f_100, 0, 0, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_213.f_125, 1);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_213.f_125, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_213.f_125, false, 0);
						MISC::SET_BIT(&(Local_213.f_5), 20);
					}
					else if (func_74(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_213.f_5, 30))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_213.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = false;
							if (func_18())
							{
								Local_213.f_115 = { func_213(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_213.f_115, &(Local_213.f_115.f_2), 0, 0);
								Local_213.f_100 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_213.f_120, "ENTER", Local_213.f_115, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0, 2) };
								bVar4 = true;
							}
							if (func_350(&(Local_213.f_121), Local_213.f_169, Local_213.f_100, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1687880.f_20 = NETWORK::NET_TO_OBJ(Local_213.f_121);
								if (func_119())
								{
									if (func_25(func_318()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_88(), ENTITY::GET_ENTITY_ROTATION(func_318(), 2), 2, 1);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_318()) + 180f);
									}
								}
								Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_407 = { Local_213.f_100 };
								Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_410 = fVar5;
								vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_213.f_121;
								NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_121, PLAYER::PLAYER_ID(), 1);
								INTERIOR::_0x38C1CB1CB119A016(NETWORK::NET_TO_ENT(Local_213.f_121), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_213.f_121), 1, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_88(), Local_213.f_100, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_88(), fVar5);
								NETWORK::_0x4BA166079D658ED4(func_88(), 1);
								if (!func_237(func_362()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_88(), func_362(), 2, 1);
								}
								if (func_27())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_88(), 0, 0);
								}
								NETWORK::_NETWORK_SET_NETWORK_ID_DYNAMIC(Local_213.f_121, 1);
								if (func_147(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(func_88(), Global_262145.f_24136 * 5, 0);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_88(), Global_262145.f_24136, 0);
								}
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_213.f_121), 1);
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_121, 0);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_213.f_121), 1);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_213.f_100, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_213.f_121), 1), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_213.f_121), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_213.f_169);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_213.f_121), 0);
				if (func_25(Local_213.f_125) && func_25(NETWORK::NET_TO_ENT(Local_213.f_121)))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_125, NETWORK::NET_TO_OBJ(Local_213.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					MISC::SET_BIT(&(Local_213.f_5), 0);
				}
			}
		}
	}
}

Vector3 func_370()//Position - 0xDDFB
{
	return Global_1687880.f_13;
}

int func_371()//Position - 0xDE0B
{
	if (Local_213.f_15 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_213.f_5, 14))
		{
			if ((!func_147(PLAYER::PLAYER_ID()) && func_119()) && func_25(func_318()))
			{
				Local_213.f_100 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_318(), 1), ENTITY::GET_ENTITY_HEADING(func_318()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_213.f_5), 14);
			}
			else
			{
				if (func_119() && func_25(func_318()))
				{
					Local_213.f_100 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_318(), 1), ENTITY::GET_ENTITY_HEADING(func_318()), -0.7f, 1.6f, 4f) };
				}
				Local_213.f_100 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100 - 1.5f), (Local_213.f_100 + 1.5f));
				Local_213.f_100.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100.f_1 - 1.5f), (Local_213.f_100.f_1 + 1.5f));
				Local_213.f_100.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100.f_2 + 0.5f), (Local_213.f_100.f_2 + 1.5f));
				if (!func_373(Local_213.f_100))
				{
					MISC::SET_BIT(&(Local_213.f_5), 14);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Local_213.f_5, 15))
		{
			Local_213.f_100 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100 - 1.5f), (Local_213.f_100 + 1.5f));
			Local_213.f_100.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100.f_1 - 1.5f), (Local_213.f_100.f_1 + 1.5f));
			Local_213.f_100.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_100.f_2 + 0.5f), (Local_213.f_100.f_2 + 1.5f));
			if (!func_373(Local_213.f_100))
			{
				MISC::CLEAR_BIT(&(Local_213.f_5), 15);
			}
		}
		func_372(Local_213.f_100);
	}
	else if (Local_213.f_15 == 1 && !func_373(Local_213.f_100))
	{
		return 1;
	}
	else
	{
		Local_213.f_15 = 0;
		MISC::SET_BIT(&(Local_213.f_5), 15);
	}
	return 0;
}

void func_372(vector3 vParam0)//Position - 0xDFF5
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar6;
	var uVar9;
	int iVar10;
	
	switch (Local_213.f_14)
	{
		case 0:
			if (func_119())
			{
				if (func_25(func_318()))
				{
					iVar0 = func_318();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_213.f_169);
			}
			else
			{
				fVar1 = (func_196(Local_213.f_169) * 11f);
			}
			Local_213.f_130 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vParam0, vParam0, fVar1, 511, iVar0, 4);
			if (Local_213.f_130 != 0)
			{
				Local_213.f_14 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_213.f_130, &iVar2, &vVar6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_213.f_15 = 1;
					vVar6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_213.f_15 = 2;
					Local_213.f_130 = 0;
					Local_213.f_14 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_213.f_14 = 0;
			}
			break;
	}
}

int func_373(vector3 vParam0)//Position - 0xE0CD
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_374()//Position - 0xE10A
{
	if (func_119())
	{
		return 1;
	}
	if (func_17() && !func_18())
	{
		return 1;
	}
	return 0;
}

int func_375()//Position - 0xE133
{
	if (func_270())
	{
		return Global_1676879.f_444 == 0;
	}
	return 0;
}

void func_376()//Position - 0xE14F
{
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_213.f_103 = { func_238(&Local_213) };
		if (!func_237(func_370()))
		{
			Local_213.f_100 = { func_370() };
		}
		else
		{
			Local_213.f_100 = { func_213(PLAYER::PLAYER_ID()) };
			Local_213.f_100 = { Local_213.f_100, Local_213.f_100.f_1, (Local_213.f_100.f_2 + 1.5f) };
		}
		if (func_53(PLAYER::PLAYER_ID(), 0))
		{
			func_420(1);
		}
		if (func_53(PLAYER::PLAYER_ID(), 0))
		{
			func_416();
		}
		else if (((func_414(PLAYER::PLAYER_ID()) == 2 || func_414(PLAYER::PLAYER_ID()) == 1) && !MISC::IS_BIT_SET(Global_1695602, 6)) && !MISC::IS_BIT_SET(Global_1695603, 0))
		{
			if (MISC::IS_BIT_SET(Global_2508185, 0))
			{
				func_413(1);
				func_405(0, 0);
				func_404();
				func_360(1);
				func_352(1);
			}
		}
		else if ((func_31() && func_400()) && !MISC::IS_BIT_SET(Global_1695602, 6))
		{
			func_378();
		}
		else if (MISC::IS_BIT_SET(Global_1695602, 6) && MISC::IS_BIT_SET(Global_1695603, 0))
		{
			func_405(0, 0);
			func_360(1);
			func_352(1);
		}
		else if (func_18() && !func_377())
		{
			HUD::CLEAR_HELP(1);
			func_115("PIM_DRONAMOS", -1);
			func_274(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_352(6);
		}
		else if (func_237(Local_213.f_97))
		{
			Local_213.f_118 = 0;
			func_360(1);
			func_352(1);
		}
	}
}

bool func_377()//Position - 0xE2DB
{
	return MISC::IS_BIT_SET(Global_1687880, 23);
}

void func_378()//Position - 0xE2ED
{
	vector3 vVar0;
	int iVar3;
	
	if (!func_393())
	{
		if ((((((func_392() || func_391()) && !Global_1662552) && func_400()) && !MISC::IS_BIT_SET(Global_2508068, 6)) && Global_1312792) && !(func_392() && Global_262145.f_25789))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 224) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 19))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_25791, 0, 0, 1, -1, 0) || MISC::IS_BIT_SET(Global_2508068, 2))
				{
					MISC::SET_BIT(&Global_2508068, 0);
					func_405(0, 0);
					func_360(1);
					func_352(1);
					func_387();
					func_385(73, -1);
					func_382();
					vVar0 = { func_381() };
					func_379(vVar0, 0f, 0f, 0f);
					if (func_392())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2508068, 4))
				{
					MISC::SET_BIT(&Global_2508068, 4);
				}
			}
		}
	}
}

void func_379(vector3 vParam0, vector3 vParam3)//Position - 0xE438
{
	if (!func_380(Global_1687880.f_13, vParam0, 0))
	{
		Global_1687880.f_13 = { vParam0 };
		vParam3 = { vParam3 + Vector(0f, -180f, 180f) };
		Global_1687880.f_16 = { vParam3 };
	}
}

bool func_380(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0xE481
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_381()//Position - 0xE4C8
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_184556.f_1 == 3 || Global_4456448.f_184556.f_1 == 3) || Global_4456448.f_184556.f_1 == 3)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_382()//Position - 0xE55E
{
	int iVar0;
	
	iVar0 = func_383(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_335.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_335.f_3), 13);
	}
}

int func_383(int iParam0, int iParam1)//Position - 0xE5AB
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_384(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_384(var uParam0)//Position - 0xE5D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
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

void func_385(int iParam0, int iParam1)//Position - 0xE60B
{
	int iVar0;
	
	iVar0 = func_383(iParam0, func_384(iParam1));
	iVar0++;
	func_386(iParam0, iVar0, iParam1);
}

void func_386(int iParam0, int iParam1, var uParam2)//Position - 0xE631
{
	int iVar0;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_384(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

void func_387()//Position - 0xE655
{
	func_388(1, 7982);
}

void func_388(int iParam0, int iParam1)//Position - 0xE665
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_390(iParam1, -1, 0);
	func_389(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xE68E
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_390(int iParam0, int iParam1, int iParam2)//Position - 0xE6BE
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_391()//Position - 0xE6F0
{
	return Global_2459027;
}

int func_392()//Position - 0xE6FC
{
	if (Global_2459026 >= 0 && Global_2459026 < 10)
	{
		return 1;
	}
	return 0;
}

int func_393()//Position - 0xE71E
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_270())
	{
		return 1;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		if (func_37(Global_1590293))
		{
			return 1;
		}
	}
	if (func_119())
	{
		if (func_397())
		{
			if (func_396())
			{
				return 1;
			}
			if (MISC::IS_BIT_SET(Local_213.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_179(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_59(0))
	{
		return 1;
	}
	if (func_285())
	{
		return 1;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_136(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_395())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_394(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (Global_262145.f_24146)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_213.f_5, 27))
	{
		return 1;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0))
	{
		if (func_25(func_318()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_318(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_318(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_318(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319110)
	{
		return 1;
	}
	if (Global_2509234)
	{
		return 1;
	}
	if (Global_2509232)
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, int iParam1)//Position - 0xE95F
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_395()//Position - 0xE9B5
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_396()//Position - 0xE9F3
{
	if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8 != func_16() && PLAYER::PLAYER_ID() != func_16())
	{
		return MISC::IS_BIT_SET(Global_1590446[Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8 /*871*/].f_273.f_330, 20);
	}
	return 0;
}

int func_397()//Position - 0xEA48
{
	if (func_147(PLAYER::PLAYER_ID()) && Global_1687880.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_398()//Position - 0xEA6D
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_399()//Position - 0xEA87
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_400()//Position - 0xEA9C
{
	int iVar0;
	int iVar1;
	
	if (func_403() && !func_402())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969029.f_13[iVar0];
	if (iVar1 < 17)
	{
		if ((((MISC::IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 23) && MISC::IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 24)) && MISC::IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 25)) && MISC::IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 26)) && MISC::IS_BIT_SET(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!MISC::IS_BIT_SET(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_391() || func_401(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_401(int iParam0)//Position - 0xEBA2
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_39.f_18, 14);
}

int func_402()//Position - 0xEBBD
{
	if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_403()//Position - 0xEBEB
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

void func_404()//Position - 0xEC03
{
	MISC::CLEAR_BIT(&Global_2508185, 0);
}

void func_405(bool bParam0, bool bParam1)//Position - 0xEC14
{
	int iVar0;
	
	Local_213.f_82 = Global_262145.f_24139;
	if (func_29() || func_9())
	{
		Local_213.f_82 = (Local_213.f_82 * 4.5f);
	}
	else if (func_27())
	{
		Local_213.f_82 = 100f;
	}
	else if (func_17())
	{
		Local_213.f_82 = 100f;
	}
	else if (func_142())
	{
		Local_213.f_82 = 10f;
	}
	Local_213.f_93 = 40f;
	if (func_17())
	{
		Local_213.f_93 = 70f;
	}
	else if (func_142())
	{
		Local_213.f_93 = 35f;
	}
	if (func_29())
	{
		Local_213.f_169 = -388213579;
	}
	else if (func_9())
	{
		Local_213.f_169 = 442185650;
	}
	else if (func_27())
	{
		Local_213.f_169 = 1270560417;
		func_412(1);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_411(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_213.f_169 = -1324942671;
					break;
				
				case 38:
					Local_213.f_169 = 691432262;
					break;
				
				case 39:
					Local_213.f_169 = -1766406639;
					break;
				
				case 40:
					Local_213.f_169 = -2073550476;
					break;
			}
		}
		else
		{
			Local_213.f_169 = 430841677;
		}
	}
	else if (func_142())
	{
		Local_213.f_169 = 430841677;
	}
	else
	{
		Local_213.f_169 = -1904523353;
	}
	if (bParam1)
	{
		Local_213.f_100 = { Local_213.f_106 };
	}
	Global_1687880.f_1 = 1500;
	func_410();
	func_409(1);
	func_408(1);
	if (func_29() || func_27())
	{
		func_407(1);
	}
	else if (func_9())
	{
		func_407(0);
	}
	if (func_18())
	{
		Local_213.f_120 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_213.f_120);
	}
	if (func_9())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_18())
	{
		func_406(Global_262145.f_27927);
	}
	else if (func_17() && !func_18())
	{
		func_406(Global_262145.f_27928);
	}
	else if (!func_119() && !func_312())
	{
		func_406(200f);
	}
	func_68(Global_1574997);
	if (bParam0)
	{
	}
}

void func_406(float fParam0)//Position - 0xEE4B
{
	if (Global_1687880.f_8 != fParam0)
	{
		Global_1687880.f_8 = fParam0;
	}
}

void func_407(bool bParam0)//Position - 0xEE67
{
	if (bParam0)
	{
		if (!func_175())
		{
			MISC::SET_BIT(&Global_1687880, 8);
		}
	}
	else if (func_175())
	{
		MISC::CLEAR_BIT(&Global_1687880, 8);
	}
}

void func_408(bool bParam0)//Position - 0xEE9A
{
	if (bParam0)
	{
		if (!func_329())
		{
			MISC::SET_BIT(&Global_1687880, 2);
		}
	}
	else if (func_329())
	{
		MISC::CLEAR_BIT(&Global_1687880, 2);
	}
}

void func_409(bool bParam0)//Position - 0xEECB
{
	if (bParam0)
	{
		if (!func_226())
		{
			MISC::SET_BIT(&Global_1687880, 4);
		}
	}
	else if (func_226())
	{
		MISC::CLEAR_BIT(&Global_1687880, 4);
	}
}

void func_410()//Position - 0xEEFC
{
	if (!Local_213.f_118)
	{
		Local_213.f_17 = 100;
	}
	if (func_142())
	{
		Local_213.f_23 = 100;
	}
	Local_213.f_18 = 0;
	Local_213.f_19 = 100;
	Local_213.f_88 = 90f;
	Local_213.f_91 = 90f;
	if (!func_27())
	{
		Local_213.f_132 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
	}
	else
	{
		Local_213.f_132 = func_89();
	}
	if (func_29())
	{
		Local_213.f_119 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_213.f_119 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_213.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_213.f_119 = "DLC_BTL_Drone_Sounds";
	}
}

int func_411(int iParam0)//Position - 0xEF95
{
	if (iParam0 != func_16())
	{
		return Global_2424073[iParam0 /*421*/].f_416.f_1;
	}
	return -1;
}

void func_412(bool bParam0)//Position - 0xEFB8
{
	if (bParam0)
	{
		if (!func_184())
		{
			MISC::SET_BIT(&Global_1687880, 15);
		}
	}
	else if (func_184())
	{
		MISC::CLEAR_BIT(&Global_1687880, 15);
	}
}

void func_413(bool bParam0)//Position - 0xEFEB
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 4))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 4);
	}
}

int func_414(int iParam0)//Position - 0xF035
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_415())
	{
		return Global_2508090.f_1;
	}
	return Global_2417783.f_2620[iParam0 /*3*/].f_1;
}

int func_415()//Position - 0xF067
{
	if (((Global_2508093 != 0 && Global_2508093 == Global_2508094) && Global_2508082 != 3) && Global_2508082 != 1)
	{
		return 0;
	}
	return 1;
}

void func_416()//Position - 0xF0A1
{
	if (!func_393())
	{
		if (func_32())
		{
			if (func_367())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_419("DRONE_TRIG");
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_32() || func_366())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
				{
					func_360(1);
					func_352(1);
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_213.f_118 = 0;
					func_360(1);
					func_352(1);
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if ((func_30() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_367())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_419("DRONE_TRIG");
			}
			if (func_418("DRONE_TRIG"))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_213.f_118 = 0;
					func_360(1);
					func_352(1);
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else if (func_418("DRONE_TRIG"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_417() || func_32())
		{
			if (func_418("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (func_418("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_417()//Position - 0xF245
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(PLAYER::PLAYER_PED_ID(), 2106541073))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

int func_418(char* sParam0)//Position - 0xF2FD
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_419(char[4] cParam0)//Position - 0xF310
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

void func_420(bool bParam0)//Position - 0xF326
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 1))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 1);
	}
}

void func_421()//Position - 0xF370
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_213.f_121), 0))
		{
			Local_213.f_112 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_213.f_121), 1) };
			Local_213.f_87 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_121));
			if (!func_10(&(Local_213.f_190)))
			{
				func_8(&(Local_213.f_190), 0, 0);
			}
			else if (func_7(&(Local_213.f_190), 1000, 0))
			{
				if (!func_380(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_407, Local_213.f_112, 0))
				{
					Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_407 = { Local_213.f_112 };
				}
				if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_410 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_121)))
				{
					Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_410 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_121));
				}
				func_6(&(Local_213.f_190));
			}
		}
	}
	if (func_25(Local_213.f_125))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_125))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_213.f_125, false, 0);
		}
	}
	if (func_25(Local_213.f_123))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_123))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_213.f_123, false, 0);
		}
	}
}

void func_422()//Position - 0xF494
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
				func_423(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_423(int iParam0)//Position - 0xF4D1
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0) && NETWORK::NET_TO_ENT(Local_213.f_121) == Var0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_213.f_25 = 2;
						}
					}
				}
			}
		}
	}
}

void func_424()//Position - 0xF547
{
	if (func_430(3))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_274(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, 0);
		if (!func_27())
		{
			func_425();
			PAD::ENABLE_CONTROL_ACTION(0, 19, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 166, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 167, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 168, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 169, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 218, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 219, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 220, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 221, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 209, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 210, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 235, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 234, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 1, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 174, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 175, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 245, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 246, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 247, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 248, 1);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0, 201, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 202, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 188, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 187, 1);
				PAD::ENABLE_CONTROL_ACTION(0, 189, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
				PAD::ENABLE_CONTROL_ACTION(2, 217, 1);
			}
		}
	}
}

void func_425()//Position - 0xF737
{
	func_426();
}

void func_426()//Position - 0xF743
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

void func_427()//Position - 0xF767
{
	if (MISC::IS_BIT_SET(Local_213.f_5, 28))
	{
		if (!func_10(&(Local_213.f_192)))
		{
			func_8(&(Local_213.f_192), 0, 0);
		}
		else if (func_7(&(Local_213.f_192), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_213.f_5), 28);
			func_6(&(Local_213.f_192));
		}
	}
}

void func_428()//Position - 0xF7B6
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_213.f_5, 27))
	{
		if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8 != func_16())
		{
			iVar0 = Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8;
		}
		else if (Global_1590293 != func_16())
		{
			iVar0 = Global_1590293;
		}
		else if (func_256(PLAYER::PLAYER_ID(), 0))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_160(iVar0, 0);
					MISC::CLEAR_BIT(&(Local_213.f_5), 27);
				}
			}
		}
	}
}

void func_429()//Position - 0xF85B
{
	vector3 vVar0;
	
	if (func_119())
	{
		if (func_430(1))
		{
			if (func_25(func_318()))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(func_318(), 1) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(vVar0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_213.f_112, 60f, 30);
			}
		}
	}
	if (func_430(1) || func_430(3))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
		{
			if (CAM::DOES_CAM_EXIST(Local_213.f_131) && CAM::IS_CAM_RENDERING(Local_213.f_131))
			{
				if (func_430(3))
				{
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_213.f_112, 60f, 200f);
					INTERIOR::_0x483ACA1176CA93F1();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_213.f_112, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_213.f_121)));
					if ((MISC::GET_FRAME_COUNT() % 120) == 0)
					{
						PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_213.f_112, 60f, 30);
					}
				}
			}
		}
	}
}

bool func_430(int iParam0)//Position - 0xF935
{
	return Local_213.f_170 == iParam0;
}

int func_431()//Position - 0xF944
{
	if (func_435())
	{
		return 1;
	}
	if (!func_282())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_16())
	{
		if (func_245(PLAYER::PLAYER_ID()) && !func_244())
		{
			return 1;
		}
	}
	if (func_181(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_341(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_434())
	{
		if (func_433())
		{
			return 1;
		}
		if (func_342(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_31())
		{
			return 1;
		}
		if (!func_432())
		{
			if (func_7(&(Local_213.f_208), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_6(&(Local_213.f_208));
		}
	}
	return 0;
}

int func_432()//Position - 0xF9FA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (MISC::IS_BIT_SET(vLocal_115[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_433()//Position - 0xFA2C
{
	return MISC::IS_BIT_SET(Global_1687880, 22);
}

bool func_434()//Position - 0xFA3E
{
	return MISC::IS_BIT_SET(Local_213.f_6, 3);
}

bool func_435()//Position - 0xFA4F
{
	return MISC::IS_BIT_SET(Global_1687880, 0);
}

int func_436()//Position - 0xFA60
{
	var uVar0;
	
	func_444(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_443())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_442())
	{
		return 1;
	}
	if (func_441(159))
	{
		if (!func_440())
		{
			return 1;
		}
	}
	if (func_441(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_437() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_437()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_437()//Position - 0xFAEA
{
	switch (func_439())
	{
		case 0:
			return func_438();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_438()//Position - 0xFB1D
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_439()//Position - 0xFB41
{
	return Global_30736;
}

bool func_440()//Position - 0xFB4C
{
	return Global_2448961.f_598;
}

int func_441(int iParam0)//Position - 0xFB5B
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_442()//Position - 0xFB72
{
	return Global_2458999;
}

bool func_443()//Position - 0xFB7E
{
	return Global_2448961.f_593;
}

void func_444(var uParam0)//Position - 0xFB8D
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
					func_445(iVar0);
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

void func_445(int iParam0)//Position - 0xFC00
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_446(iVar4, &bVar5))
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

int func_446(int iParam0, var uParam1)//Position - 0xFC81
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

void func_447()//Position - 0xFCE0
{
	SYSTEM::WAIT(0);
}

void func_448(bool bParam0)//Position - 0xFCED
{
	if (!func_434())
	{
		func_454(bParam0);
	}
	else
	{
		func_449();
	}
}

void func_449()//Position - 0xFD0A
{
	func_6(&(Local_213.f_208));
	func_453(0);
	func_452(0);
	func_451(0);
	func_450();
}

void func_450()//Position - 0xFD2D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_451(bool bParam0)//Position - 0xFD39
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880, 21))
		{
			MISC::SET_BIT(&Global_1687880, 21);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880, 21))
	{
		MISC::CLEAR_BIT(&Global_1687880, 21);
	}
}

void func_452(bool bParam0)//Position - 0xFD78
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880, 22))
		{
			MISC::SET_BIT(&Global_1687880, 22);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880, 22))
	{
		MISC::CLEAR_BIT(&Global_1687880, 22);
	}
}

void func_453(bool bParam0)//Position - 0xFDB7
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_274, 31))
		{
			MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_274), 31);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_274, 31))
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_274), 31);
	}
}

void func_454(bool bParam0)//Position - 0xFE2A
{
	int iVar0;
	struct<8> Var1;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_121))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_121, 1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_121))
		{
			if (!MISC::IS_BIT_SET(Local_213.f_6, 2))
			{
				if (func_27())
				{
					if (func_25(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_112, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						FIRE::ADD_EXPLOSION(Local_213.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
					}
					PAD::SET_PAD_SHAKE(0, 300, 200);
					MISC::SET_BIT(&(Local_213.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_213.f_121);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, 0, 1);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_121);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_472(&Var1, 11);
	}
	if (func_418("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_25(Local_213.f_123))
	{
		uVar10 = Local_213.f_123;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_124))
	{
		OBJECT::DELETE_OBJECT(&(Local_213.f_124));
	}
	if (HUD::DOES_BLIP_EXIST(Local_213.f_133))
	{
		HUD::REMOVE_BLIP(&(Local_213.f_133));
	}
	if (HUD::DOES_BLIP_EXIST(Local_213.f_134))
	{
		HUD::REMOVE_BLIP(&(Local_213.f_134));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_125))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_213.f_125));
	}
	HUD::_0x15CFA549788D35EF();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_218())
	{
		func_217(0);
	}
	func_302(1, -1);
	func_471();
	if (func_18())
	{
		func_310(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_122))
	{
		uVar11 = NETWORK::NET_TO_OBJ(Local_213.f_122);
		OBJECT::DELETE_OBJECT(&uVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_213.f_120))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_213.f_120);
		}
		func_470(0);
	}
	func_227(0);
	if (func_469() && (!func_245(PLAYER::PLAYER_ID()) || func_244()))
	{
		func_274(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_213.f_83 = 0f;
	Local_213.f_84 = 0f;
	Local_213.f_11 = 0;
	Local_213.f_13 = 0;
	Local_213.f_9 = 0;
	Local_213.f_15 = 0;
	func_6(&(Local_213.f_174));
	func_6(&(Local_213.f_176));
	if (!Local_213.f_118)
	{
		func_6(&(Local_213.f_178));
	}
	func_6(&(Local_213.f_182));
	func_6(&(Local_213.f_180));
	func_6(&(Local_213.f_184));
	func_6(&(Local_213.f_188));
	func_6(&(Local_213.f_194));
	func_6(&(Local_213.f_192));
	func_6(&(Local_213.f_190));
	func_6(&(Local_213.f_196));
	func_6(&(Local_213.f_198));
	func_6(&(Local_213.f_200));
	func_6(&(Local_213.f_204));
	func_6(&(Local_213.f_206));
	func_6(&(Local_213.f_186));
	Local_213.f_27 = 0;
	Local_213.f_5 = 0;
	Local_213.f_6 = 0;
	Global_1687880.f_4 = -1;
	func_468(-1f);
	func_406(0f);
	func_224(0);
	func_409(0);
	func_467(0);
	func_407(0);
	func_203(0);
	func_466(0);
	func_158(0);
	func_465(0);
	func_464(0);
	func_463(0);
	func_55(1);
	func_268(0);
	func_266(0);
	func_272(0);
	func_412(0);
	func_379(0f, 0f, 0f, 0f, 0f, 0f);
	func_462();
	Global_1687880.f_24 = -1;
	MISC::CLEAR_BIT(&Global_2508068, 0);
	MISC::CLEAR_BIT(&Global_1695603, 0);
	func_352(0);
	if (!func_461(0))
	{
		func_264();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (func_119())
		{
			if (Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8 != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8))
			{
				iVar12 = Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_309.f_8;
			}
			else if (Global_1590293 != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1590293))
			{
				iVar12 = Global_1590293;
			}
			else if (func_256(PLAYER::PLAYER_ID(), 0))
			{
				if (func_149() != func_16() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_149()))
				{
					iVar12 = func_149();
				}
			}
			if (iVar12 != func_16())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_160(iVar12, 0);
					MISC::SET_BIT(&(Local_213.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_213.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_213.f_5), 27);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_1687845);
			func_460(300000);
			func_459(1);
			MISC::SET_BIT(&(Local_213.f_5), 28);
		}
		func_359(0);
		func_358(0);
		MISC::CLEAR_BIT(&(vLocal_115[PLAYER::PLAYER_ID() /*3*/]), 0);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_135));
		if (func_17() || func_142())
		{
			if (func_142())
			{
				Var14.f_7 = Global_786547;
				Var14.f_1 = Global_786547.f_1;
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					Var14 = Global_4456448.f_154360;
				}
				else
				{
					Var14 = func_457(PLAYER::PLAYER_ID());
				}
			}
			else
			{
				Var14.f_6 = 1;
			}
			Var14.f_4 = Local_213.f_26;
			Var14.f_5 = Local_213.f_28;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_213.f_25;
			unk_0xDFBD93BF2943E29B(&Var14);
		}
		else
		{
			STATS::_PLAYSTATS_DRONE_USAGE(iVar13, Local_213.f_25, Local_213.f_26);
		}
	}
	func_456();
	func_360(0);
	func_243(0);
	func_167(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_213.f_132));
	if (func_162(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_162(1));
	}
	if (func_162(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_162(0));
	}
	func_353(0);
	func_302(1, -1);
	Local_213.f_25 = 0;
	Local_213.f_26 = 0;
	Local_213.f_28 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_213.f_27);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_136[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_213.f_136[PLAYER::PLAYER_ID()], 0);
	}
	if (!bParam0)
	{
		if (!func_147(PLAYER::PLAYER_ID()))
		{
			func_455(0f, 0f, 0f, 0f);
		}
		Global_1687880.f_2 = 0;
		func_450();
	}
	else
	{
		func_405(0, 1);
	}
}

void func_455(vector3 vParam0, float fParam3)//Position - 0x1040C
{
	if (!func_380(Global_1687880.f_10, vParam0, 0))
	{
		Global_1687880.f_10 = { vParam0 };
		Global_1687880.f_7 = fParam3;
	}
}

void func_456()//Position - 0x1043D
{
	int iVar0;
	
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_40))
	{
		AUDIO::STOP_SOUND(Local_213.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_40);
		Local_213.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_29))
	{
		AUDIO::STOP_SOUND(Local_213.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_29);
		Local_213.f_29 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_30))
	{
		AUDIO::STOP_SOUND(Local_213.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
		Local_213.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_31))
	{
		AUDIO::STOP_SOUND(Local_213.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_31);
		Local_213.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
	{
		AUDIO::STOP_SOUND(Local_213.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
		Local_213.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_33))
	{
		AUDIO::STOP_SOUND(Local_213.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_33);
		Local_213.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
	{
		AUDIO::STOP_SOUND(Local_213.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_39);
		Local_213.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_38))
	{
		AUDIO::STOP_SOUND(Local_213.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_38);
		Local_213.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_37))
	{
		AUDIO::STOP_SOUND(Local_213.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_37);
		Local_213.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
	{
		AUDIO::STOP_SOUND(Local_213.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
		Local_213.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_35))
	{
		AUDIO::STOP_SOUND(Local_213.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_35);
		Local_213.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
	{
		AUDIO::STOP_SOUND(Local_213.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
		Local_213.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_41))
	{
		AUDIO::STOP_SOUND(Local_213.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_41);
		Local_213.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_42))
	{
		AUDIO::STOP_SOUND(Local_213.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_42);
		Local_213.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_80))
	{
		AUDIO::STOP_SOUND(Local_213.f_80);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_80);
		Local_213.f_80 = -1;
	}
	if (func_434())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_213.f_45[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_213.f_45[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_213.f_45[iVar0]);
				Local_213.f_45[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_138();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_457(int iParam0)//Position - 0x106CB
{
	if (func_140(iParam0) == 243)
	{
		return func_458(iParam0);
	}
	return -1;
}

int func_458(int iParam0)//Position - 0x106E8
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

void func_459(bool bParam0)//Position - 0x1070B
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 20))
		{
			MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 20);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 20))
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 20);
	}
}

void func_460(int iParam0)//Position - 0x1077E
{
	if (Global_1687880.f_5 != iParam0)
	{
		Global_1687880.f_5 = iParam0;
	}
}

bool func_461(int iParam0)//Position - 0x10799
{
	return Local_213.f_171 == iParam0;
}

void func_462()//Position - 0x107A8
{
	if (func_155())
	{
		MISC::CLEAR_BIT(&Global_1687880, 7);
	}
}

void func_463(bool bParam0)//Position - 0x107C0
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!MISC::IS_BIT_SET(Global_1687880, 16))
			{
				MISC::SET_BIT(&Global_1687880, 16);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880, 16))
	{
		MISC::CLEAR_BIT(&Global_1687880, 16);
	}
}

void func_464(bool bParam0)//Position - 0x10809
{
	if (bParam0)
	{
		if (!func_435())
		{
			MISC::SET_BIT(&Global_1687880, 6);
		}
	}
	else if (func_435())
	{
		MISC::CLEAR_BIT(&Global_1687880, 6);
	}
}

void func_465(bool bParam0)//Position - 0x1083A
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880, 3))
		{
			MISC::SET_BIT(&Global_1687880, 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880, 3))
	{
		MISC::CLEAR_BIT(&Global_1687880, 3);
	}
}

void func_466(bool bParam0)//Position - 0x10875
{
	if (bParam0)
	{
		if (!func_363())
		{
			MISC::SET_BIT(&Global_1687880, 10);
		}
	}
	else if (func_363())
	{
		MISC::CLEAR_BIT(&Global_1687880, 10);
	}
}

void func_467(bool bParam0)//Position - 0x108A8
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_435())
			{
				MISC::SET_BIT(&Global_1687880, 0);
			}
		}
	}
	else if (func_435())
	{
		MISC::CLEAR_BIT(&Global_1687880, 0);
	}
}

void func_468(float fParam0)//Position - 0x108EC
{
	if (Global_1687880.f_9 != fParam0)
	{
		Global_1687880.f_9 = fParam0;
	}
}

int func_469()//Position - 0x10908
{
	if (!func_282())
	{
		return 0;
	}
	if (func_48(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	return 1;
}

void func_470(bool bParam0)//Position - 0x10943
{
	if (bParam0)
	{
		if (!func_18())
		{
			MISC::SET_BIT(&Global_1687880, 24);
		}
	}
	else if (func_18())
	{
		MISC::CLEAR_BIT(&Global_1687880, 24);
	}
}

void func_471()//Position - 0x10976
{
	if (CAM::DOES_CAM_EXIST(Local_213.f_131))
	{
		CAM::DESTROY_CAM(Local_213.f_131, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (!func_28() || MISC::IS_BIT_SET(Local_213.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_472(var uParam0, int iParam1)//Position - 0x109B9
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 1450126354;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_416, 1))
		{
			MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_173(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_473(struct<12> Param0)//Position - 0x10AE0
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0);
	func_481(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_212, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_115, 97);
	if (!func_480())
	{
		func_448(0);
	}
	if (Param0.f_11)
	{
		MISC::SET_BIT(&(Local_213.f_6), 3);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_434())
		{
			Local_213.f_97 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_318()) && !ENTITY::IS_ENTITY_DEAD(func_318(), 0))
					{
						Local_213.f_106 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_318(), 1), ENTITY::GET_ENTITY_HEADING(func_318()), 0f, 1.6f, 2.9f) };
						Local_213.f_100 = { Local_213.f_106 };
					}
					func_420(1);
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_479(1);
					Local_213.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_478(1);
					Local_213.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					break;
				
				case 4:
					func_413(1);
					Local_213.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					break;
				
				case 5:
					func_477(1);
					Local_213.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					break;
				
				case 6:
					func_476(1);
					Local_213.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					break;
				
				default:
					func_475(1);
					Local_213.f_106 = { Param0.f_5 };
					break;
			}
			Local_213.f_103 = { Param0.f_8 };
			if (func_237(func_370()))
			{
				func_379(Local_213.f_106, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_448(0);
	}
	if (!func_434())
	{
		func_405(1, 1);
	}
	else
	{
		func_474();
	}
}

void func_474()//Position - 0x10CBF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_213.f_45[iVar0] = -1;
		iVar0++;
	}
	func_352(5);
}

void func_475(bool bParam0)//Position - 0x10CE8
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 0))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 0);
	}
}

void func_476(bool bParam0)//Position - 0x10D32
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 6))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 6);
	}
}

void func_477(bool bParam0)//Position - 0x10D7C
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 5))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 5);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 5);
	}
}

void func_478(bool bParam0)//Position - 0x10DC6
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 3))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 3);
	}
}

void func_479(bool bParam0)//Position - 0x10E10
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1687880.f_2, 2))
		{
			Global_1687880.f_2 = 0;
			MISC::SET_BIT(&(Global_1687880.f_2), 2);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1687880.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1687880.f_2), 2);
	}
}

int func_480()//Position - 0x10E5A
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
		if (func_443())
		{
			return 0;
		}
		if (func_441(157))
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

int func_481(int iParam0, int iParam1, bool bParam2)//Position - 0x10EB3
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_450();
			}
			else
			{
				return 0;
			}
		}
		if (!func_482())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_443())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_441(157))
				{
					if (!bParam2)
					{
						func_450();
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
					func_450();
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
				func_450();
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
			func_450();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_482()//Position - 0x10FC8
{
	return Global_1312850;
}

