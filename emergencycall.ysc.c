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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	var uLocal_49 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(7, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(7, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((func_7(PLAYER::PLAYER_ID(), 0) && func_4(PLAYER::PLAYER_ID()) == 5) && Global_1694233)
						{
							if (Global_1694234 == 0)
							{
								Global_1694234 = 1;
							}
							iLocal_43 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(5, PLAYER::PLAYER_PED_ID(), 2, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(5, vLocal_45, 2, 3f, &uLocal_49, 0, 0))
					{
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(3, PLAYER::PLAYER_PED_ID(), 4, 3f, &uLocal_49, 0, 0))
						{
							iLocal_48 = MISC::GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(3, vLocal_45, 4, 3f, &uLocal_49, 0, 0))
					{
						if (Global_95196.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95196.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95126 = 1;
						}
						iLocal_48 = MISC::GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (MISC::GET_GAME_TIMER() > (iLocal_48 + 60000) || !MISC::IS_INCIDENT_VALID(uLocal_49))
					{
						func_1();
					}
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_INCIDENT_VALID(uLocal_49))
							{
								MISC::DELETE_INCIDENT(uLocal_49);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()//Position - 0x27A
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)//Position - 0x28C
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)//Position - 0x2B8
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

int func_4(int iParam0)//Position - 0x2E3
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)//Position - 0x300
{
	if (func_7(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)//Position - 0x323
{
	if (func_7(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)//Position - 0x346
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()//Position - 0x381
{
	if (MISC::GET_GAME_TIMER() > iLocal_48 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()//Position - 0x398
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_48 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_19())
			{
				SYSTEM::WAIT(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_48 + 30000)
				{
					iLocal_48 = MISC::GET_GAME_TIMER();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_10(PLAYER::PLAYER_PED_ID(), &vLocal_45, &uVar0);
			}
			iLocal_48 = MISC::GET_GAME_TIMER();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)//Position - 0x431
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	vector3 vVar25;
	var uVar28;
	
	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2)
	{
		switch (iVar19)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
				PATHFIND::GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar10.x, vVar10.y);
				fVar15 = (fVar16 + 180f);
				if (fVar15 > 360f)
				{
					fVar15 = (fVar15 - 360f);
				}
				if (func_11(fVar14, fVar16, 90f))
				{
					*uParam2 = fVar16;
				}
				else
				{
					*uParam2 = fVar15;
				}
				if (fVar13 < 0f)
				{
					fVar17 = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar17 = 0f;
				}
				else
				{
					fVar17 = (fVar18 * SYSTEM::TO_FLOAT((iVar1 / 2)));
					if (fVar17 == 0f)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (iVar1 == 5)
					{
						fVar17 = (fVar17 + fVar18);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar17 = (fVar17 + 5f);
					}
					else
					{
						fVar17 = (fVar17 + 3.75f);
					}
					fVar17 = (fVar17 + (fVar13 / 2f));
				}
				if (SYSTEM::VDIST(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::VDIST(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, -fVar17, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
				{
					fVar17 = -fVar17;
				}
				*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar17, 0f, 0f) };
				iVar20 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar19++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar20, &iVar21, &vVar25, &uVar22, &uVar28) == 2)
					{
						if (iVar21 != 0)
						{
							if (vVar25.z > (uParam1->f_2 + 8.5f))
							{
								iVar19++;
							}
							else
							{
								iVar0++;
								iVar19 = 0;
							}
						}
						else
						{
							iVar19++;
						}
					}
				}
				else
				{
					iVar19++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)//Position - 0x6D7
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)//Position - 0x74C
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()//Position - 0x7D6
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)//Position - 0x7FD
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)//Position - 0x871
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

bool func_16()//Position - 0x8CB
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

bool func_17()//Position - 0x8DC
{
	return MISC::IS_BIT_SET(Global_1687880, 19);
}

int func_18()//Position - 0x8EE
{
	return Global_21822;
}

int func_19()//Position - 0x8F9
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}
