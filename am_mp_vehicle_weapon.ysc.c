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
	var uLocal_115 = 32;
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
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<150> Local_149 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_205(ScriptParam_0);
	}
	else
	{
		func_196(0);
	}
	while (true)
	{
		func_195();
		if (func_184())
		{
			func_196(0);
		}
		if (func_181())
		{
			func_196(0);
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
	func_178();
	if (func_177(0))
	{
		func_165();
	}
	else if (func_177(1))
	{
		if (func_164())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_177(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_177(3))
	{
		func_196(1);
	}
}

void func_3()//Position - 0x15F
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)//Position - 0x182
{
	Global_1315712 = iParam0;
}

void func_5(int iParam0)//Position - 0x190
{
	Global_1375006.f_1100 = iParam0;
}

void func_6()//Position - 0x1A1
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_149.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_149.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		if (!MISC::IS_BIT_SET(Local_149.f_5, 6))
		{
			MISC::SET_BIT(&(Local_149.f_5), 6);
			MISC::CLEAR_BIT(&(Local_149.f_5), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 6))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 6);
		MISC::CLEAR_BIT(&(Local_149.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x271
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(PLAYER::PLAYER_ID(), 0))
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
					func_9(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_9(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_8(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_9(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_8(&(Global_4268271.f_16));
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

void func_8(char* sParam0)//Position - 0x76D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_9(char* sParam0)//Position - 0x77F
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x78D
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)//Position - 0x7D8
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()//Position - 0x819
{
	return Global_1312745;
}

int func_13()//Position - 0x825
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
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

int func_14()//Position - 0x893
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)//Position - 0x8AD
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_17(8, -1) && func_16() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_76837) || Global_22350.f_8384) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_16()//Position - 0x94A
{
	return Global_1312808;
}

bool func_17(int iParam0, int iParam1)//Position - 0x956
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

int func_18(var uParam0, bool bParam1, int iParam2)//Position - 0x991
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

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0xA2E
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

void func_20(int iParam0, char* sParam1, int iParam2)//Position - 0xAE3
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, true);
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

void func_21(int iParam0)//Position - 0xB93
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
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)//Position - 0xC3A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_18(&iVar0, 1, iParam1))
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
	bVar2 = func_23(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)//Position - 0xD2B
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

void func_24()//Position - 0xDCD
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	
	if (func_164())
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_149.f_62))
		{
			Local_149.f_62 = unk_0x67D02A194A2FC2BD(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_149.f_8 > -1 || MISC::IS_BIT_SET(Local_149.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (CAM::DOES_CAM_EXIST(Local_149.f_61))
		{
			vVar0 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
			func_32(SYSTEM::ROUND(-vVar0.z));
		}
		func_31(Local_149.f_33);
	}
	else if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		vVar3 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
		fVar6 = vVar3.z;
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				vVar12 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
				fVar8 = ENTITY::GET_ENTITY_HEADING(func_30());
			}
		}
		while (fVar6 < 0f)
		{
			fVar6 = (fVar6 + 360f);
		}
		while (fVar6 > 360f)
		{
			fVar6 = (fVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = fVar6;
		func_25(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		fVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (fVar7 == 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 == -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 < 0f && fVar7 >= -0.5f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 < 0f && fVar7 > -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 > 1.5f && fVar7 < 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 > 2f || fVar7 < -1f)
		{
			fVar7 = 0.5f;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_ALT_FOV_HEADING");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(vVar12.z);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_CAM_LOGO");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_149.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)//Position - 0x10A2
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)//Position - 0x10C9
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
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1157
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

int func_28(int iParam0, bool bParam1, bool bParam2)//Position - 0x151F
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

int func_29()//Position - 0x1569
{
	return -1;
}

int func_30()//Position - 0x1572
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1366586))
		{
			return Global_1366586;
		}
		if (Global_1590293 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694200[Global_1590293]))
			{
				return Global_1694200[Global_1590293];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	return -1;
}

void func_31(int iParam0)//Position - 0x15D7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_MISSILE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_32(int iParam0)//Position - 0x15F6
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_33()//Position - 0x1615
{
	if (Local_149.f_59 <= 60f && Local_149.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_149.f_59 <= 55f && Local_149.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_149.f_59 <= 50f && Local_149.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_149.f_59 <= 45f && Local_149.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_149.f_59 <= 40f && Local_149.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)//Position - 0x16CE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_35(int iParam0)//Position - 0x16ED
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_36(bool bParam0)//Position - 0x170C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_37(char* sParam0, bool bParam1)//Position - 0x172B
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_149.f_62, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

char* func_38()//Position - 0x1748
{
	if (func_164())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)//Position - 0x176B
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_40(int iParam0)//Position - 0x179E
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_41())
	{
		Global_19486.f_1 = 3;
	}
}

int func_41()//Position - 0x1828
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)//Position - 0x184F
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()//Position - 0x18C3
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_44(int iParam0)//Position - 0x18D4
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

bool func_45()//Position - 0x192E
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

void func_46()//Position - 0x1940
{
	MISC::SET_BIT(&Global_7357, 4);
}

void func_47()//Position - 0x1950
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar13;
	
	if (!func_164())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_48(Local_149.f_84[iVar1])) && func_48(func_30()))
		{
			vVar10 = { CAM::GET_CAM_COORD(Local_149.f_61) };
			vVar13 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_84[iVar1], 1) };
			switch (Local_149.f_10[iVar1])
			{
				case 0:
					Local_149.f_98[iVar1] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar10, vVar13, 511, 0, 7);
					if (Local_149.f_98[iVar1] != 0)
					{
						Local_149.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_98[iVar1], &iVar0, &vVar5, &uVar2, &iVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_149.f_17[iVar1] = 1;
							vVar5 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
							}
						}
						else
						{
							Local_149.f_17[iVar1] = 2;
							if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
							{
								MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								if (Local_149.f_84[iVar1] == iVar8)
								{
									if (!MISC::IS_BIT_SET(Local_149.f_7, iVar1))
									{
										MISC::SET_BIT(&(Local_149.f_7), iVar1);
									}
								}
							}
							Local_149.f_98[iVar1] = 0;
							Local_149.f_10[iVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_149.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (MISC::IS_BIT_SET(Local_149.f_7, iVar1))
		{
			MISC::CLEAR_BIT(&(Local_149.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_48(int iParam0)//Position - 0x1AED
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

void func_49()//Position - 0x1B0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	vector3 vVar32;
	vector3 vVar35;
	
	if (!func_164())
	{
		return;
	}
	iVar0 = 208;
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		iVar0 = 237;
	}
	if ((PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)) || MISC::IS_BIT_SET(Local_149.f_5, 5))
	{
		iVar1 = 250;
		iVar2 = func_59();
		if (Local_149.f_8 > -1)
		{
			if (!MISC::IS_BIT_SET(Local_149.f_5, 3))
			{
				if (!func_58(&(Local_149.f_115)))
				{
					func_57(&(Local_149.f_115), 0, 0);
					Local_149.f_31 = 0;
					MISC::SET_BIT(&(Local_149.f_5), 5);
				}
				else if (func_56(&(Local_149.f_115), 300, 0) || Local_149.f_31 == 0)
				{
					if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
					{
						Local_149.f_31 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[Local_149.f_31]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[Local_149.f_31], 0))
					{
						iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
						if (iVar3 != -1)
						{
							vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar3) + func_54(Local_149.f_31) };
							vVar7 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							vVar10 = { (-SYSTEM::SIN(vVar7.z) * SYSTEM::COS(vVar7.x)), (SYSTEM::COS(vVar7.z) * SYSTEM::COS(vVar7.x)), SYSTEM::SIN(vVar7.x) };
							vVar13 = { 1f, 1f, 1f };
							vVar16 = { vVar4 + vVar10 * vVar13 };
							MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar4, vVar16, iVar1, 1, func_53(0), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, iVar2, 0, 0, Local_149.f_84[Local_149.f_31], 1, 0, 1);
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", vVar4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_149.f_32++;
							func_52(&(Local_149.f_115), 0, 0);
						}
					}
					if (Local_149.f_32 == Local_149.f_8)
					{
						Local_149.f_31 = 0;
						Local_149.f_33 = 0;
						Local_149.f_32 = -1;
						MISC::SET_BIT(&(Local_149.f_5), 3);
						MISC::CLEAR_BIT(&(Local_149.f_5), 5);
						func_57(&(Local_149.f_119), 0, 0);
						func_51(&(Local_149.f_115));
					}
					Local_149.f_31++;
				}
			}
		}
		else if (!MISC::IS_BIT_SET(Local_149.f_5, 1))
		{
			if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
			{
				Local_149.f_31 = 0;
			}
			iVar19 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
			if (iVar19 != -1)
			{
				vVar20 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(func_30(), iVar19) + func_54(Local_149.f_31) };
				vVar23 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				vVar26 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				vVar29 = { (-SYSTEM::SIN(vVar26.z) * SYSTEM::COS(vVar26.x)), (SYSTEM::COS(vVar26.z) * SYSTEM::COS(vVar26.x)), SYSTEM::SIN(vVar26.x) };
				vVar32 = { 10f, 10f, 10f };
				if (!func_50(Local_149.f_56))
				{
					vVar32.x = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar23, false);
					vVar32.y = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar23, false);
					vVar32.z = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_149.f_56, vVar23, false);
				}
				vVar35 = { vVar23 + vVar29 * vVar32 };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(vVar20, vVar35, iVar1, 1, func_53(1), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, iVar2, 0, 0, 0, 1, 0, 1);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire", vVar20, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				MISC::SET_BIT(&(Local_149.f_5), 1);
				Local_149.f_33 = 0;
				func_57(&(Local_149.f_134), 0, 0);
				Local_149.f_31++;
			}
		}
	}
}

int func_50(vector3 vParam0)//Position - 0x1E72
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)//Position - 0x1E9C
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)//Position - 0x1EA9
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

int func_53(int iParam0)//Position - 0x1EE6
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (iParam0 == 0)
		{
			return 2011877270;
		}
		else
		{
			return 1987049393;
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)//Position - 0x1F14
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_55()//Position - 0x1FD2
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_56(var uParam0, int iParam1, bool bParam2)//Position - 0x1FF0
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
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

void func_57(var uParam0, bool bParam1, bool bParam2)//Position - 0x204E
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

bool func_58(var uParam0)//Position - 0x2093
{
	return uParam0->f_1;
}

int func_59()//Position - 0x209F
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return Global_1366586;
	}
	return -1;
}

void func_60()//Position - 0x20BB
{
	int iVar0;
	int iVar1;
	
	if (!func_164())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_149.f_5, 3))
	{
		if (func_58(&(Local_149.f_119)))
		{
			if (!func_56(&(Local_149.f_119), 5000, 0))
			{
				iVar0 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_149.f_119)));
				Local_149.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_149.f_119));
				MISC::CLEAR_BIT(&(Local_149.f_5), 3);
				Local_149.f_32 = -1;
				Local_149.f_33 = 100;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_149.f_5, 1))
	{
		if (func_58(&(Local_149.f_134)))
		{
			if (!func_56(&(Local_149.f_134), 1500, 0))
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_149.f_134)));
				Local_149.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_149.f_134));
				MISC::CLEAR_BIT(&(Local_149.f_5), 1);
				Local_149.f_33 = 100;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_149.f_5, 1) && !MISC::IS_BIT_SET(Local_149.f_5, 5))
	{
		switch (Local_149.f_111)
		{
			case 0:
				func_85();
				break;
			
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()//Position - 0x21EC
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	if ((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_48(func_30()))
	{
		vVar6 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
		vVar9 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		vVar12 = { (-SYSTEM::SIN(vVar9.z) * SYSTEM::COS(vVar9.x)), (SYSTEM::COS(vVar9.z) * SYSTEM::COS(vVar9.x)), SYSTEM::SIN(vVar9.x) };
		vVar15 = { 300f, 300f, 300f };
		vVar18 = { vVar6 + vVar12 * vVar15 };
		vVar21 = { vVar6 + vVar12 * Vector(1f, 1f, 1f) };
		switch (Local_149.f_27)
		{
			case 0:
				Local_149.f_106 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar21, vVar18, 511, func_30(), 7);
				if (Local_149.f_106 != 0)
				{
					Local_149.f_27 = 1;
				}
				break;
			
			case 1:
				iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_106, &iVar0, &(Local_149.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_149.f_26 = 1;
						Local_149.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_149.f_26 = 2;
						Local_149.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_149.f_27 = 0;
				}
				break;
			}
	}
}

void func_62()//Position - 0x231E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_63(Local_149.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_63(int iParam0, bool bParam1, int iParam2)//Position - 0x2347
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		if (Local_149.f_8 > -1)
		{
			if (func_48(iParam0))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (ENTITY::IS_ENTITY_A_PED(iParam0))
					{
						iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
						if (PED::IS_PED_A_PLAYER(iVar7))
						{
							iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_67(iVar8, -1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(PED::GET_VEHICLE_PED_IS_IN(iVar7, 0), 2);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
					{
						iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar9))
						{
							if (PED::IS_PED_A_PLAYER(iVar9))
							{
								iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									VEHICLE::_0x407DC5E97DB1A4D3(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 2);
								}
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2))
					{
						if ((AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iParam2]) && Local_149.f_34[iParam2] == -1) && !func_66())
						{
							Local_149.f_34[iParam2] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_57(&(Local_149.f_136[iParam2 /*2*/]), 0, 0);
							MISC::SET_BIT(&(Local_149.f_48), iParam2);
						}
					}
					else if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2 + 6))
					{
						if (func_58(&(Local_149.f_136[iParam2 /*2*/])))
						{
							if (func_56(&(Local_149.f_136[iParam2 /*2*/]), 1000, 0))
							{
								func_65(iParam2, 0);
								if (AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iParam2]) && Local_149.f_41[iParam2] == -1)
								{
									Local_149.f_41[iParam2] = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_57(&(Local_149.f_149[iParam2 /*2*/]), 0, 0);
									MISC::SET_BIT(&(Local_149.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_149.f_149[iParam2 /*2*/])))
					{
						if (func_56(&(Local_149.f_149[iParam2 /*2*/]), 700, 0))
						{
							func_64(iParam2, 0);
						}
					}
					GRAPHICS::SET_DRAW_ORIGIN(ENTITY::GET_ENTITY_COORDS(iParam0, 1), 0);
					if (!MISC::IS_BIT_SET(Local_149.f_48, iParam2 + 6))
					{
						HUD::GET_HUD_COLOUR(15, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					else
					{
						HUD::GET_HUD_COLOUR(6, &iVar3, &iVar4, &iVar5, &iVar6);
					}
					if (!bParam1)
					{
						GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, iVar3, iVar4, iVar5, iVar6, 1);
					}
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, iVar3, iVar4, iVar5, iVar6, 1);
					GRAPHICS::CLEAR_DRAW_ORIGIN();
				}
				else
				{
					func_65(iParam2, 1);
					func_64(iParam2, 1);
				}
			}
			else
			{
				func_65(iParam2, 1);
				func_64(iParam2, 1);
			}
		}
		else
		{
			func_65(iParam2, 1);
			func_64(iParam2, 1);
		}
	}
}

void func_64(int iParam0, bool bParam1)//Position - 0x26B7
{
	if (MISC::IS_BIT_SET(Local_149.f_48, iParam0 + 6))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_149.f_41[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_149.f_41[iParam0]);
		}
		Local_149.f_41[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_149.f_48), iParam0 + 6);
		}
		func_51(&(Local_149.f_149[iParam0 /*2*/]));
	}
}

void func_65(int iParam0, bool bParam1)//Position - 0x271C
{
	if (MISC::IS_BIT_SET(Local_149.f_48, iParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iParam0]))
		{
			AUDIO::STOP_SOUND(Local_149.f_34[iParam0]);
			AUDIO::RELEASE_SOUND_ID(Local_149.f_34[iParam0]);
		}
		Local_149.f_34[iParam0] = -1;
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(Local_149.f_48), iParam0);
		}
		func_51(&(Local_149.f_136[iParam0 /*2*/]));
	}
}

int func_66()//Position - 0x277D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_34[iVar0]) || !AUDIO::HAS_SOUND_FINISHED(Local_149.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x27BF
{
	int iVar0;
	
	if (func_28(iParam0, 1, 1))
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

void func_68()//Position - 0x280C
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_149.f_7, iVar0))
				{
					if (func_58(&(Local_149.f_121[iVar0 /*2*/])))
					{
						if (func_56(&(Local_149.f_121[iVar0 /*2*/]), 1000, 0))
						{
							Local_149.f_84[iVar0] = -1;
							if (Local_149.f_8 > -1)
							{
								Local_149.f_17[iVar0] = 0;
								func_51(&(Local_149.f_121[iVar0 /*2*/]));
								Local_149.f_8 = (Local_149.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_149.f_121[iVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_149.f_121[iVar0 /*2*/]));
				}
				if ((!func_74(Local_149.f_84[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0])) || !func_69(Local_149.f_84[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
					{
					}
					if (!func_74(Local_149.f_84[iVar0]))
					{
					}
					Local_149.f_84[iVar0] = -1;
					if (Local_149.f_8 > -1)
					{
						Local_149.f_17[iVar0] = 0;
						func_51(&(Local_149.f_121[iVar0 /*2*/]));
						Local_149.f_8 = (Local_149.f_8 - 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_149.f_8 != iVar1)
	{
		Local_149.f_8 = iVar1;
	}
}

int func_69(int iParam0)//Position - 0x2971
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_72(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				if (!func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)//Position - 0x29F0
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x2A1B
{
	if (iParam0 != func_29())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_29();
}

int func_72(int iParam0)//Position - 0x2A3E
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("pranger")) || iParam0 == joaat("policet"))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)//Position - 0x2B28
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_70(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x2BE2
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_75()//Position - 0x2C4A
{
	if (Local_149.f_28 < 0 || Local_149.f_28 >= 20)
	{
		Local_149.f_28 = 0;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_63[Local_149.f_28]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_63[Local_149.f_28], 0))
	{
		func_83(Local_149.f_63[Local_149.f_28]);
		if (func_56(&(Local_149.f_117), 1000, 0))
		{
			if (Local_149.f_112 == 2)
			{
				if (MISC::IS_BIT_SET(Local_149.f_5, 0))
				{
					if (Local_149.f_8 < 5)
					{
						if (func_82(Local_149.f_63[Local_149.f_28]))
						{
							Local_149.f_63[Local_149.f_28] = -1;
							MISC::CLEAR_BIT(&(Local_149.f_5), 0);
							func_51(&(Local_149.f_117));
							Local_149.f_28++;
						}
					}
					else
					{
						if (func_79(Local_149.f_63[Local_149.f_28]))
						{
							func_76(Local_149.f_63[Local_149.f_28]);
						}
						Local_149.f_63[Local_149.f_28] = -1;
						MISC::CLEAR_BIT(&(Local_149.f_5), 0);
						Local_149.f_25 = 0;
						func_51(&(Local_149.f_117));
						Local_149.f_28++;
					}
				}
				else
				{
					Local_149.f_25 = 0;
					Local_149.f_63[Local_149.f_28] = -1;
					MISC::CLEAR_BIT(&(Local_149.f_5), 0);
					func_52(&(Local_149.f_117), 0, 0);
					Local_149.f_28++;
				}
			}
		}
	}
	else
	{
		Local_149.f_63[Local_149.f_28] = -1;
		Local_149.f_25 = 0;
		func_51(&(Local_149.f_117));
		Local_149.f_28++;
	}
	if (Local_149.f_28 == 20)
	{
		Local_149.f_111 = 0;
		Local_149.f_25 = 0;
		func_51(&(Local_149.f_117));
		Local_149.f_28 = 0;
	}
}

void func_76(int iParam0)//Position - 0x2DC8
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[func_77()]) && ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			Local_149.f_84[func_77()] = iParam0;
		}
	}
}

int func_77()//Position - 0x2E0C
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		vVar2 = { CAM::GET_CAM_COORD(Local_149.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar5]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[iVar5], 0))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_84[iVar5], 1) - vVar2 };
				fVar9 = func_78(vVar6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_149.f_9 = iVar0;
	return iVar0;
}

float func_78(vector3 vParam0)//Position - 0x2EAA
{
	return SYSTEM::SQRT((((vParam0.x * vParam0.x) + (vParam0.y * vParam0.y)) + (vParam0.z * vParam0.z)));
}

int func_79(int iParam0)//Position - 0x2ECF
{
	if (func_77() != -1)
	{
		if ((func_48(Local_149.f_84[func_77()]) && func_48(iParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_149.f_84[func_77()], 1) > func_80(func_81(), iParam0, 1) && func_80(Local_149.f_84[func_77()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_80(int iParam0, int iParam1, bool bParam2)//Position - 0x2F47
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, bParam2);
}

int func_81()//Position - 0x2FA5
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::NETWORK_PLAYER_ID_TO_INT() != -1)
		{
			return Global_2437549.f_1122[PLAYER::NETWORK_PLAYER_ID_TO_INT()];
		}
	}
	return -1;
}

int func_82(var uParam0)//Position - 0x2FD2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]))
		{
			Local_149.f_84[iVar0] = uParam0;
			Local_149.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_83(int iParam0)//Position - 0x3015
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	var uVar7;
	vector3 vVar10;
	int iVar13;
	
	if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61)) && func_48(iParam0)) && func_48(func_30()))
	{
		vVar0 = { CAM::GET_CAM_COORD(Local_149.f_61) };
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		switch (Local_149.f_25)
		{
			case 0:
				Local_149.f_105 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 7);
				if (Local_149.f_105 != 0)
				{
					Local_149.f_25 = 1;
				}
				break;
			
			case 1:
				Local_149.f_112 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_149.f_105, &iVar6, &vVar10, &uVar7, &iVar13);
				if (Local_149.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_149.f_24 = 1;
						vVar10 = { 0f, 0f, 0f };
						if (MISC::IS_BIT_SET(Local_149.f_5, 0))
						{
							MISC::CLEAR_BIT(&(Local_149.f_5), 0);
						}
					}
					else
					{
						Local_149.f_24 = 2;
						if (ENTITY::DOES_ENTITY_EXIST(iVar13))
						{
							if (ENTITY::IS_ENTITY_A_VEHICLE(iVar13) || (ENTITY::IS_ENTITY_A_PED(iVar13) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar13))))
							{
								if (iVar13 == func_84(iParam0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
									{
										if (!MISC::IS_BIT_SET(Local_149.f_5, 0))
										{
											MISC::SET_BIT(&(Local_149.f_5), 0);
										}
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_149.f_5, 0))
							{
								MISC::CLEAR_BIT(&(Local_149.f_5), 0);
							}
						}
						Local_149.f_105 = 0;
						Local_149.f_25 = 0;
					}
				}
				else if (Local_149.f_112 == 0)
				{
					Local_149.f_25 = 0;
				}
				break;
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 0))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 0);
	}
}

int func_84(int iParam0)//Position - 0x318F
{
	return iParam0;
}

void func_85()//Position - 0x3199
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (CAM::DOES_CAM_EXIST(Local_149.f_61) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar105 = VEHICLE::_GET_ALL_VEHICLES(&uVar2);
				if (iVar105 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar105)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uVar2[iVar0]))
						{
						}
						else if ((!ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_69(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[iVar0]) && !func_86(uVar2[iVar0]))
						{
							if (func_74(uVar2[iVar0]) && func_80(uVar2[iVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
					{
						iVar103 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
						iVar104 = PLAYER::GET_PLAYER_PED(iVar103);
						if ((iVar103 == PLAYER::PLAYER_ID() || !func_69(iVar104)) || ENTITY::IS_ENTITY_DEAD(iVar104, 0))
						{
						}
						else if (func_87(iVar104) && !func_86(iVar104))
						{
							if (func_80(iVar104, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = iVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_149.f_111 = 1;
			}
		}
	}
}

int func_86(int iParam0)//Position - 0x3363
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_149.f_84[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_149.f_84[iVar0], 0)) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_149.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x33C9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (iParam0 == Local_149.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88()//Position - 0x340C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_65(iVar0, 1);
		func_64(iVar0, 1);
		iVar0++;
	}
}

void func_89()//Position - 0x3434
{
	int iVar0;
	
	if ((func_48(func_30()) && CAM::DOES_CAM_EXIST(Local_149.f_61)) && CAM::IS_CAM_RENDERING(Local_149.f_61))
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380, 0))
			{
				MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380), 0);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380, 0))
	{
		MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380), 0);
	}
}

void func_90()//Position - 0x34CE
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	int iVar18;
	vector3 vVar19;
	float fVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	float fVar26;
	float fVar27;
	vector3 vVar28;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	vector3 vVar35;
	int iVar38;
	int iVar39;
	
	if (((CAM::DOES_CAM_EXIST(Local_149.f_61) && (CAM::IS_CAM_RENDERING(Local_149.f_61) || !MISC::IS_BIT_SET(Local_149.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&fVar12, &fVar11);
		func_25(&fVar13);
		PAD::_0x7F4724035FDCA1DD(2);
		PAD::SET_INPUT_EXCLUSIVE(0, 39);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			fVar14 = 15f;
			fVar5 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14);
			fVar6 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14);
		}
		else
		{
			iVar4 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291) * -fVar14));
			iVar3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290) * fVar14));
		}
		iVar2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(0, 39) * fVar14));
		if (!PAD::_IS_INPUT_DISABLED(0))
		{
			iVar18 = SYSTEM::ROUND((IntToFloat(iVar18) * fVar14));
			if (MISC::ABSI(iVar2) < iVar18)
			{
				iVar2 = 0;
			}
			vVar19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (SYSTEM::VMAG(vVar19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((vVar15.x / fVar7) * 0.5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			Local_149[2] = ((fVar5 * Local_149.f_59) * fVar1);
			Local_149[3] = (((fVar6 * Local_149.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_149[2] = (((SYSTEM::TO_FLOAT(iVar4) * Local_149.f_59) * fVar1) * SYSTEM::TIMESTEP());
			Local_149[3] = ((((SYSTEM::TO_FLOAT(iVar3) * Local_149.f_59) * fVar1) * fVar22) * SYSTEM::TIMESTEP());
		}
		Local_149[3] = func_94(Local_149[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			vVar15 = { CAM::GET_CAM_ROT(Local_149.f_61, 2) };
		}
		if (!func_93(CAM::GET_CAM_COORD(Local_149.f_61), 0f, 0f, 0f, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_30(), 0))
			{
				fVar23 = ENTITY::GET_ENTITY_HEADING(func_30());
				fVar24 = (fVar23 - vVar15.z);
				while (MISC::ABSF(fVar24) >= 180f && iVar25 < 30)
				{
					if (fVar24 < 0f)
					{
						fVar24 = (fVar24 + 360f);
					}
					else
					{
						fVar24 = (fVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (fVar24 >= fVar11)
				{
					if (fVar24 > 0f)
					{
						vVar15.z = (fVar23 - fVar11);
					}
					else
					{
						vVar15.z = (fVar23 + fVar11);
					}
				}
				if (fVar24 < fVar12)
				{
					if (fVar24 > 0f)
					{
						vVar15.z = (fVar23 - MISC::ABSF(fVar12));
					}
					else
					{
						vVar15.z = (fVar23 + MISC::ABSF(fVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_93(Local_149.f_50, 0f, 0f, 0f, 0))
			{
				Local_149.f_50 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			}
			else
			{
				vVar28 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
				fVar31 = ((MISC::ABSF(Local_149.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((vVar28.x - Local_149.f_50) * fVar31));
				fVar27 = (fVar27 + (vVar28.z - Local_149.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (vVar28.x < -80f || vVar28.x > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_30()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_149.f_50 = { vVar28 };
			}
			if ((((Local_149[2] != 0f || Local_149[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !MISC::IS_BIT_SET(Local_149.f_5, 2))
			{
				fVar32 = (((Local_149.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_149[2] = (Local_149[2] * fVar32);
				Local_149[3] = (Local_149[3] * fVar32);
				Local_149.f_53 = (Local_149.f_53 + Local_149[2]);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - Local_149[3]);
				Local_149.f_53 = (Local_149.f_53 - fVar26);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - fVar27);
				if (Local_149.f_53 < fVar8)
				{
					Local_149.f_53 = fVar8;
				}
				if (Local_149.f_53 > fVar7)
				{
					Local_149.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_149.f_53.f_2 > 180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 - 360f);
					}
					while (Local_149.f_53.f_2 < -180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_149.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_149.f_53.f_2 > (fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_149.f_5, 2))
			{
				if (func_164())
				{
					Local_149.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_149.f_53 = { fVar7, 0f, 0f };
				}
				MISC::SET_BIT(&(Local_149.f_5), 2);
			}
			if (!func_92(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_381[0 /*3*/], Local_149.f_53, 0f, Local_149.f_53.f_2, 1056964608, 0))
			{
				Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_381[0 /*3*/] = { Local_149.f_53, 0f, Local_149.f_53.f_2 };
			}
			if (func_164())
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_149.f_61, func_30(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_30(), "weapon_1d"), 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_91(), 1);
			}
			else
			{
				CAM::_ATTACH_CAM_TO_VEHICLE_BONE(Local_149.f_61, func_30(), 0, 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_91(), 1);
			}
		}
		Local_149.f_59 = (Local_149.f_59 + (((SYSTEM::TO_FLOAT(iVar2) / 5f) * SYSTEM::TIMESTEP()) * fVar0));
		if (Local_149.f_59 > fVar9)
		{
			Local_149.f_59 = fVar9;
		}
		if (Local_149.f_59 < fVar10)
		{
			Local_149.f_59 = fVar10;
		}
		CAM::_0x487A82C650EB7799(1f);
		CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
		fVar33 = ((Local_149.f_59 - 5f) / 42f);
		GRAPHICS::_0xE2892E7E55D7073A(fVar33);
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((MISC::ABSI(iVar2) > 0 && Local_149.f_59 <= fVar9) && Local_149.f_59 >= fVar10)
			{
				iVar34 = Local_149.f_29;
				if (iVar34 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar34))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar34, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Ctrl", SYSTEM::TO_FLOAT(iVar2));
					if (iVar2 < 0)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", -1f);
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_149.f_29 != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(Local_149.f_29))
				{
					AUDIO::STOP_SOUND(Local_149.f_29);
				}
			}
			vVar35 = { -Vector(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 290), 0f, PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0, 291)) };
			if (SYSTEM::VMAG(vVar35) > 0f)
			{
				iVar38 = Local_149.f_30;
				if (iVar38 != -1)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iVar38))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar38, "COP_HELI_CAM_TURN", 0, 1);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "Ctrl", SYSTEM::VMAG(vVar35));
				}
			}
			else
			{
				iVar39 = Local_149.f_30;
				if (iVar39 != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iVar39))
					{
						AUDIO::STOP_SOUND(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_91()//Position - 0x3BE9
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_92(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)//Position - 0x3C3D
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_93(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x3CB8
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_94(float fParam0, float fParam1, float fParam2)//Position - 0x3CFF
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)//Position - 0x3D33
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)//Position - 0x3D62
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)//Position - 0x3D99
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)//Position - 0x3DC8
{
	*fParam0 = 0.0015f;
}

int func_99()//Position - 0x3DD8
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (func_102(1))
	{
		return 1;
	}
	if (func_100(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)//Position - 0x3E11
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
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

bool func_101()//Position - 0x3E53
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_102(bool bParam0)//Position - 0x3E64
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_103()//Position - 0x3E8D
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!func_111())
	{
		func_110(1);
	}
	HUD::SET_BIGMAP_ACTIVE(0, 1);
	if (func_164())
	{
		func_109();
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_149.f_107))
	{
		NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(Local_149.f_107);
	}
	vVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || func_108()) || PAD::IS_CONTROL_JUST_PRESSED(2, 199)) || PAD::IS_CONTROL_PRESSED(2, 199)) || PAD::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
		HUD::_0xA17784FCA9548D15(vVar0.x, vVar0.y, 0);
		if (HUD::IS_PAUSE_MENU_ACTIVE() || func_108())
		{
			if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
			{
				HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (func_164())
	{
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_ALPHA(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0);
		}
	}
	HUD::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
	if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		CAM::_0x661B5C8654ADD825(Local_149.f_61, 1);
	}
	HUD::SET_RADAR_ZOOM(0);
	if (func_164())
	{
		vVar3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(0) };
		vVar3 = { func_107(vVar3) };
		if (!HUD::DOES_BLIP_EXIST(Local_149.f_109))
		{
			Local_149.f_108 = func_105(vVar0, 0);
			HUD::SET_BLIP_SPRITE(Local_149.f_108, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_149.f_108, 0);
			HUD::SET_BLIP_DISPLAY(Local_149.f_108, 4);
			HUD::SET_BLIP_COLOUR(Local_149.f_108, func_104(2));
			HUD::SET_BLIP_SHOW_CONE(Local_149.f_108, 1);
			HUD::SET_BLIP_SCALE(Local_149.f_108, 0.54f);
			HUD::SET_BLIP_PRIORITY(Local_149.f_108, 13 + 1);
			Local_149.f_109 = func_105(vVar0, 0);
			HUD::SET_BLIP_SPRITE(Local_149.f_109, 425);
			HUD::SHOW_HEIGHT_ON_BLIP(Local_149.f_109, 0);
			HUD::SET_BLIP_DISPLAY(Local_149.f_109, 4);
			HUD::SET_BLIP_COLOUR(Local_149.f_109, func_104(18));
			HUD::SET_BLIP_SHOW_CONE(Local_149.f_109, 1);
			HUD::SET_BLIP_SCALE(Local_149.f_109, 0.44f);
			HUD::SET_BLIP_PRIORITY(Local_149.f_109, 13 + 1);
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_149.f_109, 1);
			HUD::SET_BLIP_ROTATION(Local_149.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar3.x, vVar3.y)));
			HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_149.f_108, 1);
			HUD::SET_BLIP_ROTATION(Local_149.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar3.x, vVar3.y)));
		}
		else
		{
			HUD::SET_BLIP_COORDS(Local_149.f_109, vVar0);
			HUD::SET_BLIP_ROTATION(Local_149.f_109, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar3.x, vVar3.y)));
			HUD::SET_BLIP_DISPLAY(Local_149.f_109, 5);
			HUD::SET_BLIP_COORDS(Local_149.f_108, vVar0);
			HUD::SET_BLIP_ROTATION(Local_149.f_108, SYSTEM::ROUND(MISC::GET_HEADING_FROM_VECTOR_2D(vVar3.x, vVar3.y)));
			HUD::SET_BLIP_DISPLAY(Local_149.f_108, 5);
		}
	}
}

int func_104(int iParam0)//Position - 0x4100
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

var func_105(vector3 vParam0, int iParam3)//Position - 0x4368
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_106(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)//Position - 0x4394
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(vector3 vParam0)//Position - 0x43AB
{
	vector3 vVar0;
	
	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.y = SYSTEM::COS(vParam0.z);
	vVar0.z = SYSTEM::SIN(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

bool func_108()//Position - 0x43EE
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

void func_109()//Position - 0x43FC
{
	Global_1312666 = 1;
}

void func_110(int iParam0)//Position - 0x4409
{
	Global_2461278 = iParam0;
}

bool func_111()//Position - 0x4417
{
	return Global_2461278;
}

void func_112(int iParam0)//Position - 0x4423
{
	if (Local_149.f_110 != iParam0)
	{
		Local_149.f_110 = iParam0;
	}
}

int func_113()//Position - 0x443A
{
	vector3 vVar0;
	float fVar3;
	
	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_164())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 80) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					return 1;
				}
				if (func_48(func_30()))
				{
					if (CAM::DOES_CAM_EXIST(Local_149.f_61))
					{
						vVar0 = { CAM::GET_CAM_COORD(Local_149.f_61) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, 0, 0))
						{
							if (SYSTEM::VDIST(vVar0, vVar0.x, vVar0.y, fVar3) < 2f)
							{
								return 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_WATER(func_30()))
					{
						return 1;
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0))
					{
						VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 1f);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_124())
			{
				return 1;
			}
		}
	}
	if (func_122(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_48(func_114()))
		{
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_114()))
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

int func_114()//Position - 0x45E9
{
	if (Global_1590293 != func_29())
	{
		if (!func_115(Global_1590293))
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

int func_115(int iParam0)//Position - 0x4639
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_116()//Position - 0x4661
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1590293 != func_29())
		{
			if (func_115(Global_1590293) || func_121(Global_1590293))
			{
				return 1;
			}
			if (func_120(Global_1590293))
			{
				if (func_27(func_119(Global_1590293)) == 11)
				{
					if (func_27(func_118(Global_1590293)) == 11)
					{
						if (func_117(Global_1590293) == 5)
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

int func_117(int iParam0)//Position - 0x46DB
{
	return MISC::GET_BITS_IN_RANGE(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

int func_118(int iParam0)//Position - 0x46F8
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_15;
	}
	return -1;
}

int func_119(int iParam0)//Position - 0x4729
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_120(int iParam0)//Position - 0x475A
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_121(int iParam0)//Position - 0x478E
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 14);
	}
	return 0;
}

int func_122(int iParam0)//Position - 0x47B8
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_123(iParam0) && !func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x47F1
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_124()//Position - 0x4825
{
	int iVar0;
	int iVar1;
	
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_30()))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_30(), -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_125(iVar1))
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

int func_125(int iParam0)//Position - 0x4883
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

var func_126()//Position - 0x48A8
{
	return Global_22211.f_135;
}

int func_127(bool bParam0)//Position - 0x48B5
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_128(PLAYER::PLAYER_PED_ID()))
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

int func_128(int iParam0)//Position - 0x49A0
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

bool func_129()//Position - 0x49FD
{
	return MISC::IS_BIT_SET(Global_1687879, 1);
}

void func_130()//Position - 0x4A0E
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (func_137())
	{
		if (!CAM::DOES_CAM_EXIST(Local_149.f_61))
		{
			Local_149.f_61 = CAM::CREATE_CAMERA(26379945, 1);
			CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
			vVar0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
			CAM::SET_CAM_ROT(Local_149.f_61, 0f, 0f, vVar0.z, 2);
			CAM::ATTACH_CAM_TO_ENTITY(Local_149.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (MISC::IS_BIT_SET(Local_149.f_5, 2))
		{
			func_103();
			func_3();
			CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			if (Local_149.f_49 == -1)
			{
				Local_149.f_49 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_149.f_107 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_149.f_107, 1) };
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), Local_149.f_107, 0, 0, vVar3, 4, 0f, -1f, -1f, -1, -1, -1f, 0);
				VEHICLE::_0xE5810AC70602F2F5(Local_149.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(char[4] cParam0, int iParam1)//Position - 0x4B37
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_132(bool bParam0)//Position - 0x4B4E
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 25))
		{
			MISC::SET_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330, 25))
	{
		MISC::CLEAR_BIT(&(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_330), 25);
	}
}

void func_133(bool bParam0)//Position - 0x4BC1
{
	if (bParam0)
	{
		if (!func_129())
		{
			MISC::SET_BIT(&Global_1687879, 1);
		}
	}
	else
	{
		if (func_129())
		{
			MISC::CLEAR_BIT(&Global_1687879, 1);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)//Position - 0x4BF7
{
	if (bParam0)
	{
		if (!func_135())
		{
			MISC::SET_BIT(&Global_1687879, 2);
		}
	}
	else if (func_135())
	{
		MISC::CLEAR_BIT(&Global_1687879, 2);
	}
}

bool func_135()//Position - 0x4C28
{
	return MISC::IS_BIT_SET(Global_1687879, 2);
}

Vector3 func_136()//Position - 0x4C39
{
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		switch (ENTITY::GET_ENTITY_MODEL(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_137()//Position - 0x4C89
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_30()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_30()) && ENTITY::IS_ENTITY_DEAD(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_138()//Position - 0x4CBF
{
	vector3 vVar0;
	
	if (func_137())
	{
		if (func_150())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_139(PLAYER::PLAYER_ID(), 0, 32768, 0);
			}
			if (!func_58(&(Local_149.f_113)))
			{
				if (func_48(func_30()))
				{
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(func_30(), 1), 100f, 1))
					{
						func_57(&(Local_149.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_149.f_113), 2000, 0))
			{
				STREAMING::SET_FOCUS_ENTITY(func_30());
			}
		}
		if (func_58(&(Local_149.f_113)))
		{
			if (func_56(&(Local_149.f_113), 5000, 0))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (!CAM::DOES_CAM_EXIST(Local_149.f_61))
					{
						Local_149.f_61 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_FOV(Local_149.f_61, Local_149.f_59);
						vVar0 = { ENTITY::GET_ENTITY_ROTATION(func_30(), 2) };
						CAM::SET_CAM_ROT(Local_149.f_61, 0f, 0f, vVar0.z, 2);
						CAM::ATTACH_CAM_TO_ENTITY(Local_149.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (MISC::IS_BIT_SET(Local_149.f_5, 2))
					{
						func_103();
						func_3();
						STREAMING::NEW_LOAD_SCENE_STOP();
						CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
						if (Local_149.f_49 == -1)
						{
							Local_149.f_49 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4E2A
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
	if (func_149())
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
		if (!func_147())
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
				else if (bVar13 || (!func_10(PLAYER::PLAYER_ID(), 0) && !func_101()))
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
				func_144(0, 0, 0);
				if (bVar24)
				{
					STREAMING::CLEAR_FOCUS();
				}
				if (!func_143(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					func_142();
					func_141();
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
				if (!func_143(iVar26) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					if (func_140(Global_4456448.f_190930))
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

bool func_140(int iParam0)//Position - 0x5296
{
	return iParam0 == 17;
}

void func_141()//Position - 0x52A3
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_142()//Position - 0x52F0
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_143(int iParam0)//Position - 0x532E
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

void func_144(int iParam0, int iParam1, int iParam2)//Position - 0x535F
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
				func_146();
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
		if (func_10(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_145(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x5435
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_146()//Position - 0x5451
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

int func_147()//Position - 0x54AC
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()//Position - 0x54C1
{
	return Global_1312467.f_18;
}

int func_149()//Position - 0x54CF
{
	if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_150()//Position - 0x54FD
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 0;
}

int func_151()//Position - 0x5586
{
	int iVar0;
	
	if (func_163(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_162(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_161(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_160(Global_4456448.f_154360))
			{
				if (func_163(iVar0))
				{
					if (func_159(iVar0))
					{
						return 1;
					}
					else if (func_123(PLAYER::PLAYER_ID()) || func_158())
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
	if (func_157(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_156(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_155(iVar0))
			{
				return 1;
			}
			else if (func_123(PLAYER::PLAYER_ID()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_154(PLAYER::PLAYER_ID());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1590293 != func_29() && func_123(Global_1590293)) && func_27(func_119(Global_1590293)) == 11) && func_67(Global_1590293, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590293), 0), -1988428699))
			{
				return 1;
			}
			else if (func_115(iVar0))
			{
				return 1;
			}
			else if (func_123(PLAYER::PLAYER_ID()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_157(PLAYER::PLAYER_ID()) || func_153(PLAYER::PLAYER_ID()))
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
	if (func_152(3))
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

bool func_152(int iParam0)//Position - 0x5872
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_154360;
}

int func_153(int iParam0)//Position - 0x5890
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x58D7
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_155(int iParam0)//Position - 0x58FB
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_156(int iParam0)//Position - 0x5923
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_157(int iParam0)//Position - 0x5947
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_158()//Position - 0x59A7
{
	return MISC::IS_BIT_SET(Global_1676879, 6);
}

int func_159(int iParam0)//Position - 0x59B8
{
	if (iParam0 != func_29())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

bool func_160(int iParam0)//Position - 0x59DE
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_161(int iParam0)//Position - 0x59F3
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == 387748548 || ENTITY::GET_ENTITY_MODEL(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x5A21
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_163(int iParam0)//Position - 0x5A45
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_164()//Position - 0x5AA4
{
	return MISC::IS_BIT_SET(Local_149.f_5, 7);
}

void func_165()//Position - 0x5AB5
{
	if (!func_99())
	{
		if (func_28(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_171())
			{
				if (func_164())
				{
					if ((func_167() && !func_150()) && func_166("MP_HTRUCK_T_2"))
					{
						if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
						{
							func_134(1);
							func_112(1);
							HUD::CLEAR_HELP(1);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_166("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_166("HUNTGUN_1b"))
					{
						HUD::CLEAR_HELP(1);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
					{
						func_134(1);
						func_112(1);
						HUD::CLEAR_HELP(1);
					}
				}
				else if (func_166("HUNTGUN_1b"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else if (func_166("HUNTGUN_1b"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}

int func_166(char* sParam0)//Position - 0x5BC0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_167()//Position - 0x5BD3
{
	if ((func_26(PLAYER::PLAYER_ID(), 0) && Global_1319106 == 2) && func_168())
	{
		return 1;
	}
	return 0;
}

int func_168()//Position - 0x5C00
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_169(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0, int iParam1)//Position - 0x5D25
{
	if (func_170(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x5D58
{
	if (func_48(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171()//Position - 0x5D78
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_262145.f_24145)
		{
			return 1;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_115(Global_1590293))
		{
			return 1;
		}
	}
	if (func_125(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_44(0))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!func_137())
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (Global_1319110)
	{
		return 1;
	}
	if (func_26(PLAYER::PLAYER_ID(), 0))
	{
		if (func_48(func_114()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (!func_164())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (func_48(iVar0))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar4, 0, 0))
				{
					if (SYSTEM::VDIST(vVar1, vVar1.x, vVar1.y, fVar4) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_172()//Position - 0x5EFD
{
	return Global_96008;
}

int func_173()//Position - 0x5F09
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_174()//Position - 0x5F26
{
	return Global_1676879.f_443;
}

int func_175()//Position - 0x5F35
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_176()//Position - 0x5F4F
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_177(int iParam0)//Position - 0x5F64
{
	return Local_149.f_110 == iParam0;
}

void func_178()//Position - 0x5F73
{
	vector3 vVar0;
	
	if (func_177(1) || func_177(2))
	{
		if (func_48(func_30()))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(func_30(), 1) };
			PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(vVar0, 100f, 200f);
			INTERIOR::_0x483ACA1176CA93F1();
			if ((MISC::GET_FRAME_COUNT() % 120) == 0)
			{
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(vVar0, 300f, 30);
			}
		}
	}
	if (func_177(2))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			func_139(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		func_179();
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
		PAD::ENABLE_CONTROL_ACTION(2, 80, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 51, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 200, 1);
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
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
		}
	}
}

void func_179()//Position - 0x6108
{
	func_180();
}

void func_180()//Position - 0x6114
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

int func_181()//Position - 0x6138
{
	if (!func_147())
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!func_164())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_182(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
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

int func_182(int iParam0)//Position - 0x6188
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) == PLAYER::PLAYER_PED_ID() && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_183()//Position - 0x61DC
{
	return MISC::IS_BIT_SET(Global_1687879, 0);
}

int func_184()//Position - 0x61ED
{
	var uVar0;
	
	func_192(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_191())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (func_189(159))
	{
		if (!func_188())
		{
			return 1;
		}
	}
	if (func_189(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_185() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_185()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_185()//Position - 0x6277
{
	switch (func_187())
	{
		case 0:
			return func_186();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_186()//Position - 0x62AA
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_187()//Position - 0x62CE
{
	return Global_30736;
}

bool func_188()//Position - 0x62D9
{
	return Global_2448961.f_598;
}

int func_189(int iParam0)//Position - 0x62E8
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_190()//Position - 0x62FF
{
	return Global_2458999;
}

bool func_191()//Position - 0x630B
{
	return Global_2448961.f_593;
}

void func_192(var uParam0)//Position - 0x631A
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
					func_193(iVar0);
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

void func_193(int iParam0)//Position - 0x638D
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_28(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_194(iVar4, &bVar5))
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

int func_194(int iParam0, var uParam1)//Position - 0x640E
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

void func_195()//Position - 0x646D
{
	SYSTEM::WAIT(0);
}

void func_196(bool bParam0)//Position - 0x647A
{
	int iVar0;
	
	if (!func_164())
	{
		if (func_166("HUNTGUN_1b"))
		{
			HUD::CLEAR_HELP(1);
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (func_48(func_30()))
	{
		STREAMING::CLEAR_FOCUS();
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("helicopterhud");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("droneHUD");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_149.f_62));
	func_204();
	func_203();
	if (func_111())
	{
		func_110(0);
	}
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	if (func_147() && !func_123(PLAYER::PLAYER_ID()))
	{
		if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			func_139(PLAYER::PLAYER_ID(), 1, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	func_51(&(Local_149.f_113));
	func_51(&(Local_149.f_115));
	func_51(&(Local_149.f_117));
	func_51(&(Local_149.f_119));
	func_133(0);
	func_132(0);
	Local_149.f_32 = -1;
	Local_149.f_31 = 0;
	Local_149.f_5 = 0;
	Local_149.f_24 = 0;
	Local_149.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_17[iVar0] = 0;
		func_51(&(Local_149.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_88();
	if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380, 0))
	{
		MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_380), 0);
	}
	Local_149.f_48 = 0;
	func_202();
	func_200(1, -1);
	if (HUD::DOES_BLIP_EXIST(Local_149.f_108))
	{
		HUD::REMOVE_BLIP(&(Local_149.f_108));
	}
	if (HUD::DOES_BLIP_EXIST(Local_149.f_109))
	{
		HUD::REMOVE_BLIP(&(Local_149.f_109));
	}
	if (!bParam0)
	{
		func_199(0);
		func_198();
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)//Position - 0x65F8
{
	int iVar0;
	
	Local_149.f_33 = 100;
	Local_149.f_59 = 50f;
	Local_149.f_62 = unk_0x67D02A194A2FC2BD(func_38());
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("droneHUD", 0);
	Local_149.f_29 = AUDIO::GET_SOUND_ID();
	Local_149.f_30 = AUDIO::GET_SOUND_ID();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_34[iVar0] = -1;
		Local_149.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_198()//Position - 0x6676
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_199(bool bParam0)//Position - 0x6682
{
	if (bParam0)
	{
		if (!func_183())
		{
			MISC::SET_BIT(&Global_1687879, 0);
		}
	}
	else if (func_183())
	{
		MISC::CLEAR_BIT(&Global_1687879, 0);
	}
}

void func_200(bool bParam0, int iParam1)//Position - 0x66B3
{
	int iVar0;
	
	if (!func_18(&iVar0, 0, iParam1))
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
		func_201(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_201(var uParam0)//Position - 0x676F
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

void func_202()//Position - 0x6798
{
	if (Local_149.f_30 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_30);
		Local_149.f_30 = -1;
	}
	if (Local_149.f_29 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_29);
		Local_149.f_29 = -1;
	}
	if (Local_149.f_49 != -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_49);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_49);
		Local_149.f_49 = -1;
	}
	AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

void func_203()//Position - 0x6803
{
	if (Local_149.f_6 == -1)
	{
		AUDIO::STOP_SOUND(Local_149.f_6);
		AUDIO::RELEASE_SOUND_ID(Local_149.f_6);
		Local_149.f_6 = -1;
	}
}

void func_204()//Position - 0x6828
{
	if (CAM::DOES_CAM_EXIST(Local_149.f_61))
	{
		CAM::DESTROY_CAM(Local_149.f_61, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_205(struct<19> Param0, var uParam19, var uParam20)//Position - 0x6854
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0.f_16);
	func_208(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_148, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_115, 33);
	if (!func_207())
	{
		func_196(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_196(0);
	}
	if (Param0.f_18 == 1)
	{
		func_206(1);
	}
	else
	{
		func_206(0);
	}
	func_197(1);
}

void func_206(bool bParam0)//Position - 0x68B4
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_149.f_5, 7))
		{
			MISC::SET_BIT(&(Local_149.f_5), 7);
		}
	}
	else if (MISC::IS_BIT_SET(Local_149.f_5, 7))
	{
		MISC::CLEAR_BIT(&(Local_149.f_5), 7);
	}
}

int func_207()//Position - 0x68EF
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
		if (func_191())
		{
			return 0;
		}
		if (func_189(157))
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

int func_208(int iParam0, int iParam1, bool bParam2)//Position - 0x6948
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_198();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_191())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_189(157))
				{
					if (!bParam2)
					{
						func_198();
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
					func_198();
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
				func_198();
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
			func_198();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()//Position - 0x6A5D
{
	return Global_1312850;
}

