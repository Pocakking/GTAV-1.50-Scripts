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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<2> Local_50 = { 0, 0 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
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
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
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
	sLocal_21 = "NULL";
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_19661 = 145;
	MISC::CLEAR_BIT(&Global_7357, 8);
	MISC::CLEAR_BIT(&Global_7356, 14);
	MISC::CLEAR_BIT(&Global_4269615, 3);
	MISC::CLEAR_BIT(&Global_7357, 10);
	MISC::CLEAR_BIT(&Global_7356, 17);
	MISC::CLEAR_BIT(&Global_7356, 9);
	MISC::CLEAR_BIT(&Global_7356, 26);
	MISC::CLEAR_BIT(&Global_7356, 23);
	MISC::CLEAR_BIT(&Global_7357, 24);
	MISC::CLEAR_BIT(&Global_7357, 25);
	MISC::CLEAR_BIT(&Global_7357, 27);
	MISC::CLEAR_BIT(&Global_7357, 26);
	MISC::CLEAR_BIT(&Global_7356, 30);
	Global_2541153 = 0;
	iLocal_78 = 0;
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_19452 = 0;
	iLocal_30 = 0;
	Global_19430 = 0;
	Global_19470 = 0;
	Global_19471 = 0;
	func_110();
	Global_19417 = { Global_19449 };
	Global_19490 = 4;
	Global_19491 = 0;
	Global_7961 = 1;
	Global_19466 = Global_19490;
	if (Global_19468 == 0)
	{
		Global_19469 = 0;
		if (Global_76577)
		{
			Global_19467 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_44 = 1;
			if (iLocal_44 == 1)
			{
			}
		}
		else if (Global_19429)
		{
			Global_19474 = 1;
			Global_19467 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_19467 = unk_0x67D02A194A2FC2BD(&(Global_111560.f_14046[Global_19486 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_19469 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_19469 = 1;
					}
				}
			}
			if (Global_19485 == 1)
			{
				func_109();
			}
		}
		if (Global_19469 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				func_108(Global_19467, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
			Global_19427 = 0;
			Global_19468 = 0;
			Global_19662 = 0;
			if (Global_111560.f_14046.f_84 == 1)
			{
				Global_111560.f_14046.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			Global_19430 = 1;
			Global_19486.f_1 = 3;
			func_107();
			Global_19474 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_7356, 9);
			MISC::CLEAR_BIT(&Global_7356, 27);
			MISC::CLEAR_BIT(&Global_7356, 30);
			MISC::CLEAR_BIT(&Global_7357, 5);
			MISC::CLEAR_BIT(&Global_7357, 21);
			MISC::CLEAR_BIT(&Global_7358, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_19664 = 0;
			Global_21865 = 0;
			Global_21864 = 0;
			Global_20818 = 0;
			func_105();
			func_103();
			Global_4269894 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_19410 = 0.1f;
		Global_19411 = 0.38f;
		Global_19412 = 0.195f;
		Global_19413 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
		}
		else
		{
			HUD::GET_HUD_COLOUR(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
			HUD::GET_HUD_COLOUR(126, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_64), SYSTEM::TO_FLOAT(iLocal_65), SYSTEM::TO_FLOAT(iLocal_66), -1082130432);
		}
		if (Global_19469 == 0)
		{
		}
		func_101();
		if (Global_76577)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
		}
		Global_19468 = 1;
	}
	Global_7359 = 99;
	func_100();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_56 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_21819 = 1;
	}
	else
	{
		Global_21819 = 0;
	}
	func_102(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_19428 = 1;
	if (Global_76577)
	{
		Global_19666 = 0;
		Global_4269891 = func_97(2028, -1, 0);
		if (Global_4269891 < 1 || Global_4269891 > 7)
		{
			Global_4269891 = 1;
		}
		func_102(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_4269891), -1082130432, -1082130432, -1082130432, -1082130432);
		func_96();
		Global_4269892 = func_97(2027, -1, 0);
		if (Global_4269892 == 0)
		{
			Var16 = { func_95(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4269895 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4269895 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_102(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_102(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_102(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4269892), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_19429)
		{
			Global_19666 = 0;
		}
		else if (Global_111560.f_14046.f_88 == 1 || Global_111560.f_14046.f_89 == 1)
		{
			Global_19666 = 0;
		}
		else
		{
			Global_19666 = 0;
		}
		func_102(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8160 == 0)
		{
			func_102(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_111560.f_14046[Global_19486 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_96();
	}
	iLocal_45 = func_94();
	if (Global_19429 == 0)
	{
		func_82();
	}
	Global_19464 = 0;
	Global_19665 = 0;
	MISC::CLEAR_BIT(&Global_7356, 9);
	Global_2458994 = 0;
	if (func_80(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2458994 = 1;
	}
	func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78();
	func_76();
	func_75(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_19475, 1);
	SYSTEM::SETTIMERB(0);
	while (Global_19486.f_1 < 6 && Global_19469 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_19469 = 1;
		}
		if (Global_19486.f_1 < 4)
		{
			Global_19469 = 1;
		}
	}
	if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
	{
		if (func_74(14))
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_102(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_102(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19666 == 0)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else if (Global_76577)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			if (Global_19665 == 1)
			{
				if (Global_19474)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_7356, 17);
		}
	}
	Global_19472 = 1;
	func_72();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_62 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_57 = MISC::GET_GAME_TIMER();
	}
	if (Global_19662 == 1)
	{
		if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_111560.f_14046.f_84 == 0)
			{
				Global_111560.f_14046.f_84 = 1;
				if (Global_19431 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_71("CELL_7052", 10000);
			}
		}
	}
	if (Global_76577 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_70())
	{
		iLocal_36 = 1;
	}
	else
	{
		iLocal_36 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_37 = 1;
			if (func_70())
			{
				func_69();
			}
		}
		else
		{
			iLocal_37 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_76577 == 0)
		{
			iLocal_59 = MISC::GET_GAME_TIMER();
			iLocal_61 = 0;
		}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_4269615, 24))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4269615, 24);
					func_78();
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75(1);
					if (Global_19486.f_1 == 6)
					{
						func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_68())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_76577 == 0)
		{
			if (iLocal_32)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_19486.f_1 > 4)
			{
				if ((MISC::IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_67())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_19432[Global_19431 /*3*/].f_1 != Local_33.f_1)
							{
								func_65();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_19439[Global_19431 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_68())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_63();
								}
							}
						}
						if (iLocal_37 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_37 = 1;
								func_63();
								func_69();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_37 = 0;
							func_65();
							if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
							{
								if (Global_20805 != 2)
								{
									func_62();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (func_70())
							{
								iLocal_36 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_69();
								}
								func_65();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_70() == 0)
							{
								iLocal_36 = 0;
								func_63();
							}
						}
					}
				}
			}
		}
		if (Global_2458994 == 1)
		{
			if (!func_80(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_19486.f_1 > 3)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
						Global_2458994 = 0;
					}
				}
			}
		}
		if (Global_19667 == 0)
		{
			if ((Global_41396 != 15 || Global_7361 == 1) || func_56(0))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						Global_7362 = 42;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_78();
						func_76();
						func_75(1);
						func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19667 = 1;
			}
		}
		else if ((Global_41396 == 15 && func_56(0) == 0) && Global_7361 == 0)
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					Global_7362 = 255;
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_78();
					func_76();
					func_75(1);
					func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19667 = 0;
		}
		if (Global_19668 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7357, 3))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_78();
						func_76();
						func_75(1);
						func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19668 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_7357, 3))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_78();
					func_76();
					func_75(1);
					func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19668 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_19414.f_1 != Global_19432[Global_19431 /*3*/].f_1 || func_70())
			{
				if (Global_19486.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_76577)
						{
							if (Global_19486.f_1 == 9)
							{
								if (Global_20858 == 1 || MISC::IS_BIT_SET(Global_7357, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
						if (MISC::IS_BIT_SET(Global_7356, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_19457);
						}
					}
					if (!func_55() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_19458);
					}
				}
			}
			if (Global_19414.f_1 == Global_19432[Global_19431 /*3*/].f_1)
			{
			}
		}
		if (!PAD::_IS_INPUT_DISABLED(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_73784)
			{
				if (!func_68())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19460);
				if (!func_55())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_19461);
				}
				if (Global_19486.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_19463);
				}
			}
		}
		if (func_54(2, Global_19454, 0))
		{
			iLocal_54 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_31 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_19455))
			{
				Global_7360 = 1;
				iLocal_31 = 0;
			}
			if (!Global_19486.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_54)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_19454))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_19486.f_1 = 3;
					func_52();
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		Global_7964 = MISC::GET_GAME_TIMER();
		if (Global_19473)
		{
			func_72();
			Global_19472 = 1;
			Global_19473 = 0;
		}
		if (Global_19664 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_45();
			func_44();
			HUD::SET_TEXT_RENDER_ID(iLocal_42);
			if (Global_19472 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_19429)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				func_100();
			}
			if (Global_19426 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					func_43();
				}
			}
			else if (Global_19486.f_1 > 3)
			{
				if (Global_4269894 == 1)
				{
					func_42();
				}
				if (MISC::IS_BIT_SET(Global_7357, 25))
				{
					if (Global_76577 == 1)
					{
						func_41();
					}
				}
				else if (!MISC::IS_BIT_SET(Global_7357, 24))
				{
					if (MISC::IS_BIT_SET(Global_7357, 26))
					{
						if (func_54(2, Global_19453, 0))
						{
							MISC::SET_BIT(&Global_7357, 25);
							MISC::CLEAR_BIT(&Global_7357, 26);
							MISC::CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				else if (Global_76577 == 1)
				{
					func_40();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_19486.f_1 == 6)
			{
				func_36();
			}
		}
		else if (!MISC::IS_BIT_SET(Global_7356, 23))
		{
			if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
			{
				if (Global_19664 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_19429 == 0)
						{
							if (MISC::IS_BIT_SET(Global_7356, 14))
							{
								if (!Global_76577)
								{
									if (iLocal_31 == 0)
									{
										if (!func_74(14))
										{
											func_35();
										}
										else if (Global_2458994)
										{
											func_34();
										}
									}
								}
								else
								{
									func_23();
								}
							}
						}
						if (MISC::IS_BIT_SET(Global_7356, 9))
						{
							func_20(0, 0, 1, 1);
						}
						else if (Global_21864 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_4269615, 3))
							{
								if (Global_76577)
								{
									func_19();
								}
								func_18();
								func_16();
							}
						}
						else
						{
							if (Global_76577)
							{
								func_19();
							}
							if (!MISC::IS_BIT_SET(Global_4269615, 3))
							{
								if (Global_21864 == 1)
								{
									if (MISC::IS_BIT_SET(Global_4269615, 1))
									{
										if (MISC::IS_BIT_SET(Global_7356, 14))
										{
											if (Global_76577)
											{
												func_20(7, 0, 1, 0);
											}
											else
											{
												Global_21865 = 0;
											}
											Global_21864 = 0;
											MISC::CLEAR_BIT(&Global_4269615, 1);
										}
									}
									else if (MISC::IS_BIT_SET(Global_7356, 14))
									{
										func_20(7, 0, 1, 0);
										Global_21864 = 0;
									}
								}
								else
								{
									if (Global_21864 == 3)
									{
										func_20(1, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 2)
									{
										func_20(14, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 4)
									{
										func_20(23, 0, 1, 0);
										Global_21864 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_7363[Global_19489 /*15*/].f_5)))
		{
			if (Global_19489 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
				{
					Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_19489 == 23)
				{
					if (MISC::IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0)
					{
					}
				}
				if (Global_19489 == 2 || iVar32 == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
					{
						Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
				{
					Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[Global_19489 /*15*/].f_5));
			Global_7359 = 99;
			MISC::CLEAR_BIT(&Global_7356, 23);
		}
		if (PAD::_IS_INPUT_DISABLED(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_19486.f_1 == 1)
		{
			func_7();
		}
		if (Global_19486.f_1 == 0)
		{
			func_7();
		}
		if (Global_19486.f_1 == 3)
		{
			func_7();
		}
		else
		{
			if (Global_20818)
			{
				if (Global_19486.f_1 == 9)
				{
					if (Global_76577)
					{
						if (!MISC::IS_BIT_SET(Global_7357, 31))
						{
							if (!MISC::IS_BIT_SET(Global_7357, 27))
							{
								if (func_6())
								{
									if (!MISC::IS_BIT_SET(Global_7356, 9))
									{
										if (func_54(2, Global_19458, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_19485 == 1)
												{
													if (Global_19486.f_1 > 6)
													{
														MISC::SET_BIT(&Global_7357, 24);
														MISC::SET_BIT(&Global_7357, 27);
														MISC::CLEAR_BIT(&Global_7357, 26);
														MISC::CLEAR_BIT(&Global_7357, 25);
														MISC::SET_BIT(&(Global_2531497.f_1732), 17);
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
			if (Global_19469 == 1)
			{
				Global_19471 = 1;
				func_57(0);
			}
			if (Global_19470 == 1)
			{
				Global_19471 = 1;
				func_57(0);
			}
			if (Global_76577)
			{
				if (!MISC::IS_BIT_SET(Global_7358, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_5())
					{
						if (Global_2537824.f_1 == 1)
						{
						}
						else
						{
							func_61();
							func_57(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_7357, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
					}
				}
				if (func_74(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111560.f_28045[2 /*29*/])
					{
						iLocal_79 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_79 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_76838 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_79)
				{
					if (!Global_19429)
					{
						MISC::SET_BIT(&Global_7357, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_76577 == 0)
					{
						if (iLocal_61 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									iLocal_59 = MISC::GET_GAME_TIMER();
									iLocal_61 = 1;
								}
							}
						}
						else
						{
							iLocal_60 = MISC::GET_GAME_TIMER();
							iLocal_63 = (iLocal_60 - iLocal_59);
							if (iLocal_63 < 4000)
							{
								MISC::SET_BIT(&Global_7357, 4);
							}
							else
							{
								iLocal_61 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_76577)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed") && Global_19486.f_1 < 7)
						{
							MISC::SET_BIT(&Global_7357, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_70 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible2"))
					{
						iLocal_73 = 1;
					}
					else
					{
						iLocal_73 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -692292317) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -1435527158) || iLocal_73) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_70, 0) == 0)
					{
						MISC::SET_BIT(&Global_7357, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -1924433270) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -32236122) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == 1897744184) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -1881846085) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -749299473) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -32878452) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == 1043222410) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == -692292317)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_70))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_70);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == -1924433270)
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == -32236122)
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == 1897744184)
								{
									if (iVar33 == 0)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == -1881846085)
								{
									if (iVar33 == -1)
									{
										MISC::SET_BIT(&Global_7357, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_70, iVar33))
								{
									MISC::SET_BIT(&Global_7357, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_76577 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_70) == 886810209 && ENTITY::IS_ENTITY_IN_WATER(iLocal_70))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_70)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_70))) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_70) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_57(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_76577 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								func_57(0);
							}
						}
					}
					iLocal_73 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (Global_76577 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_56)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
					if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
				}
				else if (func_68())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_56)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_68())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
							if ((iLocal_69 == joaat("weapon_sniperrifle") || iLocal_69 == joaat("weapon_heavysniper")) || iLocal_69 == joaat("weapon_remotesniper"))
							{
								bLocal_68 = true;
							}
							else
							{
								bLocal_68 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_68)
								{
									Global_19471 = 1;
									func_61();
									func_57(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_76577 == 0)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_76577 && Global_2537824.f_1) && Global_2537824.f_37) && Global_19486.f_1 == 9)
				{
					iVar35 = 1;
					if (!MISC::IS_BIT_SET(Global_7357, 24))
					{
						if (MISC::IS_BIT_SET(Global_7357, 26))
						{
							MISC::SET_BIT(&Global_7357, 25);
							MISC::CLEAR_BIT(&Global_7357, 26);
							MISC::CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
			}
		}
		if (Global_19464 == 1)
		{
			func_1();
		}
		if (Global_19485 == 2)
		{
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()//Position - 0x1D60
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_19455) && !PAD::IS_CONTROL_PRESSED(2, Global_19454))
	{
		Global_19464 = 0;
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x1D86
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, 0) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)//Position - 0x1E5F
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)//Position - 0x1E80
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42348[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_5()//Position - 0x1EC9
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

bool func_6()//Position - 0x1EDA
{
	return Global_2537824.f_1;
}

void func_7()//Position - 0x1EE8
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	
	Global_21864 = 0;
	Global_21865 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_19452 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_67())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_19452 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_111560.f_14046.f_84 == 1)
	{
		Global_111560.f_14046.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (MISC::IS_BIT_SET(Global_7356, 30) || MISC::IS_BIT_SET(Global_7358, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_19446 };
	if (Global_19471 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((MISC::IS_BIT_SET(Global_7357, 26) || MISC::IS_BIT_SET(Global_7356, 30)) || MISC::IS_BIT_SET(Global_7358, 2))
	{
		vLocal_75 = { Global_19432[Global_19431 /*3*/] };
	}
	else
	{
		vLocal_75 = { Global_19439[Global_19431 /*3*/] };
	}
	fVar4 = func_13(vLocal_75, Global_19432[Global_19431 /*3*/], Global_19446, vVar1, fVar0, 0);
	if (!iLocal_43 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_43 = 1;
	}
	if (iLocal_43 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (Global_19486.f_1 == 3)
		{
		}
		if (Global_19486.f_1 == 1)
		{
		}
		if (Global_19486.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_19427 = 0;
		Global_19468 = 0;
		Global_19662 = 0;
		if (Global_111560.f_14046.f_84 == 1)
		{
			Global_111560.f_14046.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, 1);
		}
		Global_19430 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_21819 == 0)
		{
		}
		Global_19664 = 0;
		if (func_10(0))
		{
			func_9();
		}
		MISC::CLEAR_BIT(&Global_7357, 8);
		MISC::CLEAR_BIT(&Global_7356, 14);
		MISC::CLEAR_BIT(&Global_7356, 9);
		MISC::CLEAR_BIT(&Global_7356, 27);
		MISC::CLEAR_BIT(&Global_7356, 30);
		MISC::CLEAR_BIT(&Global_7357, 5);
		MISC::CLEAR_BIT(&Global_7357, 19);
		MISC::CLEAR_BIT(&Global_7357, 21);
		MISC::CLEAR_BIT(&Global_7357, 24);
		MISC::CLEAR_BIT(&Global_7357, 25);
		MISC::CLEAR_BIT(&Global_7357, 27);
		MISC::CLEAR_BIT(&Global_7357, 26);
		MISC::CLEAR_BIT(&Global_7358, 2);
		Global_2541153 = 0;
		iLocal_78 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_8();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_19484))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_42);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_19484);
				}
			}
		}
		Global_19474 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
		{
			func_108(Global_19467, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
		Global_19452 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Global_2537824.f_1)
			{
				if (Global_76577)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, 1);
				}
			}
		}
		func_105();
		func_103();
		Global_20818 = 0;
		Global_4269894 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_8()//Position - 0x2270
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_9()//Position - 0x22C7
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_10(int iParam0)//Position - 0x2344
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)//Position - 0x2366
{
	return func_12(iParam0, Global_41396);
}

int func_12(int iParam0, int iParam1)//Position - 0x2377
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

float func_13(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, bool bParam13)//Position - 0x2558
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4269894 == 0)
	{
		if (MISC::IS_BIT_SET(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269894 = 1;
			}
		}
	}
	if (func_67() && Global_4269894 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_15((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_19414 = { func_14(vParam0, vParam3, fVar4) };
		Global_19417 = { func_14(vParam6, vParam9, fVar4) };
	}
	else
	{
		Global_19414 = { vParam3 };
		Global_19417 = { vParam9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19417, 0);
	return fVar3;
}

Vector3 func_14(vector3 vParam0, vector3 vParam3, float fParam6)//Position - 0x266A
{
	return vParam0 + vParam3 - vParam0 * Vector(fParam6, fParam6, fParam6);
}

float func_15(float fParam0, float fParam1, float fParam2)//Position - 0x2684
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

void func_16()//Position - 0x26AB
{
	if (Global_19464 == 0)
	{
		if (func_54(2, Global_19458, 0))
		{
			if (Global_76577 == 0)
			{
				if (Global_19666)
				{
					if (Global_19665 == 0)
					{
						Global_19665 = 1;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75(2);
						func_17();
						func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19491;
					}
					else
					{
						Global_19665 = 0;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75(1);
						func_17();
						func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19490;
					}
				}
			}
		}
	}
}

void func_17()//Position - 0x2784
{
	if (Global_19666 == 0)
	{
		func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7356, 17);
	}
	else if (Global_76577)
	{
		func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7356, 17);
	}
	else
	{
		if (Global_19665 == 1)
		{
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_7356, 17);
	}
}

void func_18()//Position - 0x285D
{
	if (MISC::IS_BIT_SET(Global_7357, 10) || iLocal_78 == 1)
	{
		Global_7963 = MISC::GET_GAME_TIMER();
		Global_7962 = 0;
		Global_19464 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
		iLocal_29 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_30 = 1;
	}
	else if (Global_19464 == 0)
	{
		if (func_54(2, Global_19455, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_7963 = MISC::GET_GAME_TIMER();
				Global_7962 = 0;
				Global_19464 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
				iLocal_29 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_30 = 1;
			}
		}
	}
}

void func_19()//Position - 0x28DF
{
	if (Global_19464 == 0)
	{
		if (func_54(2, Global_19453, 1))
		{
			if (func_97(2090, -1, 0) == 1)
			{
				if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_7357, 3))
					{
						if (!Global_19429)
						{
							if (!MISC::IS_BIT_SET(Global_4269615, 3))
							{
								if (!MISC::IS_BIT_SET(Global_7356, 14))
								{
									Global_19464 = 1;
									MISC::SET_BIT(&Global_4269615, 3);
									func_20(3, 0, 1, 0);
									Global_21864 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2960
{
	func_110();
	if (Global_76577 == 0)
	{
		if (func_74(14))
		{
			if (Global_21864 == 2 || Global_21864 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_22(0) == 1)
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
				func_21("cellphone_flashhand");
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
	func_78();
	func_76();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_21(&(Global_7363[iParam0 /*15*/].f_5));
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

void func_21(char* sParam0)//Position - 0x2AC6
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_22(int iParam0)//Position - 0x2AE6
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

void func_23()//Position - 0x2B40
{
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_32();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_32();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_32();
						func_30();
						Global_19466 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_32();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_32();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_32();
						func_30();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_32();
						Global_19466 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_32();
						func_30();
						Global_19466 = 0;
					}
					else
					{
						func_28();
						func_30();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_28();
						func_25();
						Global_19466 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_28();
						Global_19466 = 0;
					}
					else if (Global_7925[8])
					{
						func_25();
						func_32();
					}
					else
					{
						func_25();
					}
					break;
				
				case 2:
					if (Global_7925[1])
					{
						func_28();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_28();
						func_25();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_28();
						Global_19466 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_28();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_25();
						func_28();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_28();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 1;
						Global_19669 = 1;
					}
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 6:
					Global_19466 = 7;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 1:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 2;
						Global_19669 = 1;
					}
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_7363[23 /*15*/].f_10 == 57)
	{
		if (Global_19465 == 1 && Global_19466 == 8)
		{
			if (iLocal_80 == 0)
			{
				iLocal_80 = 1;
				func_24(12);
			}
		}
	}
}

void func_24(int iParam0)//Position - 0x3199
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_25()//Position - 0x31C2
{
	func_102(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_26();
}

void func_26()//Position - 0x31FF
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

int func_27()//Position - 0x3222
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_28()//Position - 0x3269
{
	func_102(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_29();
}

void func_29()//Position - 0x32A6
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
	}
}

void func_30()//Position - 0x32C9
{
	func_102(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_31();
}

void func_31()//Position - 0x3306
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_32()//Position - 0x3329
{
	func_102(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_33();
}

void func_33()//Position - 0x3366
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
	}
}

void func_34()//Position - 0x3389
{
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_35()//Position - 0x3547
{
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_32();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_32();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_32();
						func_30();
						Global_19466 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_32();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_32();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_32();
						func_30();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_32();
						Global_19466 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_32();
						func_30();
						Global_19466 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_28();
						func_25();
						Global_19466 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_28();
						Global_19466 = 0;
					}
					break;
				
				case 2:
					if (Global_7925[1])
					{
						func_28();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_28();
						func_25();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_28();
						Global_19466 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_28();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_25();
						func_28();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_28();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_54(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_36()//Position - 0x3AD9
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_29);
		if (Global_19665 == 0)
		{
			Global_19490 = iLocal_28;
		}
		else
		{
			Global_19491 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_19489 = Global_7889[iLocal_28];
		if (MISC::IS_BIT_SET(Global_7357, 10))
		{
			Global_19489 = 2;
			MISC::CLEAR_BIT(&Global_7357, 10);
		}
		if (iLocal_78 == 1)
		{
			Global_19490 = 1;
			Global_19489 = 0;
			Global_2541153 = 0;
			iLocal_78 = 0;
		}
		iVar0 = 0;
		if (SCRIPT::IS_THREAD_ACTIVE(Global_19484))
		{
			iVar0 = 1;
		}
		if (Global_19489 == 3)
		{
			if (MISC::IS_BIT_SET(Global_7357, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_76577)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_19489 == 2)
		{
			if (MISC::IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_19489 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7363[Global_19489 /*15*/]), "CELL_BENWEB"))
		{
			if (MISC::IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_76577)
		{
			if (Global_19489 == 15 || Global_19489 == 5)
			{
			}
			else
			{
				if (Global_19489 == 23)
				{
					if (((MISC::IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && MISC::IS_BIT_SET(Global_4269615, 20) == 0) && MISC::IS_BIT_SET(Global_4269615, 22) == 0)
					{
					}
					if ((((MISC::IS_BIT_SET(Global_4269615, 20) == 1 && MISC::IS_BIT_SET(Global_4269615, 4) == 0) && Global_1573923 == 0) && MISC::IS_BIT_SET(Global_4269615, 22) == 0) && MISC::IS_BIT_SET(Global_4269615, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4269615, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_19489 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_7356, 17);
					Global_19486.f_1 = 7;
					if (MISC::IS_BIT_SET(Global_7356, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5));
						MISC::SET_BIT(&Global_7356, 23);
					}
				}
				else
				{
					if (Global_19489 == 2 || Global_19489 == 3)
					{
					}
					func_37();
				}
			}
		}
		else
		{
			switch (Global_19489)
			{
				case 3:
					if (Global_110613 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_7356, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_19667 == 0)
					{
						if ((Global_7360 == 0 && iLocal_31 == 0) && Global_41396 == 15)
						{
							iLocal_31 = 1;
							func_38();
							if (!Global_111560.f_14046.f_85)
							{
							}
						}
					}
					else
					{
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_19489 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_74(14))
			{
				if (Global_19489 != 3 && Global_19489 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
				Global_19486.f_1 = 7;
				if (MISC::IS_BIT_SET(Global_7356, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5));
					MISC::SET_BIT(&Global_7356, 23);
				}
			}
			else if (Global_19489 != 20)
			{
				if (Global_111560.f_14046.f_86 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_19489 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_71("CELL_38", -1);
									Global_111560.f_14046.f_86 = 1;
								}
							}
						}
					}
				}
				func_37();
			}
		}
	}
}

void func_37()//Position - 0x3F83
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_38()//Position - 0x3FA5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_39();
	}
}

void func_39()//Position - 0x3FCB
{
	if (func_27())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

void func_40()//Position - 0x3FDF
{
	if (Global_19452 == 0)
	{
		if (func_13(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7357, 24);
			MISC::SET_BIT(&Global_7357, 26);
		}
	}
}

void func_41()//Position - 0x4031
{
	if (Global_19452 == 0)
	{
		if (func_13(Global_19432[Global_19431 /*3*/], Global_19439[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7357, 25);
			if (Global_20818)
			{
				MISC::CLEAR_BIT(&Global_7357, 27);
			}
		}
	}
}

void func_42()//Position - 0x4088
{
	if (Global_19452 == 0 && Global_19426 == 0)
	{
		if (func_13(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4269894 = 0;
		}
	}
}

void func_43()//Position - 0x40D7
{
	float fVar0;
	float fVar1;
	
	if (MISC::IS_BIT_SET(Global_7358, 2))
	{
		MISC::SET_BIT(&Global_7357, 8);
		MISC::SET_BIT(&Global_7356, 14);
		Global_19426 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19446, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_13(Global_19432[Global_19431 /*3*/], Global_19439[Global_19431 /*3*/], Global_19449, Global_19446, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_7357, 8);
			MISC::SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7358, 2);
			iLocal_38 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_7357, 8);
		}
	}
	else
	{
		if (iLocal_38 == 0)
		{
			vLocal_39 = { Global_19439[Global_19431 /*3*/] };
			vLocal_39.x = (vLocal_39.x - 10f);
			vLocal_39.y = (vLocal_39.y + 20f);
			iLocal_38 = 1;
		}
		fVar1 = func_13(Global_19432[Global_19431 /*3*/], vLocal_39, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_7357, 8);
			MISC::SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7358, 2);
			iLocal_38 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_7357, 8);
		}
	}
}

void func_44()//Position - 0x422D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_63 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_62);
	}
	else
	{
		iLocal_58 = MISC::GET_GAME_TIMER();
		iLocal_63 = (iLocal_58 - iLocal_57);
	}
	if (iLocal_63 > 4000)
	{
		iLocal_45 = func_94();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_62 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_45()//Position - 0x4283
{
	if (Global_19485 == 1)
	{
		func_109();
		if (Global_19464 == 0)
		{
			if (func_54(2, Global_19456, 0))
			{
				if (MISC::IS_BIT_SET(Global_7357, 8))
				{
					if (Global_20852 == 0)
					{
						func_37();
						Global_19464 = 1;
						Global_19485 = 3;
						Global_20854 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_19464 == 0)
		{
			if (func_54(2, Global_19455, 0))
			{
				if (MISC::IS_BIT_SET(Global_7357, 8))
				{
					func_38();
					Global_19464 = 1;
					Global_19485 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_51();
					func_50();
				}
			}
		}
	}
	else
	{
		if (iLocal_55 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7356, 27))
			{
				iLocal_55 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_19486.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_19429)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
							else if (!MISC::IS_BIT_SET(Global_7358, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_7356, 27))
			{
				iLocal_55 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_19485 == 0)
		{
			if (Global_19464 == 0)
			{
				if (func_54(2, Global_19454, 0) || Global_2541153 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_BIT_SET(Global_7357, 8))
							{
								switch (Global_19486.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_19664 == 0)
										{
											if (Global_19665 == 1)
											{
												func_37();
												Global_19665 = 0;
												func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_78();
												func_76();
												func_75(1);
												func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_19475, 1);
												}
												iLocal_18 = 0;
												Global_19486.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_19486.f_1 = 3;
										break;
									
									case 7:
										if (MISC::IS_BIT_SET(Global_7356, 23) == 1)
										{
										}
										if ((Global_7964 - Global_7963) > Global_7965 && MISC::IS_BIT_SET(Global_7356, 23) == 0)
										{
											if (MISC::IS_BIT_SET(Global_7357, 0))
											{
											}
											else
											{
												func_37();
												Global_7962 = 1;
												Global_19486.f_1 = 6;
												if (Global_76577)
												{
													func_102(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_4269891), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_7359 = 99;
												if (Global_2541153 == 0)
												{
													func_46();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_6671 == 132)
										{
											if (Global_2537824.f_1 || MISC::IS_BIT_SET(Global_7357, 20))
											{
												func_37();
												func_69();
											}
										}
										else
										{
											func_37();
											func_69();
											Global_20854 = 1;
										}
										break;
									
									case 9:
										if (Global_20805 == 0)
										{
											Global_19486.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2541153 == 1)
								{
									iLocal_78 = 1;
									Global_2541153 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_46()//Position - 0x45CE
{
	vector3 vVar0[24];
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76577)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_75(Global_7961);
			if (Global_7961 == 1)
			{
				func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_96();
				func_102(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_49("CELL_300");
					func_49("CELL_217");
					func_49("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_48(Global_6671, Global_19486) == 0)
				{
					func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_102(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_96();
				if (Global_20818)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_49("CELL_300");
					func_49("CELL_219");
					func_49("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_48(Global_6671, Global_19486) == 0)
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_47();
			break;
		
		default:
			break;
	}
}

void func_47()//Position - 0x4B6D
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_48(int iParam0, int iParam1)//Position - 0x4CF0
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_49(char* sParam0)//Position - 0x4D1A
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_50()//Position - 0x4D2C
{
	if (Global_20818)
	{
		if (Global_76577)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2531497.f_1732), 15);
				}
			}
		}
	}
}

void func_51()//Position - 0x4D7B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (!Global_20813)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7356, 17);
			if (MISC::IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20818)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_49("CELL_300");
				func_49("CELL_219");
				func_49("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_48(Global_6671, Global_19486) == 0)
			{
				func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_219", &(Global_1798[Global_6671 /*29*/].f_3), 0);
			}
		}
		func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_52()//Position - 0x4F2B
{
	Global_19671 = 0;
	func_53();
}

void func_53()//Position - 0x4F3B
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19485 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = Global_19488;
		return;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)//Position - 0x4F72
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_55()//Position - 0x4FE4
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_56(bool bParam0)//Position - 0x5001
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_57(int iParam0)//Position - 0x502C
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_5())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_19486.f_1 = 3;
	}
}

int func_58()//Position - 0x50B6
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)//Position - 0x50DD
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_60()//Position - 0x5151
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

void func_61()//Position - 0x5163
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_62()//Position - 0x518C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_70() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76577)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_76577)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_76577)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_7356, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_63()//Position - 0x52AF
{
	if ((MISC::IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
	{
		if (func_68())
		{
		}
		else
		{
			func_64();
		}
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_64()//Position - 0x52FA
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19426 = 1;
	}
}

void func_65()//Position - 0x5321
{
	if ((MISC::IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7357, 26))
			{
				MISC::CLEAR_BIT(&Global_7357, 24);
				MISC::CLEAR_BIT(&Global_7357, 25);
				MISC::CLEAR_BIT(&Global_7357, 27);
				MISC::CLEAR_BIT(&Global_7357, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_64();
					}
					else if (func_67() == 0)
					{
						func_64();
					}
				}
			}
		}
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (func_67())
			{
				func_66();
			}
		}
		else if (func_68())
		{
		}
		else if (func_67())
		{
			func_66();
		}
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_66()//Position - 0x53FD
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19432[Global_19431 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4269894 = 1;
	}
}

int func_67()//Position - 0x5425
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_74(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_110608)
		{
			return 0;
		}
	}
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269893 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_111560.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_68()//Position - 0x564C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x5669
{
	if (!Global_76577)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_7356, 11))
			{
				if (!Global_19429)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_76577)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_7356, 11);
			}
		}
	}
}

int func_70()//Position - 0x56D3
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_71(char[4] cParam0, int iParam1)//Position - 0x56F7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_72()//Position - 0x570E
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_42);
	if (iLocal_42 == -1)
	{
	}
}

void func_73(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x5722
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
		func_49(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_49(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_49(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_49(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_49(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_74(int iParam0)//Position - 0x57D5
{
	return Global_41396 == iParam0;
}

void func_75(int iParam0)//Position - 0x57E3
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
		if (func_74(14))
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
								func_49(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_73(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_76()//Position - 0x5D89
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_74(14))
			{
				func_77(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_77(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_77(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_77(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_77(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5E17
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

void func_78()//Position - 0x5ECD
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
			if (func_79(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_77(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_77(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_77(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_56(0) == 0) && Global_7361 == 0)
		{
			func_77(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_77(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_77(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_77(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_77(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_77(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_77(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_77(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_77(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_77(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_77(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_77(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_77(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_77(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_77(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_77(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_77(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_77(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_77(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_77(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_77(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4269615, 4) == 1)
		{
			func_77(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_77(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_77(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_77(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_77(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_77(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_77(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_77(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_77(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_77(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_77(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_77(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_77(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_77(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_77(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_77(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_77(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_77(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 20) == 1)
			{
				func_77(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 22) == 1)
			{
				func_77(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4269615, 26) == 1)
			{
				func_77(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && MISC::IS_BIT_SET(Global_4269615, 20) == 0) && MISC::IS_BIT_SET(Global_4269615, 22) == 0) && MISC::IS_BIT_SET(Global_4269615, 26) == 0)
		{
			func_77(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_79(int iParam0, int iParam1)//Position - 0x6458
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

int func_80(int iParam0)//Position - 0x6482
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_81() == 0)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x6525
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_82()//Position - 0x656D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_71 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_71)
	{
		case 0:
			iLocal_46 = 5;
			break;
		
		case 1:
			iLocal_46 = 5;
			break;
		
		case 2:
			iLocal_46 = 4;
			break;
		
		case 3:
			iLocal_46 = 4;
			break;
		
		case 4:
			iLocal_46 = 3;
			break;
		
		case 5:
			iLocal_46 = 2;
			break;
		
		default:
			iLocal_46 = 3;
			break;
	}
	iLocal_72 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_72 < 2)
	{
		if (iLocal_46 > 2)
		{
			iLocal_46 = (iLocal_46 - 1);
		}
	}
	if (iLocal_73 == 1 || func_83())
	{
		iLocal_46 = 0;
	}
	func_102(Global_19467, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_45), SYSTEM::TO_FLOAT(iLocal_46), -1082130432, -1082130432, -1082130432);
}

int func_83()//Position - 0x663D
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = func_89();
		if (func_88(iVar0))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_111560.f_7683.f_136)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7683[iVar4 /*15*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_87(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111560.f_7683.f_764)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7683.f_651[iVar4 /*14*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_85(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111560.f_7683.f_866)
			{
				if (MISC::IS_BIT_SET(Global_111560.f_7683.f_765[iVar4 /*10*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_84(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x6746
{
	return Global_111560.f_7683.f_765[iParam0 /*10*/].f_7;
}

int func_85(int iParam0)//Position - 0x675E
{
	return Global_111560.f_7683.f_651[iParam0 /*14*/].f_7;
}

int func_86(vector3 vParam0, int iParam3)//Position - 0x6776
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_41397)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(vParam0, Global_41397[iParam3 /*5*/]) <= (Global_41397[iParam3 /*5*/].f_3 * Global_41397[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_41397[iParam3 /*5*/].f_4 != -1)
		{
			return func_86(vParam0, Global_41397[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x67E1
{
	return Global_111560.f_7683[iParam0 /*15*/].f_7;
}

bool func_88(int iParam0)//Position - 0x67F6
{
	return iParam0 < 3;
}

var func_89()//Position - 0x6802
{
	func_90();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_90()//Position - 0x681B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_92(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_91(PLAYER::PLAYER_PED_ID());
			if (func_88(iVar0) && (!func_74(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_88(Global_111560.f_2358.f_539.f_4321))
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

int func_91(int iParam0)//Position - 0x6918
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_92(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_92(int iParam0)//Position - 0x6955
{
	if (func_88(iParam0))
	{
		return func_93(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_93(int iParam0)//Position - 0x697A
{
	return Global_1798[iParam0 /*29*/];
}

int func_94()//Position - 0x6989
{
	func_110();
	return Global_111560.f_14046[Global_19486 /*20*/].f_8;
}

struct<13> func_95(int iParam0)//Position - 0x69A3
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_96()//Position - 0x69BA
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_97(int iParam0, int iParam1, int iParam2)//Position - 0x6C31
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_98(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_98(var uParam0)//Position - 0x6C63
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_99();
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

var func_99()//Position - 0x6C97
{
	return Global_1312745;
}

void func_100()//Position - 0x6CA3
{
	if (func_74(14))
	{
		if (Global_2458994)
		{
			if (Global_19486.f_1 == 6)
			{
				if (Global_19466 == 7)
				{
					func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_19466 = 6;
					func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_19486.f_1 == 6)
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_48 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_48 != Global_7359)
	{
		Global_7359 = iLocal_48;
		iLocal_47 = CLOCK::GET_CLOCK_HOURS();
		iLocal_49 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_49)
		{
			case 0:
				StringCopy(&Local_50, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_50, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_50, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_50, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_50, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_50, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_50, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_50, "CELL_206", 16);
				break;
		}
		func_73(Global_19467, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_47), SYSTEM::TO_FLOAT(iLocal_48), -1f, -1f, -1f, &Local_50, 0, 0, 0, 0);
		if (Global_19429 == 0)
		{
			func_82();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_56 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_101()//Position - 0x6E22
{
	if (Global_76577)
	{
		StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_19429)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_19449 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_19431 = 0;
		Global_19432[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_19439[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_19431 = 0;
		Global_19432[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_19439[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_19414 = { Global_19432[Global_19431 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19432[Global_19431 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19449, 0);
	Global_19426 = 1;
}

void func_102(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6F87
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

void func_103()//Position - 0x6FEA
{
	Global_2537824.f_1 = 0;
	Global_2537824 = 0;
	Global_2537824.f_2 = 0;
	Global_2537824.f_33 = -1;
	Global_2537824.f_34 = -1;
	StringCopy(&(Global_2537824.f_4), "", 64);
	StringCopy(&(Global_2537824.f_39[0 /*16*/]), "", 64);
	Global_2537824.f_38 = 0;
	Global_2537824.f_56 = 0;
	Global_2537824.f_57 = 0;
	Global_2537824.f_58 = -2;
	Global_2537824.f_3 = 0;
	func_104(&(Global_2537824.f_20));
}

void func_104(var uParam0)//Position - 0x705D
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

void func_105()//Position - 0x70A5
{
	Global_2537824.f_2 = 1;
	Global_2537824.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2537824 = 0;
			Global_2537824.f_2 = 0;
		}
		else if (func_106(Global_2537824.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2537824.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2537824.f_20)))
				{
					func_103();
				}
			}
		}
		else
		{
			func_103();
		}
	}
	else
	{
		func_103();
	}
	if (Global_2537824.f_37)
	{
		func_57(0);
	}
	Global_2537824.f_37 = 0;
	Global_2537824.f_3 = 0;
}

bool func_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x7145
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_107()//Position - 0x7155
{
	Global_19671 = 0;
	func_8();
}

void func_108(int iParam0, char* sParam1)//Position - 0x7165
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_109()//Position - 0x717A
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19455);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19456);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_76577)
	{
		Global_111560.f_14046[3 /*20*/].f_10 = func_97(1197, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_74) >= 300 || iLocal_74 == 0) || iLocal_74 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_74 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_111560.f_14046[Global_19486 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_74) >= 300 || iLocal_74 == 0) || iLocal_74 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_74 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_76577)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_8161[3 /*2811*/][1 /*281*/].f_144[func_97(1198, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_8161[3 /*2811*/][1 /*281*/].f_144[func_97(1198, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), 1);
					}
				}
			}
		}
	}
}

void func_110()//Position - 0x7353
{
	if (func_74(14))
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
		Global_19486 = func_89();
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

