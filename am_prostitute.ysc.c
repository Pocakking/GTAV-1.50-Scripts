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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	vector3 vLocal_58[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	sLocal_20 = "NULL";
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_51(ScriptParam_0);
	}
	else
	{
		func_46();
	}
	iLocal_53 = MISC::GET_GAME_TIMER();
	while (true)
	{
		func_45();
		if (((func_34() || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || (func_33(PLAYER::PLAYER_ID()) || func_32(PLAYER::PLAYER_ID()))) || func_29(PLAYER::PLAYER_ID()))
		{
			func_46();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_2();
			func_1();
			iLocal_54++;
			if (iLocal_54 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()//Position - 0x100
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if ((iLocal_54 % iVar0) == 0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, 0))
				{
					if (vLocal_58[iVar0 /*3*/].f_2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_56)
							{
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
								STREAMING::REQUEST_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_56 = 1;
							}
							if (!MISC::IS_BIT_SET(iLocal_55, iVar0))
							{
								MISC::SET_BIT(&iLocal_55, iVar0);
							}
						}
						else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
						{
							MISC::CLEAR_BIT(&iLocal_55, iVar0);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
					{
						MISC::CLEAR_BIT(&iLocal_55, iVar0);
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_55, iVar0))
				{
					MISC::CLEAR_BIT(&iLocal_55, iVar0);
				}
			}
		}
		iVar0++;
	}
	if ((iLocal_55 == 0 && iLocal_56) && !vLocal_58[iVar1 /*3*/].f_2)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_56 = 0;
	}
}

void func_2()//Position - 0x23E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (iLocal_53 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = PLAYER::PLAYER_PED_ID();
			if (func_28(&iVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (((func_25(PLAYER::PLAYER_ID(), 1, 0) || func_24()) || !bVar3) || func_17())
			{
				iLocal_52 = 4;
			}
			else
			{
				iVar0 = func_13();
				if (iVar0 != func_12(iVar2) && iVar0 != 0)
				{
					func_11(iVar0);
					iLocal_53 = MISC::GET_GAME_TIMER();
					iLocal_52 = 2;
				}
				else
				{
					iLocal_53 = MISC::GET_GAME_TIMER() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_30889 = 0f;
				SCRIPT::REQUEST_SCRIPT("pb_prostitute");
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_52 = 3;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
			}
			break;
		
		case 3:
			if ((SCRIPT::HAS_SCRIPT_LOADED("pb_prostitute") && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pb_prostitute")) <= 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
			{
				iVar4 = func_12(iVar2);
				iLocal_57 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("pb_prostitute", &iVar4, 1, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("pb_prostitute");
				iLocal_52 = 0;
			}
			iLocal_53 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			if (func_4())
			{
				vLocal_58[iVar2 /*3*/].f_2 = 0;
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 5;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
		
		case 5:
			if (((!func_25(PLAYER::PLAYER_ID(), 1, 0) && !func_24()) && bVar3) && !func_3())
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 250;
				iLocal_52 = 0;
			}
			else
			{
				iLocal_53 = MISC::GET_GAME_TIMER() + 500;
			}
			break;
	}
}

bool func_3()//Position - 0x420
{
	return Global_1694283;
}

int func_4()//Position - 0x42C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pb_prostitute")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("pb_prostitute", PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1, 0))
	{
		return 1;
	}
	if (iLocal_57 == 0)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	return 0;
}

void func_5()//Position - 0x47A
{
	struct<2> Var0;
	int iVar2;
	
	Var0 = -1087179193;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_6(1, 1);
	if (iVar2 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iVar2);
	}
}

var func_6(int iParam0, bool bParam1)//Position - 0x4A9
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_10(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)//Position - 0x50E
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)//Position - 0x559
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()//Position - 0x59A
{
	return Global_1312745;
}

int func_10(int iParam0, bool bParam1, bool bParam2)//Position - 0x5A6
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

void func_11(int iParam0)//Position - 0x5F0
{
	vLocal_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/] = iParam0;
}

int func_12(int iParam0)//Position - 0x602
{
	if (iParam0 == -1)
	{
		return vLocal_58[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*3*/];
	}
	return vLocal_58[iParam0 /*3*/];
}

int func_13()//Position - 0x621
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	
	iVar0 = func_14();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!ENTITY::DOES_ENTITY_EXIST(func_12(iVar1)))
	{
		func_11(0);
		return iVar0;
	}
	if (iLocal_57 != 0 && SCRIPT::IS_THREAD_ACTIVE(iLocal_57))
	{
		if (vLocal_58[iVar1 /*3*/].f_2)
		{
			return func_12(iVar1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (func_28(&iVar2))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (func_12(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, 0, 0) || PED::IS_PED_IN_VEHICLE(func_12(iVar1), iVar3, 1))
						{
							vLocal_58[iVar1 /*3*/].f_2 = 1;
							return func_12(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_12(iVar1);
					}
					vVar4 = { ENTITY::GET_ENTITY_COORDS(func_12(iVar1), 0) };
					vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, 0) };
					vVar10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
					fVar13 = SYSTEM::VDIST(vVar4, vVar10);
					fVar14 = SYSTEM::VDIST(vVar10, vVar7);
					if (fVar13 > fVar14)
					{
						if ((fVar13 - fVar14) > 25f)
						{
							return iVar0;
						}
						else if (fVar14 < 6f && fVar13 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_12(iVar1);
						}
					}
					else
					{
						return func_12(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_14()//Position - 0x787
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar10 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (!PED::IS_PED_INJURED(uVar1[iVar11]))
			{
				if (PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || PED::IS_PED_USING_SCENARIO(uVar1[iVar11], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_16(uVar1[iVar11]))
					{
						if (!func_15(uVar1[iVar11]))
						{
							if (!PED::IS_PED_FLEEING(uVar1[iVar11]))
							{
								return uVar1[iVar11];
							}
						}
					}
				}
			}
			iVar11++;
		}
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x822
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vLocal_58[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)//Position - 0x850
{
	var uVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
	{
		if (MISC::ARE_STRINGS_EQUAL(iVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(iVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(iVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(iVar1, "GB_CASINO"))
		{
			return 0;
		}
		if (MISC::ARE_STRINGS_EQUAL(iVar1, "GB_CASINO_HEIST"))
		{
			return 0;
		}
	}
	return 1;
}

int func_17()//Position - 0x8C2
{
	if (func_3())
	{
		return 1;
	}
	if (func_22(PLAYER::PLAYER_ID()) != -1)
	{
		return 1;
	}
	if (func_18(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x8F5
{
	if (func_19(func_20(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)//Position - 0x90F
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_20(int iParam0)//Position - 0x929
{
	if (func_21(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)//Position - 0x94C
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x987
{
	if (func_20(iParam0) == 237 || func_20(iParam0) == 250)
	{
		return func_23(iParam0);
	}
	return -1;
}

int func_23(int iParam0)//Position - 0x9B4
{
	if (func_21(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

bool func_24()//Position - 0x9D7
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

int func_25(int iParam0, bool bParam1, bool bParam2)//Position - 0x9F3
{
	if (bParam1)
	{
		if (func_26(iParam0))
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

bool func_26(int iParam0)//Position - 0xA25
{
	return func_27(iParam0);
}

bool func_27(int iParam0)//Position - 0xA33
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_28(int iParam0)//Position - 0xA4D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0)//Position - 0xA78
{
	if (iParam0 != func_31())
	{
		if (func_10(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_30(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)//Position - 0xABF
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

int func_31()//Position - 0xE87
{
	return -1;
}

bool func_32(int iParam0)//Position - 0xE90
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_33(int iParam0)//Position - 0xEA5
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

int func_34()//Position - 0xEBA
{
	var uVar0;
	
	func_42(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_41())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_40())
	{
		return 1;
	}
	if (func_39(159))
	{
		if (!func_38())
		{
			return 1;
		}
	}
	if (func_39(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_35() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_35()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0xF44
{
	switch (func_37())
	{
		case 0:
			return func_36();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_36()//Position - 0xF77
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_37()//Position - 0xF9B
{
	return Global_30736;
}

bool func_38()//Position - 0xFA6
{
	return Global_2448961.f_598;
}

int func_39(int iParam0)//Position - 0xFB5
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_40()//Position - 0xFCC
{
	return Global_2458999;
}

bool func_41()//Position - 0xFD8
{
	return Global_2448961.f_593;
}

void func_42(var uParam0)//Position - 0xFE7
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
					func_43(iVar0);
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

void func_43(int iParam0)//Position - 0x105A
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_10(vVar0.y, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_44(iVar4, &bVar5))
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

int func_44(int iParam0, var uParam1)//Position - 0x10DB
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

void func_45()//Position - 0x113A
{
	SYSTEM::WAIT(0);
}

void func_46()//Position - 0x1147
{
	if (iLocal_56)
	{
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexlow_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("mini@prostitutes@sexnorm_veh_first_person");
		STREAMING::REMOVE_ANIM_DICT("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if (!func_50(PLAYER::PLAYER_ID()) && !func_49(PLAYER::PLAYER_ID()))
	{
		func_48();
	}
	func_4();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	Global_2531497.f_4 = 0;
	func_47();
}

void func_47()//Position - 0x11BA
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_48()//Position - 0x11C6
{
	Global_2437549.f_1155.f_10 = 0;
}

int func_49(int iParam0)//Position - 0x11D8
{
	if (iParam0 != func_31())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 29);
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x1202
{
	if (iParam0 != func_31())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_389.f_2, 16);
	}
	return 0;
}

void func_51(struct<21> Param0)//Position - 0x122E
{
	func_54(func_55(Param0), Param0);
	func_52(0, -1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_58, 97);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	else
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("pb_prostitute", 1);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
}

int func_52(int iParam0, int iParam1, bool bParam2)//Position - 0x1270
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0;
			}
		}
		if (!func_53())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_41())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_39(157))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_53()//Position - 0x1385
{
	return Global_1312850;
}

void func_54(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1391
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_47();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_55(int iParam0)//Position - 0x13B0
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

