#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_7 = { 0f, 0f, 0f };
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_0, true);
		vLocal_4 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true) };
		vLocal_7 = { ENTITY::GET_ENTITY_ROTATION(iScriptParam_0, 2) };
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_0))
						{
							STREAMING::REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									iLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_abat_roller_1_col"), vLocal_4, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3, vLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_0))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								STREAMING::REQUEST_ANIM_DICT("map_objects");
								if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_0))
						{
							if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								if (Global_95130)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
									{
										ENTITY::PLAY_ENTITY_ANIM(iScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, false, 1, 0, 0f, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3, true) };
							if (!func_2(vVar3, vVar0, 0.1f, 0))
							{
								vVar6 = { vVar0 - vVar3 };
								ENTITY::SET_ENTITY_COORDS(iLocal_3, vVar3 + func_1(vVar6) * FtoV(MISC::GET_FRAME_TIME()) * Vector(fVar9, fVar9, fVar9), 1, false, 0, 1);
							}
							else
							{
								Global_95131 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)//Position - 0x1C6
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

int func_2(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)//Position - 0x205
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

bool func_3(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x280
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_4()//Position - 0x2C7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_5(char* sParam0)//Position - 0x2F2
{
	func_6(sParam0);
}

void func_6(char* sParam0)//Position - 0x300
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

