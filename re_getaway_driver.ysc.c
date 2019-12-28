#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 16;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_101 = 0;
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
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_246 = { 0f, 0f, 0f };
	vector3 vLocal_249 = { 0f, 0f, 0f };
	vector3 vLocal_252 = { 0f, 0f, 0f };
	vector3 vLocal_255 = { 0f, 0f, 0f };
	vector3 vLocal_258 = { 0f, 0f, 0f };
	vector3 vLocal_261 = { 0f, 0f, 0f };
	vector3 vLocal_264 = { 0f, 0f, 0f };
	vector3 vLocal_267 = { 0f, 0f, 0f };
	vector3 vLocal_270 = { 0f, 0f, 0f };
	vector3 vLocal_273 = { 0f, 0f, 0f };
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	var uLocal_285[2] = { 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290[2] = { 0, 0 };
	int iLocal_293[5] = { 0, 0, 0, 0, 0 };
	int iLocal_299[3] = { 0, 0, 0 };
	int iLocal_303[2] = { 0, 0 };
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	var uLocal_314 = 8;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 1;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	var uVar11;
	bool bVar12;
	var uVar13;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iLocal_0 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::_GET_LEVEL_BLIP_SPRITE();
	iLocal_48 = HUD::_GET_WAYPOINT_BLIP_SPRITE();
	fLocal_52 = -1f;
	iLocal_220 = 1;
	iLocal_229 = -1;
	iLocal_230 = -1;
	vLocal_246 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_249 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_252 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_255 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_258 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_261 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_264 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_267 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_270 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0;
	iVar10 = 0;
	vLocal_234 = { ScriptParam_0.f_1[0 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_290[0]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_290[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_290[0]);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_290[1]))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_290[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_290[1]);
			}
		}
		func_246(Var1, &iLocal_290, bVar12);
	}
	func_245(&uLocal_314, 3);
	if (func_214(vLocal_234, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (iVar0 != 7)
	{
		iVar18 = 0;
		func_208(&uLocal_314);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_207())
		{
			iVar18 = 0;
			iVar0 = 7;
			func_246(Var1, &iLocal_290, bVar12);
		}
		if (!func_207())
		{
			if (func_206() || func_205(7))
			{
				iVar18 = 0;
				iVar0 = 7;
				func_246(Var1, &iLocal_290, bVar12);
			}
		}
		RECORDING::_0x208784099002BC30("RE_GD", 0);
		if (func_204())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[0]))
			{
				PED::DELETE_PED(&(iLocal_290[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[1]))
			{
				PED::DELETE_PED(&(iLocal_290[1]));
			}
			while (!func_203())
			{
				SYSTEM::WAIT(0);
			}
			func_199(9, 0);
			func_190(-1, 0);
			func_187();
			iVar18 = 0;
			iVar0 = 7;
			func_246(Var1, &iLocal_290, bVar12);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(func_186(PLAYER::PLAYER_ID()) - Vector(10f, 20f, 20f), func_186(PLAYER::PLAYER_ID()) + Vector(10f, 20f, 20f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(func_186(PLAYER::PLAYER_ID()) - Vector(10f, 20f, 20f), func_186(PLAYER::PLAYER_ID()) + Vector(10f, 20f, 20f)))
			{
				if ((((!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_290[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_290[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
					{
						if (iLocal_230 == -1)
						{
							iLocal_230 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_230 = -1;
					}
					if (iLocal_230 != -1 && MISC::GET_GAME_TIMER() > iLocal_230 + 1000)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_LOSE", 4, 0, 0, 0);
						}
						if (iLocal_230 != -1 && MISC::GET_GAME_TIMER() > iLocal_230 + 10000)
						{
							func_169();
							SYSTEM::WAIT(0);
							func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
							if (!PED::IS_PED_INJURED(iLocal_290[0]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_290[0], iLocal_309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
								PED::SET_PED_KEEP_TASK(iLocal_290[0], true);
							}
							if (!PED::IS_PED_INJURED(iLocal_290[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_290[1], iLocal_309);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
								PED::SET_PED_KEEP_TASK(iLocal_290[1], true);
							}
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, bVar12);
						}
					}
				}
			}
		}
		if (iVar10 > 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_310, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_310, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1033021910, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, iLocal_310);
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1033021910);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, 1166638144);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, iLocal_310);
			}
		}
		if ((iVar10 > 1 && iVar10 < 7) && !iLocal_283)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_169();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
			}
		}
		if ((iVar10 > 7 && iVar10 < 18) && !iLocal_283)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_290[1]))
			{
				if (PED::IS_PED_INJURED(iLocal_290[1]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_290[0], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_290[0], true);
						func_169();
						SYSTEM::WAIT(0);
						func_171(&uLocal_55, "REGETAU", "REAWA_FKDB", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
				if (PED::IS_PED_INJURED(iLocal_290[0]) || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 80f, 80f, 80f, 0, 1, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_290[1], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_290[1], true);
						func_169();
						SYSTEM::WAIT(0);
						func_171(&uLocal_55, "REGETAU", "REAWA_DEAD1", 4, 0, 0, 0);
					}
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
			}
		}
		if (func_168(&iLocal_290, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 180f))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_283 = 1;
			}
			if (iLocal_283)
			{
				if (!bLocal_278)
				{
					func_167();
				}
				if (!bLocal_279)
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_289, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
						{
							TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 5f, 3f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_289, iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_289, true);
						bLocal_279 = true;
					}
				}
			}
			else
			{
				iVar18 = 0;
				iVar0 = 7;
				func_246(Var1, &iLocal_290, bVar12);
			}
			if (bLocal_278)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
				if (!PED::IS_PED_INJURED(iLocal_299[0]))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
						{
							if (!func_185())
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								func_171(&uLocal_55, "REGETAU", "REAWA_THX", 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_299[0]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[0], false);
								}
								if (!PED::IS_PED_INJURED(iLocal_299[1]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[1], false);
								}
								if (SYSTEM::TIMERB() > 3000)
								{
									while (!func_203())
									{
										SYSTEM::WAIT(0);
									}
									func_199(9, 0);
									func_166(5);
									func_190(-1, 0);
									func_187();
									iVar18 = 0;
									iVar0 = 7;
									func_246(Var1, &iLocal_290, bVar12);
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_299[0], PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
						{
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, bVar12);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_299[0]);
						func_169();
						SYSTEM::WAIT(0);
						iVar18 = 0;
						iVar0 = 7;
						func_246(Var1, &iLocal_290, bVar12);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_289))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
			}
			if (bLocal_279)
			{
				if (!PED::IS_PED_INJURED(iLocal_289))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, 0, 1, 0))
					{
						if (!func_185())
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 3000, 2048, 2);
							func_171(&uLocal_55, "REGETAU", "REAWA_THANKS", 4, 0, 0, 0);
						}
						else
						{
							if (!PED::IS_PED_INJURED(iLocal_289))
							{
								PED::SET_PED_CAN_BE_TARGETTED(iLocal_289, true);
							}
							while (func_185())
							{
								SYSTEM::WAIT(0);
							}
							while (!func_203())
							{
								SYSTEM::WAIT(0);
							}
							EVENT::REMOVE_ALL_SHOCKING_EVENTS(1);
							func_199(9, 0);
							func_166(5);
							func_190(-1, 0);
							func_187();
							iVar18 = 0;
							iVar0 = 7;
							func_246(Var1, &iLocal_290, bVar12);
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_289, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, 0, 1, 0))
					{
						iVar18 = 0;
						iVar0 = 7;
						func_246(Var1, &iLocal_290, bVar12);
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_299[0]))
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
			}
		}
		switch (iVar0)
		{
			case 0:
				if (func_154())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
				if (func_142(1, Var1))
				{
					iVar18 = 0;
					iVar0 = 2;
				}
				break;
			
			case 2:
				if (func_130(3))
				{
					iLocal_313 = 1;
					func_129(1);
					iVar17 = MISC::GET_GAME_TIMER();
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				iVar18 = 0;
				break;
			
			case 4:
				iVar18 = 0;
				MISC::SET_BIT(&uVar11, 4);
				MISC::SET_BIT(&uVar11, 1);
				MISC::SET_BIT(&uVar11, 5);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (func_128())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								if ((VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 2, 0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0))
								{
									iVar0 = 5;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 6;
				}
				iVar0 = 5;
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar13, &uVar16, 1, 1077936128, 0);
				if (func_127(iVar17, 20000))
				{
					iVar0 = 6;
				}
				if (iVar0 != 5)
				{
				}
				break;
			
			case 5:
				if (iVar10 > 1)
				{
					if (!func_207())
					{
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar18 = 0;
							iVar0 = 6;
							break;
						}
						if (!iLocal_282)
						{
							if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0, 1))
							{
								iVar19 = 0;
								while (iVar19 < iLocal_293)
								{
									if (!PED::IS_PED_INJURED(iLocal_293[iVar19]))
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_293[iVar19], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
										PED::SET_PED_KEEP_TASK(iLocal_293[iVar19], true);
									}
									iVar19++;
								}
								if (!PED::IS_PED_INJURED(iLocal_289))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_289, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_289, true);
								}
								iLocal_282 = 1;
							}
						}
					}
				}
				else if (func_154())
				{
					iVar18 = 0;
					iVar0 = 7;
					func_246(Var1, &iLocal_290, bVar12);
				}
				if (iVar0 != 6)
				{
					if (func_1(&iVar10, Var1, &iLocal_290, &iVar18, &bVar12))
					{
						iVar0 = 6;
						break;
					}
				}
				break;
			
			case 6:
				iVar18 = 0;
				iVar0 = 7;
				func_246(Var1, &iLocal_290, bVar12);
				break;
				break;
			
			case 7:
				iVar18 = 0;
				break;
		}
		if (iVar0 != 7)
		{
			SYSTEM::WAIT(iVar18);
		}
	}
	func_246(Var1, &iLocal_290, bVar12);
}

int func_1(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12)//Position - 0xE0E
{
	int iVar0;
	vector3 vVar1[2];
	float fVar8[2];
	vector3 vVar11;
	float fVar14;
	vector3 vVar15[5];
	float fVar31;
	vector3 vVar32[5];
	int iVar48;
	vector3 vVar49;
	int iVar52[3];
	vector3 vVar56;
	vector3 vVar59;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	
	vVar15[0 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	vVar15[1 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	vVar15[2 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	vVar15[3 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	vVar15[4 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	vVar32[0 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	vVar32[1 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	vVar32[2 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	vVar32[3 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	vVar32[4 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0:
			if (func_126(vLocal_234, 300f, 1))
			{
				*iParam0 = 1;
			}
			break;
		
		case 1:
			*iParam11 = 0;
			func_120(39, 1);
			func_120(40, 1);
			func_120(41, 1);
			func_120(42, 1);
			func_120(43, 1);
			func_120(44, 1);
			if (func_119() == 0)
			{
				func_118(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (func_119() == 1)
			{
				func_118(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (func_119() == 2)
			{
				func_118(&uLocal_55, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (SYSTEM::VDIST(vLocal_234, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar8[0] = 58.2967f;
				vVar1[1 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar8[1] = 92.7793f;
				vVar11 = { 939.2422f, 3649.755f, 31.3536f };
				fVar14 = 260.4475f;
			}
			else if (SYSTEM::VDIST(vLocal_234, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar8[0] = 198.4093f;
				vVar1[1 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar8[1] = 254.133f;
				vVar11 = { 68.4259f, -1569.067f, 28.6027f };
				fVar14 = 64.1114f;
			}
			iLocal_233 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_234 - Vector(50f, 50f, 50f), vLocal_234 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 0);
			PATHFIND::SET_ROADS_IN_AREA(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), false, 1);
			STREAMING::REQUEST_MODEL(joaat("picador"));
			STREAMING::REQUEST_MODEL(joaat("stanier"));
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("picador")) || !STREAMING::HAS_MODEL_LOADED(joaat("stanier"))) || !STREAMING::HAS_MODEL_LOADED(joaat("patriot")))
			{
				SYSTEM::WAIT(0);
			}
			iVar52[0] = VEHICLE::CREATE_VEHICLE(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, true, true, false);
			iVar52[1] = VEHICLE::CREATE_VEHICLE(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, true, true, false);
			iVar52[2] = VEHICLE::CREATE_VEHICLE(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[0], 1084227584);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[1], 1084227584);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar52[2], 1084227584);
			if (iLocal_231 == 0)
			{
			}
			PED::ADD_RELATIONSHIP_GROUP("reCriminals", &iLocal_310);
			PED::ADD_RELATIONSHIP_GROUP("reShopKeep", &iLocal_311);
			PED::ADD_RELATIONSHIP_GROUP("reCops", &iLocal_312);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_312, iLocal_310);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_312);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_312, -1533126372);
			(*uParam10)[0] = PED::CREATE_PED(22, Param1, vVar1[0 /*3*/], fVar8[0], 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam10)[0], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam10)[0], iLocal_310);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam10)[0], joaat("weapon_appistol"), -1, true, true);
			PED::SET_PED_MONEY((*uParam10)[0], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam10)[0], 206, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[0], 65536, true);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[0], 9, 1, 0, 0);
			func_118(&uLocal_55, 2, (*uParam10)[0], "REGETRobber2", 0, 1);
			(*uParam10)[1] = PED::CREATE_PED(22, Param1.f_1, vVar1[1 /*3*/], fVar8[1], 1, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam10)[1], true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam10)[1], iLocal_310);
			WEAPON::GIVE_WEAPON_TO_PED((*uParam10)[1], joaat("weapon_pistol"), -1, true, true);
			PED::SET_PED_MONEY((*uParam10)[1], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
			PED::SET_PED_CONFIG_FLAG((*uParam10)[1], 206, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 1024, true);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam10)[1], 65536, true);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 0, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 3, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 4, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION((*uParam10)[1], 10, 1, 0, 0);
			AUDIO::SET_AMBIENT_VOICE_NAME((*uParam10)[1], "PACKIE_AI_Norm_Part1_Booth");
			func_118(&uLocal_55, 1, (*uParam10)[1], "PACKIE", 0, 1);
			iLocal_289 = PED::CREATE_PED(4, Param1.f_2, vVar11, fVar14, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_2);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_289, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_289, iLocal_311);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_289, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_118(&uLocal_55, 3, iLocal_289, "StoreOwner", 0, 1);
			iLocal_293[0] = PED::CREATE_PED(5, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[0], 17, true);
			TASK::TASK_COWER(iLocal_293[0], -1);
			iLocal_293[2] = PED::CREATE_PED(5, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[2], 17, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_293[2], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, 0);
			iLocal_293[3] = PED::CREATE_PED(4, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 1, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Param1.f_4);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_293[3], 17, true);
			*iParam0 = 2;
			break;
		
		case 2:
			if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_289, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[0], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[2], 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_293[3], 0)) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[0], 0)) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[1], 0))
			{
				if (((((PED::_HAS_STREAMED_PED_ASSETS_LOADED(iLocal_289) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iLocal_293[0])) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iLocal_293[2])) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iLocal_293[3])) && PED::_HAS_STREAMED_PED_ASSETS_LOADED((*uParam10)[0])) && PED::_HAS_STREAMED_PED_ASSETS_LOADED((*uParam10)[1]))
				{
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver@thugs");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
					STREAMING::REQUEST_ANIM_DICT("misslamar1ig_20");
					STREAMING::REQUEST_ANIM_DICT("random@getawaydriver");
					while (((!STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver@thugs") || !STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt")) || !STREAMING::HAS_ANIM_DICT_LOADED("misslamar1ig_20")) || !STREAMING::HAS_ANIM_DICT_LOADED("random@getawaydriver"))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						TASK::TASK_HANDS_UP(iLocal_289, -1, 0, -1, 0);
						if (!PED::IS_PED_INJURED((*uParam10)[0]))
						{
							TASK::TASK_PLAY_ANIM((*uParam10)[0], "random@getawaydriver@thugs", "base_a", 4f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
						if (!PED::IS_PED_INJURED((*uParam10)[1]))
						{
							TASK::TASK_PLAY_ANIM((*uParam10)[1], "random@getawaydriver@thugs", "base_b", 4f, -2f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY((*uParam10)[1], PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
						}
					}
					SYSTEM::SETTIMERA(0);
					*iParam0 = 3;
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[0]))
				{
					func_116(iLocal_293[0], "GENERIC_SHOCKED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[2]))
				{
					func_116(iLocal_293[2], "GENERIC_FRIGHTENED_HIGH", 24);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[3]))
				{
					func_116(iLocal_293[3], "GENERIC_FRIGHTENED_HIGH", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0, true, 0))
			{
				if (!iLocal_282)
				{
					if (!PED::IS_PED_INJURED(iLocal_293[0]))
					{
						TASK::TASK_SMART_FLEE_COORD(iLocal_293[0], vLocal_234, 200f, -1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_293[2]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_PAUSE(0, 250);
						TASK::TASK_SMART_FLEE_COORD(0, vLocal_234, 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_293[2], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
					}
					if (!PED::IS_PED_INJURED(iLocal_293[3]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_PAUSE(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, vLocal_234, 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_293[3], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
					}
					iLocal_282 = 1;
				}
			}
			if (func_77(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				*iParam0 = 4;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (PED::IS_COP_PED_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 4:
			if (!func_185())
			{
				if ((!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1])) && !PED::IS_PED_INJURED(iLocal_289))
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_DOWN", 4, 0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_289, iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
					}
					*iParam0 = 5;
				}
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_COP_PED_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 5:
			if (PED::IS_PED_INJURED(iLocal_289))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam10)[0], PLAYER::PLAYER_PED_ID(), -1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam10)[1], PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_289, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_289, 242628503) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, -1, 0, 0.25f, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "idle_a", 4f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_289, iLocal_309);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
			}
			if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.1f)
						{
							if (func_128() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
								if (!PED::IS_PED_INJURED(iLocal_289))
								{
									vLocal_273 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), false) };
									vVar56 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1.5f, -1.5f, 0f) };
									vVar59 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1.5f, 0f, 0f) };
									TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_289, 1500, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar56, iLocal_289, 3f, false, 0.5f, 1082130432, true, 0, 0, -957453492, 20000);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_290[0], iLocal_309);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_289, 2500, 0);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar59, iLocal_289, 3f, false, 0.5f, 1082130432, true, 0, 0, -957453492, 20000);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_290[1], iLocal_309);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
								}
								else
								{
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[0], func_75());
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[1], func_75());
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[0], 1);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[1], 0);
									if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0))
										{
											iVar62 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar62))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar62, true, 0);
												PED::DELETE_PED(&iVar62);
											}
										}
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0))
										{
											iVar62 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0);
											if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar62))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar62, true, 0);
												PED::DELETE_PED(&iVar62);
											}
										}
									}
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[0], 1);
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[1], 1);
								}
								*iParam0 = 6;
							}
							else if (!iLocal_280)
							{
								if (!func_185())
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_290[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									iLocal_280 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
				{
					if (!iLocal_280)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_290[1], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							iLocal_280 = 1;
						}
					}
				}
			}
			if (iLocal_280 || iLocal_281)
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.2f)
				{
					if (iLocal_230 == -1)
					{
						iLocal_230 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_230 = -1;
				}
				if (iLocal_230 != -1 && MISC::GET_GAME_TIMER() > iLocal_230 + 10000)
				{
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_290[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_290[0], true);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_290[0]));
					}
					if (!PED::IS_PED_INJURED(iLocal_290[1]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_290[1], true);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_290[1]));
					}
					*iParam11 = 0;
					*iParam0 = 20;
				}
			}
			func_74(uParam10, 120f);
			if (func_76())
			{
				*iParam0 = 18;
			}
			if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_COP_PED_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f))) || VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vLocal_234 - Vector(40f, 40f, 40f), vLocal_234 + Vector(40f, 40f, 40f)))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_POLICE", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			break;
		
		case 6:
			*iParam0 = 7;
			break;
		
		case 7:
			*iParam11 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (!func_73(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || !bLocal_276)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_128() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()), 3);
									while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
									{
										SYSTEM::WAIT(0);
									}
									if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_290[0]) && !PED::IS_PED_IN_GROUP(iLocal_290[1]))
										{
											TASK::CLEAR_PED_TASKS(iLocal_290[0]);
											TASK::CLEAR_PED_TASKS(iLocal_290[1]);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 10000, 2052, 4);
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[0], func_75());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[1], func_75());
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[0], 1);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[1], 0);
											if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
											{
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0))
												{
													iVar63 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar63))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar63, true, 0);
														PED::DELETE_PED(&iVar63);
													}
												}
												if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0))
												{
													iVar63 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0);
													if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar63))
													{
														ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar63, true, 0);
														PED::DELETE_PED(&iVar63);
													}
												}
											}
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[0], 1);
											PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[1], 1);
										}
									}
								}
								else if (!iLocal_280)
								{
									if (!func_185())
									{
										func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
										iLocal_280 = 1;
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[1], 10f, 10f, 10f, 0, 1, 0))
							{
								if (!iLocal_280)
								{
									if (!func_185())
									{
										func_171(&uLocal_55, "REGETAU", "REAWA_NDCAR", 4, 0, 0, 0);
										iLocal_280 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_290[0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_290[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) != 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[0], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[0], func_75());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[0], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[0], func_75());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[0], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_290[0]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_290[0], ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_290[0], 2f);
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[0], -875674219) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[0], -875674219) == 0)
					{
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_290[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) != 0) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[1], 242628503) == 7)
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[1], func_75());
								PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[1], 1);
							}
						}
					}
					else
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[1], func_75());
						PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[1], 1);
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((!PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_290[1]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_273, 2f, 2f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_290[1], ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), 2.5f, 2.5f, 2.5f, false, true, 0))
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_290[1], 2f);
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[1], -875674219) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[1], -875674219) == 0)
					{
					}
				}
			}
			if (!bLocal_276)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_INJURED(iLocal_290[0])) && !PED::IS_PED_INJURED(iLocal_290[1]))
					{
						if ((PED::IS_PED_IN_VEHICLE(iLocal_290[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_290[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_290[1], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_276 = true;
						}
						if ((PED::IS_PED_IN_VEHICLE(iLocal_290[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && !PED::IS_PED_IN_VEHICLE(iLocal_290[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_290[0], 20f, 20f, 20f, 0, 1, 0))
						{
							bLocal_276 = true;
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				if (func_73(uParam10, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 120f) || bLocal_276)
				{
					if (!PED::IS_PED_INJURED(iLocal_289))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_289, iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_289, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_289);
					}
					func_72();
					if (!CAM::IS_SPHERE_VISIBLE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_307 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, true, true, false);
						iLocal_303[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_303[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_307 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, true, true, false);
						iLocal_303[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_303[0], 0);
					}
					if (!CAM::IS_SPHERE_VISIBLE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_307 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, true, true, false);
						iLocal_303[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), -1, 1, true);
						iLocal_303[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_307, 6, joaat("s_m_y_cop_01"), 0, 1, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[0], joaat("weapon_pistol"), -1, false, true);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_303[1], joaat("weapon_pistol"), -1, false, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_303[0], 0);
					}
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
					SYSTEM::WAIT(1000);
					if (!bLocal_276)
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_COPS2", 4, 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam10)[iVar48]);
					}
					iLocal_224 = MISC::GET_GAME_TIMER();
					*iParam0 = 8;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0, true, 0))
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam10)[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED((*uParam10)[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
					*iParam0 = 20;
				}
			}
			func_74(uParam10, 120f);
			func_71();
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		
		case 8:
			func_70(iLocal_53);
			if (func_127(iLocal_224, 3000))
			{
				*iParam0 = 9;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		
		case 9:
			func_69(uParam10);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1533126372);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					VEHICLE::SET_VEHICLE_IS_WANTED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_307, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_307);
				}
				if (!PED::IS_PED_INJURED(iLocal_303[0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_303[0]));
				}
				if (!PED::IS_PED_INJURED(iLocal_303[1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_303[1]));
				}
				func_70(iLocal_53);
				*iParam0 = 10;
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && !PED::IS_PED_INJURED((*uParam10)[iVar48]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam10)[iVar48], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar48]))
						{
							uLocal_285[iVar48] = func_67((*uParam10)[iVar48], 0, 145);
							func_70(iLocal_53);
						}
					}
				}
				iVar48++;
			}
			func_74(uParam10, 120f);
			func_71();
			if (func_65())
			{
				*iParam0 = 12;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		
		case 10:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, -1533126372);
				func_70(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_310);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, -1533126372);
				vVar49 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar31 = 9999f;
				iVar64 = 0;
				while (iVar64 < vVar15.x)
				{
					if (SYSTEM::VDIST(vVar49, vVar15[iVar64 /*3*/]) < fVar31)
					{
						fVar31 = SYSTEM::VDIST(vVar49, vVar15[iVar64 /*3*/]);
						iLocal_223 = iVar64;
					}
					iVar64++;
				}
				if (func_64(vVar15[iLocal_223 /*3*/], 0f, 0f, 0f, 0))
				{
					iLocal_223 = 0;
				}
				iLocal_53 = func_62(vVar15[iLocal_223 /*3*/], 1);
				if (func_119() == 2 && !func_61())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_288))
					{
						iLocal_288 = func_62(vLocal_270, 0);
						HUD::SET_BLIP_SPRITE(iLocal_288, 269);
						func_59();
					}
				}
				iLocal_224 = MISC::GET_GAME_TIMER();
				if (!iLocal_222)
				{
					func_169();
					SYSTEM::WAIT(0);
					func_171(&uLocal_55, "REGETAU", "REAWA_HOM", 4, 0, 0, 0);
					iLocal_222 = 1;
				}
				*iParam0 = 11;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		
		case 11:
			*iParam11 = 0;
			func_58(uParam10);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_70(iLocal_53);
				*iParam0 = 8;
			}
			else
			{
				if (func_57(vVar15[iLocal_223 /*3*/]))
				{
					func_171(&uLocal_55, "REGETAU", "REAWA_CULT", 4, 0, 0, 0);
				}
				if (func_55())
				{
					func_169();
					SYSTEM::WAIT(0);
					if (func_54())
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_CULT2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_CULT3", 4, 0, 0, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vVar15[iLocal_223 /*3*/], Global_19, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_290[0], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_290[1], vVar15[iLocal_223 /*3*/], 20f, 20f, 20f, false, true, 0))
					{
						func_70(iLocal_53);
						iVar48 = 0;
						while (iVar48 <= (*uParam10 - 1))
						{
							if (iLocal_220)
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
								SYSTEM::WAIT(1000);
								iLocal_220 = 0;
							}
							if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY((*uParam10)[iVar48]);
								PED::REMOVE_PED_FROM_GROUP((*uParam10)[iVar48]);
								PED::REMOVE_GROUP(iLocal_233);
							}
							iVar48++;
						}
						*iParam0 = 13;
					}
				}
			}
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && !PED::IS_PED_INJURED((*uParam10)[iVar48]))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE((*uParam10)[iVar48], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar48]))
						{
							uLocal_285[iVar48] = func_67((*uParam10)[iVar48], 0, 145);
						}
					}
				}
				iVar48++;
			}
			func_74(uParam10, 120f);
			func_71();
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.2f)
			{
				if (iLocal_230 == -1)
				{
					iLocal_230 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_230 = -1;
			}
			if (iLocal_230 != -1 && MISC::GET_GAME_TIMER() > (iLocal_230 + 60000))
			{
				func_169();
				SYSTEM::WAIT(0);
				func_171(&uLocal_55, "REGETAU", "REAWA_COPS", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_290[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_290[0], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_290[0], true);
				}
				if (!PED::IS_PED_INJURED(iLocal_290[1]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_290[1], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_290[1], true);
				}
				*iParam11 = 0;
				*iParam0 = 20;
			}
			if (func_65())
			{
				*iParam0 = 12;
			}
			if (func_76())
			{
				*iParam0 = 18;
			}
			break;
		
		case 12:
			func_167();
			if (bLocal_278)
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_290[0]);
				PED::REMOVE_PED_FROM_GROUP(iLocal_290[1]);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				func_169();
				SYSTEM::WAIT(0);
				func_171(&uLocal_55, "REGETAU", "REAWA_COPS3", 4, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*uParam10)[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[0], iLocal_309);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
					PED::SET_PED_KEEP_TASK((*uParam10)[0], true);
				}
				if (!PED::IS_PED_INJURED((*uParam10)[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 4194304);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[1], iLocal_309);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
					PED::SET_PED_KEEP_TASK((*uParam10)[1], true);
				}
				*iParam0 = 20;
			}
			break;
		
		case 13:
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 5f)
			{
				iVar48 = 0;
				while (iVar48 <= (*uParam10 - 1))
				{
					if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS((*uParam10)[iVar48], 242628503) != 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam10)[iVar48], 242628503) != 0)
						{
							if (!PED::IS_PED_INJURED((*uParam10)[iVar48]))
							{
								iVar0 = 0;
								iLocal_228 = iVar48;
							}
						}
					}
					iVar48++;
				}
				*iParam0 = 14;
			}
			break;
		
		case 14:
			iVar48 = 0;
			while (iVar48 < *uParam10)
			{
				if (!PED::IS_PED_INJURED((*uParam10)[0]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam10)[iVar48], 4000, 2048, 2);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194816);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar32[iLocal_223 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE((*uParam10)[0], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					if (!PED::IS_PED_INJURED((*uParam10)[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 2000, 4194816);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar32[iLocal_223 /*3*/], 2f, -1, 1048576000, 0, 1193033728);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE((*uParam10)[1], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					iVar0 = 0;
					PED::SET_PED_KEEP_TASK((*uParam10)[iVar48], true);
					TASK::TASK_LOOK_AT_ENTITY((*uParam10)[iVar48], PLAYER::PLAYER_PED_ID(), 4000, 2052, 2);
					func_169();
					SYSTEM::WAIT(0);
					if (iLocal_228 > 0)
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_STOP2", 4, 0, 0, 0);
					}
					else
					{
						func_171(&uLocal_55, "REGETAU", "REAWA_STOP", 4, 0, 0, 0);
					}
					*iParam0 = 15;
				}
				iVar48++;
			}
			break;
		
		case 15:
			if (!*bParam12)
			{
				if (!PED::IS_PED_INJURED((*uParam10)[1]))
				{
					if (!iLocal_220)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_220 = 1;
					}
					func_18(func_119(), 1, 1000, 0, 1);
					*bParam12 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED((*uParam10)[0]) && !PED::IS_PED_INJURED((*uParam10)[1]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam10)[0], 0) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam10)[1], 0))
				{
					HUD::CLEAR_PRINTS();
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					while (!func_203())
					{
						SYSTEM::WAIT(0);
					}
					func_3(10, 0);
					if (func_2(77))
					{
						func_199(9, 0);
					}
					func_166(6);
					func_190(-1, 0);
					func_187();
					*iParam0 = 20;
				}
			}
			break;
		
		case 16:
			*bParam12 = 1;
			*iParam0 = 20;
			break;
		
		case 17:
			break;
		
		case 18:
			iLocal_283 = 1;
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_310, iLocal_310);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (!PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_285[iVar65]))
					{
						HUD::REMOVE_BLIP(&(uLocal_285[iVar65]));
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_290[iVar65], 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_290[iVar65], 0, 0);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_53))
						{
							HUD::REMOVE_BLIP(&iLocal_53);
						}
						PED::REMOVE_PED_FROM_GROUP(iLocal_290[iVar65]);
						TASK::TASK_COMBAT_PED(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			func_169();
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_290[1]))
			{
				func_171(&uLocal_55, "REGETAU", "REAWA_ATTP", 4, 0, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_290[0]))
			{
				func_171(&uLocal_55, "REGETAU", "REAWA_ATTB", 4, 0, 0, 0);
			}
			if (!bLocal_279)
			{
				if (!PED::IS_PED_INJURED(iLocal_289))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_289, false);
					TASK::TASK_PLAY_ANIM(iLocal_289, "random@getawaydriver", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
				}
			}
			iVar65 = 0;
			while (iVar65 < iLocal_293)
			{
				if (!PED::IS_PED_INJURED(iLocal_293[iVar65]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_293[iVar65], PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_293[iVar65], true);
				}
				iVar65++;
			}
			*iParam0 = 19;
			break;
		
		case 19:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_310, 1862763509);
			iVar65 = 0;
			while (iVar65 < iLocal_290)
			{
				if (PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_285[iVar65]))
					{
						HUD::REMOVE_BLIP(&(uLocal_285[iVar65]));
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_290[iVar65]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar65]))
					{
						uLocal_285[iVar65] = func_67(iLocal_290[iVar65], 1, 145);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_290[iVar65]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_290[iVar65]);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_290[iVar65], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_290[iVar65], 0, 0);
						TASK::TASK_COMBAT_PED(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_290[iVar65], true);
					}
					else
					{
						TASK::TASK_COMBAT_PED(iLocal_290[iVar65], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_290[iVar65], true);
					}
				}
				iVar65++;
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_53))
			{
				HUD::REMOVE_BLIP(&iLocal_53);
			}
			break;
		
		case 20:
			if (!func_185())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x367F
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	
	MISC::SET_BIT(&(Global_111560.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_111560.f_1.f_119), 14);
			break;
		
		case 13:
			MISC::SET_BIT(&(Global_111560.f_1.f_119), 16);
			break;
		
		case 12:
			MISC::SET_BIT(&(Global_111560.f_1.f_119), 15);
			break;
		
		case 11:
			MISC::SET_BIT(&(Global_111560.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (func_17(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = func_15(iParam0);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_15(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, 0, iVar0, "", 0);
		if (!func_14(45))
		{
			func_4("AM_H_CREWU", 2, 0, 20000, 10000, func_7(), 0, 131, 0);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x37A9
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x37CB
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_6();
	}
}

void func_6()//Position - 0x399F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_7()//Position - 0x3ABF
{
	func_8();
	switch (Global_111560.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_8()//Position - 0x3B05
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_11(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_9(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111560.f_2358.f_539.f_4321))
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

bool func_9(int iParam0)//Position - 0x3C02
{
	return Global_41396 == iParam0;
}

bool func_10(int iParam0)//Position - 0x3C10
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x3C1C
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)//Position - 0x3C59
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)//Position - 0x3C7E
{
	return Global_1798[iParam0 /*29*/];
}

int func_14(int iParam0)//Position - 0x3C8D
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

var func_15(int iParam0)//Position - 0x3CD0
{
	return func_16(iParam0);
}

char* func_16(int iParam0)//Position - 0x3CDE
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

int func_17(int iParam0)//Position - 0x3DC1
{
	return Global_94574[iParam0 /*5*/];
}

void func_18(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3DD1
{
	int iVar0;
	int iVar1;
	
	if (func_53(iParam0) == 3)
	{
		return;
	}
	if (func_53(iParam0) == 4)
	{
		return;
	}
	func_19(func_53(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_19(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3EA3
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_52();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_51(99, 1);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_35(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_30(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_30(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_50(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_30(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_29(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_51(95, iParam3);
					break;
				
				case 1:
					func_51(97, iParam3);
					break;
				
				case 2:
					func_51(96, iParam3);
					break;
			}
			func_51(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_22(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_22(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_21(iParam0);
	if (Global_41396 == 15)
	{
		func_20(0);
	}
	return 1;
}

void func_20(bool bParam0)//Position - 0x44A4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_21(int iParam0)//Position - 0x4726
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_22(int iParam0)//Position - 0x4780
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_28(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_28(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_28(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_28(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_25(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_25(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_25(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_25(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_25(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_25(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_24() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_24() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_23(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_23(int iParam0)//Position - 0x4911
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_24()//Position - 0x4A0E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4A1B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_26(var uParam0)//Position - 0x4A4B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_27()//Position - 0x4A7F
{
	return Global_1312745;
}

int func_28(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4A8B
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
		iParam2 = func_27();
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

void func_29(int iParam0)//Position - 0x50DD
{
	func_51(93, iParam0);
	func_51(29, iParam0);
	func_51(30, iParam0);
}

bool func_30(int iParam0)//Position - 0x50FD
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
	
	if (iParam0 == 8)
	{
		return func_32(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_32(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_32(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_32(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_31(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_31(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_31(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_31(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_31(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_31(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111560.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_24() /*10828*/].f_6168.f_10, iParam0);
}

int func_31(int iParam0, int iParam1, int iParam2)//Position - 0x52AD
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x52DF
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_34(iParam0, iParam1);
	uVar2 = func_33(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_33(int iParam0)//Position - 0x531C
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

int func_34(int iParam0, int iParam1)//Position - 0x56B8
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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

int func_35(bool bParam0)//Position - 0x5A31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_49(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_36(27, 1);
	return 1;
}

int func_36(int iParam0, int iParam1)//Position - 0x5AE8
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_37(iParam0, iParam1);
}

int func_37(int iParam0, int iParam1)//Position - 0x5B03
{
	if (func_9(14) && !func_48(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_47(&Global_4269915))
	{
		if (func_45(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_38(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_38(var uParam0, int iParam1)//Position - 0x5BA0
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_48(iParam1))
	{
		return 0;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	func_41(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_39(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_39(var uParam0, int iParam1)//Position - 0x5C51
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_9(14) && !func_48(iParam1))
	{
		return 0;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_40(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_40(var uParam0, int iParam1)//Position - 0x5CCC
{
	return (*uParam0)[iParam1] == 78;
}

void func_41(var uParam0)//Position - 0x5CDD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_42(uParam0, iVar0);
		iVar0++;
	}
	func_43(uParam0, (Global_4269914 - 0.5f));
}

void func_42(var uParam0, int iParam1)//Position - 0x5D11
{
	(*uParam0)[iParam1] = 78;
}

void func_43(var uParam0, float fParam1)//Position - 0x5D21
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_44(var uParam0)//Position - 0x5D3E
{
	return uParam0->f_80;
}

bool func_45(var uParam0, int iParam1)//Position - 0x5D4A
{
	return func_46(uParam0, iParam1) != -1;
}

int func_46(var uParam0, int iParam1)//Position - 0x5D5C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_47(var uParam0)//Position - 0x5D89
{
	return uParam0->f_79 == 1;
}

int func_48(int iParam0)//Position - 0x5D97
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0x5DE7
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)//Position - 0x5E38
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_51(int iParam0, int iParam1)//Position - 0x5E5B
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_52()//Position - 0x5EB8
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_53(int iParam0)//Position - 0x5F2D
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_54()//Position - 0x5F3E
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_55()//Position - 0x5F5F
{
	if (func_119() == 2)
	{
		if (func_56())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_30976)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_30976 = 1;
					if (!Global_30975)
					{
						Global_30975 = 1;
						return 1;
					}
				}
			}
			else if (Global_30976)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_30976 = 0;
			}
		}
	}
	return 0;
}

bool func_56()//Position - 0x5FDA
{
	return Global_30971;
}

int func_57(vector3 vParam0)//Position - 0x5FE5
{
	if (func_119() == 2)
	{
		if (func_56() && !Global_30974)
		{
			if (fLocal_52 == -1f)
			{
				fLocal_52 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > (fLocal_52 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_30974 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_58(var uParam0)//Position - 0x6072
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_227)
			{
				case 0:
					iLocal_226 = MISC::GET_GAME_TIMER();
					iLocal_227++;
					break;
				
				case 1:
					if (func_127(iLocal_226, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_PITCH", 4, 0, 0, 0);
							iLocal_227++;
						}
					}
					break;
				
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SUREM", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SUREF", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SURET", 4, 0, 0, 0);
						}
						iLocal_227++;
					}
					break;
				}
			}
	}
}

void func_59()//Position - 0x6193
{
	if (func_119() == 2)
	{
		if (!Global_30973)
		{
			func_60("CULT_BLIP_HELP", -1);
			Global_30973 = 1;
		}
	}
}

void func_60(char[4] cParam0, int iParam1)//Position - 0x61B7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(cParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_61()//Position - 0x61CE
{
	if (Global_111560.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

int func_62(vector3 vParam0, bool bParam3)//Position - 0x61EA
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)//Position - 0x6216
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_64(vector3 vParam0, vector3 vParam3, bool bParam6)//Position - 0x622D
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_65()//Position - 0x6274
{
	if (func_66())
	{
		if (((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_246, 50f, 50f, 50f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_249, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_252, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_255, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_258, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_261, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_264, 50f, 50f, 50f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_267, 50f, 50f, 50f, false, true, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 0.2f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()//Position - 0x63BF
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_290[0], iVar0, 0) && PED::IS_PED_IN_VEHICLE(iLocal_290[1], iVar0, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_67(int iParam0, bool bParam1, int iParam2)//Position - 0x642D
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)//Position - 0x6477
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_63(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_69(var uParam0)//Position - 0x651B
{
	if (!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], (*uParam0)[1], 15f, 15f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[0], PLAYER::PLAYER_PED_ID(), 15f, 15f, 15f, 0, 1, 0))
		{
			switch (iLocal_225)
			{
				case 0:
					iLocal_226 = MISC::GET_GAME_TIMER();
					iLocal_225++;
					break;
				
				case 1:
					if (func_127(iLocal_226, 2000))
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM2", 4, 0, 0, 0);
							iLocal_225++;
						}
					}
					break;
				
				case 2:
					if (!func_185())
					{
						if (func_119() == 0)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4M", 4, 0, 0, 0);
						}
						if (func_119() == 1)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4F", 4, 0, 0, 0);
						}
						if (func_119() == 2)
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_HOM4T", 4, 0, 0, 0);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_70(int iParam0)//Position - 0x663C
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		HUD::REMOVE_BLIP(&iParam0);
	}
}

void func_71()//Position - 0x6653
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (!PED::IS_PED_INJURED(iLocal_290[iVar0]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (!func_128())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_290[iVar0], true);
					if (PED::IS_PED_IN_GROUP(iLocal_290[iVar0]))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_290[iVar0]);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_290[iVar0], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_290[iVar0], 0, 0);
					}
					if (!iLocal_281)
					{
						if (!func_185())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_CAR", 4, 0, 0, 0);
							iLocal_281 = 1;
						}
					}
				}
				else
				{
					iLocal_281 = 0;
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_290[iVar0], false);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_290[iVar0], 1227113341) == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_290[iVar0]);
					}
					if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
					{
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[0], 1);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[1], 0);
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())) == joaat("bus"))
						{
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0))
							{
								iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, 0);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, 0);
									PED::DELETE_PED(&iVar1);
								}
							}
							if (!VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0))
							{
								iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, 0);
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, 0);
									PED::DELETE_PED(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_GROUP(iLocal_290[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_290[iVar0]);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_290[iVar0], func_75());
				PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_290[iVar0], 1);
				if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
				{
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[0], 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_290[1], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_72()//Position - 0x68B2
{
	if (!func_61())
	{
		if (func_119() == 2)
		{
			Global_30971 = 1;
		}
	}
}

int func_73(var uParam0, int iParam1, float fParam2)//Position - 0x68CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
			{
				if (fParam2 > 0f)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_74(var uParam0, float fParam1)//Position - 0x6938
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_285[iVar0]));
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_285[iVar0]));
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
					{
						uLocal_285[iVar0] = func_67((*uParam0)[iVar0], 0, 145);
					}
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
			{
				uLocal_285[iVar0] = func_67((*uParam0)[iVar0], 0, 145);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam1, fParam1, fParam1, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_285[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_75()//Position - 0x6A63
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_76()//Position - 0x6A73
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_290)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_290[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_290[iVar0]))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_290[iVar0]))
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(iLocal_290[0]) && !PED::IS_PED_INJURED(iLocal_290[1]))
							{
								if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_290[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_290[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_290[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_290[1]))
								{
									if (iLocal_229 == -1)
									{
										iLocal_229 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									iLocal_229 = -1;
								}
							}
						}
					}
					if (!iLocal_284)
					{
						if (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > iLocal_229 + 1000)
						{
							func_169();
							SYSTEM::WAIT(0);
							func_171(&uLocal_55, "REGETAU", "REAWA_AIM", 4, 0, 0, 0);
							iLocal_284 = 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
						{
							return 1;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), 1) && ENTITY::GET_ENTITY_HEALTH(iLocal_290[iVar0]) < 190) || (iLocal_229 != -1 && MISC::GET_GAME_TIMER() > iLocal_229 + 5000))
					{
						return 1;
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						return 1;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_290[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_77(var uParam0, int iParam1)//Position - 0x6C38
{
	int iVar0;
	
	if (!iLocal_221)
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam0 - 1))
		{
			if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam0)[iVar0])) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_285[iVar0]))
					{
						if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
						{
							if (!func_207())
							{
								func_106(1);
								func_105(1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_308, 0))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_308, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_308, 50f, 50f, 50f, 0, 1, 0))
									{
										func_80(iLocal_308, 0, 145);
									}
								}
							}
							uLocal_285[iVar0] = func_67((*uParam0)[iVar0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_285[iVar0], false);
							func_70(iLocal_54);
						}
					}
					if (!func_185())
					{
						if (iLocal_232 < MISC::GET_GAME_TIMER())
						{
							func_171(&uLocal_55, "REGETAU", "REAWA_SHOUT", 4, 0, 0, 0);
							iLocal_232 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0, true, 0))
					{
						func_78();
						if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
						{
							if (!func_185())
							{
								if (func_128() && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_START", 4, 0, 0, 0);
									iLocal_221 = 1;
								}
								else
								{
									func_171(&uLocal_55, "REGETAU", "REAWA_START2", 4, 0, 0, 0);
									iLocal_221 = 1;
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_285[0]))
								{
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_285[0], true);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_285[1]))
								{
									HUD::SHOW_HEIGHT_ON_BLIP(uLocal_285[1], true);
								}
								if (!PED::IS_PED_INJURED((*uParam0)[1]) && !PED::IS_PED_INJURED(iLocal_289))
								{
									PED::SET_PED_RESET_FLAG((*uParam0)[1], 156, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
									TASK::TASK_PLAY_ANIM(0, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_PLAY_ANIM(0, "combat@gestures@pistol@halt", "180", 2f, -2f, -1, 0, 0, 0, 0, 0);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_289, -1, 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
									TASK::TASK_PERFORM_SEQUENCE((*uParam0)[1], iLocal_309);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
								}
								TASK::TASK_LOOK_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_78()//Position - 0x6F18
{
	Global_19671 = 0;
	func_79();
}

void func_79()//Position - 0x6F28
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x6F7F
{
	var uVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		iVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1))
		{
			if (MISC::GET_HASH_KEY(iVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_81(iParam0, iParam2);
	return 1;
}

void func_81(int iParam0, int iParam1)//Position - 0x6FBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_87(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_82(iParam0, &(Global_111560.f_32744.f_5510));
}

void func_82(int iParam0, var uParam1)//Position - 0x71C1
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_86(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_85(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_84(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_83(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_83(int iParam0)//Position - 0x746C
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_84(int iParam0, var uParam1, var uParam2)//Position - 0x751C
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_85(int iParam0)//Position - 0x770F
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_86(var uParam0)//Position - 0x772F
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_87(int iParam0)//Position - 0x77E0
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_103(iParam0, 0, 0)) || func_103(iParam0, 1, 0)) || func_103(iParam0, 2, 0)) || func_102(iParam0) != 145) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0)) || func_98(iParam0)) || !func_88(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_100(iParam0))
		{
		}
		if (func_100(iParam0))
		{
		}
		if (func_103(iParam0, 0, 0))
		{
		}
		if (func_103(iParam0, 1, 0))
		{
		}
		if (func_103(iParam0, 2, 0))
		{
		}
		if (func_102(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_88(int iParam0)//Position - 0x78BD
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_89(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_89(int iParam0, bool bParam1)//Position - 0x7A6E
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
		if (!func_97())
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
		if ((((!func_96() && !func_95()) && !func_94()) && !func_93()) && !func_97())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_94())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_92(iParam0))
		{
			return 0;
		}
	}
	if (!func_90(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_90(int iParam0)//Position - 0x7BEE
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_91())
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

int func_91()//Position - 0x7CBA
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_92(int iParam0)//Position - 0x7CD1
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

int func_93()//Position - 0xA19E
{
	return 0;
}

int func_94()//Position - 0xA1A7
{
	return 1;
}

int func_95()//Position - 0xA1B0
{
	return 1;
}

int func_96()//Position - 0xA1B9
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_97()//Position - 0xA1D2
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

int func_98(int iParam0)//Position - 0xA28D
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_89(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)//Position - 0xA2D3
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

int func_100(int iParam0)//Position - 0xA30E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96030[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_101(int iParam0)//Position - 0xA38A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0xA472
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_103(int iParam0, int iParam1, bool bParam2)//Position - 0xA4D5
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_104(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_111560.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_104(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xA546
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_105(bool bParam0)//Position - 0xA61F
{
	if (bParam0)
	{
		StringCopy(&Global_110616, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_110610 = 1;
	}
	else
	{
		StringCopy(&Global_110616, "NULL", 24);
		Global_110610 = 0;
	}
}

int func_106(int iParam0)//Position - 0xA64B
{
	if (func_110())
	{
		Global_111550 = 1;
		Global_111547 = MISC::GET_GAME_TIMER();
		if (func_109(Global_111549))
		{
			func_107(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_109(Global_111549))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_107(int iParam0)//Position - 0xA69E
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_108(iParam0), -1);
					Global_111560.f_24990.f_2++;
					MISC::SET_BIT(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_111556, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_108(iParam0), -1);
					Global_111560.f_24990.f_3++;
					MISC::SET_BIT(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_111556, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_60(func_108(iParam0), -1);
					Global_111560.f_24990.f_4++;
					MISC::SET_BIT(&Global_111556, 2);
				}
			}
			break;
	}
}

char* func_108(int iParam0)//Position - 0xA77F
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_109(int iParam0)//Position - 0xA7C3
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_110()//Position - 0xA7F2
{
	switch (func_111(&Global_30795, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xA828
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_115(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_113(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_112(uParam0, iParam4);
		}
	}
	return 2;
}

void func_112(var uParam0, int iParam1)//Position - 0xA95F
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_113(int iParam0)//Position - 0xA9AE
{
	return func_114(iParam0, Global_41396);
}

int func_114(int iParam0, int iParam1)//Position - 0xA9BF
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

int func_115(int iParam0)//Position - 0xABA0
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_116(int iParam0, char* sParam1, int iParam2)//Position - 0xABC2
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_117(iParam2), 1);
}

int func_117(int iParam0)//Position - 0xABD9
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_118(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xADCE
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_119()//Position - 0xAE69
{
	func_8();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_120(int iParam0, bool bParam1)//Position - 0xAE82
{
	if (bParam1)
	{
		if (!func_125(iParam0, 2, 1))
		{
			func_124(iParam0, 2, 1);
		}
	}
	else if (func_125(iParam0, 2, 1))
	{
		func_121(iParam0, 2, 1);
	}
}

void func_121(int iParam0, int iParam1, bool bParam2)//Position - 0xAEB9
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
		if (func_123() == 0)
		{
			iVar0 = func_31(func_122(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_25(func_122(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_122(int iParam0)//Position - 0xAF2B
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

int func_123()//Position - 0xB25B
{
	return Global_30736;
}

void func_124(int iParam0, int iParam1, bool bParam2)//Position - 0xB266
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
		if (func_123() == 0)
		{
			iVar0 = func_31(func_122(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_25(func_122(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

int func_125(int iParam0, int iParam1, bool bParam2)//Position - 0xB2D8
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
		if (func_123() == 0)
		{
			return MISC::IS_BIT_SET(func_31(func_122(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam3, int iParam4)//Position - 0xB342
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam0, fParam3, fParam3, fParam3, false, true, 0))
	{
		if (iParam4 == 0)
		{
			if (CAM::IS_SPHERE_VISIBLE(vParam0, 5f))
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

int func_127(int iParam0, int iParam1)//Position - 0xB380
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_128()//Position - 0xB3A1
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 2)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_129(bool bParam0)//Position - 0xB4D9
{
	if (bParam0)
	{
	}
}

int func_130(int iParam0)//Position - 0xB4E6
{
	if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		if (func_131(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_131(int iParam0)//Position - 0xB503
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_9(6) || func_9(7))
			{
				return 1;
			}
			else
			{
				return func_131(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_113(5))
			{
				if (func_132(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0xB575
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_119();
				if (!func_10(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_110607) || Global_30738) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_141()) || Global_30738) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_110607) || Global_30738) || func_140()) || func_139(8, -1)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_141()) || Global_110607) || Global_30738) || func_140()) || func_139(8, -1)) || func_138()) || func_137()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_141() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_139(8, -1)) || func_135()) || func_134()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_139(8, -1) || func_138()) || func_137()) || func_134()) || func_133())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_141()) || Global_30738) || func_140()) || func_139(8, -1)) || func_137()) || func_136()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_141()) || func_137()) || Global_110607) || Global_30738) || func_140()) || Global_42561) || func_139(8, -1)) || func_136()) || func_134()) || func_135()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_141()) || Global_110607) || Global_30738) || func_140()) || func_139(8, -1)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_133()//Position - 0xBC92
{
	return Global_98708.f_1;
}

int func_134()//Position - 0xBCA0
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_135()//Position - 0xBCC6
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_136()//Position - 0xBCE0
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_137()//Position - 0xBD0A
{
	return Global_98721.f_346 > 0;
}

bool func_138()//Position - 0xBD1B
{
	return Global_98721.f_345 > 0;
}

bool func_139(int iParam0, int iParam1)//Position - 0xBD2C
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

var func_140()//Position - 0xBD67
{
	return Global_1312873;
}

int func_141()//Position - 0xBD73
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_142(int iParam0, struct<7> Param1, var uParam8, var uParam9)//Position - 0xBD8F
{
	if (iParam0 == 1)
	{
		func_152(&uLocal_314, Param1);
		func_152(&uLocal_314, Param1.f_1);
		func_152(&uLocal_314, Param1.f_2);
		func_152(&uLocal_314, Param1.f_3);
		func_152(&uLocal_314, Param1.f_4);
		func_152(&uLocal_314, Param1.f_5);
		func_152(&uLocal_314, Param1.f_6);
		if (func_149(&uLocal_314))
		{
			return 1;
		}
	}
	else
	{
		func_143(&uLocal_314, 0);
	}
	return 0;
}

void func_143(var uParam0, bool bParam1)//Position - 0xBE02
{
	int iVar0;
	
	if (!bParam1)
	{
		func_145(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_144(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_144(var uParam0)//Position - 0xBE3D
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_145(var uParam0)//Position - 0xBE56
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_146(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_146(var uParam0)//Position - 0xBE8F
{
	func_147(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_147(int iParam0, char* sParam1, int iParam2)//Position - 0xBEA6
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		switch (func_148(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_148(int iParam0)//Position - 0xBF66
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_149(var uParam0)//Position - 0xBF92
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_150(var uParam0)//Position - 0xBFF4
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(int iParam0, char* sParam1, int iParam2)//Position - 0xC00C
{
	if (MISC::IS_BIT_SET(iParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_148(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_152(var uParam0, int iParam1)//Position - 0xC100
{
	func_153(uParam0, 0, iParam1, "NULL", 0);
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xC114
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_154()//Position - 0xC1FC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vLocal_49) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_161())
	{
		return 1;
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_155(float fParam0, bool bParam1)//Position - 0xC282
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_10(func_119()))
		{
			iVar36 = func_7();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_111560.f_18569[iVar32 /*6*/], 3))
				{
					func_156(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_156(int iParam0, var uParam1)//Position - 0xC339
{
	switch (iParam0)
	{
		case 0:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 1:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 2:
			func_157(uParam1, "Barry1", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 3:
			func_157(uParam1, "Barry2", func_159(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 4:
			func_157(uParam1, "Barry3", func_159(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 5:
			func_157(uParam1, "Barry3A", func_159(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 6:
			func_157(uParam1, "Barry3C", func_159(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 7:
			func_157(uParam1, "Barry4", func_159(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_158(iParam0), 0, 0);
			break;
		
		case 8:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 9:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 10:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 11:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 12:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 13:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 14:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 15:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 16:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 17:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 18:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 19:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 20:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 21:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 22:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_158(iParam0), 1, 0);
			break;
		
		case 23:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_158(iParam0), 0, 1);
			break;
		
		case 24:
			func_157(uParam1, "Hao1", func_159(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_158(iParam0), 0, 1);
			break;
		
		case 25:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 26:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 27:
			func_157(uParam1, "Josh1", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 28:
			func_157(uParam1, "Josh2", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 29:
			func_157(uParam1, "Josh3", func_159(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 30:
			func_157(uParam1, "Josh4", func_159(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 31:
			func_157(uParam1, "Maude1", func_159(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 32:
			func_157(uParam1, "Minute1", func_159(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 33:
			func_157(uParam1, "Minute2", func_159(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 34:
			func_157(uParam1, "Minute3", func_159(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 35:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 36:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 37:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 38:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 39:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 40:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 41:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_158(iParam0), 1, 1);
			break;
		
		case 42:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 43:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 1);
			break;
		
		case 44:
			func_157(uParam1, "Omega1", func_159(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 45:
			func_157(uParam1, "Omega2", func_159(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 46:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 47:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 48:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 49:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 50:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 51:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 52:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 54:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 55:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 56:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_158(iParam0), 0, 0);
			break;
		
		case 53:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_158(iParam0), 1, 0);
			break;
		
		case 57:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 58:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 59:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 60:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 61:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		case 62:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_158(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xD580
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { vParam7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_158(int iParam0)//Position - 0xD611
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_159(int iParam0)//Position - 0xD957
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_160(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_160(int iParam0)//Position - 0xD98F
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_161()//Position - 0xDDDC
{
	if (func_164() && !func_165())
	{
		return 1;
	}
	if (func_163() && func_162())
	{
		return 1;
	}
	return 0;
}

bool func_162()//Position - 0xDE0E
{
	return Global_111278 > 0;
}

int func_163()//Position - 0xDE1C
{
	if (Global_95621 != -1)
	{
		return 1;
	}
	return 0;
}

int func_164()//Position - 0xDE31
{
	if (Global_95621 != -1)
	{
		return MISC::IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_165()//Position - 0xDE57
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_166(int iParam0)//Position - 0xDE74
{
	Global_111546 = iParam0;
}

void func_167()//Position - 0xDE82
{
	if (!bLocal_278)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_186(PLAYER::PLAYER_ID()) - Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &vLocal_243, 1, 1077936128, 0);
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_243, 10f))
		{
			vLocal_237 = { vLocal_243 };
			bLocal_277 = true;
		}
		else
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_186(PLAYER::PLAYER_ID()) + Vector(0f, 10f, 0f), MISC::GET_RANDOM_INT_IN_RANGE(5, 15), &vLocal_243, 1, 1077936128, 0);
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_243, 10f))
			{
				vLocal_237 = { vLocal_243 };
				bLocal_277 = true;
			}
			if (bLocal_277)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[0]))
				{
					iLocal_299[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_237 + Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_65())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[0], joaat("weapon_pistol"), -1, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[0], iLocal_312);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[0], true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_299[0], 50f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_299[0], true);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 6f, 3f, 1073741824, 0);
						TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_299[0], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_299[0], true);
						func_118(&uLocal_55, 4, iLocal_299[0], "REGETCop", 0, 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[1]))
				{
					iLocal_299[1] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), vLocal_237 - Vector(0f, 5f, 0f), 0f, 1, true);
					if (func_65())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[0], joaat("weapon_pistol"), -1, false, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[1], iLocal_312);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[1], true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_299[1], 50f, 0);
						PED::SET_PED_KEEP_TASK(iLocal_299[1], true);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[1], true);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(iLocal_299[1], 68.7217f, -1569.83f, 28.6027f, 3f, 0, 0, 786603, -1082130432);
						PED::SET_PED_KEEP_TASK(iLocal_299[1], true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
				{
					iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("police3"), vLocal_237, 0f, true, true, false);
					vLocal_240 = { func_186(PLAYER::PLAYER_ID()) - ENTITY::GET_ENTITY_COORDS(iLocal_306, true) };
					ENTITY::SET_ENTITY_HEADING(iLocal_306, MISC::GET_HEADING_FROM_VECTOR_2D(vLocal_240.x, vLocal_240.y));
					VEHICLE::SET_VEHICLE_SIREN(iLocal_306, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299[2]))
				{
					iLocal_299[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_306, 6, joaat("s_m_y_cop_01"), -1, 1, true);
					if (func_65())
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[2], joaat("weapon_pistol"), -1, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_299[2], iLocal_312);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_299[2], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_299[2], 3, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[2], true);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_299[2], iLocal_306, iLocal_290[1], 6, 15f, 2, -1f, -1f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_299[2], true);
					}
					else
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[2], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_306, 40.2328f, -1555.753f, 28.2128f, 10f, 0, joaat("police"), 786469, 1f, -1f);
						TASK::TASK_STAND_STILL(0, 5000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_299[2], iLocal_309);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
						PED::SET_PED_KEEP_TASK(iLocal_299[2], true);
					}
				}
				bLocal_278 = true;
			}
		}
	}
}

int func_168(var uParam0, int iParam1, float fParam2)//Position - 0xE226
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
				{
					if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE((*uParam0)[iVar0], iParam1, 0))
						{
							return 0;
						}
						if (fParam2 > 0f)
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY((*uParam0)[iVar0], PLAYER::PLAYER_PED_ID(), fParam2, fParam2, fParam2, 0, 1, 0))
							{
								return 0;
							}
						}
					}
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
		else
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_169()//Position - 0xE2C1
{
	Global_19671 = 0;
	func_170();
}

void func_170()//Position - 0xE2D1
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

int func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE2F2
{
	func_184(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_172(sParam2, iParam3, 0);
}

int func_172(char* sParam0, int iParam1, bool bParam2)//Position - 0xE340
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_79();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_139(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_183();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_182();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_181())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_180())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_179();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_178();
		func_173();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_79();
	}
	return 0;
}

void func_173()//Position - 0xE610
{
	if (!func_174())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_174()//Position - 0xE647
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_177())
	{
		return 0;
	}
	if (func_175(PLAYER::PLAYER_ID()))
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

bool func_175(int iParam0)//Position - 0xE6AD
{
	return func_176(iParam0, 20);
}

bool func_176(int iParam0, int iParam1)//Position - 0xE6BD
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_177()//Position - 0xE6D8
{
	return -1;
}

void func_178()//Position - 0xE6E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_179()//Position - 0xE713
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_180()//Position - 0xE7A8
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_181()//Position - 0xE7CF
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_182()//Position - 0xE868
{
	if (func_9(14))
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
		Global_19486 = func_119();
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

void func_183()//Position - 0xE90A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

void func_184(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xE962
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_185()//Position - 0xE9B8
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

Vector3 func_186(int iParam0)//Position - 0xE9DA
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_187()//Position - 0xE9ED
{
	func_188();
}

int func_188()//Position - 0xE9FA
{
	if (func_189(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_189(bool bParam0)//Position - 0xEA45
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_190(int iParam0, int iParam1)//Position - 0xEA70
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_196(iParam0))
	{
		func_195(iParam0, iParam1);
		if (!func_14(51))
		{
			func_4("RE_REWARD", 1, 0, 4000, 10000, func_7(), 0, 138, 0);
			func_194(51);
		}
		if (func_109(iParam0))
		{
			Global_111560.f_24990.f_2 = 3;
		}
		if (func_193(iParam0, iParam1) != 322)
		{
			func_191(func_193(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_111548 = iParam1;
		if (Global_111546 == 0)
		{
			if (((Global_111549 == 1 || Global_111549 == 5) || Global_111549 == 11) || Global_111549 == 25)
			{
				func_166(2);
			}
			else if ((Global_111549 == 26 || Global_111549 == 8) || Global_111549 == 17)
			{
				func_166(7);
			}
			else
			{
				func_166(1);
			}
		}
	}
}

void func_191(int iParam0, var uParam1, var uParam2)//Position - 0xEB74
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_28((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111560.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111560.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111560.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111560.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111560.f_10189[iParam0 /*12*/].f_10 = uParam1;
		Global_111560.f_10189[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_192();
	}
}

void func_192()//Position - 0xEC5C
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111296 = 0;
	Global_111297 = 0;
	Global_111298 = 0;
	Global_111299 = 0;
	Global_111300 = 0;
	Global_111301 = 0;
	Global_111302 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111560.f_10189.f_3853;
	Global_111560.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111560.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111560.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111296++;
					fVar1 = (fVar1 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111297++;
					fVar2 = (fVar2 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111298++;
					fVar3 = (fVar3 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111299++;
					fVar4 = (fVar4 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111300++;
					fVar5 = (fVar5 + (Global_111560.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111301++;
					fVar6 = (fVar6 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111302++;
					fVar7 = (fVar7 + Global_111560.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111279 > 0)
	{
		if (Global_111296 == Global_111279)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111280 > 0)
	{
		if (Global_111297 == Global_111280)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111281 > 0)
	{
		if (Global_111298 == Global_111281)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111282 > 0)
	{
		if (Global_111299 == Global_111282)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111283 > 0)
	{
		if (((Global_111300 == Global_111283 || (Global_111283 * 10 / Global_111300) < 41) || Global_111300 > Global_111286) || Global_111300 == Global_111286)
		{
			if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 14))
			{
				if (Global_111300 == Global_111283)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_111283, 0);
					MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111284 > 0)
	{
		if (Global_111301 == Global_111284)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111285 > 0)
	{
		if (Global_111302 == Global_111285)
		{
			fVar7 = 5f;
		}
	}
	Global_111560.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111300 > Global_111286 || Global_111300 == Global_111286)
	{
		iVar9 = Global_111286;
	}
	else
	{
		iVar9 = Global_111300;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_111296, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_111279, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_111297, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_111280, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_111298, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_111281, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_111299, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_111282, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_111286, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_111302 + Global_111301), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_111285 + Global_111284), 1);
	Global_111303 = (Global_111296 * 100 / Global_111279);
	Global_111305 = ((Global_111298 + Global_111297) * 100 / (Global_111281 + Global_111280));
	Global_111304 = ((Global_111299 + iVar9) * 100 / (Global_111282 + Global_111286));
	Global_111306 = ((Global_111301 + Global_111302) * 100 / (Global_111284 + Global_111285));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_111560.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_111303, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_111304, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_111305, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111560.f_10189.f_3853))
	{
		func_49(13, SYSTEM::FLOOR(Global_111560.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76577)
		{
			if (func_123() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111294 = 0;
				}
				if (!Global_61471)
				{
					func_188();
				}
			}
		}
	}
}

int func_193(int iParam0, int iParam1)//Position - 0xF11D
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_194(int iParam0)//Position - 0xF491
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_195(int iParam0, int iParam1)//Position - 0xF4D3
{
	MISC::SET_BIT(&(Global_111560.f_24990.f_8[iParam0]), iParam1);
}

int func_196(int iParam0)//Position - 0xF4EE
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_197()//Position - 0xF59F
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_198(Var0);
	return uVar16;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0xF5BC
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_199(int iParam0, bool bParam1)//Position - 0xF796
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_202(iParam0))
		{
			MISC::SET_BIT(&(Global_111560.f_26429.f_1), iVar0);
			if (!bParam1)
			{
				func_200(func_201(iParam0));
			}
		}
	}
}

void func_200(char* sParam0)//Position - 0xF7DF
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::_END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_GXT_ENTRY("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_201(int iParam0)//Position - 0xF804
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_202(int iParam0)//Position - 0xF8E7
{
	if (iParam0 != -1 && iParam0 != 13)
	{
		return MISC::IS_BIT_SET(Global_111560.f_26429.f_1, iParam0);
	}
	return 0;
}

int func_203()//Position - 0xF916
{
	return 1;
}

int func_204()//Position - 0xF91F
{
	if (Global_30972)
	{
		func_166(4);
		return 1;
	}
	return 0;
}

int func_205(int iParam0)//Position - 0xF937
{
	return func_125(iParam0, 5, 1);
}

int func_206()//Position - 0xF947
{
	if (!func_113(5))
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
		{
			return 0;
		}
	}
	if (func_155(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0xF9A9
{
	if ((Global_111549 == func_197() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

void func_208(var uParam0)//Position - 0xF9D4
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || MISC::IS_BIT_SET(Global_98669.f_20, 2)) || MISC::IS_BIT_SET(Global_98669.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_209(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_209(int iParam0)//Position - 0xFA5E
{
	func_210(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_210(int iParam0, char* sParam1, int iParam2)//Position - 0xFA74
{
	if (MISC::IS_BIT_SET(*iParam0, 30))
	{
		switch (func_148(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, MISC::IS_BIT_SET(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_211(int iParam0)//Position - 0xFB4E
{
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_111546 = 0;
	func_212();
}

void func_212()//Position - 0xFB84
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_213(int iParam0)//Position - 0xFBC1
{
	Global_111549 = iParam0;
}

int func_214(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xFBCF
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	
	if (!Global_150139)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_197();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_97())
		{
			return 0;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_165())
			{
				return 0;
			}
		}
		if (!Global_111560.f_9080)
		{
			return 0;
		}
		if (func_189(0))
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (func_244())
		{
			return 0;
		}
		if (Global_111549 != -1)
		{
			return 0;
		}
		if (func_10(func_119()))
		{
			if (func_155(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_243(iParam3))
		{
			return 0;
		}
		if (func_10(func_119()))
		{
			if (func_242(func_119()) == 4 || func_242(func_119()) == 5)
			{
				return 0;
			}
		}
		if (func_10(func_119()))
		{
			if (!func_241(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_240(Global_111560.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_111551) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_239())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_132(4))
		{
			return 0;
		}
		if (!func_113(5))
		{
			return 0;
		}
		if (func_238(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_30882)
		{
			return 0;
		}
		if (func_243(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_10(func_119()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				vVar5 = { Global_111560.f_2358.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_111560.f_2358.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_64(vVar5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vVar5) < (210f * 210f))
							{
								if (func_119() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_215(int iParam0)//Position - 0xFF69
{
	int iVar0;
	
	iVar0 = Global_111560.f_2358.f_539.f_2296[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)//Position - 0xFF8A
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)//Position - 0xFF99
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xFFEC
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1000B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_220(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_220(float fParam0, float fParam1, float fParam2)//Position - 0x1020C
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_221(int iParam0, int iParam1)//Position - 0x1024E
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_222(int iParam0)//Position - 0x102F0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_223(int iParam0)//Position - 0x10303
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_224(int iParam0)//Position - 0x10316
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_225(int iParam0)//Position - 0x10329
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_226(int iParam0)//Position - 0x1033B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_227(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)//Position - 0x10360
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)//Position - 0x10377
{
	return iParam0 & 15;
}

int func_229(int iParam0, int iParam1)//Position - 0x10384
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_230()//Position - 0x10490
{
	var uVar0;
	
	func_236(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_235(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_234(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_233(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_232(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_231(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_231(var uParam0, int iParam1)//Position - 0x104D6
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_232(var uParam0, int iParam1)//Position - 0x1055C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)//Position - 0x1058F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 1 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_234(var uParam0, int iParam1)//Position - 0x105E0
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(var uParam0, int iParam1)//Position - 0x1061A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(var uParam0, int iParam1)//Position - 0x10655
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(int iParam0)//Position - 0x10691
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, int iParam1)//Position - 0x1076D
{
	if (MISC::IS_BIT_SET(Global_111560.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_239()//Position - 0x10790
{
	func_182();
	if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_240(int iParam0)//Position - 0x107B8
{
	return func_229(func_230(), iParam0);
}

int func_241(int iParam0, int iParam1, int iParam2)//Position - 0x107CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_119();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_242(int iParam0)//Position - 0x108AE
{
	if (!func_10(iParam0))
	{
		return 7;
	}
	return Global_111560.f_7683.f_919[iParam0];
}

bool func_243(int iParam0)//Position - 0x108D2
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_97())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_111560.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_111560.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_244()//Position - 0x10930
{
	int iVar0;
	
	if (Global_30886)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_245(var uParam0, int iParam1)//Position - 0x10974
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_246(struct<9> Param0, int iParam9, bool bParam10)//Position - 0x1098B
{
	int iVar0;
	
	if (iLocal_313)
	{
		func_259(0);
		if (Global_30975)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_258();
		func_105(0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), true, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vLocal_234 - Vector(20f, 20f, 20f), vLocal_234 + Vector(20f, 20f, 20f), true);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_308, 0))
		{
			func_80(iLocal_308, 0, 145);
		}
		if (!PED::IS_PED_INJURED(iLocal_289))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_289, "random@getawaydriver", "idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_289, "random@getawaydriver", "idle_2_hands_up", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_309);
				TASK::TASK_PLAY_ANIM(0, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, -1, 0, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED((*iParam9)[0]))
				{
					TASK::TASK_SMART_FLEE_PED(0, (*iParam9)[0], 150f, -1, 0, 0);
				}
				else if (!PED::IS_PED_INJURED((*iParam9)[1]))
				{
					TASK::TASK_SMART_FLEE_PED(0, (*iParam9)[1], 150f, -1, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_309);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_289, iLocal_309);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_309);
				PED::SET_PED_KEEP_TASK(iLocal_289, true);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_289);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_289, 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_289, false);
		}
		if (!PED::IS_PED_INJURED((*iParam9)[0]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam9)[0], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam9)[0], 17, true);
			PED::REMOVE_PED_FROM_GROUP((*iParam9)[0]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam9)[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam9)[0], false);
		}
		if (!PED::IS_PED_INJURED((*iParam9)[1]))
		{
			PED::SET_PED_CONFIG_FLAG((*iParam9)[1], 317, true);
			PED::SET_PED_COMBAT_ATTRIBUTES((*iParam9)[1], 17, true);
			PED::REMOVE_PED_FROM_GROUP((*iParam9)[1]);
			PED::SET_PED_CAN_BE_TARGETTED((*iParam9)[1], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam9)[1], false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_293)
		{
			if (!PED::IS_PED_INJURED(iLocal_293[iVar0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_293[iVar0], false);
			}
			iVar0++;
		}
		if (!PED::IS_PED_INJURED(iLocal_299[0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[0], joaat("weapon_pistol"), -1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[0], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_299[1]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[1], joaat("weapon_pistol"), -1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[1], false);
		}
		if (!PED::IS_PED_INJURED(iLocal_299[2]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_299[2], joaat("weapon_pistol"), -1, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299[2], false);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED((*iParam9)[0]))
			{
				TASK::TASK_SMART_FLEE_COORD((*iParam9)[0], func_186(PLAYER::PLAYER_ID()), 200f, -1, 0, 0);
			}
			if (!PED::IS_PED_INJURED((*iParam9)[1]))
			{
				TASK::TASK_SMART_FLEE_COORD((*iParam9)[1], func_186(PLAYER::PLAYER_ID()), 200f, -1, 0, 0);
			}
		}
		if (!iLocal_220)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_220 = 1;
		}
		func_70(iLocal_53);
		if (HUD::DOES_BLIP_EXIST(iLocal_288))
		{
			HUD::REMOVE_BLIP(&iLocal_288);
		}
		func_70(iLocal_54);
		func_129(0);
		func_142(0, Param0);
	}
	func_247(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_247(int iParam0)//Position - 0x10CFF
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_197();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_207())
	{
		func_251(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_111551 = MISC::GET_GAME_TIMER();
		func_250(30000);
		StringCopy(&cVar0, func_249(Global_111549, 1), 64);
		if (func_196(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111546, (MISC::GET_GAME_TIMER() - Global_111547), 0);
	}
	else if (MISC::IS_BIT_SET(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_111556, 0);
	}
	func_248(&Global_30795);
	Global_111550 = 0;
	func_213(-1);
}

void func_248(var uParam0)//Position - 0x10DB4
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

char* func_249(int iParam0, bool bParam1)//Position - 0x10DF1
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_250(int iParam0)//Position - 0x1103A
{
	Global_41947 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_251(int iParam0)//Position - 0x1104C
{
	func_252(iParam0, 0, func_257(iParam0));
}

void func_252(int iParam0, int iParam1, int iParam2)//Position - 0x11061
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_230();
	func_255(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_254(iParam0, &uVar0);
	Var1 = { func_253(&uVar0) };
}

struct<16> func_253(var uParam0)//Position - 0x11090
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_228(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_254(int iParam0, var uParam1)//Position - 0x11161
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11179
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_256(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_256(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x112FB
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_257(int iParam0)//Position - 0x11333
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_258()//Position - 0x114D6
{
	Global_30971 = 0;
	Global_30972 = 0;
	Global_30974 = 0;
	Global_30975 = 0;
	Global_30976 = 0;
}

void func_259(bool bParam0)//Position - 0x114F2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_120(iVar0, bParam0);
		iVar0++;
	}
}

