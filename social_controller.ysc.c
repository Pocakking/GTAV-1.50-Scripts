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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 2;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 8;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 8;
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
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<6> Local_119 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_125 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138[3] = { 0, 0, 0 };
	int iLocal_142[3] = { 0, 0, 0 };
	int iLocal_146[3] = { 0, 0, 0 };
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164[3] = { 0, 0, 0 };
	int iLocal_168 = 0;
	int iLocal_169[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_176[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = -1;
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
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 1;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = -1;
	var uLocal_279 = -1;
	var uLocal_280 = 2;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 2;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
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
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
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
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_72 = 1;
	iLocal_73 = 65;
	iLocal_74 = 49;
	iLocal_75 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_100 = -1;
	iLocal_101 = -1;
	iLocal_102 = 21;
	iLocal_104 = 2;
	iLocal_112 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_137 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_540())
		{
		}
		else
		{
			func_536();
			func_495();
			func_494();
			switch (iLocal_103)
			{
				case 0:
					func_493();
					break;
				
				case 1:
					func_196();
					func_191();
					func_29(&uLocal_185);
					func_26();
					func_10();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_2();
					}
					break;
				
				case 2:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x122
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2()//Position - 0x12E
{
	if (!func_9(&uLocal_353))
	{
		func_8(&uLocal_353, 0, 0);
	}
	else if (func_7(&uLocal_353, 7200000, 0))
	{
		if (func_6(0))
		{
			if (func_5(PLAYER::PLAYER_ID()))
			{
				if (!func_4())
				{
					func_3(&uLocal_353);
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SC_PLAY_REM");
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
				}
			}
		}
	}
}

void func_3(var uParam0)//Position - 0x18B
{
	uParam0->f_1 = 0;
}

bool func_4()//Position - 0x198
{
	return Global_1312873;
}

bool func_5(int iParam0)//Position - 0x1A4
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 6);
}

bool func_6(int iParam0)//Position - 0x1BC
{
	return Global_1662701.f_16[iParam0 /*44*/].f_4;
}

int func_7(var uParam0, int iParam1, bool bParam2)//Position - 0x1D0
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

void func_8(var uParam0, bool bParam1, bool bParam2)//Position - 0x22E
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

bool func_9(var uParam0)//Position - 0x273
{
	return uParam0->f_1;
}

void func_10()//Position - 0x27F
{
	int iVar0;
	char* sVar1;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar24;
	int iVar25;
	int iVar26;
	char* sVar27;
	struct<8> Var28;
	
	switch (iLocal_357)
	{
		case 0:
			if ((Global_108258 && !iLocal_355) && !Global_262145.f_10125)
			{
				iLocal_358 = -1;
				iVar0 = 0;
				while (iVar0 < Global_108246)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_108246[iVar0 /*4*/])))
					{
						iLocal_358 = iVar0;
					}
					iVar0++;
				}
				if (iLocal_358 != -1)
				{
					iLocal_357++;
				}
				else
				{
					Global_108258 = 0;
				}
			}
			if (((!Global_108258 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && func_23(3763, -1, -1)) && (!iLocal_360 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_361)) > 25000))
			{
				uLocal_362[0] = func_20(1362, -1, -1);
				uLocal_362[1] = func_20(1363, -1, -1);
				uLocal_362[2] = func_20(1364, -1, -1);
				uLocal_362[3] = func_20(1365, -1, -1);
				uLocal_362[4] = func_20(1366, -1, -1);
				uLocal_362[5] = func_20(1367, -1, -1);
				uLocal_362[6] = func_20(1368, -1, -1);
				uLocal_362[7] = func_20(1369, -1, -1);
				func_19(&sVar1, &uLocal_362, -1);
				func_16(&sVar1);
				iLocal_360 = 0;
			}
			break;
		
		case 1:
			if (iLocal_359 == 0)
			{
				SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_108246[iLocal_358 /*4*/]), &iLocal_359);
			}
			else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_359))
			{
				switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_359))
				{
					case 0:
						bVar7 = false;
						iVar5 = Global_108094;
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_108094[iVar6 /*4*/])))
							{
								if (MISC::GET_HASH_KEY(&(Global_108094[iVar6 /*4*/])) == MISC::GET_HASH_KEY(&(Global_108246[iLocal_358 /*4*/])))
								{
									bVar7 = true;
									iVar6 = iVar5 + 1;
								}
							}
							iVar6++;
						}
						if (bVar7)
						{
							iLocal_357 = 3;
						}
						else
						{
							iLocal_357 = 2;
						}
						break;
					
					default:
						iLocal_357 = 0;
						StringCopy(&(Global_108246[iLocal_358 /*4*/]), "", 16);
						break;
				}
				iLocal_359 = 0;
			}
			break;
		
		case 2:
			if (iLocal_359 == 0)
			{
				StringCopy(&Var8, "", 64);
				if (Global_108255[iLocal_358])
				{
					func_15(&Var8, "SPPlate", 0);
					func_15(&Var8, "MPPlate", 1);
				}
				else
				{
					func_15(&Var8, "SPPlate", 1);
				}
				SOCIALCLUB::_0x1989C6E6F67E76A8(&(Global_108246[iLocal_358 /*4*/]), &Var8, &iLocal_359);
			}
			else if (!SOCIALCLUB::_0x07C61676E5BB52CD(iLocal_359))
			{
				switch (SOCIALCLUB::_0x8147FFF6A718E1AD(iLocal_359))
				{
					case 0:
						iLocal_355 = 1;
						iLocal_357 = 0;
						StringCopy(&(Global_108246[iLocal_358 /*4*/]), "", 16);
						iLocal_359 = 0;
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_13(3763, 0, -1, 1);
						}
						break;
					
					default:
						iLocal_359 = 0;
						iLocal_357 = 0;
						StringCopy(&(Global_108246[iLocal_358 /*4*/]), "", 16);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							iLocal_360 = 1;
							iLocal_361 = NETWORK::GET_NETWORK_TIME();
						}
						break;
				}
				iLocal_359 = 0;
			}
			break;
		
		case 3:
			if (SOCIALCLUB::_0xF22CA0FD74B80E7A(iLocal_359))
			{
				if (!SOCIALCLUB::_0x9237E334F6E43156(iLocal_359))
				{
					iVar24 = -1;
					iVar25 = SOCIALCLUB::_0x700569DBA175A77C(iLocal_359);
					iVar26 = 0;
					while (iVar26 < iVar25)
					{
						sVar27 = SOCIALCLUB::_0x1D4446A62D35B0D0(iLocal_359, iVar26);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar27) && MISC::GET_HASH_KEY(sVar27) == MISC::GET_HASH_KEY(&(Global_108246[iLocal_358 /*4*/])))
						{
							iVar24 = iVar26;
							iVar26 = iVar25 + 1;
						}
						iVar26++;
					}
					if (iVar24 != -1)
					{
						StringCopy(&Var28, SOCIALCLUB::_0x2E89990DDFF670C3(iLocal_359, iVar24), 64);
						if (Global_108255[iLocal_358])
						{
							func_15(&Var28, "SPPlate", 0);
							func_15(&Var28, "MPPlate", 1);
						}
						else if (!func_11(&Var28, "MPPlate"))
						{
							func_15(&Var28, "SPPlate", 1);
						}
						SOCIALCLUB::_0xD0EE05FE193646EA(sVar27, sVar27, &Var28);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							func_13(3763, 0, -1, 1);
						}
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_360 = 1;
						iLocal_361 = NETWORK::GET_NETWORK_TIME();
					}
					iLocal_355 = 1;
					iLocal_357 = 0;
					StringCopy(&(Global_108246[iLocal_358 /*4*/]), "", 16);
					iLocal_359 = 0;
				}
			}
			else
			{
				SOCIALCLUB::_0xF6BAAAF762E1BF40("TEST", &iLocal_359);
			}
			break;
	}
}

int func_11(int iParam0, char* sParam1)//Position - 0x67A
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	
	func_12(iParam0, &Var0);
	iVar82 = MISC::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81 /*8*/])))
		{
			if (MISC::GET_HASH_KEY(&(Var0[iVar81 /*8*/])) == iVar82)
			{
				return 1;
			}
		}
		iVar81++;
	}
	return 0;
}

void func_12(int iParam0, var uParam1)//Position - 0x6CD
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	bool bVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(iParam0);
	}
	StringCopy(&cVar4, "", 32);
	bVar12 = iVar0 != false;
	iVar14 = 0;
	while (iVar14 < *uParam1)
	{
		StringCopy(uParam1[iVar14 /*8*/], "", 32);
		iVar14++;
	}
	while (bVar12)
	{
		StringCopy(&cVar2, HUD::_GET_TEXT_SUBSTRING(iParam0, iVar1, iVar1 + 1), 8);
		iVar1++;
		if (MISC::GET_HASH_KEY(&cVar2) == 625527429 || iVar1 >= iVar0)
		{
			if (MISC::GET_HASH_KEY(&cVar2) != 625527429)
			{
				StringConCat(&cVar4, &cVar2, 32);
			}
			if (iVar13 < *uParam1)
			{
				*(uParam1[iVar13 /*8*/]) = { cVar4 };
				iVar13++;
			}
			StringCopy(&cVar4, "", 32);
		}
		else
		{
			StringConCat(&cVar4, &cVar2, 32);
		}
		if (iVar1 >= iVar0)
		{
			bVar12 = false;
		}
	}
}

int func_13(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x798
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
		iParam2 = func_14();
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

int func_14()//Position - 0xDDC
{
	return Global_1312745;
}

void func_15(char* sParam0, char* sParam1, bool bParam2)//Position - 0xDE8
{
	struct<8> Var0[10];
	int iVar81;
	int iVar82;
	int iVar83;
	bool bVar84;
	
	if (bParam2)
	{
	}
	func_12(sParam0, &Var0);
	StringCopy(sParam0, "", 64);
	iVar82 = MISC::GET_HASH_KEY(sParam1);
	iVar81 = 0;
	while (iVar81 < Var0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0[iVar81 /*8*/])))
		{
			iVar83 = MISC::GET_HASH_KEY(&(Var0[iVar81 /*8*/]));
			if (iVar83 != iVar82)
			{
				if (bVar84)
				{
					StringConCat(sParam0, ",", 64);
					bVar84 = false;
				}
				StringConCat(sParam0, &(Var0[iVar81 /*8*/]), 64);
				bVar84 = true;
			}
		}
		iVar81++;
	}
	if (bParam2)
	{
		if (bVar84)
		{
			StringConCat(sParam0, ",", 64);
			bVar84 = false;
		}
		StringConCat(sParam0, sParam1, 64);
		bVar84 = true;
	}
}

int func_16(char* sParam0)//Position - 0xE84
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	int iVar11;
	
	iVar11 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_108246)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_108246[iVar0 /*4*/])))
		{
			StringCopy(&(Global_108246[iVar0 /*4*/]), sParam0, 16);
			Global_108255[iVar0] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
			Global_108258 = 1;
			Global_108259 = 1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar10 = 0;
				while (iVar10 < 8)
				{
					if (iVar10 < iVar11)
					{
						uVar1[iVar10] = func_18(HUD::_GET_TEXT_SUBSTRING(sParam0, iVar10, iVar10 + 1));
					}
					else
					{
						uVar1[iVar10] = func_18("");
					}
					iVar10++;
				}
				func_17(1362, uVar1[0], -1, 1);
				func_17(1363, uVar1[1], -1, 1);
				func_17(1364, uVar1[2], -1, 1);
				func_17(1365, uVar1[3], -1, 1);
				func_17(1366, uVar1[4], -1, 1);
				func_17(1367, uVar1[5], -1, 1);
				func_17(1368, uVar1[6], -1, 1);
				func_17(1369, uVar1[7], -1, 1);
				func_13(3763, 1, -1, 1);
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_108246)
	{
		iVar0++;
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xFC4
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
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

int func_18(int iParam0)//Position - 0x1586
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 37;
	}
	if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("A"))
	{
		return 0;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("B"))
	{
		return 1;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("C"))
	{
		return 2;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("D"))
	{
		return 3;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("E"))
	{
		return 4;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("F"))
	{
		return 5;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("G"))
	{
		return 6;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("H"))
	{
		return 7;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("I"))
	{
		return 8;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("J"))
	{
		return 9;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("K"))
	{
		return 10;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("L"))
	{
		return 11;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("M"))
	{
		return 12;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("N"))
	{
		return 13;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("O"))
	{
		return 14;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("P"))
	{
		return 15;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("Q"))
	{
		return 16;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("R"))
	{
		return 17;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("S"))
	{
		return 18;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("T"))
	{
		return 19;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("U"))
	{
		return 20;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("V"))
	{
		return 21;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("W"))
	{
		return 22;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("X"))
	{
		return 23;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("Y"))
	{
		return 24;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("Z"))
	{
		return 25;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("0"))
	{
		return 26;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("1"))
	{
		return 27;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("2"))
	{
		return 28;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("3"))
	{
		return 29;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("4"))
	{
		return 30;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("5"))
	{
		return 31;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("6"))
	{
		return 32;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("7"))
	{
		return 33;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("8"))
	{
		return 34;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY("9"))
	{
		return 35;
	}
	else if (MISC::GET_HASH_KEY(iParam0) == MISC::GET_HASH_KEY(" "))
	{
		return 36;
	}
	return 37;
}

void func_19(char* sParam0, var uParam1, int iParam2)//Position - 0x1930
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (iVar0 == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) > 0f)
		{
			StringConCat(sParam0, " ", 16);
		}
		else
		{
			switch ((*uParam1)[iVar0])
			{
				case 0:
					StringConCat(sParam0, "A", 16);
					break;
				
				case 1:
					StringConCat(sParam0, "B", 16);
					break;
				
				case 2:
					StringConCat(sParam0, "C", 16);
					break;
				
				case 3:
					StringConCat(sParam0, "D", 16);
					break;
				
				case 4:
					StringConCat(sParam0, "E", 16);
					break;
				
				case 5:
					StringConCat(sParam0, "F", 16);
					break;
				
				case 6:
					StringConCat(sParam0, "G", 16);
					break;
				
				case 7:
					StringConCat(sParam0, "H", 16);
					break;
				
				case 8:
					StringConCat(sParam0, "I", 16);
					break;
				
				case 9:
					StringConCat(sParam0, "J", 16);
					break;
				
				case 10:
					StringConCat(sParam0, "K", 16);
					break;
				
				case 11:
					StringConCat(sParam0, "L", 16);
					break;
				
				case 12:
					StringConCat(sParam0, "M", 16);
					break;
				
				case 13:
					StringConCat(sParam0, "N", 16);
					break;
				
				case 14:
					StringConCat(sParam0, "O", 16);
					break;
				
				case 15:
					StringConCat(sParam0, "P", 16);
					break;
				
				case 16:
					StringConCat(sParam0, "Q", 16);
					break;
				
				case 17:
					StringConCat(sParam0, "R", 16);
					break;
				
				case 18:
					StringConCat(sParam0, "S", 16);
					break;
				
				case 19:
					StringConCat(sParam0, "T", 16);
					break;
				
				case 20:
					StringConCat(sParam0, "U", 16);
					break;
				
				case 21:
					StringConCat(sParam0, "V", 16);
					break;
				
				case 22:
					StringConCat(sParam0, "W", 16);
					break;
				
				case 23:
					StringConCat(sParam0, "X", 16);
					break;
				
				case 24:
					StringConCat(sParam0, "Y", 16);
					break;
				
				case 25:
					StringConCat(sParam0, "Z", 16);
					break;
				
				case 26:
					StringConCat(sParam0, "0", 16);
					break;
				
				case 27:
					StringConCat(sParam0, "1", 16);
					break;
				
				case 28:
					StringConCat(sParam0, "2", 16);
					break;
				
				case 29:
					StringConCat(sParam0, "3", 16);
					break;
				
				case 30:
					StringConCat(sParam0, "4", 16);
					break;
				
				case 31:
					StringConCat(sParam0, "5", 16);
					break;
				
				case 32:
					StringConCat(sParam0, "6", 16);
					break;
				
				case 33:
					StringConCat(sParam0, "7", 16);
					break;
				
				case 34:
					StringConCat(sParam0, "8", 16);
					break;
				
				case 35:
					StringConCat(sParam0, "9", 16);
					break;
				
				case 36:
					StringConCat(sParam0, " ", 16);
					break;
				
				default:
					StringConCat(sParam0, "", 16);
					break;
				}
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1, int iParam2)//Position - 0x1C01
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	iVar1 = func_22(iParam0, iParam1);
	iVar2 = func_21(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_21(int iParam0)//Position - 0x1C47
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

int func_22(int iParam0, int iParam1)//Position - 0x2048
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

int func_23(int iParam0, int iParam1, int iParam2)//Position - 0x23F6
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)//Position - 0x2433
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

int func_25(int iParam0, int iParam1)//Position - 0x27CF
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
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

void func_26()//Position - 0x2B3A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (Global_108259 && !iLocal_355)
	{
		iLocal_355 = 1;
		Global_108259 = 0;
	}
	if ((((iLocal_355 && iLocal_357 == 0) && !bLocal_116) && !Global_262145.f_10124) && iLocal_103 != 0)
	{
		iVar0 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar0 = (iVar0 + func_27("orderCount_sp0"));
		iVar0 = (iVar0 + func_27("orderCount_sp1"));
		iVar0 = (iVar0 + func_27("orderCount_sp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp0"));
		iVar0 = (iVar0 + func_27("orderCount_mp1"));
		iVar0 = (iVar0 + func_27("orderCount_mp2"));
		iVar0 = (iVar0 + func_27("orderCount_mp3"));
		iVar0 = (iVar0 + func_27("orderCount_mp4"));
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar0 = iVar0;
		if (SOCIALCLUB::_0xF22CA0FD74B80E7A(iLocal_359))
		{
			if (!SOCIALCLUB::_0x9237E334F6E43156(iLocal_359))
			{
				iVar2 = Global_108094;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					StringCopy(&(Global_108094[iVar1 /*4*/]), "", 16);
					Global_108215[iVar1] = 0;
					iVar1++;
				}
				iVar2 = SOCIALCLUB::_0x700569DBA175A77C(iLocal_359);
				Global_108260 = iVar2 >= Global_108094;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar1 < Global_108094)
					{
						StringCopy(&(Global_108094[iVar1 /*4*/]), SOCIALCLUB::_0x1D4446A62D35B0D0(iLocal_359, iVar1), 16);
						StringCopy(&Var3, SOCIALCLUB::_0x2E89990DDFF670C3(iLocal_359, iVar1), 64);
						if ((func_11(&Var3, "MPPlate") || func_11(&Var3, "NoDelete")) || iVar1 == 0)
						{
							Global_108215[iVar1] = 1;
						}
					}
					iVar1++;
				}
				iLocal_359 = 0;
				iLocal_355 = 0;
				Global_108261 = 1;
			}
		}
		else
		{
			SOCIALCLUB::_0xF6BAAAF762E1BF40("TEST", &iLocal_359);
		}
	}
}

int func_27(char* sParam0)//Position - 0x2CF1
{
	return APP::APP_GET_INT(func_28(sParam0));
}

char* func_28(char* sParam0)//Position - 0x2D03
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (MISC::GET_HASH_KEY("uid") == iVar0)
	{
		return "0";
	}
	if (MISC::GET_HASH_KEY("carModel") == iVar0)
	{
		return "1";
	}
	if (MISC::GET_HASH_KEY("playerSlot") == iVar0)
	{
		return "2";
	}
	if (MISC::GET_HASH_KEY("playerRank") == iVar0)
	{
		return "3";
	}
	if (MISC::GET_HASH_KEY("playerGangR") == iVar0)
	{
		return "4";
	}
	if (MISC::GET_HASH_KEY("playerGangG") == iVar0)
	{
		return "5";
	}
	if (MISC::GET_HASH_KEY("playerGangB") == iVar0)
	{
		return "6";
	}
	if (MISC::GET_HASH_KEY("carColour1") == iVar0)
	{
		return "7";
	}
	if (MISC::GET_HASH_KEY("carColour2") == iVar0)
	{
		return "8";
	}
	if (MISC::GET_HASH_KEY("carPlateBack") == iVar0)
	{
		return "9";
	}
	if (MISC::GET_HASH_KEY("windowTint") == iVar0)
	{
		return "10";
	}
	if (MISC::GET_HASH_KEY("bulletProofTyres") == iVar0)
	{
		return "11";
	}
	if (MISC::GET_HASH_KEY("carEngine") == iVar0)
	{
		return "12";
	}
	if (MISC::GET_HASH_KEY("carBrakes") == iVar0)
	{
		return "13";
	}
	if (MISC::GET_HASH_KEY("carExhaust") == iVar0)
	{
		return "14";
	}
	if (MISC::GET_HASH_KEY("carWheel") == iVar0)
	{
		return "15";
	}
	if (MISC::GET_HASH_KEY("carHorn1") == iVar0)
	{
		return "16";
	}
	if (MISC::GET_HASH_KEY("carHorn2") == iVar0)
	{
		return "17";
	}
	if (MISC::GET_HASH_KEY("carHorn3") == iVar0)
	{
		return "18";
	}
	if (MISC::GET_HASH_KEY("carHorn4") == iVar0)
	{
		return "19";
	}
	if (MISC::GET_HASH_KEY("carHorn5") == iVar0)
	{
		return "20";
	}
	if (MISC::GET_HASH_KEY("carHorn6") == iVar0)
	{
		return "21";
	}
	if (MISC::GET_HASH_KEY("carHorn7") == iVar0)
	{
		return "22";
	}
	if (MISC::GET_HASH_KEY("carHorn8") == iVar0)
	{
		return "23";
	}
	if (MISC::GET_HASH_KEY("carHorn9") == iVar0)
	{
		return "24";
	}
	if (MISC::GET_HASH_KEY("tyreSmoke") == iVar0)
	{
		return "25";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourRed") == iVar0)
	{
		return "26";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourGreen") == iVar0)
	{
		return "27";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourBlue") == iVar0)
	{
		return "28";
	}
	if (MISC::GET_HASH_KEY("carHorn") == iVar0)
	{
		return "29";
	}
	if (MISC::GET_HASH_KEY("carArmour") == iVar0)
	{
		return "30";
	}
	if (MISC::GET_HASH_KEY("carTurbo") == iVar0)
	{
		return "31";
	}
	if (MISC::GET_HASH_KEY("carSuspension") == iVar0)
	{
		return "32";
	}
	if (MISC::GET_HASH_KEY("carXenonLights") == iVar0)
	{
		return "33";
	}
	if (MISC::GET_HASH_KEY("carWheelType") == iVar0)
	{
		return "34";
	}
	if (MISC::GET_HASH_KEY("carUnlocked") == iVar0)
	{
		return "35";
	}
	if (MISC::GET_HASH_KEY("carColour1Unlocked") == iVar0)
	{
		return "36";
	}
	if (MISC::GET_HASH_KEY("carColour2Unlocked") == iVar0)
	{
		return "37";
	}
	if (MISC::GET_HASH_KEY("tyreSmokeColourEnabled") == iVar0)
	{
		return "38";
	}
	if (MISC::GET_HASH_KEY("carEngineCount") == iVar0)
	{
		return "39";
	}
	if (MISC::GET_HASH_KEY("carBrakesCount") == iVar0)
	{
		return "40";
	}
	if (MISC::GET_HASH_KEY("carExhaustCount") == iVar0)
	{
		return "41";
	}
	if (MISC::GET_HASH_KEY("carWheelCount") == iVar0)
	{
		return "42";
	}
	if (MISC::GET_HASH_KEY("carHornCount") == iVar0)
	{
		return "43";
	}
	if (MISC::GET_HASH_KEY("carArmourCount") == iVar0)
	{
		return "44";
	}
	if (MISC::GET_HASH_KEY("carSuspensionCount") == iVar0)
	{
		return "45";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked0") == iVar0)
	{
		return "46";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked1") == iVar0)
	{
		return "47";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked2") == iVar0)
	{
		return "48";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked3") == iVar0)
	{
		return "49";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked4") == iVar0)
	{
		return "50";
	}
	if (MISC::GET_HASH_KEY("carColoursUnlocked5") == iVar0)
	{
		return "51";
	}
	if (MISC::GET_HASH_KEY("carPriceModifier") == iVar0)
	{
		return "52";
	}
	if (MISC::GET_HASH_KEY("carType") == iVar0)
	{
		return "53";
	}
	if (MISC::GET_HASH_KEY("playerGang") == iVar0)
	{
		return "54";
	}
	if (MISC::GET_HASH_KEY("unlockBitset1") == iVar0)
	{
		return "55";
	}
	if (MISC::GET_HASH_KEY("unlockBitset2") == iVar0)
	{
		return "56";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp0") == iVar0)
	{
		return "57";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp1") == iVar0)
	{
		return "58";
	}
	if (MISC::GET_HASH_KEY("orderCount_sp2") == iVar0)
	{
		return "59";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp0") == iVar0)
	{
		return "60";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp1") == iVar0)
	{
		return "61";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp2") == iVar0)
	{
		return "62";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp3") == iVar0)
	{
		return "63";
	}
	if (MISC::GET_HASH_KEY("orderCount_mp4") == iVar0)
	{
		return "64";
	}
	if (MISC::GET_HASH_KEY("spDiscount") == iVar0)
	{
		return "65";
	}
	if (MISC::GET_HASH_KEY("mpDiscount") == iVar0)
	{
		return "66";
	}
	if (MISC::GET_HASH_KEY("carColour1Group") == iVar0)
	{
		return "67";
	}
	if (MISC::GET_HASH_KEY("carColour2Group") == iVar0)
	{
		return "68";
	}
	if (MISC::GET_HASH_KEY("unlockBitset3") == iVar0)
	{
		return "69";
	}
	if (MISC::GET_HASH_KEY("playerName") == iVar0)
	{
		return "70";
	}
	if (MISC::GET_HASH_KEY("newItemUnlocks") == iVar0)
	{
		return "72";
	}
	if (MISC::GET_HASH_KEY("playerNameSP") == iVar0)
	{
		return "73";
	}
	if (MISC::GET_HASH_KEY("playerNameMP") == iVar0)
	{
		return "74";
	}
	return sParam0;
}

void func_29(var uParam0)//Position - 0x32DD
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_9(&(uParam0->f_10)))
	{
		func_8(&(uParam0->f_10), 0, 0);
	}
	else if (func_7(&(uParam0->f_10), func_190(), 0))
	{
		if (!uParam0->f_166)
		{
			bVar0 = true;
		}
	}
	func_54(uParam0, bVar0);
	if (func_53() && func_52())
	{
		func_30(uParam0);
	}
	if (bVar0)
	{
		if (uParam0->f_166)
		{
			func_3(&(uParam0->f_10));
			uParam0->f_166 = 0;
		}
	}
}

void func_30(var uParam0)//Position - 0x3353
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = 0;
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (uParam0->f_1 != func_14())
	{
		*uParam0 = 0;
	}
	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_14())
			{
				uParam0->f_2 = func_51(1079, -1, 0);
				uParam0->f_3 = func_51(149, -1, 0);
				uParam0->f_4 = func_51(150, -1, 0);
				uParam0->f_5 = func_51(112, -1, 0);
				uParam0->f_6 = func_50(11, -1);
				uParam0->f_7 = func_49(32, -1);
				uParam0->f_8 = func_49(0, -1);
				if (func_46(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
				if (func_43(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
				if (func_40(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
				if (func_37(10))
				{
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
				if (func_46(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
				if (func_43(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
				if (func_40(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
				if (func_37(11))
				{
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
				if (func_46(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
				if (func_43(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
				if (func_40(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
				if (func_37(60))
				{
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
				if (func_31(23))
				{
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
				if (func_46(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
				if (func_43(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
				if (func_40(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
				if (func_37(61))
				{
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
				if (func_46(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
				if (func_43(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
				if (func_40(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
				if (func_37(62))
				{
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
				if (func_46(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
				if (func_43(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
				if (func_40(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
				if (func_37(63))
				{
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
				uParam0->f_1 = func_14();
				*uParam0++;
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(uParam0->f_9, 0))
			{
				if (func_46(10))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 1))
			{
				if (func_43(10))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 2))
			{
				if (func_40(10))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 3))
			{
				if (func_37(10))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_50_vehicles_blownup"), func_50(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 4))
			{
				if (func_46(11))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 5))
			{
				if (func_43(11))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 6))
			{
				if (func_40(11))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 7))
			{
				if (func_37(11))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_vehicles_jackedr"), func_50(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 8))
			{
				if (func_46(60))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 9))
			{
				if (func_43(60))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 10))
			{
				if (func_40(60))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 11))
			{
				if (func_37(60))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmtime5starwanted"), func_50(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 15))
			{
				if (func_31(23))
				{
					STATS::_UPDATE_STAT_FLOAT(joaat("mp0_awd_fmfurthestwheelie"), func_49(32, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 16))
			{
				if (func_46(61))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 17))
			{
				if (func_43(61))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 18))
			{
				if (func_40(61))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 19))
			{
				if (func_37(61))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmdrivewithoutcrash"), func_50(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 20))
			{
				if (func_46(62))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 21))
			{
				if (func_43(62))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 22))
			{
				if (func_40(62))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 23))
			{
				if (func_37(62))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostflipsinonevehicle"), func_50(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
			}
			if (!MISC::IS_BIT_SET(uParam0->f_9, 24))
			{
				if (func_46(63))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 25))
			{
				if (func_43(63))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 26))
			{
				if (func_40(63))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
			}
			else if (!MISC::IS_BIT_SET(uParam0->f_9, 27))
			{
				if (func_37(63))
				{
					STATS::_UPDATE_STAT_INT(joaat("mp0_awd_fmmostspinsinonevehicle"), func_50(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
			}
			break;
	}
}

bool func_31(int iParam0)//Position - 0x3AEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_33(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

int func_32(int iParam0)//Position - 0x3B0F
{
	return (iParam0 % 32);
}

int func_33(var uParam0)//Position - 0x3B1C
{
	switch (func_35(uParam0))
	{
		case 764:
			return Global_1384291[func_34(-1)];
		
		case 765:
			return Global_1384297[func_34(-1)];
		
		case 766:
			return Global_1384303[func_34(-1)];
		
		case 8731:
			return Global_1384309[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x3B80
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

int func_35(var uParam0)//Position - 0x3BB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 764;
			break;
		
		case 1:
			return 765;
			break;
		
		case 2:
			return 766;
			break;
		
		case 3:
			return 8731;
			break;
	}
	return 10999;
}

int func_36(int iParam0)//Position - 0x3C0E
{
	return (iParam0 / 32);
}

bool func_37(int iParam0)//Position - 0x3C1B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_38(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

int func_38(var uParam0)//Position - 0x3C3B
{
	switch (func_39(uParam0))
	{
		case 757:
			return Global_1384237[func_34(-1)];
		
		case 758:
			return Global_1384243[func_34(-1)];
		
		case 759:
			return Global_1384249[func_34(-1)];
		
		case 760:
			return Global_1384255[func_34(-1)];
		
		case 8732:
			return Global_1384261[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_39(var uParam0)//Position - 0x3CB3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 757;
			break;
		
		case 1:
			return 758;
			break;
		
		case 2:
			return 759;
			break;
		
		case 3:
			return 760;
			break;
		
		case 4:
			return 8732;
			break;
	}
	return 10999;
}

bool func_40(int iParam0)//Position - 0x3D1C
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_41(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

int func_41(var uParam0)//Position - 0x3D3C
{
	switch (func_42(uParam0))
	{
		case 767:
			return Global_1384147[func_34(-1)];
		
		case 768:
			return Global_1384153[func_34(-1)];
		
		case 769:
			return Global_1384159[func_34(-1)];
		
		case 770:
			return Global_1384165[func_34(-1)];
		
		case 8730:
			return Global_1384171[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_42(var uParam0)//Position - 0x3DB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 767;
			break;
		
		case 1:
			return 768;
			break;
		
		case 2:
			return 769;
			break;
		
		case 3:
			return 770;
			break;
		
		case 4:
			return 8730;
			break;
	}
	return 10999;
}

bool func_43(int iParam0)//Position - 0x3E1D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_44(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

int func_44(var uParam0)//Position - 0x3E3D
{
	switch (func_45(uParam0))
	{
		case 777:
			return Global_1384177[func_34(-1)];
		
		case 778:
			return Global_1384183[func_34(-1)];
		
		case 779:
			return Global_1384189[func_34(-1)];
		
		case 780:
			return Global_1384195[func_34(-1)];
		
		case 8728:
			return Global_1384201[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_45(var uParam0)//Position - 0x3EB5
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 777;
			break;
		
		case 1:
			return 778;
			break;
		
		case 2:
			return 779;
			break;
		
		case 3:
			return 780;
			break;
		
		case 4:
			return 8728;
			break;
	}
	return 10999;
}

bool func_46(int iParam0)//Position - 0x3F1E
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_47(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

int func_47(var uParam0)//Position - 0x3F3E
{
	switch (func_48(uParam0))
	{
		case 787:
			return Global_1384207[func_34(-1)];
		
		case 788:
			return Global_1384213[func_34(-1)];
		
		case 789:
			return Global_1384219[func_34(-1)];
		
		case 790:
			return Global_1384225[func_34(-1)];
		
		case 8726:
			return Global_1384231[func_34(-1)];
		
		default:
	}
	return 0;
}

int func_48(var uParam0)//Position - 0x3FB6
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	switch (iVar1)
	{
		case 0:
			return 787;
			break;
		
		case 1:
			return 788;
			break;
		
		case 2:
			return 789;
			break;
		
		case 3:
			return 790;
			break;
		
		case 4:
			return 8726;
			break;
	}
	return 10999;
}

float func_49(int iParam0, int iParam1)//Position - 0x4021
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2575525[iParam0 /*3*/][func_34(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_50(int iParam0, int iParam1)//Position - 0x404D
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_34(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x4079
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_34(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_52()//Position - 0x40AB
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x595F028698072DD9(0, -3, 1))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53()//Position - 0x4131
{
	if (MISC::IS_PS3_VERSION() && NETWORK::NETWORK_GET_AGE_GROUP() == 3)
	{
		return 1;
	}
	if (MISC::IS_XBOX360_VERSION() && NETWORK::NETWORK_GET_AGE_GROUP() == 3)
	{
		return 1;
	}
	if (MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
	{
		return 1;
	}
	if (MISC::IS_DURANGO_VERSION() && NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE() == 0)
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, bool bParam1)//Position - 0x41A6
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 200:
				func_189(iVar0);
				func_183(iVar0, uParam0, bParam1);
				break;
			
			case 218:
				func_181(iVar0, uParam0, bParam1);
				break;
			
			case 202:
				break;
			
			case 189:
				break;
			
			case 190:
				func_180(iVar0, uParam0, bParam1);
				break;
			
			case 191:
				break;
			
			case 211:
				func_179(iVar0, uParam0, bParam1);
				break;
			
			case 221:
				func_178(uParam0, bParam1);
				break;
		}
		iVar0++;
	}
	if (!Global_76577)
	{
		if (Global_111503 > 0)
		{
			func_168();
		}
	}
	func_55(uParam0, bParam1);
}

void func_55(var uParam0, bool bParam1)//Position - 0x426E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar19;
	char[] cVar35[8];
	struct<18> Var51;
	struct<37> Var71;
	struct<68> Var165;
	int iVar253;
	
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (func_4())
	{
		return;
	}
	iVar0 = SOCIALCLUB::_GET_TOTAL_SC_INBOX_IDS();
	iVar1 = 0;
	Var71.f_17 = 1;
	Var71.f_21 = -1;
	Var71.f_22 = -1;
	Var71.f_23 = 2;
	Var71.f_36 = 2;
	Var165.f_65 = -1;
	Var165.f_66 = -1;
	Var165.f_67 = 2;
	iVar253 = 0;
	switch (uParam0->f_167)
	{
		case 0:
			if (bParam1)
			{
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (!SOCIALCLUB::_IS_SC_INBOX_VALID(iVar1))
					{
						if (func_53() && func_52())
						{
							iVar2 = SOCIALCLUB::_SC_INBOX_MESSAGE_INIT(iVar1);
							if (func_167(iVar2))
							{
								switch (iVar2)
								{
									case -877581966:
										if (MISC::GET_PROFILE_SETTING(802) == 1)
										{
											SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
											{
											}
											SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
										}
										break;
									
									case 1988401830:
										func_166(iVar1, 0);
										break;
									}
							}
						}
						else
						{
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
						}
					}
					iVar1++;
				}
			}
			uParam0->f_167++;
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (!SOCIALCLUB::_IS_SC_INBOX_VALID(iVar1))
				{
					iVar2 = SOCIALCLUB::_SC_INBOX_MESSAGE_INIT(iVar1);
					switch (iVar2)
					{
						case -877581966:
							if (bParam1)
							{
								if (func_53() && func_52())
								{
									if (MISC::GET_PROFILE_SETTING(802) == 1)
									{
										SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
										{
										}
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -302691102:
							break;
						
						case -1940449706:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_163())
									{
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (func_162(PLAYER::PLAYER_ID(), 0, 1))
											{
												if (func_53() && func_52())
												{
													SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
													func_114(0, "XPT_MISSVER", 663093519, 475954354, 5000, 1, -1, 0);
													if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
													{
													}
													SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												}
												else
												{
													SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												}
												uParam0->f_166 = 1;
											}
										}
									}
								}
							}
							break;
						
						case 1894043873:
							if ((func_53() && func_52()) && Global_262145.f_24725)
							{
								SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(iVar1);
								if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "msg", &uVar3))
								{
								}
								SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							}
							else
							{
								SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							}
							break;
						
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (((((((((((((((((func_113() == 0 && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_163() && func_101())) && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 8) && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 9) && !func_99(PLAYER::PLAYER_ID())) && !func_98()) && !func_96(PLAYER::PLAYER_ID(), 1, 0)) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_95()) && !Global_1653164)
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_UGCDATA(iVar1, &(uParam0->f_13)))
											{
												if (func_81(&Var71, &(uParam0->f_13), &Var165, &iVar253))
												{
													if (Var71)
													{
														if (uParam0->f_13.f_58)
														{
														}
														func_78(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(Var165.f_22));
														SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
														uParam0->f_166 = 1;
													}
													else
													{
														SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
													}
												}
											}
										}
									}
									else
									{
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									if (func_53() && func_52())
									{
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "mn", &cVar35))
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iVar1, "gtag", &sVar19))
											{
												func_77("SC_PUBLISH", &sVar19, &cVar35, 0, 1, 0);
												SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
												uParam0->f_166 = 1;
											}
										}
									}
									else
									{
										SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									}
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case 1662919852:
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							break;
						
						case -323664079:
							if (bParam1)
							{
								if (!uParam0->f_166)
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_GET_BOUNTY_DATA(iVar1, &Var51);
									if (MISC::IS_BIT_SET(Var51.f_16, 2))
									{
										if (func_53() && func_52())
										{
											func_75("FM_TXT_BNTY7", &Var51, Var51.f_17, 0, 1, 0);
										}
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (MISC::IS_BIT_SET(Var51.f_16, 0))
									{
										func_68("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
										if (func_53() && func_52())
										{
											func_65("FM_TXT_BNTY5", &Var51, &(Var51.f_8), Var51.f_17, 0, 1);
										}
									}
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
									uParam0->f_166 = 1;
								}
								else
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						
						case -775483672:
							if (func_53() && func_52())
							{
								if (bParam1)
								{
									if (!uParam0->f_166)
									{
										func_58("SC_WON_TOURN", 1);
									}
								}
							}
							func_56(151, 1, -1, 1);
							SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
							break;
						
						case 1988401830:
							func_166(iVar1, 0);
							break;
						
						default:
							if (bParam1)
							{
								if (MISC::GET_HASH_KEY(SOCIALCLUB::_SC_INBOX_MESSAGE_GET_STRING(iVar1)) != -1879562593)
								{
									SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iVar1);
								}
							}
							break;
						}
				}
				iVar1++;
			}
			if (uParam0->f_166)
			{
				uParam0->f_167 = 0;
			}
			break;
	}
}

void func_56(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x483B
{
	int iVar0;
	
	if (func_57())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_34(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_57()//Position - 0x486D
{
	return 1;
	return 0;
}

int func_58(char* sParam0, int iParam1)//Position - 0x487A
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_59(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_59(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x48A6
{
	int iVar0;
	
	if ((!func_64() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_62(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_60(iParam2);
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

int func_60(int iParam0)//Position - 0x49AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_61(iVar0);
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

void func_61(int iParam0)//Position - 0x4A10
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_62(int iParam0, int iParam1)//Position - 0x4A49
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)//Position - 0x4A94
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

bool func_64()//Position - 0x4AD5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_65(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4AE6
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam2));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_59(42, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return iVar0;
}

var func_66(char* sParam0)//Position - 0x4B4C
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_67(&cVar0);
}

var func_67(char[4] cParam0)//Position - 0x4B70
{
	return cParam0;
}

void func_68(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x4B7A
{
	func_69(sParam0, sParam1, iParam2, sParam3, sParam4, "");
}

void func_69(char* sParam0, char* sParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x4B93
{
	int iVar0;
	
	iVar0 = 0;
	if (func_70(iVar0, sParam0, sParam1, uParam2, sParam3, sParam4, sParam5, 0))
	{
		return;
	}
}

int func_70(int iParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)//Position - 0x4BB7
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 1)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 7)
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam5) > 15)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		iParam7 = 0;
	}
	iVar0 = iParam0;
	if (func_74(iVar0))
	{
		return 0;
	}
	func_73(iVar0, 0);
	StringCopy(&(Global_1366857.f_15[iVar0 /*24*/].f_1), sParam1, 24);
	StringCopy(&(Global_1366857.f_15[iVar0 /*24*/].f_7), sParam2, 8);
	Global_1366857.f_15[iVar0 /*24*/].f_9 = uParam3;
	StringCopy(&(Global_1366857.f_15[iVar0 /*24*/].f_10), sParam4, 8);
	StringCopy(&(Global_1366857.f_15[iVar0 /*24*/].f_12), sParam5, 16);
	StringCopy(&(Global_1366857.f_15[iVar0 /*24*/].f_18), sParam6, 24);
	func_72(iVar0, iParam7);
	func_71(iVar0);
	return 1;
}

void func_71(int iParam0)//Position - 0x4CC5
{
	MISC::SET_BIT(&(Global_1366857.f_15[iParam0 /*24*/]), 0);
}

void func_72(int iParam0, int iParam1)//Position - 0x4CDC
{
	Global_1366857.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1366857.f_15[iParam0 /*24*/].f_17 = 1;
}

void func_73(int iParam0, bool bParam1)//Position - 0x4D07
{
	Global_1366857.f_15[iParam0 /*24*/] = 0;
	StringCopy(&(Global_1366857.f_15[iParam0 /*24*/].f_1), "", 24);
	StringCopy(&(Global_1366857.f_15[iParam0 /*24*/].f_7), "", 8);
	Global_1366857.f_15[iParam0 /*24*/].f_9 = 145;
	StringCopy(&(Global_1366857.f_15[iParam0 /*24*/].f_10), "", 8);
	StringCopy(&(Global_1366857.f_15[iParam0 /*24*/].f_12), "", 16);
	StringCopy(&(Global_1366857.f_15[iParam0 /*24*/].f_18), "", 24);
	Global_1366857.f_15[iParam0 /*24*/].f_17 = 0;
	if (bParam1)
	{
		return;
	}
}

bool func_74(int iParam0)//Position - 0x4D92
{
	return MISC::IS_BIT_SET(Global_1366857.f_15[iParam0 /*24*/], 1);
}

int func_75(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x4DA9
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(29, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

struct<16> func_76(char* sParam0)//Position - 0x4E1C
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_77(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x4E47
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::_ADD_TEXT_COMPONENT_SUBSTRING_UNK(sParam2);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return iVar0;
}

void func_78(char* sParam0, int iParam1, int iParam2, int iParam3, char* sParam4)//Position - 0x4EBA
{
	switch (iParam2)
	{
		case 3:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 1, 0);
			break;
		
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_80("SC_BTRSCR_DMN", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
				
				case 1:
				case 4:
					func_80("SC_BTRSCR_DMT", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
				
				case 2:
					func_80("SC_BTRSCR_DMV", sParam0, sParam4, iParam1, 0, 1, 0);
					break;
			}
			break;
		
		case 2:
			switch (iParam3)
			{
				case 0:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
				
				case 1:
					func_79("SC_BTRSCR_RACG", sParam0, iParam1, sParam4, 0);
					break;
				
				case 2:
					func_79("SC_BTRSCR_RACR", sParam0, iParam1, sParam4, 0);
					break;
				
				case 3:
					func_79("SC_BTRSCR_RACN", sParam0, iParam1, sParam4, 0);
					break;
			}
			break;
		
		case 8:
			func_79("SC_BTRSCR_BJP", sParam0, iParam1, sParam4, 0);
			break;
		
		case 0:
			func_80("SC_BTRSCR_SUR", sParam0, sParam4, iParam1, 0, 1, 0);
			break;
	}
}

int func_79(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0x4FF9
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 7);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_80(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x5066
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam6)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(30, sParam0, 1, sParam1, iParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

int func_81(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x50E0
{
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			if (func_98())
			{
				return 0;
			}
			func_94();
			func_93();
			if (func_92())
			{
				*uParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::_0xF98DDE0A8ED09323(0);
			}
			func_91(uParam0, 1);
			break;
		
		case 1:
			if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, func_90(0)))
			{
				func_91(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_89(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					return 1;
				}
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0))
					{
						func_82(sParam2, 0, iParam3);
						func_89(uParam0, 1, 1);
						*uParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_89(uParam0, 1, 1);
					*uParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_82(char* sParam0, int iParam1, var uParam2)//Position - 0x51CA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iVar1, "gen");
	StringCopy(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { func_88(iVar2) };
	sParam0->f_59 = { func_87(iVar2, "cam") };
	sParam0->f_62 = { func_86(iVar2) };
	sParam0->f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	sParam0->f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	sParam0->f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	sParam0->f_71 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	sParam0->f_73 = func_85(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	*uParam2 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
	if (func_84(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_83() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4578)
		{
			sParam0->f_71 = Global_262145.f_4578;
		}
		if (sParam0->f_69 > Global_262145.f_4578)
		{
			sParam0->f_69 = Global_262145.f_4578;
		}
	}
	if (!func_92())
	{
		iVar3 = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iVar3))
		{
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "ltm");
	}
	MISC::SET_BIT(&(sParam0->f_76), 13);
	func_93();
}

int func_83()//Position - 0x5370
{
	return Global_30736;
}

int func_84(int iParam0)//Position - 0x537B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(float fParam0, int iParam1)//Position - 0x53AB
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

Vector3 func_86(int iParam0)//Position - 0x53D6
{
	vector3 vVar0;
	
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 3)
	{
		vVar0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 2)
	{
		vVar0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camp"));
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 3)
	{
		vVar0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 2)
	{
		vVar0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camh"));
	}
	return vVar0;
}

Vector3 func_87(int iParam0, char* sParam1)//Position - 0x545C
{
	vector3 vVar0;
	int iVar3;
	
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 5)
	{
		vVar0 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iParam0, sParam1) };
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 6)
	{
		iVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, sParam1);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar3, "x") == 2)
		{
			vVar0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "x"));
		}
		else
		{
			vVar0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "x");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar3, "y") == 2)
		{
			vVar0.y = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "y"));
		}
		else
		{
			vVar0.y = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "y");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar3, "z") == 2)
		{
			vVar0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar3, "z"));
		}
		else
		{
			vVar0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar3, "z");
		}
	}
	return vVar0;
}

Vector3 func_88(int iParam0)//Position - 0x5528
{
	vector3 vVar0;
	
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { func_87(iParam0, "start") };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -2233.327f, 2436.134f, -14.65155f, -2229.56f, 2399.576f, 11.99761f, 24f, 0, true))
	{
		vVar0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 603.6218f, 5573.046f, 694.484f, 594.2379f, 5542.792f, 727.479f, 33.5f, 0, true))
	{
		vVar0 = { 502.6f, 5537.06f, 777.05f };
	}
	return vVar0;
}

void func_89(var uParam0, bool bParam1, bool bParam2)//Position - 0x55D4
{
	struct<52> Var0;
	
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_12 = 0;
	uParam0->f_32 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 1;
	uParam0->f_17 = 1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_3 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	uParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	uParam0->f_41 = 0;
	if (bParam2)
	{
		uParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_91(uParam0, 0);
	}
}

char* func_90(int iParam0)//Position - 0x5672
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_91(var uParam0, int iParam1)//Position - 0x56C6
{
	uParam0->f_4 = iParam1;
}

bool func_92()//Position - 0x56D4
{
	return Global_1573282.f_4;
}

void func_93()//Position - 0x56E2
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_94()//Position - 0x56F6
{
	if (func_92())
	{
		NETWORK::UGC_CLEAR_OFFLINE_QUERY();
	}
	else
	{
		NETWORK::UGC_CLEAR_QUERY_RESULTS();
	}
}

bool func_95()//Position - 0x5710
{
	return MISC::IS_BIT_SET(Global_2448961.f_2, 11);
}

int func_96(int iParam0, bool bParam1, bool bParam2)//Position - 0x5724
{
	if (iParam0 == func_97())
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

int func_97()//Position - 0x578E
{
	return -1;
}

int func_98()//Position - 0x5797
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

bool func_99(int iParam0)//Position - 0x57C7
{
	return func_100(iParam0);
}

bool func_100(int iParam0)//Position - 0x57D5
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_101()//Position - 0x57EF
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	return func_102(120, -1);
}

int func_102(int iParam0, int iParam1)//Position - 0x581F
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_34(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_103()//Position - 0x584B
{
	return Global_1312861;
}

bool func_104()//Position - 0x5857
{
	return Global_1312863;
}

int func_105()//Position - 0x5863
{
	if ((!Global_2394836 && !Global_2394836.f_1) && !Global_2394836.f_2)
	{
		return 0;
	}
	if (!Global_2394836.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_106()//Position - 0x589E
{
	return Global_1310987.f_5;
}

bool func_107()//Position - 0x58AC
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_35;
}

bool func_108()//Position - 0x58C1
{
	return Global_2448961.f_606;
}

bool func_109()//Position - 0x58D0
{
	return MISC::IS_BIT_SET(Global_2448961, 21);
}

bool func_110()//Position - 0x58E2
{
	return MISC::IS_BIT_SET(Global_2448961, 19);
}

bool func_111()//Position - 0x58F4
{
	return Global_2457255.f_1;
}

bool func_112()//Position - 0x5902
{
	return Global_2448961.f_591;
}

int func_113()//Position - 0x5911
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196;
}

var func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5926
{
	return func_115(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_115(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5942
{
	var uVar0;
	
	uVar0 = func_116(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5965
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_161(PLAYER::PLAYER_ID()) || func_160(PLAYER::PLAYER_ID()))
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
		else if (func_157() || func_153(PLAYER::PLAYER_ID()))
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
		else if (func_152())
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
	if (func_151(sParam2))
	{
	}
	if (func_150())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_148(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_147(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_144(0, &iVar1);
					break;
				
				case 3:
					func_144(1, &iVar1);
					break;
				
				case 1:
					func_140(&iVar1);
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
			func_138(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_127((func_136(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_138(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_121(iVar1);
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
				func_117((func_119(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_117((func_119(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_117(int iParam0)//Position - 0x5B92
{
	if (func_150())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_118(joaat("mpply_globalxp"), iParam0);
	}
}

void func_118(int iParam0, int iParam1)//Position - 0x5BBD
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_119(int iParam0)//Position - 0x5BD9
{
	if (iParam0 > -1)
	{
		if (func_162(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_120(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_120(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x5C2A
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

void func_121(int iParam0)//Position - 0x5C48
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_126(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_124(func_125(&Var0));
			if (iVar13 == 0)
			{
				func_123(&Global_1384134, iParam0);
				func_122(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_123(&Global_1384135, iParam0);
				func_122(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_123(&Global_1384136, iParam0);
				func_122(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_123(&Global_1384137, iParam0);
				func_122(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_123(&Global_1384138, iParam0);
				func_122(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_122(int iParam0, int iParam1)//Position - 0x5D1C
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

void func_123(var uParam0, int iParam1)//Position - 0x5E41
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_124(int iParam0)//Position - 0x5E52
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

int func_125(var uParam0)//Position - 0x5EAF
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

struct<13> func_126(int iParam0)//Position - 0x5ED2
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_127(int iParam0, int iParam1, int iParam2)//Position - 0x5EE9
{
	if (func_150())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_34(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_34(-1)])
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
		if (func_135(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_133(iParam0, 1);
		}
		func_132(639, iParam0, -1, 1);
		func_131(640, func_133(iParam0, 1), -1, 1, 0);
		Global_1384279[func_34(-1)] = iParam0;
		func_128(-1109644434, 7, 0);
	}
}

void func_128(int iParam0, int iParam1, int iParam2)//Position - 0x600F
{
	int iVar0;
	
	if (func_130(iParam1, iParam2))
	{
		iVar0 = func_129();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_129()//Position - 0x603C
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

int func_130(int iParam0, var uParam1)//Position - 0x6071
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

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x60F7
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6127
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_34(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_34(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_34(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_34(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_34(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_34(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_34(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_34(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_34(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_34(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_34(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_34(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_34(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_34(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_34(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_34(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_34(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_34(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_34(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_34(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_34(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_34(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_34(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_34(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_34(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_34(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_34(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_34(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_34(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_34(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_34(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_34(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_34(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_34(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_34(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_34(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_34(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_34(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_34(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_34(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_34(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_34(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_34(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_34(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_34(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_34(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_34(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_133(int iParam0, bool bParam1)//Position - 0x6AAA
{
	if (bParam1)
	{
	}
	return func_134(iParam0, 0);
}

int func_134(int iParam0, int iParam1)//Position - 0x6ABE
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

int func_135(int iParam0)//Position - 0x6B7D
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

int func_136(int iParam0, bool bParam1)//Position - 0x6BA2
{
	if (bParam1)
	{
	}
	return func_137(iParam0);
}

int func_137(int iParam0)//Position - 0x6BB5
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_34(-1)];
			}
			else if (func_135(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_34(-1)];
	}
	return 0;
}

void func_138(int iParam0, int iParam1, int iParam2)//Position - 0x6C12
{
	int iVar0;
	
	iVar0 = func_51(iParam0, func_34(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_139(iParam0))
	{
		func_131(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_132(iParam0, iVar0, iParam2, 1);
	}
}

int func_139(int iParam0)//Position - 0x6C54
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

void func_140(int iParam0)//Position - 0x6EB8
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_143(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_142(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_141(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_141(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_141(int iParam0, int iParam1)//Position - 0x6FA3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_142(int iParam0, int iParam1)//Position - 0x6FC4
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_126(iParam0) };
		Global_2507684 = { func_126(iParam1) };
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

int func_143(int iParam0, int iParam1, int iParam2)//Position - 0x7031
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

void func_144(bool bParam0, int iParam1)//Position - 0x71FC
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
				if (func_162(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_142(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_162(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_145(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_142(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_141(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_141(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_145(int iParam0, int iParam1)//Position - 0x7314
{
	return SYSTEM::VDIST(func_146(iParam0), func_146(iParam1));
	return 0f;
}

Vector3 func_146(int iParam0)//Position - 0x7330
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_147(int iParam0)//Position - 0x7343
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_141(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_148(int iParam0)//Position - 0x737A
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_136(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_136(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_149(8000, 0, 0) > 0)
	{
		if (func_149(8000, 0, 0) < (iParam0 + func_136(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_149(8000, 0, 0) - func_136(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_149(int iParam0, bool bParam1, int iParam2)//Position - 0x73E2
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

int func_150()//Position - 0x740A
{
	return 1;
}

int func_151(char* sParam0)//Position - 0x7413
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

bool func_152()//Position - 0x744C
{
	return Global_2448961.f_19;
}

int func_153(int iParam0)//Position - 0x745A
{
	return func_154(func_155(iParam0));
}

int func_154(int iParam0)//Position - 0x746C
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_155(int iParam0)//Position - 0x7486
{
	if (func_156(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_156(int iParam0, int iParam1)//Position - 0x74A9
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_157()//Position - 0x74E4
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_159();
	}
	return func_158(Global_4456448.f_154360);
}

int func_158(int iParam0)//Position - 0x7508
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

var func_159()//Position - 0x7542
{
	return Global_2448961.f_17;
}

bool func_160(int iParam0)//Position - 0x7550
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_161(int iParam0)//Position - 0x7565
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

int func_162(int iParam0, bool bParam1, bool bParam2)//Position - 0x757A
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

int func_163()//Position - 0x75C4
{
	if (func_165() && func_164(0))
	{
		return 1;
	}
	return 0;
}

var func_164(int iParam0)//Position - 0x75E2
{
	return Global_1312373[iParam0];
}

var func_165()//Position - 0x75F2
{
	return func_164(func_14() + 1);
}

void func_166(int iParam0, int iParam1)//Position - 0x7604
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar19;
	var uVar20;
	int iVar36;
	int iVar37;
	var uVar38;
	
	iVar0 = 0;
	iVar1 = 0;
	StringCopy(&Global_2460273, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &iVar2);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &uVar3);
	iVar19 = SOCIALCLUB::_SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2460273);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &uVar20);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &iVar36);
	SOCIALCLUB::_SC_INBOX_MESSAGE_POP(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2460255 = -99;
			Global_2460254 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2460255 = -1;
			Global_2460254 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2460255 = 1;
			Global_2460254 = iVar2;
		}
		iVar1 = 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar20, "[]") == 0)
	{
		Global_2460291 = 1;
	}
	if (iVar36 > 0)
	{
		Global_2460292 = iVar36;
	}
	if (iParam1 == 0)
	{
		if (func_83() == 0)
		{
			if (iVar19 == 1)
			{
				NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar37, &uVar38);
				if (iVar37 == 8)
				{
					NETSHOPPING::_NET_GAMESERVER_GET_BALANCE(iVar0, iVar1);
				}
			}
		}
	}
}

int func_167(int iParam0)//Position - 0x7703
{
	if (iParam0 == -877581966)
	{
		return 1;
	}
	if (iParam0 == 1988401830)
	{
		return 1;
	}
	return 0;
}

void func_168()//Position - 0x7728
{
	int iVar0;
	
	Global_111501 = MISC::GET_GAME_TIMER();
	if ((Global_111501 - Global_111502) > Global_111307)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_111495[iVar0] == 1)
			{
				Global_111503 = (Global_111503 - 1);
				if (Global_111503 < 0)
				{
					Global_111503 = 0;
				}
				Global_111495[iVar0] = 0;
				func_169(Global_111308[iVar0 /*36*/], Global_111489[iVar0]);
				iVar0 = 5;
				Global_111502 = MISC::GET_GAME_TIMER();
			}
			iVar0++;
		}
	}
}

void func_169(struct<36> Param0, int iParam36)//Position - 0x77A8
{
	char cVar0[64];
	char cVar16[64];
	char cVar32[64];
	
	iParam36 = func_176(Param0);
	if (iParam36 != -1)
	{
		if (MISC::GET_PROFILE_SETTING(803) == 1)
		{
			if (func_53())
			{
				func_172(Param0, iParam36);
			}
		}
	}
	else
	{
		switch (Param0)
		{
			case joaat("total_progress_made"):
				if (MISC::GET_PROFILE_SETTING(803) == 1)
				{
					if (func_53())
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_F100PC_COMP");
						StringCopy(&cVar0, "<C>", 64);
						StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						StringConCat(&cVar0, &(Param0.f_1), 64);
						StringConCat(&cVar0, "...", 64);
						StringConCat(&cVar0, "</C>", 64);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
						Global_111502 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case joaat("sp_vehicle_models_driven"):
				if (Param0.f_17 == 200)
				{
					Global_111501 = MISC::GET_GAME_TIMER();
					if ((Global_111501 - Global_111502) > Global_111307)
					{
						if (MISC::GET_PROFILE_SETTING(803) == 1)
						{
							if (func_53())
							{
								HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_DRIVEN_ALL_VEH");
								StringCopy(&cVar16, "<C>", 64);
								StringConCat(&cVar16, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								StringConCat(&cVar16, &(Param0.f_1), 64);
								StringConCat(&cVar16, "...", 64);
								StringConCat(&cVar16, "</C>", 64);
								HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar16, 0);
								Global_111502 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						func_171(Param0, -1);
					}
				}
				break;
			
			case joaat("num_rndevents_completed"):
				Global_111501 = MISC::GET_GAME_TIMER();
				if ((Global_111501 - Global_111502) > Global_111307)
				{
					if (MISC::GET_PROFILE_SETTING(803) == 1)
					{
						if (func_53())
						{
							HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_RNDEV_COMP");
							StringCopy(&cVar32, "<C>", 64);
							StringConCat(&cVar32, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							StringConCat(&cVar32, &(Param0.f_1), 64);
							StringConCat(&cVar32, "...", 64);
							StringConCat(&cVar32, "</C>", 64);
							HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar32, 0);
							Global_111502 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_171(Param0, -1);
				}
				break;
			
			case joaat("num_hidden_packages_0"):
				if (Param0.f_17 == 50)
				{
					func_170(Param0, "CELL_FEED_LETTER_SCRAPS");
				}
				break;
			
			case joaat("num_hidden_packages_1"):
				if (Param0.f_17 == 50)
				{
					func_170(Param0, "CELL_FEED_SPACESHIP_PARTS");
				}
				break;
			
			case joaat("num_hidden_packages_3"):
				if (Param0.f_17 == 50)
				{
					func_170(Param0, "CELL_FEED_SONAR_COLL");
				}
				break;
			
			case joaat("sp0_dist_driving_car"):
				if (Param0.f_18 == 500f)
				{
					func_170(Param0, "CELL_FEED_DRIVEN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_170(Param0, "CELL_FEED_DRIVEN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_170(Param0, "CELL_FEED_DRIVEN_50000");
				}
				break;
			
			case joaat("sp0_dist_driving_plane"):
				if (Param0.f_18 == 500f)
				{
					func_170(Param0, "CELL_FEED_FLOWN_500");
				}
				if (Param0.f_18 == 5000f)
				{
					func_170(Param0, "CELL_FEED_FLOWN_5000");
				}
				if (Param0.f_18 == 50000f)
				{
					func_170(Param0, "CELL_FEED_FLOWN_50000");
				}
				break;
			
			case joaat("sp0_dist_running"):
				if (Param0.f_18 == 50f)
				{
					func_170(Param0, "CELL_FEED_RAN_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_170(Param0, "CELL_FEED_RAN_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_170(Param0, "CELL_FEED_RAN_1000");
				}
				break;
			
			case joaat("sp0_dist_swimming"):
				if (Param0.f_18 == 50f)
				{
					func_170(Param0, "CELL_FEED_SWAM_50");
				}
				if (Param0.f_18 == 100f)
				{
					func_170(Param0, "CELL_FEED_SWAM_100");
				}
				if (Param0.f_18 == 1000f)
				{
					func_170(Param0, "CELL_FEED_SWAM_1000");
				}
				break;
			
			case joaat("sp0_busted"):
				if (Param0.f_17 == 10)
				{
					func_170(Param0, "CELL_FEED_BUSTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_170(Param0, "CELL_FEED_BUSTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_170(Param0, "CELL_FEED_BUSTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_170(Param0, "CELL_FEED_BUSTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_170(Param0, "CELL_FEED_BUSTED_250");
				}
				break;
			
			case joaat("sp0_deaths"):
				if (Param0.f_17 == 10)
				{
					func_170(Param0, "CELL_FEED_WASTED_10");
				}
				if (Param0.f_17 == 25)
				{
					func_170(Param0, "CELL_FEED_WASTED_25");
				}
				if (Param0.f_17 == 50)
				{
					func_170(Param0, "CELL_FEED_WASTED_50");
				}
				if (Param0.f_17 == 100)
				{
					func_170(Param0, "CELL_FEED_WASTED_100");
				}
				if (Param0.f_17 == 250)
				{
					func_170(Param0, "CELL_FEED_WASTED_250");
				}
				break;
			
			case joaat("sp0_shots"):
				if (Param0.f_17 == 1000000)
				{
					func_170(Param0, "CELL_FEED_SHOTS_1ML");
				}
				if (Param0.f_17 == 2000000)
				{
					func_170(Param0, "CELL_FEED_SHOTS_2ML");
				}
				if (Param0.f_17 == 3000000)
				{
					func_170(Param0, "CELL_FEED_SHOTS_3ML");
				}
				if (Param0.f_17 == 4000000)
				{
					func_170(Param0, "CELL_FEED_SHOTS_4ML");
				}
				if (Param0.f_17 == 5000000)
				{
					func_170(Param0, "CELL_FEED_SHOTS_5ML");
				}
				break;
			
			case joaat("sp0_stars_evaded"):
				if (Param0.f_17 == 5)
				{
					func_170(Param0, "CELL_FEED_5STARS_WL");
				}
				break;
			
			case joaat("sp0_crouched"):
				if (Param0.f_17 == 10)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 0))
					{
						func_170(Param0, "CELL_FEED_WEB_CAR");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 0);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 1))
					{
						func_170(Param0, "CELL_FEED_WEB_RHINO");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 1);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 2))
					{
						func_170(Param0, "CELL_FEED_WEB_BUZZARD");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 2);
					}
				}
				break;
			
			case joaat("sp0_crouched_and_shot"):
				if (Param0.f_17 == 10)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 3))
					{
						func_170(Param0, "CELL_FEED_STOCK_INV");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 3);
					}
				}
				if (Param0.f_17 == 20)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 4))
					{
						func_170(Param0, "CELL_FEED_STOCK_WIN");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 4);
					}
				}
				if (Param0.f_17 == 30)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 5))
					{
						func_170(Param0, "CELL_FEED_STOCK_LOSS");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 5);
					}
				}
				break;
			
			case joaat("sp0_water_cannon_kills"):
				if (Param0.f_17 == 25)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 10))
					{
						func_170(Param0, "CELL_FEED_STNJ_25");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 10);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 11))
					{
						func_170(Param0, "CELL_FEED_STNJ_50");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 11);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 12))
					{
						func_170(Param0, "CELL_FEED_STNJ_75");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 12);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 13))
					{
						func_170(Param0, "CELL_FEED_STNJ_100");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 13);
					}
				}
				break;
			
			case joaat("sp0_water_cannon_deaths"):
				if (Param0.f_17 == 25)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 6))
					{
						func_170(Param0, "CELL_FEED_UTB_25");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 6);
					}
				}
				if (Param0.f_17 == 50)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 7))
					{
						func_170(Param0, "CELL_FEED_UTB_50");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 7);
					}
				}
				if (Param0.f_17 == 75)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 8))
					{
						func_170(Param0, "CELL_FEED_UTB_75");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 8);
					}
				}
				if (Param0.f_17 == 100)
				{
					if (!MISC::IS_BIT_SET(Global_111560.f_10189.f_3856, 9))
					{
						func_170(Param0, "CELL_FEED_UTB_100");
						MISC::SET_BIT(&(Global_111560.f_10189.f_3856), 9);
					}
				}
				break;
			}
	}
}

void func_170(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, char* sParam36)//Position - 0x7FED
{
	char cVar0[64];
	
	if (MISC::GET_PROFILE_SETTING(803) == 1)
	{
		if (func_53())
		{
			Global_111501 = MISC::GET_GAME_TIMER();
			if ((Global_111501 - Global_111502) > Global_111307)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam36);
				StringCopy(&cVar0, "<C>", 64);
				StringConCat(&cVar0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar0, &(Param0.f_1), 64);
				StringConCat(&cVar0, "...", 64);
				StringConCat(&cVar0, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar0, 0);
				Global_111502 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_171(struct<36> Param0, int iParam36)//Position - 0x806A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_111495[iVar0] == 0)
		{
			Global_111308[iVar0 /*36*/] = { Param0 };
			Global_111489[iVar0] = iParam36;
			Global_111495[iVar0] = 1;
			Global_111503++;
			if (Global_111503 > 5)
			{
				Global_111503 = 5;
			}
			iVar0 = 5;
		}
		iVar0++;
	}
}

void func_172(struct<36> Param0, int iParam36)//Position - 0x80CD
{
	int iVar0;
	var uVar1;
	vector3 vVar17[24];
	char cVar23[64];
	char cVar39[64];
	
	if (func_53())
	{
		MemCopy(&uVar1, {func_175(iParam36)}, 16);
		StringCopy(&cVar17, "NO_BLURB_REQ", 24);
		switch (iParam36)
		{
			case 53:
				StringCopy(&cVar17, "CELL_F_PROLOGUE", 24);
				break;
			
			case 44:
				StringCopy(&cVar17, "CELL_F_LESTER1", 24);
				break;
			
			case 20:
				StringCopy(&cVar17, "CELL_F_FAMILY4", 24);
				break;
			
			case 75:
				StringCopy(&cVar17, "CELL_F_DOCKH2B", 24);
				break;
			
			case 38:
				StringCopy(&cVar17, "CELL_F_FIB4", 24);
				break;
			
			case 93:
				StringCopy(&cVar17, "CELL_F_RURALH2", 24);
				break;
			
			case 69:
				StringCopy(&cVar17, "CELL_F_AGENCYH3A", 24);
				break;
			
			case 70:
				StringCopy(&cVar17, "CELL_F_AGENCYH3B", 24);
				break;
			
			case 47:
				StringCopy(&cVar17, "CELL_F_MICHAEL2", 24);
				break;
			
			case 42:
				StringCopy(&cVar17, "CELL_F_FRANKLIN2", 24);
				break;
			
			case 84:
				StringCopy(&cVar17, "CELL_F_FINALEH2A", 24);
				break;
			
			case 85:
				StringCopy(&cVar17, "CELL_F_FINALEH2B", 24);
				break;
			
			case 24:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 25:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
			
			case 27:
				StringCopy(&cVar17, "CELL_F_ENDCHOICE", 24);
				break;
		}
		Global_111501 = MISC::GET_GAME_TIMER();
		if ((Global_111501 - Global_111502) > Global_111307)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&cVar17, "NO_BLURB_REQ"))
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar17);
				StringCopy(&cVar23, "<C>", 64);
				StringConCat(&cVar23, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar23, &(Param0.f_1), 64);
				StringConCat(&cVar23, "...", 64);
				StringConCat(&cVar23, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar23, 0);
			}
			else if (func_174(iParam36))
			{
				iVar0 = func_173(iParam36);
				if (Param0.f_17 > iVar0)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_BEAT_MIS_SCORE");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&uVar1);
					StringCopy(&cVar39, "<C>", 64);
					StringConCat(&cVar39, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					StringConCat(&cVar39, &(Param0.f_1), 64);
					StringConCat(&cVar39, "...", 64);
					StringConCat(&cVar39, "</C>", 64);
					HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &cVar39, 0);
				}
			}
			Global_111502 = MISC::GET_GAME_TIMER();
		}
		else
		{
			func_171(Param0, iParam36);
		}
	}
}

var func_173(int iParam0)//Position - 0x82D7
{
	return Global_111560.f_9080.f_330[iParam0 /*6*/].f_4;
}

int func_174(int iParam0)//Position - 0x82EF
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

struct<2> func_175(int iParam0)//Position - 0x831B
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89487[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111560.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_176(int iParam0)//Position - 0x8384
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		iVar1 = iVar0;
		if (!MISC::IS_BIT_SET(Global_89487[iVar1 /*34*/].f_15, 6))
		{
			if (func_177(iVar1) == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0)//Position - 0x83C7
{
	char cVar0[16];
	
	if (!MISC::IS_BIT_SET(Global_89487[iParam0 /*34*/].f_15, 7))
	{
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &(Global_89487[iParam0 /*34*/].f_8), 16);
		if (iParam0 == 90)
		{
			if (Global_111560.f_9080.f_99.f_205[7] == 2)
			{
				StringConCat(&cVar0, "B", 16);
			}
			else
			{
				StringConCat(&cVar0, "A", 16);
			}
		}
		return MISC::GET_HASH_KEY(&cVar0);
	}
	return joaat("cities_passed");
}

void func_178(var uParam0, bool bParam1)//Position - 0x8432
{
	if (!func_53())
	{
		return;
	}
	if (!bParam1)
	{
		return;
	}
	if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam0->f_166 == 0)
	{
		uParam0->f_166 = 1;
	}
	else
	{
		if (MISC::GET_PROFILE_SETTING(803) != 1)
		{
		}
		if (uParam0->f_166 == 1)
		{
		}
	}
}

void func_179(int iParam0, var uParam1, bool bParam2)//Position - 0x8480
{
	struct<2> Var0;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TA");
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(0, 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TI");
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(0, 1);
			}
		}
	}
}

void func_180(int iParam0, var uParam1, bool bParam2)//Position - 0x84F6
{
	struct<2> Var0;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			if (Var0.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA");
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA");
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
	}
}

void func_181(int iParam0, var uParam1, bool bParam2)//Position - 0x856C
{
	struct<2> Var0;
	struct<4> Var35;
	int iVar46;
	int iVar47;
	struct<4> Var48;
	
	if (!func_53() || !func_52())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var35, 11))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			iVar46 = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
			iVar47 = 0;
			while (iVar47 < iVar46)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar47);
				if (Var0 == Var35)
				{
					if (Var35.f_2)
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("HIGHER_RANK"), 32);
					}
					else
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("LOWER_RANK"), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank4"))
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("CREW_RANK4"), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank3"))
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("CREW_RANK3"), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank2"))
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("CREW_RANK2"), 32);
					}
					if (MISC::ARE_STRINGS_EQUAL(&(Var35.f_3), "Rank1"))
					{
						StringCopy(&Var48, HUD::_GET_LABEL_TEXT("CREW_RANK1"), 32);
					}
					if (Var35.f_2)
					{
						func_182("CREWPROM", &Var48, &(Var0.f_1), 1);
					}
					else
					{
						func_182("CREWDEMO", &Var48, &(Var0.f_1), 1);
					}
					uParam1->f_166 = 1;
				}
				iVar47++;
			}
		}
	}
}

int func_182(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x86A1
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_59(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return iVar0;
}

void func_183(int iParam0, var uParam1, bool bParam2)//Position - 0x86DC
{
	int iVar0;
	struct<21> Var1;
	struct<37> Var37;
	struct<68> Var131;
	var uVar219;
	
	if (!func_53())
	{
		return;
	}
	if (!func_163())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 36))
	{
		if (!bParam2)
		{
			return;
		}
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_166 == 0)
		{
			switch (Var1)
			{
				case joaat("mp0_awd_50_vehicles_blownup"):
				case joaat("mp1_awd_50_vehicles_blownup"):
					iVar0 = func_50(10, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_188("SCFEED_13", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_188("SCFEED_13b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_awd_vehicles_jackedr"):
				case joaat("mp1_awd_vehicles_jackedr"):
					iVar0 = func_50(11, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_188("SCFEED_10", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_188("SCFEED_10b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmtime5starwanted"):
				case joaat("mp1_awd_fmtime5starwanted"):
					iVar0 = func_50(60, -1);
					if (Var1.f_17 > iVar0)
					{
						func_188("SCFEED_4", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmfurthestwheelie"):
				case joaat("mp1_awd_fmfurthestwheelie"):
					iVar0 = SYSTEM::ROUND(func_49(32, -1));
					if (Var1.f_17 > iVar0)
					{
						if (func_187(PLAYER::PLAYER_ID()) == 133 && func_186(PLAYER::PLAYER_ID()) == 4)
						{
						}
						else
						{
							if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
							{
								func_188("SCFEED_5", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							else
							{
								func_188("SCFEED_5b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
							}
							uParam1->f_166 = 1;
						}
					}
					break;
				
				case joaat("mp0_awd_fmdrivewithoutcrash"):
				case joaat("mp1_awd_fmdrivewithoutcrash"):
					iVar0 = func_50(61, -1);
					if (Var1.f_17 > iVar0)
					{
						func_188("SCFEED_6", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmmostflipsinonevehicle"):
				case joaat("mp1_awd_fmmostflipsinonevehicle"):
					iVar0 = func_50(62, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_188("SCFEED_7", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_188("SCFEED_7b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_awd_fmmostspinsinonevehicle"):
				case joaat("mp1_awd_fmmostspinsinonevehicle"):
					iVar0 = func_50(63, -1);
					if (Var1.f_17 > iVar0)
					{
						if (Var1.f_17 > 1)
						{
							func_188("SCFEED_8", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						else
						{
							func_188("SCFEED_8b", &(Var1.f_1), Var1.f_17, iVar0, 0, 1);
						}
						uParam1->f_166 = 1;
					}
					break;
				
				case joaat("mp0_char_fm_race_record_times"):
				case joaat("mp1_char_fm_race_record_times"):
					if (((((((((((((((func_113() == 0 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_112()) && !func_111()) && !func_110()) && !func_109()) && !func_108()) && !func_107()) && !func_106()) && !func_105()) && (func_163() && func_101())) && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 8) && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 9) && !func_99(PLAYER::PLAYER_ID())) && !func_98()) && !func_96(PLAYER::PLAYER_ID(), 1, 0))
					{
						Var37.f_17 = 1;
						Var37.f_21 = -1;
						Var37.f_22 = -1;
						Var37.f_23 = 2;
						Var37.f_36 = 2;
						Var131.f_65 = -1;
						Var131.f_66 = -1;
						Var131.f_67 = 2;
						if (func_81(&Var37, &(Var1.f_20), &Var131, &uVar219))
						{
							if (Var37)
							{
								func_185("SCFEED_11", &(Var1.f_1), Var1.f_17, &(Var131.f_22), 1, 2f);
								if (!func_184())
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
								}
								uParam1->f_166 = 1;
							}
						}
					}
					break;
				}
		}
	}
}

bool func_184()//Position - 0x8AFB
{
	return Global_1312850;
}

int func_185(char* sParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, float fParam5)//Position - 0x8B07
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 2055);
	if (bParam4)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, "", fParam5);
	}
	else
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(18, sParam0, 1, sParam1, iParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return iVar0;
}

int func_186(int iParam0)//Position - 0x8B7A
{
	if (func_187(iParam0) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

int func_187(int iParam0)//Position - 0x8B9B
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_188(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x8BBA
{
	int iVar0;
	struct<16> Var1;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_66(sParam1));
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	if (bParam5)
	{
		Var1 = { func_76(sParam1) };
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, &Var1, 0);
	}
	else
	{
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	func_59(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_189(int iParam0)//Position - 0x8C41
{
	struct<36> Var0;
	int iVar36;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 36))
	{
		func_169(Var0, iVar36);
	}
}

int func_190()//Position - 0x8C65
{
	switch (MISC::GET_PROFILE_SETTING(807))
	{
		case 0:
			return 0;
		
		case 1:
			return 60000;
		
		case 2:
			return 120000;
		
		case 3:
			return 180000;
		
		case 4:
			return 240000;
		
		case 5:
			return 300000;
		
		case 6:
			return 600000;
		
		case 7:
			return 900000;
		
		case 8:
			return 1800000;
		
		case 9:
			return 3600000;
		
		default:
	}
	return 300000;
}

void func_191()//Position - 0x8CFC
{
	if (!iLocal_159)
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_157))
		{
			if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_157))
			{
				if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_157))
				{
					iLocal_157 = 0;
					iLocal_159 = 1;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2097152[func_193() /*10828*/].f_6080.f_56 = { func_194() };
					}
					else
					{
						Global_111560.f_20113.f_267 = { func_194() };
					}
					iLocal_157 = 0;
					iLocal_159 = 1;
				}
			}
		}
		else if (func_192(&uLocal_153, &uLocal_158))
		{
			SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&uLocal_153, &iLocal_157);
		}
		else
		{
			iLocal_157 = 0;
			iLocal_159 = 1;
		}
	}
}

int func_192(var uParam0, var uParam1)//Position - 0x8D85
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_111560.f_20113.f_261)
	{
		*uParam0 = { Global_111560.f_20113.f_267 };
		*uParam1 = Global_111560.f_20113.f_271;
		return 1;
	}
	return 0;
}

int func_193()//Position - 0x8DC6
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

struct<4> func_194()//Position - 0x8DD3
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	iVar5 = 0;
	while (iVar5 <= 7)
	{
		if (iVar5 < 2)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_195(iVar4), 16);
		}
		else if (iVar5 < 5)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(10, 36);
			StringConCat(&Var0, func_195(iVar4), 16);
		}
		else
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			StringConCat(&Var0, func_195(iVar4), 16);
		}
		iVar5++;
	}
	return Var0;
}

char* func_195(int iParam0)//Position - 0x8E43
{
	if (iParam0 == 0)
	{
		return "0";
	}
	if (iParam0 == 1)
	{
		return "1";
	}
	if (iParam0 == 2)
	{
		return "2";
	}
	if (iParam0 == 3)
	{
		return "3";
	}
	if (iParam0 == 4)
	{
		return "4";
	}
	if (iParam0 == 5)
	{
		return "5";
	}
	if (iParam0 == 6)
	{
		return "6";
	}
	if (iParam0 == 7)
	{
		return "7";
	}
	if (iParam0 == 8)
	{
		return "8";
	}
	if (iParam0 == 9)
	{
		return "9";
	}
	if (iParam0 == 10)
	{
		return "A";
	}
	if (iParam0 == 11)
	{
		return "B";
	}
	if (iParam0 == 12)
	{
		return "C";
	}
	if (iParam0 == 13)
	{
		return "D";
	}
	if (iParam0 == 14)
	{
		return "E";
	}
	if (iParam0 == 15)
	{
		return "F";
	}
	if (iParam0 == 16)
	{
		return "G";
	}
	if (iParam0 == 17)
	{
		return "H";
	}
	if (iParam0 == 18)
	{
		return "I";
	}
	if (iParam0 == 19)
	{
		return "J";
	}
	if (iParam0 == 20)
	{
		return "K";
	}
	if (iParam0 == 21)
	{
		return "L";
	}
	if (iParam0 == 22)
	{
		return "M";
	}
	if (iParam0 == 23)
	{
		return "N";
	}
	if (iParam0 == 24)
	{
		return "O";
	}
	if (iParam0 == 25)
	{
		return "P";
	}
	if (iParam0 == 26)
	{
		return "Q";
	}
	if (iParam0 == 27)
	{
		return "R";
	}
	if (iParam0 == 28)
	{
		return "S";
	}
	if (iParam0 == 29)
	{
		return "T";
	}
	if (iParam0 == 30)
	{
		return "U";
	}
	if (iParam0 == 31)
	{
		return "V";
	}
	if (iParam0 == 32)
	{
		return "W";
	}
	if (iParam0 == 33)
	{
		return "X";
	}
	if (iParam0 == 34)
	{
		return "Y";
	}
	if (iParam0 == 35)
	{
		return "Z";
	}
	return "A";
}

void func_196()//Position - 0x903F
{
	bool bVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_492(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iLocal_117 == 0)
	{
		func_491();
		if (bLocal_113)
		{
			return;
		}
		func_490();
	}
	func_461();
	if (bLocal_116)
	{
		return;
	}
	func_443();
	func_441();
	bVar0 = iLocal_115;
	bVar1 = ((iLocal_105 == 0 && !bLocal_116) && !bLocal_113);
	if (iLocal_115)
	{
		iLocal_115 = 0;
	}
	else
	{
		iLocal_105 = (iLocal_105 + 1 % 30);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_105 < 20)
		{
			if (!bVar0)
			{
				iLocal_106++;
				if (iLocal_106 >= 10)
				{
					iLocal_106 = 0;
					bLocal_109 = !bLocal_109;
				}
			}
			iLocal_108 = (Global_2097152[func_193() /*10828*/].f_6080.f_63[iLocal_106] - 1);
			if (bLocal_109)
			{
				if (func_440(iLocal_108, &iLocal_107))
				{
					func_203(3);
				}
			}
			else if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iLocal_106] == 0)
			{
				func_202(iLocal_106);
			}
		}
	}
	else
	{
		switch (iLocal_105)
		{
			case 0:
				func_203(0);
				break;
			
			case 1:
				func_203(1);
				break;
			
			case 2:
				func_203(2);
				break;
			
			case 3:
				func_197();
				break;
			}
	}
	if (bVar1)
	{
		if (iLocal_133)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				APP::APP_SET_APP("car");
				APP::APP_SAVE_DATA();
				APP::APP_CLOSE_APP();
				iLocal_133 = 0;
			}
		}
	}
}

void func_197()//Position - 0x9195
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (func_201())
	{
		return;
	}
	if (Global_30881)
	{
		if (!iLocal_131)
		{
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_200("chopKilled", MISC::GET_RANDOM_INT_IN_RANGE(0, 65535));
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			iLocal_131 = 1;
		}
	}
	else
	{
		iLocal_131 = 0;
	}
	APP::APP_SET_APP("dog");
	APP::APP_SET_BLOCK("saveData");
	if (APP::APP_DATA_VALID())
	{
		iVar0 = APP::APP_GET_INT("happinessTimer");
		if (iVar0 == 0)
		{
			iVar0 = 450;
		}
		iVar1 = APP::APP_GET_INT("happinessDecrement");
		if (iVar1 == 0)
		{
			iVar1 = 1;
		}
		iVar2 = APP::APP_GET_INT("time_stamp");
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar3 == 0)
		{
			iVar3 = iVar2;
		}
		iVar4 = APP::APP_GET_INT("happiness");
		iVar5 = (iVar3 - iVar2);
		iVar6 = ((iVar5 / iVar0) * iVar1);
		iVar7 = func_199((iVar4 - iVar6), 0, 100);
		Global_111560.f_20113.f_254 = SYSTEM::TO_FLOAT(iVar7);
		Global_111560.f_20113.f_254.f_1 = APP::APP_GET_FLOAT("cleanliness");
		Global_111560.f_20113.f_254.f_2 = APP::APP_GET_FLOAT("hunger");
		Global_111560.f_20113.f_254.f_3 = func_27("trainingLevel");
		Global_111560.f_20113.f_254.f_4 = func_27("collar");
		Global_111560.f_20113.f_254.f_5 = 1;
		if (Global_111560.f_20113.f_254 > 50f)
		{
		}
		if (Global_111560.f_20113.f_254.f_2 > 50f)
		{
		}
		Global_111560.f_20113.f_263 = func_27("usedApp") != 0;
		if (STATS::STAT_GET_BOOL(joaat("chop_app_used"), &bVar8, -1))
		{
			if (!bVar8)
			{
				if (Global_111560.f_20113.f_263)
				{
					STATS::STAT_SET_BOOL(joaat("chop_app_used"), true, 1);
				}
			}
		}
	}
	APP::APP_CLOSE_BLOCK();
	APP::APP_CLOSE_APP();
	if (Global_111560.f_20113.f_264)
	{
		APP::APP_SET_APP("dog");
		APP::APP_SET_BLOCK("saveData");
		if (func_198(6))
		{
			func_200("chopSafeHouse", 1);
		}
		else
		{
			func_200("chopSafeHouse", 0);
		}
		APP::APP_SAVE_DATA();
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_111560.f_20113.f_264 = 0;
	}
}

bool func_198(int iParam0)//Position - 0x939D
{
	return MISC::IS_BIT_SET(Global_111560.f_7224[iParam0], 0);
}

int func_199(int iParam0, int iParam1, int iParam2)//Position - 0x93B5
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_200(char* sParam0, int iParam1)//Position - 0x93DA
{
	APP::APP_SET_INT(func_28(sParam0), iParam1);
}

int func_201()//Position - 0x93EE
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	return 1;
}

void func_202(int iParam0)//Position - 0x9403
{
	char cVar0[16];
	
	if (!Global_2097152[func_193() /*10828*/].f_6080.f_41[iParam0])
	{
		APP::APP_SET_APP("car");
		StringCopy(&cVar0, "multiplayer", 16);
		StringIntConCat(&cVar0, func_14(), 16);
		APP::APP_SET_BLOCK(&cVar0);
		StringCopy(&cVar0, "vehicle", 16);
		StringIntConCat(&cVar0, iParam0, 16);
		APP::APP_SET_BLOCK(&cVar0);
		func_200("carUnlocked", 0);
		APP::APP_CLOSE_BLOCK();
		iLocal_133 = 1;
		SYSTEM::SETTIMERA(0);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_2097152[func_193() /*10828*/].f_6080.f_41[iParam0] = 1;
	}
}

void func_203(int iParam0)//Position - 0x9487
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<6> Var8;
	vector3 vVar14[24];
	struct<6> Var20;
	struct<43> Var26;
	struct<41> Var69;
	int iVar110;
	int iVar111;
	struct<82> Var112;
	int iVar210;
	int iVar211;
	int iVar212;
	char cVar213[16];
	int iVar217;
	bool bVar218;
	int iVar219;
	int iVar220;
	int iVar221[6];
	int iVar228;
	bool bVar229;
	bool bVar230;
	struct<2> Var231;
	int iVar235;
	int iVar236;
	int iVar237;
	int iVar238;
	int iVar239;
	int iVar240;
	int iVar241;
	
	Var26.f_33 = 5;
	if (iParam0 == 0)
	{
		iVar2 = 0;
		StringCopy(&Var8, "singleplayer0", 24);
		StringCopy(&cVar14, "sp0_order", 24);
		Var26 = { Global_111560.f_20113[0 /*43*/] };
		Var69 = { Global_111560.f_20113.f_130[0 /*41*/] };
	}
	else if (iParam0 == 1)
	{
		iVar2 = 1;
		StringCopy(&Var8, "singleplayer1", 24);
		StringCopy(&cVar14, "sp1_order", 24);
		Var26 = { Global_111560.f_20113[1 /*43*/] };
		Var69 = { Global_111560.f_20113.f_130[1 /*41*/] };
	}
	else if (iParam0 == 2)
	{
		iVar2 = 2;
		StringCopy(&Var8, "singleplayer2", 24);
		StringCopy(&cVar14, "sp2_order", 24);
		Var26 = { Global_111560.f_20113[2 /*43*/] };
		Var69 = { Global_111560.f_20113.f_130[2 /*41*/] };
	}
	else if (iParam0 == 3)
	{
		iVar3 = func_14();
		iVar2 = (3 + iVar3);
		StringCopy(&Var8, "multiplayer", 24);
		StringIntConCat(&Var8, iVar3, 24);
		StringCopy(&cVar14, "mp", 24);
		StringIntConCat(&cVar14, iVar3, 24);
		StringConCat(&cVar14, "_order", 24);
		if (func_439(iLocal_107, &iVar110))
		{
			func_438(&Var26, iVar110);
		}
		else
		{
			func_438(&Var26, 0);
		}
		Var69 = { Global_2097152[func_193() /*10828*/].f_6080 };
		StringCopy(&Var20, "vehicle", 24);
		StringIntConCat(&Var20, iLocal_106, 24);
	}
	else
	{
		return;
	}
	if (iLocal_132 || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_110))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_132 = 0;
		}
		else
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_200("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_200("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_200("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iVar111 = 0;
			while (iVar111 < Global_111560.f_20113)
			{
				if (!Global_111560.f_20113[iVar111 /*43*/].f_41)
				{
					Global_111560.f_20113[iVar111 /*43*/].f_40 = 0;
					if (Global_111560.f_20113[iVar111 /*43*/] != 0 && Global_111560.f_20113[iVar111 /*43*/].f_29 != 0)
					{
						Global_111560.f_20113[iVar111 /*43*/].f_40 = 1;
					}
					else
					{
						Global_111560.f_20113.f_273[iVar111] = 0;
					}
				}
				iVar111++;
			}
			iLocal_132 = 0;
		}
		if (iParam0 >= 2)
		{
			iLocal_132 = 0;
			iLocal_110 = 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_111560.f_20113.f_273[iParam0])
		{
			if (((!func_437(0) && !func_437(3)) && !func_437(2)) || !func_174(0))
			{
				if ((iParam0 == 1 || (((iParam0 == 0 && func_174(0)) && func_436(iParam0)) && !Global_111560.f_9080.f_99.f_58[135])) || (((iParam0 == 2 && func_174(0)) && func_436(iParam0)) && !Global_111560.f_9080.f_99.f_58[136]))
				{
					APP::APP_SET_APP("car");
					APP::APP_SET_BLOCK(&Var8);
					APP::APP_CLEAR_BLOCK();
					Var112.f_11 = 12;
					Var112.f_31 = 49;
					Var112.f_81 = 2;
					func_435(iParam0, &Var112, 1);
					func_434(Var112.f_5, Var112.f_7, -1, 1, &iVar210);
					func_434(Var112.f_6, -1, -1, 0, &iVar211);
					func_200("carUnlocked", 1);
					func_200("carModel", Var112);
					func_200("tyreSmokeColourEnabled", 1);
					func_200("tyreSmokeColourRed", 255);
					func_200("tyreSmokeColourGreen", 255);
					func_200("tyreSmokeColourBlue", 255);
					if (Var112 == joaat("buffalo2"))
					{
						func_433("carType", "sport");
						func_200("carEngineCount", 5);
						func_200("carBrakesCount", 4);
						func_200("carExhaustCount", 6);
						func_200("carWheelCount", 26);
						func_200("carHornCount", 5);
						func_200("carArmourCount", 6);
						func_200("carSuspensionCount", 5);
						func_200("carHorn1", 1748384362);
						func_200("carHorn2", 1766676233);
						func_200("carHorn3", -1390777827);
						func_200("carHorn4", -1751761149);
						func_200("carHorn5", 1732399718);
						func_432("carPriceModifier", 3.25f);
						func_200("carColour1", iVar210);
						func_200("carColour2", iVar211);
						func_200("carColour1Unlocked", 1);
						func_200("carColour2Unlocked", 1);
					}
					else if (Var112 == joaat("bodhi2"))
					{
						func_433("carType", "car");
						func_200("carEngineCount", 5);
						func_200("carBrakesCount", 4);
						func_200("carExhaustCount", 1);
						func_200("carWheelCount", 26);
						func_200("carHornCount", 5);
						func_200("carArmourCount", 6);
						func_200("carSuspensionCount", 1);
						func_200("carHorn1", -1512308941);
						func_200("carHorn2", 1766676233);
						func_200("carHorn3", -1390777827);
						func_200("carHorn4", -1751761149);
						func_200("carHorn5", 1732399718);
						func_432("carPriceModifier", 1f);
						func_200("carColour1", iVar210);
						func_200("carColour1Unlocked", 1);
					}
					else if (Var112 == joaat("tailgater"))
					{
						func_433("carType", "car");
						func_200("carEngineCount", 5);
						func_200("carBrakesCount", 5);
						func_200("carExhaustCount", 5);
						func_200("carWheelCount", 26);
						func_200("carHornCount", 5);
						func_200("carArmourCount", 6);
						func_200("carSuspensionCount", 5);
						func_200("carHorn1", 36213993);
						func_200("carHorn2", 1766676233);
						func_200("carHorn3", -1390777827);
						func_200("carHorn4", -1751761149);
						func_200("carHorn5", 1732399718);
						func_432("carPriceModifier", 1f);
						func_200("carColour1", iVar210);
						func_200("carColour2", iVar211);
						func_200("carColour1Unlocked", 1);
						func_200("carColour2Unlocked", 1);
					}
					APP::APP_CLOSE_BLOCK();
					Local_119 = { Var8 };
					Local_125 = { Var20 };
					iLocal_118 = Var112;
					bLocal_116 = true;
					iLocal_133 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_APP();
					Global_111560.f_20113.f_273[iParam0] = 1;
				}
			}
		}
		else if ((iParam0 == 0 && Global_111560.f_9080.f_99.f_58[135]) || (iParam0 == 2 && Global_111560.f_9080.f_99.f_58[136]))
		{
			Global_111560.f_20113[iParam0 /*43*/].f_41 = 1;
			Global_111560.f_20113.f_273[iParam0] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar212 = 0;
		if (iLocal_161 == 0)
		{
			iVar212 = func_431(joaat("mpply_carapp_data_sent_0"));
		}
		else if (iLocal_161 == 1)
		{
			iVar212 = func_431(joaat("mpply_carapp_data_sent_1"));
		}
		else if (iLocal_161 == 2)
		{
			iVar212 = func_431(joaat("mpply_carapp_data_sent_2"));
		}
		else if (iLocal_161 == 3)
		{
			iVar212 = func_431(joaat("mpply_carapp_data_sent_3"));
		}
		else if (iLocal_161 == 4)
		{
			iVar212 = func_431(joaat("mpply_carapp_data_sent_4"));
		}
		if (iVar212 && !func_430(iLocal_161))
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar213, "multiplayer", 16);
			StringIntConCat(&cVar213, iLocal_161, 16);
			APP::APP_SET_BLOCK(&cVar213);
			iVar217 = 0;
			while (iVar217 < 10)
			{
				StringCopy(&cVar213, "vehicle", 16);
				StringIntConCat(&cVar213, iVar217, 16);
				APP::APP_SET_BLOCK(&cVar213);
				func_200("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar217++;
			}
			APP::APP_CLOSE_BLOCK();
			iLocal_133 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			if (iLocal_161 == 0)
			{
				func_429(joaat("mpply_carapp_data_sent_0"), 0);
			}
			else if (iLocal_161 == 1)
			{
				func_429(joaat("mpply_carapp_data_sent_1"), 0);
			}
			else if (iLocal_161 == 2)
			{
				func_429(joaat("mpply_carapp_data_sent_2"), 0);
			}
			else if (iLocal_161 == 3)
			{
				func_429(joaat("mpply_carapp_data_sent_3"), 0);
			}
			else if (iLocal_161 == 4)
			{
				func_429(joaat("mpply_carapp_data_sent_4"), 0);
			}
		}
		iLocal_161++;
		if (iLocal_161 > 4)
		{
			iLocal_161 = 0;
		}
	}
	if (!bLocal_116)
	{
		if (Var26.f_42)
		{
			Local_119 = { Var8 };
			Local_125 = { Var20 };
			iLocal_118 = Var26;
			bLocal_116 = true;
			iLocal_133 = 1;
			SYSTEM::SETTIMERA(0);
			Var26.f_42 = 0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_2097152[func_193() /*10828*/].f_6080.f_52 = 0;
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_162(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				bVar218 = false;
				if (iLocal_162 == 0)
				{
					func_428(&iVar219);
					bVar218 = iVar219 != iLocal_164[0];
					iLocal_162++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_162 == 1)
				{
					func_403(&iVar220);
					bVar218 = iVar220 != iLocal_164[1];
					iLocal_162++;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_162 == 2)
				{
					if (func_397(&iVar221, iLocal_163) == -1)
					{
						iLocal_163 = 0;
						iLocal_162++;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bVar218 = MISC::IS_BIT_SET(iVar221[(iLocal_163 / 32)], (iLocal_163 % 32)) != MISC::IS_BIT_SET(uLocal_176[(iLocal_163 / 32)], (iLocal_163 % 32));
						iLocal_163++;
						SYSTEM::SETTIMERB(4900);
					}
				}
				if (bVar218)
				{
					Local_119 = { Var8 };
					Local_125 = { Var20 };
					iLocal_118 = Var26;
					bLocal_116 = true;
					iLocal_133 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_162 > 2)
				{
					iLocal_162 = 0;
				}
			}
		}
	}
	if (Var69.f_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_83() == 0)
			{
				iVar228 = Global_2097152[func_193() /*10828*/].f_6080.f_62;
				if (Global_1323611[iVar228 /*141*/].f_66 == Var69)
				{
					if (Var69.f_37)
					{
						Var69.f_38 = 0;
						if (iLocal_136 == 0)
						{
							if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_134))
							{
								if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_134))
								{
									if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_134))
									{
										iLocal_134 = 0;
										Var69.f_37 = 0;
									}
									else
									{
										Var69.f_38 = 1;
										iLocal_134 = 0;
										Var69.f_37 = 0;
									}
								}
							}
							else
							{
								SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_2097152[func_193() /*10828*/].f_6080.f_28), &iLocal_134);
							}
						}
						else if (iLocal_136 == 1)
						{
							if (iLocal_135 == 0)
							{
								SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_2097152[func_193() /*10828*/].f_6080.f_28), &iLocal_135);
							}
							else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_135))
							{
								switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_135))
								{
									case 0:
										iLocal_135 = 0;
										Var69.f_37 = 0;
										break;
									
									default:
										Var69.f_38 = 1;
										iLocal_135 = 0;
										Var69.f_37 = 0;
										break;
									}
								}
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
					}
					else if (func_396(PLAYER::PLAYER_ID(), 1, 0))
					{
					}
					else if (!func_163())
					{
					}
					else if (Var69.f_38)
					{
						if (func_395(96, "SOCIAL_CARAPP2", 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (iLocal_150)
					{
						Var69.f_39 = 0;
						if (iLocal_152)
						{
							if (!func_384(&Var69, iVar228))
							{
								iLocal_150 = 0;
							}
							iLocal_152 = 0;
						}
						else if (Var69.f_27 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(Var69.f_27, false, true, 0, -1, 0))
						{
							Var69.f_39 = 1;
							iLocal_150 = 0;
						}
						else
						{
							if (!iLocal_151)
							{
								func_382(&Var69, 0);
								MISC::SET_BIT(&(Global_1323611[iVar228 /*141*/].f_102), 14);
								iLocal_151 = 1;
								func_363(iVar228, &(Global_1323611[iVar228 /*141*/]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
							if (func_286(96, "SOCIAL_CARAPP1", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
							{
								bVar229 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= Var69.f_27;
								bVar230 = (!bVar229 && MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0);
								if (Var69.f_27 > 0)
								{
									MONEY::NETWORK_BUY_ITEM(Var69.f_27, Var69, 8, 1, bVar229, "CMOD_MAIN_0", MISC::GET_HASH_KEY(func_285(39, 0)), MISC::GET_HASH_KEY("CMOD_MAIN_0"), 0, bVar230);
								}
								Var69.f_33 = 0;
								Var69.f_36 = 1;
								Var69.f_35 = 1;
								iLocal_150 = 0;
								func_382(&Var69, 1);
								func_284(&Var69, 3);
								MISC::SET_BIT(&(Global_1323611[iVar228 /*141*/].f_102), 14);
								func_363(iVar228, &(Global_1323611[iVar228 /*141*/]), 1, -1, 0, 0);
								func_128(407109726, 3, 0);
							}
						}
					}
					else if (Var69.f_39)
					{
						if (func_286(96, "SOCIAL_CARAPP3", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
					else if (func_286(96, "SOCIAL_CARAPP", VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Var69), 0, -99, 0, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
					}
					iLocal_115 = 1;
				}
				else
				{
					Var69.f_33 = 0;
					Var69.f_36 = 0;
					Var69.f_35 = 0;
					Var69.f_34 = 0;
				}
			}
		}
		else if (iParam0 == func_279())
		{
			if ((((((Global_111560.f_2358.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == Var69 || Global_111560.f_2358.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == Var69) || Global_111560.f_2358.f_539.f_2407[2 /*295*/][iParam0 /*98*/] == Var69) || Global_111560.f_2358.f_539.f_2407[3 /*295*/][iParam0 /*98*/] == Var69) || ((iParam0 == 1 && Var69 == joaat("buffalo2")) && !Global_111560.f_20113.f_281[iParam0])) || ((iParam0 == 0 && Var69 == joaat("tailgater")) && !Global_111560.f_20113.f_281[iParam0])) || ((iParam0 == 2 && Var69 == joaat("bodhi2")) && !Global_111560.f_20113.f_281[iParam0]))
			{
				if (Var69.f_37)
				{
					Var69.f_38 = 0;
					if (iLocal_136 == 0)
					{
						if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_134))
						{
							if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_134))
							{
								if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_134))
								{
									iLocal_134 = 0;
									Var69.f_37 = 0;
								}
								else
								{
									Var69.f_38 = 1;
									iLocal_134 = 0;
									Var69.f_37 = 0;
								}
							}
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_111560.f_20113.f_130[iParam0 /*41*/].f_28), &iLocal_134);
						}
					}
					else if (iLocal_136 == 1)
					{
						if (iLocal_135 == 0)
						{
							SOCIALCLUB::_0x0F73393BAC7E6730(&(Global_111560.f_20113.f_130[iParam0 /*41*/].f_28), &iLocal_135);
						}
						else if (!SOCIALCLUB::_0xD302E99EDF0449CF(iLocal_135))
						{
							switch (SOCIALCLUB::_0x5C4EBFFA98BDB41C(iLocal_135))
							{
								case 0:
									iLocal_135 = 0;
									Var69.f_37 = 0;
									break;
								
								default:
									Var69.f_38 = 1;
									iLocal_135 = 0;
									Var69.f_37 = 0;
									break;
								}
							}
					}
				}
				else if (Var69.f_38)
				{
					if ((!func_437(0) && !func_437(3)) && !func_437(2))
					{
						if (func_278(96, "SOCIAL_CARAPP2", 2, 0, 0, 0, 0, 1, 0, 1))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 0;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if (iLocal_138[iParam0])
				{
					iLocal_138[iParam0] = 0;
					Var69.f_39 = 0;
					Var69.f_34 = 0;
					if (!func_274(Var69.f_27) && (iParam0 != 1 || Global_111560.f_20113.f_281[iParam0]))
					{
						Var69.f_39 = 1;
					}
					else
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 1;
						Var69.f_34 = iLocal_142[iParam0];
					}
					iLocal_142[iParam0] = 0;
				}
				else if (Var69.f_39)
				{
					if ((!func_437(0) && !func_437(3)) && !func_437(2))
					{
						if (func_257(96, "SOCIAL_CARAPP3", 2, HUD::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_111560.f_20113.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
						{
							Var69.f_33 = 0;
							Var69.f_36 = 1;
							Var69.f_35 = 0;
							Var69.f_34 = 0;
						}
					}
				}
				else if ((!func_437(0) && !func_437(3)) && !func_437(2))
				{
					StringCopy(&Var231, "SOCIAL_CARAPP", 16);
					if (iParam0 == 1 && !Global_111560.f_20113.f_281[iParam0])
					{
						StringCopy(&Var231, "SOCIAL_FREE", 16);
					}
					if (func_257(96, &Var231, 2, HUD::_GET_LABEL_TEXT(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_111560.f_20113.f_130[iParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0))
					{
						Var69.f_33 = 0;
						Var69.f_36 = 1;
						Var69.f_35 = 0;
						Var69.f_34 = 0;
						func_256();
					}
				}
				iLocal_115 = 1;
			}
			else
			{
				Var69.f_33 = 0;
				Var69.f_36 = 0;
				Var69.f_35 = 0;
				Var69.f_34 = 0;
			}
		}
	}
	iVar235 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((iParam0 != 3 || !func_253(39)) || func_252()) || func_96(PLAYER::PLAYER_ID(), 1, 0))
		{
			iVar235 = 0;
		}
	}
	else if (!func_251(iParam0) || func_252())
	{
		iVar235 = 0;
	}
	if (iVar235 && !Var69.f_33)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (iVar1 == 0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&cVar14);
				if (APP::APP_DATA_VALID())
				{
					iVar236 = func_27("uid");
					if (((iVar236 != 0 && iVar236 != Var69.f_26) && func_27("character") == iVar2) && (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_27("vehicle") == iLocal_106))
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
						}
						Var69.f_26 = iVar236;
						Var69 = func_27("carModel");
						if (!STREAMING::IS_MODEL_A_VEHICLE(Var69))
						{
							if (iParam0 == 0)
							{
								Var69 = func_250(0, 1);
							}
							else if (iParam0 == 1)
							{
								Var69 = func_250(1, 1);
							}
							else if (iParam0 == 2)
							{
								Var69 = func_250(2, 1);
							}
							else
							{
								Var69 = joaat("buffalo2");
							}
						}
						Var69.f_27 = func_27("cost");
						Var69.f_1 = func_27("carColour1");
						Var69.f_2 = func_27("carColour2");
						Var69.f_3 = func_27("carColour1Group");
						Var69.f_4 = func_27("carColour2Group");
						Var69.f_5 = func_27("windowTint");
						Var69.f_18 = func_249(func_27("bulletProofTyres"));
						Var69.f_9 = func_27("carEngine");
						Var69.f_10 = func_27("carBrakes");
						Var69.f_13 = func_27("carExhaust");
						Var69.f_11 = func_27("carWheel");
						Var69.f_6 = func_27("tyreSmokeColourRed");
						Var69.f_7 = func_27("tyreSmokeColourGreen");
						Var69.f_8 = func_27("tyreSmokeColourBlue");
						Var69.f_16 = func_27("carHorn");
						Var69.f_15 = func_27("carArmour");
						Var69.f_19 = func_27("carTurbo");
						Var69.f_14 = func_27("carSuspension");
						Var69.f_17 = func_27("carXenonLights");
						Var69.f_20 = func_27("tyreSmoke");
						Var69.f_12 = Var26.f_10;
						iVar0 = 1;
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!iLocal_146[iParam0] && (MISC::GET_GAME_TIMER() - iLocal_137) < 20000)
							{
								iLocal_138[iParam0] = 1;
							}
							else if (((!func_174(0) && func_248(1, 0) == 0) && (Global_111560.f_9080 || func_247(0))) && (MISC::IS_BIT_SET(Global_111560.f_9080.f_2[27 /*3*/], 1) || func_247(0)))
							{
								iLocal_138[iParam0] = 1;
								iLocal_142[iParam0] = 1;
							}
							else if ((((iParam0 == 0 && Var69 == joaat("tailgater")) || (iParam0 == 1 && Var69 == joaat("buffalo2"))) || (iParam0 == 1 && Var69 == joaat("bagger"))) || (iParam0 == 2 && Var69 == joaat("bodhi2")))
							{
								if (func_248(iParam0, Var69) == 0)
								{
									iLocal_138[iParam0] = 1;
									iLocal_142[iParam0] = 1;
								}
							}
							if (!iLocal_138[iParam0])
							{
							}
						}
					}
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_146[iParam0] = 1;
					}
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else if (iVar1 == 1 && iVar0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("plate");
				if (APP::APP_DATA_VALID())
				{
					Var69.f_32 = func_27("carPlateBack");
					if (Var69.f_32 > 4)
					{
						Var69.f_32 = 0;
						Var69.f_32 = func_27("carPlateBack");
					}
					StringCopy(&(Var69.f_28), func_246("carPlateText"), 16);
				}
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Var69.f_33 = 1;
				Var69.f_37 = 1;
				Var69.f_39 = 0;
				Var69.f_35 = 0;
				Var69.f_40 = 0;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					STATS::STAT_SET_BOOL(joaat("car_mod_app_used"), true, 1);
					func_245(135, 1);
					Global_111560.f_20113.f_262 = 1;
				}
				else
				{
					Global_2097152[func_193() /*10828*/].f_6080.f_62 = iLocal_108;
					func_56(99, 1, -1, 1);
				}
				iLocal_355 = 1;
			}
			iVar1++;
		}
	}
	if ((!Var26.f_41 && iVar235) && Var26.f_40)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_243(&Var26))
			{
				iLocal_115 = 1;
				return;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar237 = func_242();
		if (iVar237 == 0)
		{
			iVar237 = func_242();
		}
		func_200("appUID", iVar237);
		Global_111560.f_20113.f_272 = iVar237;
		iVar238 = 0;
		iVar239 = 0;
		if (func_163())
		{
			if (func_214())
			{
				iVar239 = (iVar239 + Global_262145.f_122);
			}
		}
		func_432("spDiscount", (1f - (SYSTEM::TO_FLOAT(iVar238) / 100f)));
		func_432("mpDiscount", (1f - (SYSTEM::TO_FLOAT(iVar239) / 100f)));
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_200("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_200("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
			else
			{
				func_200("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			}
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_SET_BLOCK(&Var8);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_SET_BLOCK(&Var20);
		}
		if (!func_213(Var26))
		{
			func_200("carUnlocked", 0);
		}
		else
		{
			func_200("carUnlocked", 1);
			if ((((Var26 == joaat("sanchez") || Var26 == joaat("faggio2")) || Var26 == joaat("dune")) || Var26 == joaat("bfinjection")) || Var26.f_10 >= 8)
			{
				Var26.f_27 = 0;
			}
			if (func_212(Var26, 1))
			{
				Var26.f_30 = 0;
			}
			if (Var26 == joaat("lectro") || Var26 == joaat("vindicator"))
			{
				Var26.f_28 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Var26 == joaat("patriot"))
				{
					Var26.f_26 = 0;
				}
				if (Var26 == joaat("prairie"))
				{
					if (Var26.f_26 > 1)
					{
						Var26.f_26 = 1;
					}
				}
			}
			if (Var26.f_15 > 1)
			{
				Var26.f_15 = 0;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_200("playerSlot", iVar3);
				func_200("playerRank", func_211(PLAYER::PLAYER_ID()));
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("mp_m_freemode_01"):
					case joaat("mp_f_freemode_01"):
						func_433("playerGang", "None");
						HUD::GET_HUD_COLOUR(116, &iVar4, &iVar5, &iVar6, &uVar7);
						break;
				}
				func_200("playerGangR", iVar4);
				func_200("playerGangG", iVar5);
				func_200("playerGangB", iVar6);
			}
			if (!STREAMING::IS_MODEL_A_VEHICLE(Var26))
			{
				func_200("carModel", -1);
				func_200("carUnlocked", 0);
			}
			else
			{
				func_200("carModel", Var26);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (Var26.f_39)
				{
					case 0:
						if (VEHICLE::IS_THIS_MODEL_A_CAR(Var26))
						{
							func_433("carType", "car");
						}
						else
						{
							func_433("carType", "bike");
						}
						break;
					
					case 1:
						func_433("carType", "sport");
						break;
					
					case 2:
						func_433("carType", "suv");
						break;
					
					case 3:
						func_433("carType", "special");
						break;
				}
			}
			else
			{
				iVar240 = func_206(Var26);
				switch (iVar240)
				{
					case 0:
						func_433("carType", "car");
						break;
					
					case 1:
						func_433("carType", "sport");
						break;
					
					case 2:
						func_433("carType", "suv");
						break;
					
					case 3:
						func_433("carType", "special");
						break;
					
					case 4:
						func_433("carType", "bike");
						break;
					
					case 5:
						func_433("carType", "special");
						break;
					
					case 6:
						func_433("carType", "car");
						break;
					
					case 7:
						func_433("carType", "special");
						break;
					
					case 10:
						func_433("carType", "special");
						break;
					
					case 11:
						func_433("carType", "car");
						break;
					
					case 28:
						func_433("carType", "car");
						break;
					
					case 26:
						func_433("carType", "special");
						break;
					
					case 27:
						func_433("carType", "special");
						break;
					
					case 29:
						func_433("carType", "special");
						break;
					
					case 30:
						func_433("carType", "special");
						break;
					
					case 31:
						func_433("carType", "special");
						break;
					
					case 32:
						func_433("carType", "special");
						break;
					
					default:
						func_433("carType", "special");
						break;
					}
			}
			func_200("carColour1", Var26.f_1);
			func_200("carColour2", Var26.f_2);
			func_200("windowTint", Var26.f_3);
			func_200("bulletProofTyres", func_205(Var26.f_16));
			func_200("carEngine", Var26.f_7);
			func_200("carBrakes", Var26.f_8);
			func_200("carExhaust", Var26.f_11);
			func_200("carWheel", Var26.f_9);
			func_200("tyreSmokeColourRed", Var26.f_4);
			func_200("tyreSmokeColourGreen", Var26.f_5);
			func_200("tyreSmokeColourBlue", Var26.f_6);
			func_200("carHorn", Var26.f_14);
			func_200("carArmour", Var26.f_13);
			func_200("carTurbo", Var26.f_17);
			func_200("carSuspension", Var26.f_12);
			func_200("carXenonLights", Var26.f_15);
			func_200("tyreSmoke", Var26.f_18);
			func_200("tyreSmoke", Var26.f_18);
			func_200("carWheelType", Var26.f_10);
			func_200("carEngineCount", Var26.f_24);
			func_200("carBrakesCount", Var26.f_25);
			func_200("carExhaustCount", Var26.f_26);
			func_200("carWheelCount", Var26.f_27);
			func_200("carHornCount", Var26.f_28);
			func_200("carArmourCount", Var26.f_29);
			func_200("carSuspensionCount", Var26.f_30);
			func_200("carHorn1", Var26.f_33[0]);
			func_200("carHorn2", Var26.f_33[1]);
			func_200("carHorn3", Var26.f_33[2]);
			func_200("carHorn4", Var26.f_33[3]);
			func_200("carHorn5", Var26.f_33[4]);
			func_432("carPriceModifier", Var26.f_31);
			if (!MISC::IS_BIT_SET(Var26.f_32, 0) || Var26 == joaat("sovereign"))
			{
				func_200("carColour1Unlocked", 0);
			}
			else
			{
				func_200("carColour1Unlocked", 1);
			}
			if (!MISC::IS_BIT_SET(Var26.f_32, 1) || Var26 == joaat("sovereign"))
			{
				func_200("carColour2Unlocked", 0);
			}
			else
			{
				func_200("carColour2Unlocked", 1);
			}
			iVar241 = 0;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || MISC::IS_BIT_SET(Global_1323611[iLocal_108 /*141*/].f_102, 17))
			{
				MISC::SET_BIT(&iVar241, 0);
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || MISC::IS_BIT_SET(Global_1323611[iLocal_108 /*141*/].f_102, 18))
			{
				MISC::SET_BIT(&iVar241, 1);
			}
			func_200("newItemUnlocks", iVar241);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			APP::APP_CLOSE_BLOCK();
		}
		APP::APP_CLOSE_BLOCK();
		Local_119 = { Var8 };
		Local_125 = { Var20 };
		iLocal_118 = Var26;
		bLocal_116 = true;
		APP::APP_SET_BLOCK("plate");
		func_200("carPlateBack", Var26.f_23);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Var26.f_40 = 0;
		iLocal_133 = 1;
		SYSTEM::SETTIMERA(0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_111560.f_20113.f_277[iParam0] = 1;
		}
		else
		{
			if (iVar3 == 0)
			{
				func_429(joaat("mpply_carapp_data_sent_0"), 1);
			}
			else if (iVar3 == 1)
			{
				func_429(joaat("mpply_carapp_data_sent_1"), 1);
			}
			else if (iVar3 == 2)
			{
				func_429(joaat("mpply_carapp_data_sent_2"), 1);
			}
			else if (iVar3 == 3)
			{
				func_429(joaat("mpply_carapp_data_sent_3"), 1);
			}
			else if (iVar3 == 4)
			{
				func_429(joaat("mpply_carapp_data_sent_4"), 1);
			}
			Global_2097152[func_193() /*10828*/].f_6080.f_41[iLocal_106] = 0;
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111560.f_20113[iParam0 /*43*/] = { Var26 };
			Global_111560.f_20113.f_130[iParam0 /*41*/] = { Var69 };
			break;
		
		case 3:
			func_204(&Var26);
			Global_2097152[func_193() /*10828*/].f_6080 = { Var69 };
			break;
	}
}

void func_204(var uParam0)//Position - 0xB076
{
	if (uParam0->f_40)
	{
		MISC::SET_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 25);
	}
	if (uParam0->f_41)
	{
		MISC::SET_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 26);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 26);
	}
}

int func_205(bool bParam0)//Position - 0xB0D2
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)//Position - 0xB0E4
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	switch (iParam0)
	{
		case 562680400:
			return 29;
			break;
		
		case -32236122:
			return 29;
			break;
		
		case -1881846085:
			return 29;
			break;
		
		case 1483171323:
			return 29;
			break;
		
		case 886810209:
			return 29;
			break;
		
		case 1254014755:
			return 29;
			break;
		
		case 1897744184:
			return 30;
			break;
		
		case -1924433270:
			return 30;
			break;
		
		case -1210451983:
			return 30;
			break;
		
		case 1356124575:
			return 30;
			break;
		
		case 884483972:
			return 31;
			break;
		
		case 2069146067:
			return 31;
			break;
		
		case 177270108:
			return 32;
			break;
		
		case 387748548:
			return 32;
			break;
		
		case 1502869817:
			return 32;
			break;
		
		case -212993243:
			return 35;
			break;
		
		case 1945374990:
			return 37;
			break;
		
		case 219613597:
			return 36;
			break;
		
		case 1653666139:
			return 36;
			break;
		
		case -286046740:
			return 39;
			break;
		
		case -1254331310:
			return 36;
			break;
		
		case 394110044:
			return 36;
			break;
	}
	if (func_210(iParam0))
	{
		return 33;
	}
	else if (func_209(iParam0))
	{
		return 34;
	}
	else if (func_208(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case -1242608589:
			return 31;
			break;
	}
	if (func_207(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case 159274291:
		case 223240013:
		case 1504306544:
		case 1939284556:
		case 917809321:
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 1104234922:
		case -1532697517:
			return 3;
			break;
		
		case 1909189272:
		case 931280609:
		case 500482303:
		case -420911112:
		case 2044532910:
		case -54332285:
		case 321186144:
		case -638562243:
		case -1988428699:
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
		case 540101442:
		case 2139203625:
		case joaat("lguard"):
		case joaat("blazer2"):
		case 1938952078:
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
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
		case 301304410:
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
			return 3;
			break;
	}
	return 0;
}

int func_207(int iParam0)//Position - 0xC293
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
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
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case 1234311532:
		case 719660200:
		case -1405937764:
		case -982130927:
			return 1;
			break;
		
		case 159274291:
		case 1939284556:
		case 223240013:
		case 433954513:
		case 1504306544:
		case 917809321:
		case -1210451983:
		case 562680400:
		case -32236122:
		case 1897744184:
		case -1881846085:
		case -1924433270:
		case 1356124575:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1392481335:
		case 2049897956:
		case 1841130506:
		case -998177792:
		case -1242608589:
			return 1;
			break;
		
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -1435527158:
		case 1181327175:
		case 1489874736:
		case -2118308144:
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
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 1909189272:
		case 931280609:
		case -1267543371:
		case 1617472902:
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
		case -208911803:
		case -447711397:
		case 1416466158:
		case joaat("slamvan2"):
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
		case 301304410:
		case 740289177:
		case -1960756985:
		case -1254331310:
			return 1;
			break;
	}
	return 0;
}

int func_208(int iParam0)//Position - 0xC9EC
{
	switch (iParam0)
	{
		case -1146969353:
		case 668439077:
		case -801550069:
		case 1721676810:
		case -688189648:
		case 1009171724:
		case 444994115:
		case 628003514:
		case -27326686:
		case 540101442:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_209(int iParam0)//Position - 0xCAD8
{
	switch (iParam0)
	{
		case -42959138:
		case -32878452:
		case 447548909:
		case 1181327175:
		case -1435527158:
		case 1692272545:
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0)//Position - 0xCB13
{
	switch (iParam0)
	{
		case -1984275979:
		case -1763555241:
		case -749299473:
		case -975345305:
		case -392675425:
		case 1043222410:
		case -1386191424:
		case -1523619738:
		case -1007528109:
		case -1700874274:
		case 1565978651:
		case 1036591958:
		case joaat("cuban800"):
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case 447548909:
		case -726768679:
			return 1;
			break;
	}
	return 0;
}

int func_211(int iParam0)//Position - 0xCB9C
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_133(iVar0, 1);
}

int func_212(int iParam0, int iParam1)//Position - 0xCBBD
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

int func_213(int iParam0)//Position - 0xCF33
{
	if (iParam0 == 0)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("riot"):
		case joaat("sheriff"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case 1938952078:
		case joaat("taxi"):
		case joaat("lguard"):
		case joaat("ripley"):
		case joaat("dilettante2"):
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("burrito"):
		case joaat("rumpo2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("scorcher"):
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("fixter"):
		case joaat("caddy"):
		case joaat("forklift"):
		case joaat("caddy2"):
		case joaat("crusader"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("mower"):
		case joaat("tornado4"):
		case joaat("docktug"):
		case joaat("stretch"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("benson"):
		case joaat("pounder"):
		case joaat("submersible"):
		case joaat("monster"):
		case joaat("technical"):
		case joaat("phantom2"):
		case joaat("wastelander"):
		case joaat("boxville5"):
		case -1988428699:
		case 219613597:
		case 1945374990:
		case 1653666139:
			return 0;
			break;
		
		default:
			if (func_208(iParam0))
			{
				return 0;
			}
			break;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_214()//Position - 0xD0D3
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (MISC::IS_PC_VERSION())
	{
		return 0;
	}
	if (func_163())
	{
		if (func_217())
		{
			iVar0 = func_216();
			iVar1 = func_215();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_121) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_215()//Position - 0xD131
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1384140);
	iVar0 = (iVar0 + Global_1384143);
	return iVar0;
}

int func_216()//Position - 0xD14D
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1384141);
	iVar0 = (iVar0 + Global_1384142);
	iVar0 = (iVar0 + Global_1384140);
	iVar0 = (iVar0 + Global_1384143);
	iVar0 = (iVar0 + Global_1384145);
	iVar0 = (iVar0 + Global_1384144);
	iVar0 = (iVar0 + func_120(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_120(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_120(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_120(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_120(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_120(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_120(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_120(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_120(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_217()//Position - 0xD20B
{
	struct<7> Var0;
	struct<7> Var7;
	
	CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_241(joaat("mpply_started_mp")) };
	if (func_218(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_218(struct<7> Param0, struct<7> Param7, int iParam14)//Position - 0xD24F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_239(Param7);
	iVar1 = func_229(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_219(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)//Position - 0xD28A
{
	int iVar0;
	int iVar1;
	
	if (!func_227(iParam1) || !func_227(iParam0))
	{
		return 1;
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)//Position - 0xD396
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_221(int iParam0)//Position - 0xD3A9
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_222(int iParam0)//Position - 0xD3BC
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_223(int iParam0)//Position - 0xD3CF
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_224(int iParam0)//Position - 0xD3E1
{
	return iParam0 & 15;
}

var func_225(int iParam0)//Position - 0xD3EE
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_226(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_226(bool bParam0, int iParam1, int iParam2)//Position - 0xD413
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_227(int iParam0)//Position - 0xD42A
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
	iVar0 = func_220(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_221(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_222(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_225(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_224(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_223(iParam0);
	if (iVar5 < 1 || iVar5 > func_228(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_228(int iParam0, int iParam1)//Position - 0xD506
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

var func_229(struct<7> Param0, int iParam7)//Position - 0xD5A8
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_238(Param0) == 0)
	{
		uVar0 = func_239(Param0);
		uVar1 = uVar0;
		func_230(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_230(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD5E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_225(*uParam0);
	iVar1 = func_224(*uParam0);
	iVar2 = func_223(*uParam0);
	iVar3 = func_222(*uParam0);
	iVar4 = func_221(*uParam0);
	iVar5 = func_220(*uParam0);
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
	iVar6 = func_228(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_228(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_231(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD76A
{
	func_237(uParam0, iParam1);
	func_236(uParam0, iParam2);
	func_235(uParam0, iParam3);
	func_234(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_232(uParam0, iParam6);
}

void func_232(var uParam0, int iParam1)//Position - 0xD7A2
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

void func_233(var uParam0, int iParam1)//Position - 0xD828
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_224(*uParam0);
	iVar1 = func_225(*uParam0);
	if (iParam1 < 1 || iParam1 > func_228(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_234(var uParam0, int iParam1)//Position - 0xD879
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_235(var uParam0, int iParam1)//Position - 0xD8AC
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_236(var uParam0, int iParam1)//Position - 0xD8E6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_237(var uParam0, int iParam1)//Position - 0xD921
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_238(struct<7> Param0)//Position - 0xD95D
{
	if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_239(struct<6> Param0, var uParam6)//Position - 0xD9B3
{
	var uVar0;
	
	if (Param0 > 0)
	{
		func_232(&uVar0, Param0);
	}
	if (Param0.f_1 > 0)
	{
		func_234(&uVar0, func_240(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_233(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_235(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_236(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_237(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_240(int iParam0)//Position - 0xDA29
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_241(int iParam0)//Position - 0xDAEE
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_DATE(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_242()//Position - 0xDB12
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_243(var uParam0)//Position - 0xDB41
{
	int iVar0;
	
	if (!func_213(*uParam0))
	{
		return 1;
	}
	if (iLocal_184)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_183)) < 1500)
		{
			return 0;
		}
	}
	iLocal_184 = 0;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, (660.3092f + IntToFloat(PLAYER::PLAYER_ID() * 10)), 4977.608f, 1222.024f, 0f, false, false, false);
	}
	else
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f, 4977.608f, 1222.024f, 0f, false, false, false);
	}
	if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
	}
	VEHICLE::SET_VEHICLE_WHEEL_TYPE(iVar0, Global_1323611[iLocal_108 /*141*/].f_69);
	uParam0->f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(iVar0);
	uParam0->f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 0);
	uParam0->f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 1);
	uParam0->f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 2);
	uParam0->f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(iVar0, 14, 3);
	uParam0->f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
	uParam0->f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
	uParam0->f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
	uParam0->f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
	uParam0->f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
	uParam0->f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
	uParam0->f_31 = func_244(iVar0);
	uParam0->f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(iVar0);
	uParam0->f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
	uParam0->f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == joaat("patriot"))
		{
			uParam0->f_26 = 0;
		}
		if (*uParam0 == joaat("prairie"))
		{
			if (uParam0->f_26 > 1)
			{
				uParam0->f_26 = 1;
			}
		}
	}
	VEHICLE::DELETE_VEHICLE(&iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	iLocal_184 = 1;
	iLocal_183 = NETWORK::GET_NETWORK_TIME();
	SYSTEM::SETTIMERA(0);
	return 1;
}

float func_244(int iParam0)//Position - 0xDD11
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

void func_245(int iParam0, int iParam1)//Position - 0xDDC1
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

var func_246(char* sParam0)//Position - 0xDE1E
{
	return APP::APP_GET_STRING(func_28(sParam0));
}

bool func_247(bool bParam0)//Position - 0xDE30
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

int func_248(int iParam0, int iParam1)//Position - 0xDE5B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96030[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96030[iVar1], 0))
		{
			if (Global_96040[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_96030[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_249(int iParam0)//Position - 0xDECB
{
	return iParam0 == 1;
}

int func_250(int iParam0, int iParam1)//Position - 0xDED7
{
	struct<82> Var0;
	
	if (func_251(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_435(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_251(int iParam0)//Position - 0xDF19
{
	return iParam0 < 3;
}

bool func_252()//Position - 0xDF25
{
	return Global_98721.f_346 > 0;
}

bool func_253(int iParam0)//Position - 0xDF36
{
	return func_254(iParam0, 0, 0);
}

int func_254(int iParam0, int iParam1, bool bParam2)//Position - 0xDF46
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
		if (func_83() == 0)
		{
			return MISC::IS_BIT_SET(func_51(func_255(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_255(int iParam0)//Position - 0xDFB0
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

int func_256()//Position - 0xE2E0
{
	if (func_247(0))
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

int func_257(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0xE32B
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_259(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_258(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_258(int iParam0)//Position - 0xE3D7
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_259(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0xE3EA
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_273();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_272() == 0)
	{
		func_270();
		return 0;
	}
	func_269(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_268(0);
		func_268(2);
		func_268(1);
	}
	else
	{
		func_273();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_268(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_268(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_268(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_268(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_273();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_267(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_264(1);
			func_267(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_260(iParam0, sParam1);
	return 1;
}

void func_260(int iParam0, char* sParam1)//Position - 0xE8A9
{
	if (!func_261())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_261()//Position - 0xE8CE
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_97())
	{
		return 0;
	}
	if (func_262(PLAYER::PLAYER_ID()))
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

bool func_262(int iParam0)//Position - 0xE934
{
	return func_263(iParam0, 20);
}

bool func_263(int iParam0, int iParam1)//Position - 0xE944
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_264(int iParam0)//Position - 0xE95F
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
		if (func_437(14))
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
								func_266(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7363[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_266(&(Global_7363[iVar1 /*15*/]));
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
								func_266(&(Global_7363[iVar1 /*15*/]));
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
								func_266(&(Global_7363[iVar1 /*15*/]));
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
								func_266(&(Global_7363[iVar1 /*15*/]));
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
								func_266(&(Global_7363[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_265(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_265(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xEF05
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
		func_266(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_266(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_266(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_266(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_266(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_266(char* sParam0)//Position - 0xEFB8
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_267(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xEFCA
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

void func_268(int iParam0)//Position - 0xF02D
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_269(int iParam0)//Position - 0xF04C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_270()//Position - 0xF0DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_271(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_271(struct<6> Param0, struct<6> Param6)//Position - 0xF1A9
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_272()//Position - 0xF294
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_271(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

void func_273()//Position - 0xF3FC
{
	if (func_437(14))
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
		Global_19486 = func_279();
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

int func_274(int iParam0)//Position - 0xF49E
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (func_276(1))
	{
		if (Global_76577)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, false, true, 0, -1, 0))
			{
				return 1;
			}
		}
		else if (func_275(func_279()) >= iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_275(int iParam0)//Position - 0xF4E6
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

bool func_276(bool bParam0)//Position - 0xF53E
{
	if (Global_76577)
	{
		return func_162(PLAYER::PLAYER_ID(), bParam0, !func_277(1));
	}
	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

bool func_277(bool bParam0)//Position - 0xF56C
{
	if (bParam0)
	{
		return (Global_2448961.f_684.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2448961.f_684.f_31);
	}
	return Global_2448961.f_684.f_28;
}

int func_278(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0xF5A8
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_259(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_258(iParam0) };
			Global_8043 = iParam0;
			MISC::SET_BIT(&Global_7356, 1);
			MISC::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_279()//Position - 0xF637
{
	func_280();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_280()//Position - 0xF650
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_282(Global_111560.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_281(PLAYER::PLAYER_PED_ID());
			if (func_251(iVar0) && (!func_437(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_251(Global_111560.f_2358.f_539.f_4321))
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

int func_281(int iParam0)//Position - 0xF74D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_282(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_282(int iParam0)//Position - 0xF78A
{
	if (func_251(iParam0))
	{
		return func_283(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_283(int iParam0)//Position - 0xF7AF
{
	return Global_1798[iParam0 /*29*/];
}

void func_284(var uParam0, int iParam1)//Position - 0xF7BE
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2097152[func_193() /*10828*/].f_6080.f_54 = 1;
		Global_2097152[func_193() /*10828*/].f_6080.f_55 = 1;
		Global_2097152[func_193() /*10828*/].f_6080.f_60 = uParam0->f_32;
		Global_2097152[func_193() /*10828*/].f_6080.f_56 = { uParam0->f_28 };
		Global_2097152[func_193() /*10828*/].f_6080.f_61++;
	}
	else
	{
		Global_111560.f_20113.f_265 = 1;
		Global_111560.f_20113.f_266 = iParam1;
		Global_111560.f_20113.f_261 = 1;
		Global_111560.f_20113.f_271 = uParam0->f_32;
		Global_111560.f_20113.f_267 = { uParam0->f_28 };
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			Global_111560.f_20113.f_281[iParam1] = 1;
			Global_111560.f_20113.f_285[iParam1]++;
			STATS::STAT_INCREMENT(joaat("sp_car_app_order_count"), 1f);
		}
	}
}

char* func_285(int iParam0, int iParam1)//Position - 0xF8DE
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

bool func_286(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)//Position - 0xFCDF
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_287(&uVar0, iParam0, func_362(), sParam1, iVar165, 3, iParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_287(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xFD18
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_361(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(iParam7);
	}
	if (func_360(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_354(iParam6))
	{
		return 0;
	}
	if (func_351(iVar0, iVar1, iVar2))
	{
		if (func_350())
		{
			return 0;
		}
		func_349();
		return func_294(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_293(iParam4))
	{
		return 0;
	}
	func_288(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_288(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xFDFD
{
	Global_1366857.f_40.f_1 = iParam0;
	Global_1366857.f_40.f_2 = iParam1;
	Global_1366857.f_40.f_3 = iParam2;
	StringCopy(&(Global_1366857.f_40.f_4), sParam3, 16);
	Global_1366857.f_40.f_8 = iParam4;
	Global_1366857.f_40.f_9 = iParam5;
	Global_1366857.f_40.f_14 = iParam6;
	func_289(iParam4);
	func_349();
	Global_1366857.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_289(int iParam0)//Position - 0xFE6A
{
	if (func_292(iParam0))
	{
		func_291();
		return;
	}
	func_290();
}

void func_290()//Position - 0xFE86
{
	Global_1366857.f_40.f_10 = 0;
}

void func_291()//Position - 0xFE97
{
	Global_1366857.f_40.f_10 = 1;
}

int func_292(int iParam0)//Position - 0xFEA8
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_293(int iParam0)//Position - 0xFEF0
{
	return iParam0 > Global_1366857.f_40.f_8;
}

int func_294(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xFF03
{
	struct<2> Var0;
	
	func_348();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_345(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_342(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_345(uParam0, sParam3, sParam4);
		}
		return func_324(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_323(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_320(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_319(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_295(iParam1, iParam2, sParam4, iParam7, iParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_295(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xFFFD
{
	bool bVar0;
	
	func_318();
	bVar0 = true;
	if (func_297(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_296(120000);
		return 1;
	}
	return 0;
}

void func_296(int iParam0)//Position - 0x10037
{
	Global_1366857.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1366857.f_40.f_12 = 1;
}

int func_297(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x1005A
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_97();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_312(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_311(iParam5, bParam6, &iVar3);
	uVar5 = func_309(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_308(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_301(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_300();
	}
	func_318();
	func_299();
	func_298();
	return 1;
}

void func_298()//Position - 0x101AC
{
	Global_1366857.f_57 = 0;
	Global_1366857.f_57.f_1 = 0;
}

void func_299()//Position - 0x101C4
{
	Global_1366857.f_40 = 3;
}

void func_300()//Position - 0x101D3
{
	MISC::SET_BIT(&Global_7356, 8);
}

int func_301(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x101E4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_302(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			MISC::SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_302(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x10250
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_273();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4269600 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_307() == 0)
	{
		func_305();
		return 0;
	}
	func_304(Global_4269599);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/]), sParam1, 64);
	Global_4268350[Global_4269599 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268350[Global_4269599 /*104*/].f_24 = iParam2;
	}
	Global_4268350[Global_4269599 /*104*/].f_25 = iParam7;
	Global_4268350[Global_4269599 /*104*/].f_26 = uParam8;
	Global_4268350[Global_4269599 /*104*/].f_29 = uParam9;
	Global_4268350[Global_4269599 /*104*/].f_30 = uParam12;
	Global_4268350[Global_4269599 /*104*/].f_31 = uParam11;
	Global_4268350[Global_4269599 /*104*/].f_28 = 0;
	Global_4268350[Global_4269599 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_33), sParam4, 64);
	Global_4268350[Global_4269599 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_50), sParam5, 64);
	Global_4268350[Global_4269599 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_83), sParam15, 64);
	func_273();
	switch (iParam16)
	{
		case 3:
			Global_4268350[Global_4269599 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268350[Global_4269599 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268350[Global_4269599 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268350[Global_4269599 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_268(0);
				break;
			
			case 1:
				func_268(1);
				break;
			
			case 2:
				func_268(2);
				break;
			
			case 3:
				func_268(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269600 = 1;
				break;
			
			case 0:
				Global_4269600 = 1;
				break;
			
			case 2:
				Global_4269600 = 1;
				break;
			
			case 1:
				Global_4269600 = 1;
				break;
			}
	}
	Global_21874[Global_4269599] = 0;
	if (bParam10)
	{
		func_273();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_4())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_267(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_264(1);
			func_267(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_303(iParam0, sParam1);
	return 1;
}

void func_303(int iParam0, char* sParam1)//Position - 0x1061B
{
	if (!func_261())
	{
		return;
	}
	unk_0x0077F15613D36993(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_304(int iParam0)//Position - 0x10640
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4268350[iParam0 /*104*/].f_18 = iVar0;
	Global_4268350[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268350[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268350[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268350[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268350[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_305()//Position - 0x106C0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_306(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
		{
			Global_4269599 = iVar2;
		}
		iVar2++;
	}
	Global_4268350[Global_4269599 /*104*/].f_24 = 1;
}

int func_306(struct<6> Param0, struct<6> Param6)//Position - 0x1076A
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_307()//Position - 0x10855
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269599 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0 || Global_4268350[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_306(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
			{
				Global_4269599 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269599 == 11)
	{
		return 0;
	}
	Global_4268350[Global_4269599 /*104*/].f_99[0] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[1] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[2] = 0;
	return 1;
}

int func_308(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x10980
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_302(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			MISC::SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_309(int iParam0, int iParam1)//Position - 0x10A02
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_310(2, iParam1);
	return iParam0;
}

void func_310(int iParam0, var uParam1)//Position - 0x10A21
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_311(int iParam0, bool bParam1, int iParam2)//Position - 0x10AD2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return sLocal_21;
	}
	if (MISC::ARE_STRINGS_EQUAL(iParam0, sLocal_21))
	{
		return sLocal_21;
	}
	func_310(1, iParam2);
	if (bParam1)
	{
		return iParam0;
	}
	return HUD::_GET_LABEL_TEXT(iParam0);
}

int func_312(int iParam0)//Position - 0x10B0F
{
	int iVar0;
	
	iVar0 = func_315(iParam0);
	if (iVar0 == -1)
	{
		func_313(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_313(int iParam0, bool bParam1)//Position - 0x10B45
{
	if (!func_162(iParam0, 0, 1))
	{
		return;
	}
	if (func_315(iParam0) != -1)
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
	if (func_314(iParam0))
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

int func_314(int iParam0)//Position - 0x10BB1
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

int func_315(int iParam0)//Position - 0x10BE3
{
	int iVar0;
	
	if (!func_162(iParam0, 0, 1))
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
			func_316(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_316(int iParam0)//Position - 0x10C62
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
	func_317(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_317(var uParam0)//Position - 0x10D18
{
	*uParam0 = 0;
	uParam0->f_1 = func_97();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_318()//Position - 0x10D45
{
	Global_1366857.f_40.f_9 = 4;
}

int func_319(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x10D56
{
	bool bVar0;
	
	func_318();
	bVar0 = false;
	return func_297(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_320(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x10D7D
{
	bool bVar0;
	
	bVar0 = false;
	return func_321(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_321(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x10DA0
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_97();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_312(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_311(iParam5, bParam6, &iVar3);
	uVar5 = func_309(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_257(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_278(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_300();
	}
	func_322();
	func_299();
	func_298();
	return 1;
}

void func_322()//Position - 0x10EF7
{
	Global_1366857.f_40.f_9 = 3;
}

int func_323(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x10F08
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_322();
	bVar0 = true;
	if (func_321(iParam0, iParam1, sParam2, bVar0, iParam3, iParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_296(120000);
		return 1;
	}
	return 0;
}

int func_324(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x10F5A
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_341(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_330(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_329(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_328(1);
		}
		func_327();
		func_299();
		func_326();
		func_325();
		return 1;
	}
	return 0;
}

void func_325()//Position - 0x10FFD
{
	Global_2540666 = 0;
}

void func_326()//Position - 0x1100A
{
	Global_1366857.f_57 = 1;
	Global_1366857.f_57.f_1 = 0;
}

void func_327()//Position - 0x11022
{
	Global_1366857.f_40.f_9 = 1;
}

void func_328(int iParam0)//Position - 0x11033
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7358, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7358, 0);
	}
}

void func_329(int iParam0)//Position - 0x11054
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 20);
	}
}

int func_330(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x11077
{
	func_340(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_331(sParam3, iParam4, bParam7);
}

int func_331(char* sParam0, int iParam1, bool bParam2)//Position - 0x110C5
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
					func_339();
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
		if (func_338(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_337();
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
				func_273();
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
				if (func_336())
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
			if (func_335())
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
			func_334();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_333();
		func_332();
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
		func_339();
	}
	return 0;
}

void func_332()//Position - 0x11395
{
	if (!func_261())
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

void func_333()//Position - 0x113CC
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

void func_334()//Position - 0x113FD
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

int func_335()//Position - 0x11492
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_336()//Position - 0x114B9
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

void func_337()//Position - 0x11552
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

bool func_338(int iParam0, int iParam1)//Position - 0x115A9
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

void func_339()//Position - 0x115E4
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

void func_340(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1163B
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

int func_341(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x11691
{
	func_340(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_331(sParam3, iParam4, bParam7);
}

int func_342(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x116DF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_344(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_343();
		func_327();
		func_299();
		func_326();
		func_325();
		return 1;
	}
	return 0;
}

void func_343()//Position - 0x11731
{
	Global_21823 = 0;
}

bool func_344(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1173D
{
	func_340(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_331(sParam3, iParam4, bParam8);
}

int func_345(var uParam0, char* sParam1, char* sParam2)//Position - 0x11792
{
	if (func_347(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_346();
		func_299();
		func_326();
		return 1;
	}
	return 0;
}

void func_346()//Position - 0x117BD
{
	Global_1366857.f_40.f_9 = 2;
}

bool func_347(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x117CE
{
	func_340(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_331(sParam2, iParam3, 0);
}

void func_348()//Position - 0x1181C
{
	Global_1366857.f_55 = Global_1366857.f_40.f_1;
	Global_1366857.f_55.f_1 = Global_1366857.f_40.f_10;
}

void func_349()//Position - 0x11842
{
	Global_1366857.f_40 = 1;
}

bool func_350()//Position - 0x11851
{
	return Global_1366857.f_40 == 1;
}

int func_351(int iParam0, int iParam1, int iParam2)//Position - 0x11861
{
	if (!func_352(iParam0))
	{
		return 0;
	}
	if (Global_1366857.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1366857.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_352(int iParam0)//Position - 0x118A0
{
	if (!func_353())
	{
		return 0;
	}
	if (!Global_1366857.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_353()//Position - 0x118C8
{
	if (Global_1366857.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)//Position - 0x118DF
{
	if (func_359())
	{
		return 0;
	}
	if (func_358())
	{
		return 0;
	}
	if (func_357(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662552 || func_356())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_355())
		{
			return 0;
		}
	}
	return 1;
}

bool func_355()//Position - 0x11943
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1383933);
}

int func_356()//Position - 0x11957
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0x1196F
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

bool func_358()//Position - 0x119C9
{
	return Global_1366857.f_40 == 3;
}

bool func_359()//Position - 0x119D9
{
	return func_335();
}

int func_360(int iParam0, int iParam1, int iParam2)//Position - 0x119E5
{
	if (!func_358())
	{
		return 0;
	}
	return func_351(iParam0, iParam1, iParam2);
}

int func_361(char* sParam0, char* sParam1)//Position - 0x11A03
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_362()//Position - 0x11A1D
{
	return "TXTMSG";
}

int func_363(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x11A29
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_193() /*10828*/].f_6168.f_1274 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_381(1411, iParam0);
	func_17(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_381(1412, iParam0);
	func_17(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_380(iParam0))
	{
	}
	else
	{
		iVar1 = func_381(1413, iParam0);
		func_17(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_381(1414, iParam0) + iVar0);
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_379(iParam0) + (iVar0 - 25));
				func_17(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_381(1439, iParam0) + iVar0);
			func_17(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_381(1441, iParam0);
	func_17(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_381(1442, iParam0);
	func_17(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_381(1443, iParam0);
	func_17(iVar1, uParam1->f_64, iParam3, 1);
	if (func_380(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_381(1444, iParam0);
		func_17(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_381(1445, iParam0);
	func_17(iVar1, uParam1->f_67, iParam3, 1);
	if (func_380(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_381(1446, iParam0);
		func_17(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_381(1447, iParam0);
	func_17(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_381(1448, iParam0);
	func_17(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_381(1449, iParam0);
	func_17(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_381(1450, iParam0);
	func_17(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_381(1451, iParam0);
	func_17(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_381(1452, iParam0);
	func_17(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_381(1453, iParam0);
	func_17(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_381(1454, iParam0);
	func_17(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_381(1455, iParam0);
	func_17(iVar1, uParam1->f_8, iParam3, 1);
	if (func_380(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_381(3880, iParam0);
		func_17(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_381(3881, iParam0);
		func_17(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_381(3882, iParam0);
		func_17(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_378(iParam0);
		func_17(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_377(iParam0);
		func_17(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_366(iParam0);
		func_17(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_193() /*10828*/].f_6168.f_1274;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_131(1628, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_365(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_365(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_365(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_365(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_131(func_365(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_131(func_365(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_380(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_364(func_365(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_364(int iParam0, var uParam1, int iParam2)//Position - 0x11E7C
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_34(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, uParam1);
	}
}

int func_365(int iParam0, int iParam1)//Position - 0x11EA5
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

int func_366(int iParam0)//Position - 0x17BAC
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_367(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	return 0;
}

int func_367(int iParam0)//Position - 0x17D31
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
		iVar0 = func_376(iParam0);
		return func_375(iVar0);
	}
	return (func_368(iParam0, -1) * iParam0 + 1);
}

int func_368(int iParam0, int iParam1)//Position - 0x17E63
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_371(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_370(iParam1))
			{
				return 0;
			}
			else if (func_369(iParam1, -1))
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

int func_369(int iParam0, int iParam1)//Position - 0x180F0
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

int func_370(int iParam0)//Position - 0x181CD
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

int func_371(int iParam0, bool bParam1, bool bParam2)//Position - 0x181FC
{
	if (bParam2)
	{
		return func_372(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_372(PLAYER::PLAYER_ID(), 0))
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

bool func_372(int iParam0, bool bParam1)//Position - 0x182D7
{
	if (Global_1590284 != func_97())
	{
		if (!func_374(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590284)
			{
				if (MISC::IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_373(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_373(int iParam0)//Position - 0x18343
{
	if (iParam0 != func_97())
	{
		return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_374(int iParam0)//Position - 0x18369
{
	if (iParam0 != func_97())
	{
		return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x18395
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

int func_376(int iParam0)//Position - 0x183C6
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_377(int iParam0)//Position - 0x183EC
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_367(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x18571
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_367(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	return 0;
}

int func_379(int iParam0)//Position - 0x186F6
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_367(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	return 0;
}

int func_380(int iParam0)//Position - 0x188B0
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

int func_381(int iParam0, int iParam1)//Position - 0x18933
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_367(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_367(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_367(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_367(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	return iVar0;
}

int func_382(var uParam0, bool bParam1)//Position - 0x1974D
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = Global_2097152[func_193() /*10828*/].f_6080.f_62;
	if ((*uParam0 == Global_1323611[iVar0 /*141*/].f_66 && uParam0->f_36) && uParam0->f_35)
	{
		Global_1323611[iVar0 /*141*/].f_1 = { uParam0->f_28 };
		Global_1323611[iVar0 /*141*/] = uParam0->f_32;
		if (func_383(uParam0->f_1, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1323611[iVar0 /*141*/].f_77), 13);
			Global_1323611[iVar0 /*141*/].f_5 = iVar6;
			Global_1323611[iVar0 /*141*/].f_7 = iVar7;
			Global_1323611[iVar0 /*141*/].f_137 = iVar1;
		}
		if (func_383(uParam0->f_2, &sVar2, &iVar1, &iVar6, &iVar7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1323611[iVar0 /*141*/].f_77), 12);
			Global_1323611[iVar0 /*141*/].f_6 = iVar6;
			Global_1323611[iVar0 /*141*/].f_138 = iVar1;
		}
		if (uParam0->f_18)
		{
			MISC::SET_BIT(&(Global_1323611[iVar0 /*141*/].f_77), 9);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1323611[iVar0 /*141*/].f_77), 9);
		}
		Global_1323611[iVar0 /*141*/].f_62 = uParam0->f_6;
		Global_1323611[iVar0 /*141*/].f_63 = uParam0->f_7;
		Global_1323611[iVar0 /*141*/].f_64 = uParam0->f_8;
		if (uParam0->f_5 == -1)
		{
			Global_1323611[iVar0 /*141*/].f_65 = 0;
		}
		else
		{
			Global_1323611[iVar0 /*141*/].f_65 = uParam0->f_5;
		}
		if (uParam0->f_13 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[4] = uParam0->f_13;
		}
		if (uParam0->f_9 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[11] = uParam0->f_9;
		}
		if (uParam0->f_10 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[12] = uParam0->f_10;
		}
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
		{
			Global_1323611[iVar0 /*141*/].f_9[14] = uParam0->f_16;
		}
		if (uParam0->f_14 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[15] = uParam0->f_14;
		}
		if (uParam0->f_15 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[16] = uParam0->f_15;
		}
		if (uParam0->f_11 != -1 && uParam0->f_12 < 8)
		{
			Global_1323611[iVar0 /*141*/].f_9[23] = uParam0->f_11;
			Global_1323611[iVar0 /*141*/].f_69 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[18] = uParam0->f_19;
		}
		if (uParam0->f_17 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[22] = uParam0->f_17;
		}
		if (uParam0->f_20 != -1)
		{
			Global_1323611[iVar0 /*141*/].f_9[20] = uParam0->f_20;
		}
		if (func_440(iVar0, &iVar8))
		{
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1323611[iVar0 /*141*/].f_102), 25);
				MISC::CLEAR_BIT(&(Global_1323611[iVar0 /*141*/].f_102), 26);
			}
		}
		return 1;
	}
	return 0;
}

bool func_383(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19A1B
{
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 118;
			*iParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 147;
			*iParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 96;
			*iParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 71;
			*iParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 0;
			*iParam3 = 135;
			*iParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 29;
			*iParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 64;
			*iParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 70;
			*iParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 50;
			*iParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 55;
			*iParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 89;
			*iParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 38;
			*iParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 0;
			*iParam3 = 37;
			*iParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 4;
			*iParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*iParam2 = 4;
			*iParam3 = 120;
			*iParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 0;
			*iParam3 = 1;
			*iParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 0;
			*iParam3 = 11;
			*iParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 2;
			*iParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 3;
			*iParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 5;
			*iParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 0;
			*iParam3 = 6;
			*iParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 7;
			*iParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 8;
			*iParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 0;
			*iParam3 = 9;
			*iParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 0;
			*iParam3 = 27;
			*iParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 0;
			*iParam3 = 28;
			*iParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 0;
			*iParam3 = 150;
			*iParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 30;
			*iParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 31;
			*iParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 32;
			*iParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 33;
			*iParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 0;
			*iParam3 = 34;
			*iParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 0;
			*iParam3 = 143;
			*iParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 0;
			*iParam3 = 35;
			*iParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 0;
			*iParam3 = 137;
			*iParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 0;
			*iParam3 = 136;
			*iParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 36;
			*iParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 38;
			*iParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 0;
			*iParam3 = 138;
			*iParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 0;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 88;
			*iParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 89;
			*iParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 0;
			*iParam3 = 91;
			*iParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 49;
			*iParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 50;
			*iParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 51;
			*iParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 52;
			*iParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 53;
			*iParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 54;
			*iParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 0;
			*iParam3 = 92;
			*iParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 141;
			*iParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 61;
			*iParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 62;
			*iParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 63;
			*iParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 65;
			*iParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 66;
			*iParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 67;
			*iParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 68;
			*iParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 69;
			*iParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 73;
			*iParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 70;
			*iParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 0;
			*iParam3 = 74;
			*iParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 96;
			*iParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 101;
			*iParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 95;
			*iParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 94;
			*iParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 97;
			*iParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 103;
			*iParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 104;
			*iParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 98;
			*iParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 100;
			*iParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 102;
			*iParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 99;
			*iParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 105;
			*iParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 0;
			*iParam3 = 106;
			*iParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 72;
			*iParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 146;
			*iParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 0;
			*iParam3 = 145;
			*iParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 0;
			*iParam3 = 107;
			*iParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 111;
			*iParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 0;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 0;
			*iParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 147;
			*iParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*iParam2 = 1;
			*iParam3 = 1;
			*iParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*iParam2 = 1;
			*iParam3 = 11;
			*iParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 2;
			*iParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 3;
			*iParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 4;
			*iParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 5;
			*iParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*iParam2 = 1;
			*iParam3 = 6;
			*iParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 7;
			*iParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 8;
			*iParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*iParam2 = 1;
			*iParam3 = 9;
			*iParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*iParam2 = 1;
			*iParam3 = 10;
			*iParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 1;
			*iParam3 = 27;
			*iParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*iParam2 = 1;
			*iParam3 = 28;
			*iParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 29;
			*iParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*iParam2 = 1;
			*iParam3 = 150;
			*iParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 30;
			*iParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 31;
			*iParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 32;
			*iParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 33;
			*iParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*iParam2 = 1;
			*iParam3 = 34;
			*iParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*iParam2 = 1;
			*iParam3 = 143;
			*iParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*iParam2 = 1;
			*iParam3 = 35;
			*iParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*iParam2 = 1;
			*iParam3 = 135;
			*iParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*iParam2 = 1;
			*iParam3 = 137;
			*iParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*iParam2 = 1;
			*iParam3 = 136;
			*iParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 36;
			*iParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*iParam2 = 1;
			*iParam3 = 138;
			*iParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*iParam2 = 1;
			*iParam3 = 90;
			*iParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 88;
			*iParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*iParam2 = 1;
			*iParam3 = 91;
			*iParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 49;
			*iParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 51;
			*iParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 52;
			*iParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 53;
			*iParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 54;
			*iParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*iParam2 = 1;
			*iParam3 = 92;
			*iParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 141;
			*iParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 61;
			*iParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 62;
			*iParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 63;
			*iParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 64;
			*iParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 65;
			*iParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 66;
			*iParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 67;
			*iParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 68;
			*iParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 69;
			*iParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 73;
			*iParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*iParam2 = 1;
			*iParam3 = 74;
			*iParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 101;
			*iParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 95;
			*iParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 94;
			*iParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 97;
			*iParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 103;
			*iParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 104;
			*iParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 98;
			*iParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 100;
			*iParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 102;
			*iParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 99;
			*iParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 105;
			*iParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*iParam2 = 1;
			*iParam3 = 106;
			*iParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 71;
			*iParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 72;
			*iParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 142;
			*iParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*iParam2 = 1;
			*iParam3 = 145;
			*iParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*iParam2 = 1;
			*iParam3 = 107;
			*iParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*iParam2 = 1;
			*iParam3 = 112;
			*iParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*iParam2 = 2;
			*iParam3 = 12;
			*iParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*iParam2 = 2;
			*iParam3 = 13;
			*iParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*iParam2 = 2;
			*iParam3 = 14;
			*iParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*iParam2 = 2;
			*iParam3 = 131;
			*iParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 83;
			*iParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 82;
			*iParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*iParam2 = 2;
			*iParam3 = 84;
			*iParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*iParam2 = 2;
			*iParam3 = 149;
			*iParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*iParam2 = 2;
			*iParam3 = 148;
			*iParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*iParam2 = 2;
			*iParam3 = 39;
			*iParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*iParam2 = 2;
			*iParam3 = 40;
			*iParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*iParam2 = 2;
			*iParam3 = 41;
			*iParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*iParam2 = 2;
			*iParam3 = 42;
			*iParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*iParam2 = 2;
			*iParam3 = 128;
			*iParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*iParam2 = 2;
			*iParam3 = 151;
			*iParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*iParam2 = 2;
			*iParam3 = 155;
			*iParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*iParam2 = 2;
			*iParam3 = 152;
			*iParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*iParam2 = 2;
			*iParam3 = 153;
			*iParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*iParam2 = 2;
			*iParam3 = 154;
			*iParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*iParam2 = 3;
			*iParam3 = 117;
			*iParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*iParam2 = 3;
			*iParam3 = 119;
			*iParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*iParam2 = 3;
			*iParam3 = 158;
			*iParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*iParam2 = 3;
			*iParam3 = 159;
			*iParam4 = 160;
			break;
	}
	return *iParam2 != -1;
}

bool func_384(var uParam0, int iParam1)//Position - 0x1AF0D
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
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = 0;
	iVar2 = Global_1323611[iParam1 /*141*/].f_5;
	iVar3 = Global_1323611[iParam1 /*141*/].f_6;
	iVar4 = Global_1323611[iParam1 /*141*/].f_7;
	iVar5 = Global_1323611[iParam1 /*141*/].f_65;
	if (iVar5 == -1)
	{
		iVar5 = 0;
	}
	if (uParam0->f_5 == -1)
	{
		uParam0->f_5 = 0;
	}
	iVar16 = 0;
	if (func_394(uParam0->f_1, &iVar6, &iVar7))
	{
		if ((iVar6 != -1 && iVar7 != -1) && (iVar6 != iVar2 || iVar7 != iVar4))
		{
			func_383(uParam0->f_1, &iVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_388(&iVar11, iVar15, 1, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (func_394(uParam0->f_2, &iVar8, &uVar9))
	{
		if (iVar8 != -1 && iVar8 != iVar3)
		{
			func_383(uParam0->f_2, &iVar11, &iVar10, &iVar6, &iVar7);
			if (iVar10 == 0)
			{
				iVar15 = 0;
			}
			else if (iVar10 == 1)
			{
				iVar15 = 1;
			}
			else if (iVar10 == 2)
			{
				iVar15 = 3;
			}
			else if (iVar10 == 3)
			{
				iVar15 = 4;
			}
			else if (iVar10 == 4)
			{
				iVar15 = 5;
			}
			iVar16 = func_388(&iVar11, iVar15, 0, 1, 0, 0, 0);
			iVar0 = (iVar0 + iVar16);
		}
	}
	if (uParam0->f_32 != Global_1323611[iParam1 /*141*/])
	{
		if (uParam0->f_32 == 3)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 4)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_32 == 2)
		{
			iVar0 += 300;
		}
		else if (uParam0->f_32 == 1)
		{
			iVar0 += 600;
		}
	}
	if (!MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_77, 9))
	{
		if (uParam0->f_18)
		{
			iVar0 += 25000;
		}
	}
	iVar17 = Global_1323611[iParam1 /*141*/].f_62;
	iVar18 = Global_1323611[iParam1 /*141*/].f_63;
	iVar19 = Global_1323611[iParam1 /*141*/].f_64;
	if ((uParam0->f_6 != iVar17 || uParam0->f_7 != iVar18) || uParam0->f_8 != iVar19)
	{
		switch (func_385(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				iVar0 += 1500;
				break;
			
			case 2:
				iVar0 += 5000;
				break;
			
			case 3:
				iVar0 += 10000;
				break;
			
			case 4:
				iVar0 += 12500;
				break;
			
			case 6:
				iVar0 += 15000;
				break;
			
			case 8:
				iVar0 += 20000;
				break;
			
			case 5:
				iVar0 += 14000;
				break;
			
			case 7:
				iVar0 += 17500;
				break;
			
			case 9:
				iVar0 = (iVar0 + Global_262145.f_7666);
				break;
			
			case 10:
				iVar0 = (iVar0 + Global_262145.f_7667);
				break;
			
			case 11:
				iVar0 = (iVar0 + Global_262145.f_7815);
				break;
			}
	}
	if (uParam0->f_5 != iVar5)
	{
		if (uParam0->f_5 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_5 == 1)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_5 == 2)
		{
			iVar0 += 3500;
		}
		else if (uParam0->f_5 == 3)
		{
			iVar0 += 1500;
		}
		else if (uParam0->f_5 == 5)
		{
			iVar0 = (iVar0 + Global_262145.f_7661);
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[11];
	if (uParam0->f_9 != iVar1 && uParam0->f_9 != -1)
	{
		if (uParam0->f_9 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_9 == 1)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_9 == 2)
		{
			iVar0 += 2500;
		}
		else if (uParam0->f_9 == 3)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_9 == 4)
		{
			iVar0 += 6700;
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[12];
	if (uParam0->f_10 != iVar1 && uParam0->f_10 != -1)
	{
		if (uParam0->f_10 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_10 == 1)
		{
			iVar0 += 4000;
		}
		else if (uParam0->f_10 == 2)
		{
			iVar0 += 5400;
		}
		else if (uParam0->f_10 == 3)
		{
			iVar0 += 7000;
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[4];
	if (uParam0->f_13 != iVar1 && uParam0->f_13 != -1)
	{
		if (uParam0->f_13 == 0)
		{
			iVar0 += 260;
		}
		else if (uParam0->f_13 == 1)
		{
			iVar0 += 750;
		}
		else if (uParam0->f_13 == 2)
		{
			iVar0 += 1800;
		}
		else if (uParam0->f_13 == 3)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_13 == 4)
		{
			iVar0 += 9550;
		}
		else if (uParam0->f_13 == 5)
		{
			iVar0 += 9750;
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[23];
	if (uParam0->f_11 != iVar1 && uParam0->f_11 != -1)
	{
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[14];
	if (uParam0->f_16 != iVar1 && uParam0->f_16 != -1)
	{
		if (uParam0->f_16 == 0)
		{
			iVar0 += 500;
		}
		else if (uParam0->f_16 == 1)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_16 == 2)
		{
			iVar0 += 3000;
		}
		else if (uParam0->f_16 == 3)
		{
			iVar0 += 5000;
		}
		else if (uParam0->f_16 == 4)
		{
			iVar0 += 10000;
		}
		else if (uParam0->f_16 == 5)
		{
			iVar0 += 12500;
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[16];
	if (uParam0->f_15 != iVar1 && uParam0->f_15 != -1)
	{
		if (uParam0->f_15 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_15 == 1)
		{
			iVar0 += 3600;
		}
		else if (uParam0->f_15 == 2)
		{
			iVar0 += 6000;
		}
		else if (uParam0->f_15 == 3)
		{
			iVar0 += 9600;
		}
		else if (uParam0->f_15 == 4)
		{
			iVar0 += 16800;
		}
		else if (uParam0->f_15 == 5)
		{
			iVar0 += 24000;
		}
	}
	iVar1 = Global_1323611[iParam1 /*141*/].f_9[15];
	if (uParam0->f_14 != iVar1 && uParam0->f_14 != -1)
	{
		if (uParam0->f_14 == 0)
		{
			iVar0 += 200;
		}
		else if (uParam0->f_14 == 1)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_14 == 2)
		{
			iVar0 += 2000;
		}
		else if (uParam0->f_14 == 3)
		{
			iVar0 += 3400;
		}
		else if (uParam0->f_14 == 4)
		{
			iVar0 += 4400;
		}
	}
	if (uParam0->f_17 != -1)
	{
		if (uParam0->f_17 != 1 && Global_1323611[iParam1 /*141*/].f_9[22] > 0)
		{
			iVar0 += 100;
		}
		else if (uParam0->f_17 == 1 && Global_1323611[iParam1 /*141*/].f_9[22] <= 0)
		{
			iVar0 += 2000;
		}
	}
	if (uParam0->f_19 != -1)
	{
		if (uParam0->f_19 != 1 && Global_1323611[iParam1 /*141*/].f_9[18] > 0)
		{
			iVar0 += 1000;
		}
		else if (uParam0->f_19 == 1 && Global_1323611[iParam1 /*141*/].f_9[18] <= 0)
		{
			iVar0 += 24000;
		}
	}
	return uParam0->f_27 >= iVar0;
}

int func_385(int iParam0, int iParam1, int iParam2)//Position - 0x1B658
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314030 && iParam1 == Global_1314031) && iParam2 == Global_1314032)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_387())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_386())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_386()//Position - 0x1B886
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_387()//Position - 0x1B897
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_388(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1B8A8
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam1)
	{
		case 1:
			iVar0 = func_393(iParam0);
			break;
		
		case 4:
			iVar0 = func_392(iParam0);
			break;
		
		case 0:
			iVar0 = func_391(iParam0);
			break;
		
		case 3:
			iVar0 = func_390(iParam0);
			break;
		
		case 5:
			iVar0 = 25000;
			break;
		
		case 2:
			iVar0 = func_389(iParam0);
			break;
	}
	if (iParam3 && !bParam2)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 2f));
	}
	if (bParam4)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14607));
	}
	if (bParam5)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14608));
	}
	if (bParam6)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_14609));
	}
	return iVar0;
}

int func_389(int iParam0)//Position - 0x1B985
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case 705942170:
			return 2520;
			break;
		
		case 420798133:
			return 2430;
			break;
		
		case 276866930:
			return 2370;
			break;
		
		case 986880145:
			return 2490;
			break;
		
		case -1703942278:
			return 2580;
			break;
		
		case -869156315:
			return 2340;
			break;
		
		case -1995729735:
			return 2460;
			break;
		
		case 1896056270:
			return 3200;
			break;
		
		case -700066870:
			return 2340;
			break;
		
		case 1767884990:
			return 2580;
			break;
		
		case 34197777:
			return 2610;
			break;
		
		case -1461906115:
			return 2700;
			break;
		
		case -249724192:
			return 2640;
			break;
		
		case -1737346484:
			return 4200;
			break;
		
		case -1251337749:
			return 15250;
			break;
		
		case 1430328110:
			return 15000;
			break;
		
		case 785556533:
			return 19550;
			break;
		
		case 971696566:
			return 5400;
			break;
		
		case -96227377:
			return 2850;
			break;
		
		case 1151035909:
			return 2670;
			break;
		
		case 405883949:
			return 18100;
			break;
		
		case 1733530353:
			return 16240;
			break;
		
		case 1118733987:
			return 8200;
			break;
		
		case -830067363:
			return 19800;
			break;
		
		case 1224546404:
			return 20000;
			break;
		
		case -1253413535:
			return 19200;
			break;
		
		case -1644509493:
			return 17600;
			break;
		
		case 1523532878:
			return 15800;
			break;
		
		case -1915493356:
			return 15480;
			break;
		
		case -1992101720:
			return 15620;
			break;
		
		case 1293082345:
			return 3500;
			break;
		
		case -508302758:
			return 3450;
			break;
		
		case -1741930097:
			return 15590;
			break;
		
		case 2194643:
			return 15860;
			break;
		
		case 1453150109:
			return 16000;
			break;
		
		case 459084580:
			return 2610;
			break;
		
		case -1581704775:
			return 15760;
			break;
		
		case 2033881459:
			return 2850;
			break;
		
		case 555492985:
			return 2550;
			break;
		
		case -279527550:
			return 15970;
			break;
		
		case 1879277528:
			return 16850;
			break;
		
		case -801455169:
			return 20000;
			break;
		
		case 902421837:
			return 7500;
			break;
		
		case -412482159:
			return 3030;
			break;
		
		case 1759794178:
			return 2790;
			break;
		
		case 803459446:
			return 2700;
			break;
		
		case -1974111254:
			return 3840;
			break;
		
		case 1494439047:
			return 2610;
			break;
		
		case 1581070110:
			return 2520;
			break;
		
		case -1063817116:
			return 15700;
			break;
		
		case 381538445:
			return 3900;
			break;
		
		case 200174426:
			return 3610;
			break;
		
		case -300291616:
			return 15340;
			break;
		
		case 136984354:
			return 18750;
			break;
		
		case -656754985:
			return 3450;
			break;
		
		case 1447753091:
			return 6300;
			break;
		
		case 960511748:
			return 5800;
			break;
		
		case 938646550:
			return 2340;
			break;
		
		case 1474663457:
			return 2430;
			break;
		
		case -198635756:
			return 2550;
			break;
		
		case -972036065:
			return 2700;
			break;
		
		case -226866387:
			return 2760;
			break;
		
		case 2065208510:
			return 2490;
			break;
		
		case -168229550:
			return 2580;
			break;
		
		case -132150361:
			return 2700;
			break;
		
		case 1116422159:
			return 2640;
			break;
		
		case -975380874:
			return 2610;
			break;
		
		case 1697740006:
			return 2340;
			break;
		
		case -1629924060:
			return 5650;
			break;
		
		case -1273722113:
			return 10000;
			break;
		
		case 316369669:
			return 9400;
			break;
		
		case -1788485040:
			return 20000;
			break;
		
		case 940810089:
			return 2340;
			break;
		
		case -2024144439:
			return 2430;
			break;
		
		case -1076952499:
			return 2610;
			break;
	}
	return 0;
}

int func_390(int iParam0)//Position - 0x1BE1D
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case 705942170:
			return 2200;
			break;
		
		case -2089639073:
			return 2050;
			break;
		
		case -1339860315:
			return 2000;
			break;
		
		case -2024144439:
			return 2120;
			break;
		
		case -1974111254:
			return 14250;
			break;
		
		case 1759794178:
			return 2150;
			break;
		
		case 902421837:
			return 10000;
			break;
		
		case 316369669:
			return 13750;
			break;
		
		case -1629924060:
			return 17000;
			break;
		
		case -1737346484:
			return 12500;
			break;
		
		case 607125239:
			return 15000;
			break;
		
		case -1915493356:
			return 14000;
			break;
		
		case -1741930097:
			return 11600;
			break;
		
		case -801455169:
			return 17500;
			break;
		
		case 1439605128:
			return 2130;
			break;
		
		case -635614799:
			return 2150;
			break;
		
		case -1223107299:
			return 2100;
			break;
		
		case -695919028:
			return 2250;
			break;
		
		case 805674107:
			return 2240;
			break;
		
		case 823281248:
			return 2170;
			break;
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x1BF7C
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case 705942170:
			return 1400;
			break;
		
		case 420798133:
			return 1350;
			break;
		
		case 276866930:
			return 1320;
			break;
		
		case 986880145:
			return 1380;
			break;
		
		case -1703942278:
			return 1440;
			break;
		
		case -869156315:
			return 1300;
			break;
		
		case -1995729735:
			return 1370;
			break;
		
		case 1896056270:
			return 1340;
			break;
		
		case -700066870:
			return 1300;
			break;
		
		case 1767884990:
			return 1430;
			break;
		
		case 34197777:
			return 1450;
			break;
		
		case -1461906115:
			return 1500;
			break;
		
		case -249724192:
			return 1470;
			break;
		
		case -1737346484:
			return 1530;
			break;
		
		case -1251337749:
			return 9260;
			break;
		
		case 1430328110:
			return 8890;
			break;
		
		case 785556533:
			return 14500;
			break;
		
		case 971696566:
			return 5000;
			break;
		
		case -96227377:
			return 1590;
			break;
		
		case 1151035909:
			return 1480;
			break;
		
		case 405883949:
			return 13250;
			break;
		
		case 1733530353:
			return 12000;
			break;
		
		case 1118733987:
			return 13000;
			break;
		
		case -830067363:
			return 14750;
			break;
		
		case 1224546404:
			return 15000;
			break;
		
		case -1253413535:
			return 13750;
			break;
		
		case -1644509493:
			return 13000;
			break;
		
		case 1523532878:
			return 11000;
			break;
		
		case -1915493356:
			return 7500;
			break;
		
		case -1992101720:
			return 9000;
			break;
		
		case 1293082345:
			return 1650;
			break;
		
		case -508302758:
			return 1550;
			break;
		
		case -1741930097:
			return 8500;
			break;
		
		case 2194643:
			return 11500;
			break;
		
		case 1453150109:
			return 12000;
			break;
		
		case 459084580:
			return 1450;
			break;
		
		case -1581704775:
			return 10500;
			break;
		
		case 2033881459:
			return 1580;
			break;
		
		case 555492985:
			return 1420;
			break;
		
		case -279527550:
			return 12000;
			break;
		
		case 1879277528:
			return 13000;
			break;
		
		case -801455169:
			return 15000;
			break;
		
		case 902421837:
			return 12250;
			break;
		
		case -412482159:
			return 1690;
			break;
		
		case 1759794178:
			return 1550;
			break;
		
		case 803459446:
			return 1500;
			break;
		
		case -1974111254:
			return 1430;
			break;
		
		case 1494439047:
			return 1450;
			break;
		
		case 1581070110:
			return 1400;
			break;
		
		case -1063817116:
			return 10890;
			break;
		
		case 381538445:
			return 1530;
			break;
		
		case 200174426:
			return 1480;
			break;
		
		case -300291616:
			return 7500;
			break;
		
		case 136984354:
			return 13750;
			break;
		
		case -656754985:
			return 1350;
			break;
		
		case 1447753091:
			return 11250;
			break;
		
		case 960511748:
			return 10000;
			break;
		
		case 938646550:
			return 1300;
			break;
		
		case 1474663457:
			return 1350;
			break;
		
		case -198635756:
			return 1420;
			break;
		
		case -972036065:
			return 1500;
			break;
		
		case -226866387:
			return 1530;
			break;
		
		case 2065208510:
			return 1380;
			break;
		
		case -168229550:
			return 1430;
			break;
		
		case -132150361:
			return 1500;
			break;
		
		case 1116422159:
			return 1470;
			break;
		
		case -975380874:
			return 1450;
			break;
		
		case 1697740006:
			return 1300;
			break;
		
		case -1629924060:
			return 7500;
			break;
		
		case -1273722113:
			return 14250;
			break;
		
		case 316369669:
			return 13750;
			break;
		
		case -1788485040:
			return 15000;
			break;
		
		case 940810089:
			return 1300;
			break;
		
		case -2024144439:
			return 1350;
			break;
		
		case -1076952499:
			return 1450;
			break;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x1C46E
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case -1205962918:
			return 12500;
			break;
		
		case -644198701:
			return 11500;
			break;
		
		case -1231545847:
			return 10250;
			break;
		
		case 2133991728:
			return Global_262145.f_7766;
			break;
		
		case -1678550350:
			return Global_262145.f_7767;
			break;
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x1C4F4
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case 705942170:
			return 840;
			break;
		
		case 420798133:
			return 810;
			break;
		
		case 276866930:
			return 790;
			break;
		
		case 986880145:
			return 830;
			break;
		
		case -1703942278:
			return 860;
			break;
		
		case -869156315:
			return 780;
			break;
		
		case -1995729735:
			return 820;
			break;
		
		case 1896056270:
			return 800;
			break;
		
		case -700066870:
			return 780;
			break;
		
		case 1767884990:
			return 860;
			break;
		
		case 34197777:
			return 870;
			break;
		
		case -1461906115:
			return 900;
			break;
		
		case -249724192:
			return 880;
			break;
		
		case -1737346484:
			return 920;
			break;
		
		case -1251337749:
			return 5600;
			break;
		
		case 1430328110:
			return 5200;
			break;
		
		case 785556533:
			return 11600;
			break;
		
		case 971696566:
			return 3800;
			break;
		
		case -96227377:
			return 950;
			break;
		
		case 1151035909:
			return 890;
			break;
		
		case 405883949:
			return 10600;
			break;
		
		case 1733530353:
			return 9600;
			break;
		
		case 1118733987:
			return 10400;
			break;
		
		case -830067363:
			return 12150;
			break;
		
		case 1224546404:
			return 12500;
			break;
		
		case -1253413535:
			return 11000;
			break;
		
		case -1644509493:
			return 10400;
			break;
		
		case 1523532878:
			return 8800;
			break;
		
		case -1915493356:
			return 4500;
			break;
		
		case -1992101720:
			return 5400;
			break;
		
		case 1293082345:
			return 990;
			break;
		
		case -508302758:
			return 930;
			break;
		
		case -1741930097:
			return 5100;
			break;
		
		case 2194643:
			return 9200;
			break;
		
		case 1453150109:
			return 9600;
			break;
		
		case 459084580:
			return 870;
			break;
		
		case -1581704775:
			return 8400;
			break;
		
		case 2033881459:
			return 950;
			break;
		
		case 555492985:
			return 850;
			break;
		
		case -279527550:
			return 9600;
			break;
		
		case 1879277528:
			return 10400;
			break;
		
		case -801455169:
			return 12500;
			break;
		
		case 902421837:
			return 9800;
			break;
		
		case -412482159:
			return 1010;
			break;
		
		case 1759794178:
			return 930;
			break;
		
		case 803459446:
			return 900;
			break;
		
		case -1974111254:
			return 860;
			break;
		
		case 1494439047:
			return 870;
			break;
		
		case 1581070110:
			return 840;
			break;
		
		case -1063817116:
			return 8650;
			break;
		
		case 381538445:
			return 920;
			break;
		
		case 200174426:
			return 890;
			break;
		
		case -300291616:
			return 4500;
			break;
		
		case 136984354:
			return 11000;
			break;
		
		case -656754985:
			return 810;
			break;
		
		case 1447753091:
			return 9050;
			break;
		
		case 960511748:
			return 8000;
			break;
		
		case 938646550:
			return 780;
			break;
		
		case 1474663457:
			return 810;
			break;
		
		case -198635756:
			return 850;
			break;
		
		case -972036065:
			return 900;
			break;
		
		case -226866387:
			return 920;
			break;
		
		case 2065208510:
			return 830;
			break;
		
		case -168229550:
			return 860;
			break;
		
		case -132150361:
			return 900;
			break;
		
		case 1116422159:
			return 880;
			break;
		
		case -975380874:
			return 870;
			break;
		
		case 1697740006:
			return 780;
			break;
		
		case -1629924060:
			return 4500;
			break;
		
		case -1273722113:
			return 11400;
			break;
		
		case 316369669:
			return 11000;
			break;
		
		case -1788485040:
			return 12500;
			break;
		
		case 940810089:
			return 780;
			break;
		
		case -2024144439:
			return 810;
			break;
		
		case -1076952499:
			return 870;
			break;
	}
	return 0;
}

bool func_394(int iParam0, var uParam1, var uParam2)//Position - 0x1C98C
{
	var uVar0;
	char* sVar1;
	
	func_383(iParam0, &sVar1, &uVar0, uParam1, uParam2);
	return (*uParam1 != -1 && *uParam2 != -1);
}

bool func_395(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1C9B2
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_286(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_396(int iParam0, bool bParam1, bool bParam2)//Position - 0x1C9DB
{
	if (bParam1)
	{
		if (func_99(iParam0))
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

int func_397(int iParam0, int iParam1)//Position - 0x1CA0D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar7;
	var uVar8;
	int iVar9;
	
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	bVar1 = false;
	while ((iParam1 == -1 || iParam1 == iVar0) && func_383(iVar0, &iVar3, &iVar2, &uVar7, &uVar8))
	{
		bVar1 = true;
		iVar9 = func_402(&iVar3);
		if (iVar2 == 0)
		{
			if (func_398(0, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 1)
		{
			if (func_398(1, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 2)
		{
			if (func_398(3, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 3)
		{
			if (func_398(4, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		else if (iVar2 == 4)
		{
			if (func_398(5, iVar9, 1, 0))
			{
				MISC::SET_BIT(iParam0[(iVar0 / 32)], (iVar0 % 32));
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		return -1;
	}
	return iParam1;
}

int func_398(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1CB2D
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (((((((((((((((VEHICLE::IS_VEHICLE_MODEL(iParam3, 177270108) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 387748548)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 1502869817)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -2118308144)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -1693015116)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -692292317)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -1435527158)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -212993243)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 1945374990)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 1653666139)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -1988428699)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 2069146067)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, 219613597)) || func_208(ENTITY::GET_ENTITY_MODEL(iParam3))) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -286046740)) || VEHICLE::IS_VEHICLE_MODEL(iParam3, -1254331310))
		{
			return 1;
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam3)))
		{
			return 1;
		}
	}
	if (iParam0 == 4)
	{
		if (iParam1 == 32 || iParam1 == 91)
		{
			return func_133(func_136(PLAYER::PLAYER_ID(), 1), 0) >= 100;
		}
	}
	iVar0 = func_401(iParam0, iParam1, bParam2);
	if (iVar0 != 0)
	{
		return func_399(iParam0, iVar0);
	}
	return 1;
}

int func_399(int iParam0, int iParam1)//Position - 0x1CCD3
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
			if (func_133(func_136(PLAYER::PLAYER_ID(), 1), 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_50(38, -1) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 152:
		case 153:
		case 154:
			if (func_51(153, -1, 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_51(160, -1, 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 159:
		case 160:
		case 161:
			if (func_51(161, -1, 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_51(818, -1, 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 133:
			return 1;
			break;
		
		case 134:
			return 1;
			break;
		
		case 135:
			if (func_50(51, -1) >= 1 || func_50(52, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 170:
			if (func_133(func_136(PLAYER::PLAYER_ID(), 1), 0) >= func_400(iParam0, iParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 136:
			if (func_50(58, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 137:
			if (func_50(57, -1) >= 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_400(int iParam0, int iParam1)//Position - 0x1CF23
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_401(int iParam0, int iParam1, bool bParam2)//Position - 0x1D161
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
				{
					return 134;
				}
				else
				{
					return 169;
				}
				break;
			
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
				break;
			
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
				break;
			}
	}
	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
				{
					return 133;
				}
				else
				{
					return 166;
				}
				break;
			}
	}
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 167;
				}
				break;
			}
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
				{
					return 168;
				}
				break;
			}
	}
	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
				break;
			
			case 32:
			case 91:
				return 170;
				break;
			}
	}
	switch (iParam1)
	{
		case 58:
			return 148;
			break;
		
		case 44:
			return 149;
			break;
		
		case 55:
			return 150;
			break;
		
		case 25:
			return 151;
			break;
		
		case 29:
			return 152;
			break;
		
		case 85:
			return 153;
			break;
		
		case 43:
			return 154;
			break;
		
		case 23:
			return 155;
			break;
		
		case 38:
			return 156;
			break;
		
		case 71:
			return 157;
			break;
		
		case 26:
			return 158;
			break;
		
		case 24:
			return 159;
			break;
		
		case 42:
			return 160;
			break;
		
		case 18:
			return 161;
			break;
		
		case 62:
			return 162;
			break;
		
		case 12:
			return 163;
			break;
		
		case 32:
			return 164;
			break;
		
		case 84:
			return 165;
			break;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
					break;
				
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
					break;
				
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
					break;
				
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
					break;
				
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
					break;
				
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
					break;
				
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
					break;
				
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
					break;
				
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
					break;
				
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
					break;
			}
			break;
	}
	return 0;
}

int func_402(int iParam0)//Position - 0x1D651
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0))
	{
		return 0;
	}
	if (!HUD::DOES_TEXT_LABEL_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(iParam0);
	switch (iVar0)
	{
		case 705942170:
			return 1;
			break;
		
		case 420798133:
			return 2;
			break;
		
		case 276866930:
			return 3;
			break;
		
		case 986880145:
			return 4;
			break;
		
		case -1703942278:
			return 5;
			break;
		
		case -869156315:
			return 6;
			break;
		
		case -2077191789:
			return 7;
			break;
		
		case -1995729735:
			return 8;
			break;
		
		case 1896056270:
			return 9;
			break;
		
		case -700066870:
			return 10;
			break;
		
		case 1767884990:
			return 11;
			break;
		
		case 34197777:
			return 12;
			break;
		
		case -1461906115:
			return 13;
			break;
		
		case -249724192:
			return 14;
			break;
		
		case -1737346484:
			return 15;
			break;
		
		case -1251337749:
			return 16;
			break;
		
		case 1430328110:
			return 17;
			break;
		
		case 785556533:
			return 18;
			break;
		
		case 971696566:
			return 19;
			break;
		
		case -96227377:
			return 20;
			break;
		
		case 1151035909:
			return 21;
			break;
		
		case 405883949:
			return 22;
			break;
		
		case 1118733987:
			return 23;
			break;
		
		case 1733530353:
			return 24;
			break;
		
		case -830067363:
			return 25;
			break;
		
		case 1224546404:
			return 26;
			break;
		
		case -1253413535:
			return 27;
			break;
		
		case -1644509493:
			return 28;
			break;
		
		case 1523532878:
			return 29;
			break;
		
		case -1915493356:
			return 30;
			break;
		
		case -1992101720:
			return 31;
			break;
		
		case 1293082345:
			return 32;
			break;
		
		case -508302758:
			return 33;
			break;
		
		case -1741930097:
			return 34;
			break;
		
		case 2194643:
			return 35;
			break;
		
		case -1411292916:
			return 36;
			break;
		
		case 459084580:
			return 37;
			break;
		
		case -1581704775:
			return 38;
			break;
		
		case 2033881459:
			return 39;
			break;
		
		case 555492985:
			return 40;
			break;
		
		case -279527550:
			return 41;
			break;
		
		case 1879277528:
			return 42;
			break;
		
		case -801455169:
			return 43;
			break;
		
		case 902421837:
			return 44;
			break;
		
		case -412482159:
			return 45;
			break;
		
		case 1759794178:
			return 46;
			break;
		
		case 803459446:
			return 47;
			break;
		
		case -1974111254:
			return 48;
			break;
		
		case 1494439047:
			return 49;
			break;
		
		case 1581070110:
			return 50;
			break;
		
		case -1063817116:
			return 51;
			break;
		
		case 381538445:
			return 52;
			break;
		
		case 200174426:
			return 53;
			break;
		
		case -300291616:
			return 54;
			break;
		
		case 136984354:
			return 55;
			break;
		
		case -656754985:
			return 56;
			break;
		
		case 1447753091:
			return 57;
			break;
		
		case 960511748:
			return 58;
			break;
		
		case 938646550:
			return 59;
			break;
		
		case 1474663457:
			return 60;
			break;
		
		case -198635756:
			return 61;
			break;
		
		case -972036065:
			return 62;
			break;
		
		case -226866387:
			return 63;
			break;
		
		case 2065208510:
			return 64;
			break;
		
		case -168229550:
			return 65;
			break;
		
		case -132150361:
			return 66;
			break;
		
		case 1116422159:
			return 67;
			break;
		
		case -975380874:
			return 68;
			break;
		
		case 1697740006:
			return 69;
			break;
		
		case -1629924060:
			return 70;
			break;
		
		case -1273722113:
			return 71;
			break;
		
		case 316369669:
			return 72;
			break;
		
		case -1788485040:
			return 73;
			break;
		
		case 940810089:
			return 74;
			break;
		
		case -2024144439:
			return 75;
			break;
		
		case -1076952499:
			return 76;
			break;
		
		case -2089639073:
			return 77;
			break;
		
		case -1339860315:
			return 78;
			break;
		
		case 607125239:
			return 79;
			break;
		
		case 1439605128:
			return 80;
			break;
		
		case -1205962918:
			return 81;
			break;
		
		case -644198701:
			return 82;
			break;
		
		case -1231545847:
			return 83;
			break;
		
		case 1114790148:
			return 84;
			break;
		
		case 1453150109:
			return 85;
			break;
		
		case -695919028:
			return 86;
			break;
		
		case -635614799:
			return 87;
			break;
		
		case -1223107299:
			return 88;
			break;
		
		case 823281248:
			return 89;
			break;
		
		case 805674107:
			return 90;
			break;
		
		case -1678550350:
			return 91;
			break;
		
		case 2133991728:
			return 32;
			break;
	}
	return 0;
}

void func_403(int iParam0)//Position - 0x1DB85
{
	*iParam0 = 0;
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_404(5, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_404(6, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_404(7, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_404(8, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_404(29, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_404(30, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_404(31, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_404(32, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_404(33, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_404(81, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_404(51, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_404(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_404(34, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_404(35, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_404(36, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_404(37, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_386())
	{
		MISC::SET_BIT(iParam0, 19);
	}
}

int func_404(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DD0E
{
	if (func_427(iParam1, iParam3))
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111560.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
	}
	else
	{
		if (func_426(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 177270108) || VEHICLE::IS_VEHICLE_MODEL(iParam2, 387748548))
				{
					return 1;
				}
				else if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 1502869817))
				{
					if ((iParam0 == 85 || iParam0 == 86) || iParam0 == 87)
					{
						return 1;
					}
				}
			}
		}
		if (func_425(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -2118308144))
				{
					return 1;
				}
			}
		}
		if (func_424(iParam1, iParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 2069146067))
				{
					return 1;
				}
			}
		}
		if (func_423(iParam1, iParam3))
		{
			return 1;
		}
		if (func_422(iParam1, iParam3))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -1242608589))
			{
				if (iParam0 == 85 || iParam0 == 86)
				{
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam2))
			{
				case 1721676810:
				case 668439077:
				case -1694081890:
				case -2042350822:
				case 1009171724:
				case -1924800695:
				case -1744505657:
				case 628003514:
				case -27326686:
				case -1812949672:
				case -1374500452:
				case joaat("dominator"):
				case joaat("dominator2"):
				case -688189648:
				case -1375060657:
				case -1293924613:
				case -2061049099:
				case 444994115:
				case 540101442:
				case -801550069:
				case -1146969353:
				case 2139203625:
				case 1637620610:
				case -755532233:
				case -1106120762:
				case -1478704292:
				case 679453769:
				case 1542143200:
				case -1890996696:
				case 1909700336:
				case -579747861:
				case 2038858402:
				case 373261600:
				case 1742022738:
				case 840387324:
				case -715746948:
				case 1537277726:
				case 1239571361:
				case -286046740:
					return 1;
					break;
				}
		}
		if (((iParam0 == 85 || iParam0 == 86) || iParam0 == 87) || iParam0 == 88)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_410(iParam2) || func_409(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if (iParam0 == 77 || iParam0 == 78)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 1489874736))
				{
					return 1;
				}
			}
		}
		if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, 2069146067))
				{
					return 1;
				}
			}
		}
		if (((iParam0 == 72 || iParam0 == 73) || iParam0 == 74) || iParam0 == 75)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam2, -212993243) || func_409(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if ((((iParam0 == 21 || iParam0 == 22) || iParam0 == 23) || iParam0 == 95) || iParam0 == 96)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_409(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
		if ((((((iParam0 == 17 || iParam0 == 18) || iParam0 == 19) || iParam0 == 20) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (func_409(ENTITY::GET_ENTITY_MODEL(iParam2)))
				{
					return 1;
				}
			}
		}
	}
	if (func_83() == 0)
	{
		return func_405(iParam0, -1);
	}
	return 1;
}

bool func_405(int iParam0, int iParam1)//Position - 0x1E12D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_406(iParam0, iParam1);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_32(iVar1));
}

var func_406(var uParam0, int iParam1)//Position - 0x1E14F
{
	var uVar0;
	
	uVar0 = func_51(func_407(uParam0), iParam1, 0);
	return uVar0;
}

int func_407(var uParam0)//Position - 0x1E168
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_36(iVar0);
	if ((func_83() == 0 || func_408() == 0) || (func_83() == 999 && func_408() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 729;
				break;
			
			case 1:
				return 730;
				break;
			
			case 2:
				return 731;
				break;
			
			case 3:
				return 732;
				break;
			
			case 4:
				return 733;
				break;
			
			case 5:
				return 734;
				break;
			
			case 6:
				return 735;
				break;
			}
	}
	return 10999;
}

int func_408()//Position - 0x1E21F
{
	return Global_30737;
}

int func_409(int iParam0)//Position - 0x1E22A
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)//Position - 0x1E26C
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_413(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			if (func_411(iParam0))
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

int func_411(int iParam0)//Position - 0x1E329
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_412(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)//Position - 0x1E35F
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

int func_413(int iParam0, bool bParam1)//Position - 0x1E3B8
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_415(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2531497.f_301 == iParam0)
				{
					return 1;
				}
				else if (func_414(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_414(int iParam0)//Position - 0x1E413
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

int func_415(int iParam0, int iParam1)//Position - 0x1E44D
{
	if (iParam1 == 0)
	{
		if (func_212(iParam0, 0))
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
			return func_421();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14207)
			{
				return func_420();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14208)
			{
				return func_420();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14206)
			{
				return func_420();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14209)
			{
				return func_420();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14211)
			{
				return func_420();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_419();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18657)
			{
				return func_418();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18659)
			{
				return func_418();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18663)
			{
				return func_418();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18660)
			{
				return func_418();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18667)
			{
				return func_418();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18665)
			{
				return func_418();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18670)
			{
				return func_418();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20613)
			{
				return func_417();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20614)
			{
				return func_417();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_416();
			break;
		
		case joaat("glendale"):
			return func_416();
			break;
		
		case -2096690334:
			return func_416();
			break;
		
		case 931280609:
			return func_416();
			break;
		
		case joaat("gargoyle"):
			return func_416();
			break;
		
		case joaat("dominator"):
			return func_416();
			break;
		
		case joaat("dominator2"):
			return func_416();
			break;
		
		case 444994115:
			return func_416();
			break;
		
		case 1637620610:
			return func_416();
			break;
		
		case -755532233:
			return func_416();
			break;
		
		case -27326686:
			return func_416();
			break;
		
		case -1812949672:
			return func_416();
			break;
		
		case -1374500452:
			return func_416();
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
			return func_416();
			break;
	}
	return 0;
}

bool func_416()//Position - 0x1E7C1
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

bool func_417()//Position - 0x1E7D2
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

bool func_418()//Position - 0x1E7E3
{
	return DLC::IS_DLC_PRESENT(-957277403);
}

bool func_419()//Position - 0x1E7F4
{
	return DLC::IS_DLC_PRESENT(210122941);
}

bool func_420()//Position - 0x1E805
{
	return DLC::IS_DLC_PRESENT(-1894522408);
}

bool func_421()//Position - 0x1E816
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

int func_422(int iParam0, int iParam1)//Position - 0x1E827
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1)//Position - 0x1E842
{
	if (iParam0 == 45)
	{
		if (iParam1 == 12)
		{
			return 1;
		}
	}
	return 0;
}

int func_424(int iParam0, int iParam1)//Position - 0x1E85D
{
	if (iParam0 == 45)
	{
		if (iParam1 == 16)
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0, int iParam1)//Position - 0x1E878
{
	if (iParam0 == 45)
	{
		if (iParam1 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, int iParam1)//Position - 0x1E893
{
	if (iParam0 == 45)
	{
		if (iParam1 == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_427(int iParam0, int iParam1)//Position - 0x1E8AE
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_428(int iParam0)//Position - 0x1E8DD
{
	*iParam0 = 0;
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_404(43, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_404(44, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_404(45, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_404(55, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_404(56, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_404(57, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_404(58, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_404(59, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_404(60, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_404(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
	if (func_404(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 13);
	}
	if (func_404(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 14);
	}
	if (func_404(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 15);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 16);
	}
	if (func_404(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 17);
	}
	if (func_404(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_404(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 19);
	}
	if (func_404(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 20);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 21);
	}
	if (func_404(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 22);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 23);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 24);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 25);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 26);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 27);
	}
	if (func_404(-1, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 28);
	}
	if (func_404(46, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_429(int iParam0, bool bParam1)//Position - 0x1EB2E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, 1);
	}
}

int func_430(int iParam0)//Position - 0x1EB4A
{
	if (func_102(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x1EB66
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_432(char* sParam0, float fParam1)//Position - 0x1EB84
{
	APP::APP_SET_FLOAT(func_28(sParam0), fParam1);
}

void func_433(char* sParam0, char* sParam1)//Position - 0x1EB98
{
	APP::APP_SET_STRING(func_28(sParam0), sParam1);
}

int func_434(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x1EBAC
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_383(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!bParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_435(int iParam0, var uParam1, int iParam2)//Position - 0x1EC1F
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111560.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111560.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_436(int iParam0)//Position - 0x1EE7B
{
	if (func_251(iParam0))
	{
		if ((Global_111560.f_9080 || Global_3) || func_247(0))
		{
			return Global_111560.f_2358.f_539.f_2348[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_437(int iParam0)//Position - 0x1EEC9
{
	return Global_41396 == iParam0;
}

void func_438(var uParam0, int iParam1)//Position - 0x1EED7
{
	*uParam0 = Global_1323611[iParam1 /*141*/].f_66;
	uParam0->f_3 = Global_1323611[iParam1 /*141*/].f_65;
	uParam0->f_4 = Global_1323611[iParam1 /*141*/].f_62;
	uParam0->f_5 = Global_1323611[iParam1 /*141*/].f_63;
	uParam0->f_6 = Global_1323611[iParam1 /*141*/].f_64;
	uParam0->f_10 = Global_1323611[iParam1 /*141*/].f_69;
	uParam0->f_16 = MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_77, 9);
	uParam0->f_19 = { Global_1323611[iParam1 /*141*/].f_1 };
	uParam0->f_23 = Global_1323611[iParam1 /*141*/];
	uParam0->f_7 = Global_1323611[iParam1 /*141*/].f_9[11];
	uParam0->f_8 = Global_1323611[iParam1 /*141*/].f_9[12];
	uParam0->f_9 = Global_1323611[iParam1 /*141*/].f_9[23];
	uParam0->f_11 = Global_1323611[iParam1 /*141*/].f_9[4];
	uParam0->f_12 = Global_1323611[iParam1 /*141*/].f_9[15];
	uParam0->f_13 = Global_1323611[iParam1 /*141*/].f_9[16];
	uParam0->f_14 = Global_1323611[iParam1 /*141*/].f_9[14];
	uParam0->f_15 = Global_1323611[iParam1 /*141*/].f_9[22];
	uParam0->f_18 = Global_1323611[iParam1 /*141*/].f_9[20];
	uParam0->f_17 = Global_1323611[iParam1 /*141*/].f_9[18];
	uParam0->f_40 = MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_102, 25);
	uParam0->f_41 = MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_102, 26);
	func_434(Global_1323611[iParam1 /*141*/].f_5, Global_1323611[iParam1 /*141*/].f_7, Global_1323611[iParam1 /*141*/].f_137, 1, &(uParam0->f_1));
	func_434(Global_1323611[iParam1 /*141*/].f_6, -1, Global_1323611[iParam1 /*141*/].f_138, 0, &(uParam0->f_2));
	if (MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_77, 13))
	{
		uParam0->f_1 = -1;
	}
	if (MISC::IS_BIT_SET(Global_1323611[iParam1 /*141*/].f_77, 12))
	{
		uParam0->f_2 = -1;
	}
	uParam0->f_42 = Global_2097152[func_193() /*10828*/].f_6080.f_52;
}

int func_439(int iParam0, var uParam1)//Position - 0x1F0CA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 281)
	{
		if (func_440(iVar0, &iVar1))
		{
			if (iVar1 == iParam0)
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_440(int iParam0, int iParam1)//Position - 0x1F102
{
	int iVar0;
	
	*iParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*iParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (*iParam1 >= 212 || *iParam1 == -1)
	{
		*iParam1 = 0;
		return 0;
	}
	return *iParam1 != -1;
}

void func_441()//Position - 0x1F36F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_162(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_442())
		{
			if (!func_23(3612, -1, -1))
			{
				func_13(2921, 1, -1, 1);
				func_13(2922, 1, -1, 1);
				func_13(2923, 1, -1, 1);
				func_13(2924, 1, -1, 1);
				func_13(2925, 1, -1, 1);
				func_13(3612, 1, -1, 1);
			}
		}
		else if (func_23(3612, -1, -1))
		{
			func_13(3612, 0, -1, 1);
		}
		iVar0 = func_193();
		if (((((iVar0 == 0 && func_23(2921, -1, -1)) || (iVar0 == 1 && func_23(2922, -1, -1))) || (iVar0 == 2 && func_23(2923, -1, -1))) || (iVar0 == 3 && func_23(2924, -1, -1))) || (iVar0 == 4 && func_23(2925, -1, -1)))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				iVar2 = (Global_2097152[iVar0 /*10828*/].f_6080.f_74[iVar1] - 1);
				if (((iVar2 >= 0 && Global_1323611[iVar2 /*141*/].f_66 != 0) && (!MISC::IS_BIT_SET(Global_1323611[iVar2 /*141*/].f_102, 1) || MISC::IS_BIT_SET(Global_1323611[iVar2 /*141*/].f_102, 2))) && func_213(Global_1323611[iVar2 /*141*/].f_66))
				{
					if (func_440(iVar2, &iVar3))
					{
						if (!MISC::IS_BIT_SET(Global_1323611[iVar2 /*141*/].f_102, 26))
						{
							MISC::SET_BIT(&(Global_1323611[iVar2 /*141*/].f_102), 25);
						}
					}
				}
				iVar1++;
			}
			Global_2097152[iVar0 /*10828*/].f_6080.f_53 = 0;
			if (iVar0 == 0)
			{
				func_13(2921, 0, -1, 1);
			}
			if (iVar0 == 1)
			{
				func_13(2922, 0, -1, 1);
			}
			if (iVar0 == 2)
			{
				func_13(2923, 0, -1, 1);
			}
			if (iVar0 == 3)
			{
				func_13(2924, 0, -1, 1);
			}
			if (iVar0 == 4)
			{
				func_13(2925, 0, -1, 1);
			}
		}
	}
}

int func_442()//Position - 0x1F589
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

void func_443()//Position - 0x1F644
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[10];
	bool bVar18;
	int iVar19;
	bool bVar20;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar7[iVar0] = Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0];
		iVar0++;
	}
	switch (iLocal_356)
	{
		case 0:
			bVar6 = false;
			if (!func_444(PLAYER::PLAYER_ID(), 1))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar2 = (Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] - 1);
					if (iVar2 >= 0 && (Global_1323611[iVar2 /*141*/].f_66 == 0 || (MISC::IS_BIT_SET(Global_1323611[iVar2 /*141*/].f_102, 1) && !MISC::IS_BIT_SET(Global_1323611[iVar2 /*141*/].f_102, 2))))
					{
						Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] = 0;
						iVar7[iVar0] = 0;
						iVar1 = 0;
						while (iVar1 < 10)
						{
							if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar1] == iVar2 + 1)
							{
								Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar1] = 0;
							}
							iVar1++;
						}
						bVar6 = true;
					}
					iVar0++;
				}
			}
			if (bVar6)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (iVar7[iVar0] != 0)
					{
						Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			iLocal_356++;
			break;
		
		case 1:
			iVar2 = -1;
			if (((Global_2097152[func_193() /*10828*/].f_6168.f_2 != Global_2097152[func_193() /*10828*/].f_6080.f_85 && Global_2097152[func_193() /*10828*/].f_6168.f_2 != -1) && Global_1323611[Global_2097152[func_193() /*10828*/].f_6168.f_2 /*141*/].f_66 != 0) && (!MISC::IS_BIT_SET(Global_1323611[Global_2097152[func_193() /*10828*/].f_6168.f_2 /*141*/].f_102, 1) || MISC::IS_BIT_SET(Global_1323611[Global_2097152[func_193() /*10828*/].f_6168.f_2 /*141*/].f_102, 2)))
			{
				iVar2 = Global_2097152[func_193() /*10828*/].f_6168.f_2;
				Global_2097152[func_193() /*10828*/].f_6080.f_85 = iVar2;
			}
			else if (Global_2097152[func_193() /*10828*/].f_6080.f_86 != 0)
			{
				iVar2 = (Global_2097152[func_193() /*10828*/].f_6080.f_86 - 1);
				Global_2097152[func_193() /*10828*/].f_6080.f_86 = 0;
			}
			if (iVar2 != -1)
			{
				bVar18 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] == iVar2 + 1)
					{
						bVar18 = true;
					}
					iVar0++;
				}
				if (!bVar18)
				{
					iVar19 = -1;
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] > 0)
						{
							iVar19 = iVar0;
						}
						iVar0++;
					}
					if (iVar19 < 9)
					{
						iVar19++;
					}
					iVar0 = 0;
					while (iVar0 < 10)
					{
						if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] == Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar19])
						{
							Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] = iVar2 + 1;
							iVar0 = 11;
						}
						iVar0++;
					}
				}
				Global_2097152[func_193() /*10828*/].f_6080.f_74[0] = iVar2 + 1;
				iVar1 = 1;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if ((iVar7[iVar0] != 0 && iVar7[iVar0] != iVar2 + 1) && iVar1 < 10)
					{
						Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar1] = iVar7[iVar0];
						iVar1++;
					}
					iVar0++;
				}
				iVar0 = iVar1;
				while (iVar0 <= 9)
				{
					Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] = 0;
					iVar0++;
				}
			}
			else
			{
				iVar3 = 0;
				iVar5 = -1;
				iVar0 = 0;
				while (iVar0 <= 9)
				{
					if (Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] == 0)
					{
						if (iVar5 == -1)
						{
							iVar5 = iVar0;
						}
						iVar3++;
					}
					iVar0++;
				}
				if (iVar3 > 0)
				{
					iVar4 = 0;
					iVar0 = 0;
					while (iVar0 <= 280)
					{
						if (((func_440(iVar0, &iVar1) && Global_1323611[iVar0 /*141*/].f_66 != 0) && (!MISC::IS_BIT_SET(Global_1323611[iVar0 /*141*/].f_102, 1) || MISC::IS_BIT_SET(Global_1323611[iVar0 /*141*/].f_102, 2))) && func_213(Global_1323611[iVar0 /*141*/].f_66))
						{
							iVar4++;
						}
						if (iVar4 > (10 - iVar3))
						{
						}
						else
						{
							iVar0++;
						}
					}
					if (iVar4 > (10 - iVar3))
					{
						iVar0 = 0;
						while (iVar0 <= 280)
						{
							if (((func_440(iVar0, &iVar1) && Global_1323611[iVar0 /*141*/].f_66 != 0) && (!MISC::IS_BIT_SET(Global_1323611[iVar0 /*141*/].f_102, 1) || MISC::IS_BIT_SET(Global_1323611[iVar0 /*141*/].f_102, 2))) && func_213(Global_1323611[iVar0 /*141*/].f_66))
							{
								bVar20 = false;
								iVar1 = 0;
								while (iVar1 < 10)
								{
									if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar1] == iVar0 + 1)
									{
										bVar20 = true;
										iVar1 = 11;
									}
									iVar1++;
								}
								if (!bVar20)
								{
									iVar2 = iVar0;
									iVar0 = 282;
								}
							}
							iVar0++;
						}
						if (iVar2 != -1)
						{
							iVar0 = 0;
							while (iVar0 < 10)
							{
								if (Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] == Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar5])
								{
									Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] = iVar2 + 1;
									iVar0 = 11;
								}
								iVar0++;
							}
							Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar5] = iVar2 + 1;
						}
					}
				}
			}
			iLocal_356++;
			break;
		
		default:
			iLocal_356++;
			break;
	}
	if (iLocal_356 > 300)
	{
		iLocal_356 = 0;
	}
}

int func_444(int iParam0, bool bParam1)//Position - 0x1FC93
{
	if (func_445(iParam0, bParam1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_445(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x1FCD0
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
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_457(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_456(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_455(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_454(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_453(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_492(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_452(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_451(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_450(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_449(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_448(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_446(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446(int iParam0)//Position - 0x1FE2F
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_447(int iParam0)//Position - 0x1FE76
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

int func_448(int iParam0)//Position - 0x203C1
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x20408
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_450(int iParam0)//Position - 0x2044F
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_451(int iParam0)//Position - 0x20496
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_452(int iParam0, bool bParam1)//Position - 0x204DD
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
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_97())
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_453(int iParam0)//Position - 0x2056B
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_454(int iParam0)//Position - 0x205B2
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_97())
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_455(int iParam0)//Position - 0x20612
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_456(int iParam0)//Position - 0x20659
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x2069F
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_458(int iParam0)//Position - 0x206E5
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x2072B
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)//Position - 0x20771
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_461()//Position - 0x207B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	switch (iLocal_117)
	{
		case 0:
			if (bLocal_116)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_476(0, 0);
				}
				func_428(&iVar0);
				APP::APP_SET_APP("car");
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_SET_BLOCK(&Local_119);
					APP::APP_SET_BLOCK("mpUnlocks");
				}
				else
				{
					APP::APP_SET_BLOCK("spUnlocks");
				}
				func_200("unlockBitset1", iVar0);
				iLocal_164[0] = iVar0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_BLOCK();
				}
				else
				{
					APP::APP_CLOSE_BLOCK();
				}
				APP::APP_CLOSE_APP();
				iLocal_117++;
			}
			break;
		
		case 1:
			func_403(&iVar0);
			APP::APP_SET_APP("car");
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_BLOCK(&Local_119);
				APP::APP_SET_BLOCK("mpUnlocks");
			}
			else
			{
				APP::APP_SET_BLOCK("spUnlocks");
			}
			func_200("unlockBitset2", iVar0);
			iLocal_164[1] = iVar0;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
			}
			else
			{
				APP::APP_CLOSE_BLOCK();
			}
			APP::APP_CLOSE_APP();
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iLocal_169[iVar1] = 0;
				iVar1++;
			}
			iLocal_168 = 0;
			iLocal_117++;
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				while (iVar2 < 25 && !bVar3)
				{
					if (func_397(&iLocal_169, iLocal_168) == -1)
					{
						bVar3 = true;
						iLocal_117++;
					}
					iLocal_168++;
					iVar2++;
				}
			}
			else
			{
				iLocal_117++;
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&Local_119);
				APP::APP_SET_BLOCK(&Local_125);
				func_200("carColoursUnlocked0", iLocal_169[0]);
				uLocal_176[0] = iLocal_169[0];
				func_200("carColoursUnlocked1", iLocal_169[1]);
				uLocal_176[1] = iLocal_169[1];
				func_200("carColoursUnlocked2", iLocal_169[2]);
				uLocal_176[2] = iLocal_169[2];
				func_200("carColoursUnlocked3", iLocal_169[3]);
				uLocal_176[3] = iLocal_169[3];
				func_200("carColoursUnlocked4", iLocal_169[4]);
				uLocal_176[4] = iLocal_169[4];
				func_200("carColoursUnlocked5", iLocal_169[5]);
				uLocal_176[5] = iLocal_169[5];
				func_462(&iVar0);
				func_200("unlockBitset3", iVar0);
				iLocal_164[2] = iVar0;
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("spUnlocks");
				func_397(&iLocal_169, -1);
				func_200("carColoursUnlocked0", iLocal_169[0]);
				uLocal_176[0] = iLocal_169[0];
				func_200("carColoursUnlocked1", iLocal_169[1]);
				uLocal_176[1] = iLocal_169[1];
				func_200("carColoursUnlocked2", iLocal_169[2]);
				uLocal_176[2] = iLocal_169[2];
				func_200("carColoursUnlocked3", iLocal_169[3]);
				uLocal_176[3] = iLocal_169[3];
				func_200("carColoursUnlocked4", iLocal_169[4]);
				uLocal_176[4] = iLocal_169[4];
				func_200("carColoursUnlocked5", iLocal_169[5]);
				uLocal_176[5] = iLocal_169[5];
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			iLocal_117++;
			break;
		
		case 4:
			bLocal_116 = false;
			iLocal_117 = 0;
			break;
	}
}

void func_462(int iParam0)//Position - 0x20AA5
{
	if (func_463(18, 1) || func_404(61, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 0);
	}
	if (func_463(11, 0))
	{
		MISC::SET_BIT(iParam0, 1);
	}
	if (func_463(11, 1) || func_404(47, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 2);
	}
	if (func_463(11, 2) || func_404(48, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 3);
	}
	if (func_463(11, 3) || func_404(49, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	if (func_463(11, 4) || func_404(50, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	if (func_463(12, 0))
	{
		MISC::SET_BIT(iParam0, 6);
	}
	if (func_463(12, 1) || func_404(13, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 7);
	}
	if (func_463(12, 2) || func_404(14, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 8);
	}
	if (func_463(12, 3) || func_404(15, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 9);
	}
	if (func_463(12, 4) || func_404(16, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 10);
	}
	if (func_463(4, 0))
	{
		MISC::SET_BIT(iParam0, 11);
	}
	if (func_463(4, 1) || func_404(77, -1, 0, -1))
	{
		MISC::SET_BIT(iParam0, 12);
	}
}

int func_463(int iParam0, int iParam1)//Position - 0x20C23
{
	int iVar0;
	
	if (func_466(iLocal_118, iParam0, iParam1, &iVar0))
	{
		return func_464(iVar0);
	}
	return 1;
}

int func_464(int iParam0)//Position - 0x20C44
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_51(818, -1, 0);
	iVar1 = func_465(iParam0);
	if (iVar1 == -1)
	{
		return 1;
	}
	else if (iVar0 >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_465(int iParam0)//Position - 0x20C78
{
	switch (iParam0)
	{
		case 4:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 1;
		
		case 9:
			return 2;
		
		case 10:
			return 2;
		
		case 11:
			return 2;
		
		case 12:
			return 3;
		
		case 5:
			return 3;
		
		case 3:
			return 3;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		case 8:
			return 4;
		
		case 40:
			return 5;
		
		case 38:
			return 5;
		
		case 37:
			return 5;
		
		case 46:
			return 6;
		
		case 45:
			return 6;
		
		case 47:
			return 6;
		
		case 48:
			return 7;
		
		case 41:
			return 7;
		
		case 39:
			return 7;
		
		case 42:
			return 8;
		
		case 43:
			return 8;
		
		case 44:
			return 8;
		
		case 16:
			return 9;
		
		case 14:
			return 9;
		
		case 13:
			return 9;
		
		case 21:
			return 10;
		
		case 22:
			return 10;
		
		case 23:
			return 10;
		
		case 24:
			return 11;
		
		case 17:
			return 11;
		
		case 15:
			return 11;
		
		case 18:
			return 12;
		
		case 19:
			return 12;
		
		case 20:
			return 12;
		
		case 27:
			return 13;
		
		case 26:
			return 13;
		
		case 25:
			return 13;
		
		case 32:
			return 14;
		
		case 34:
			return 14;
		
		case 35:
			return 14;
		
		case 36:
			return 15;
		
		case 28:
			return 15;
		
		case 33:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 16;
		
		case 31:
			return 16;
		
		case 52:
			return 17;
		
		case 50:
			return 17;
		
		case 49:
			return 17;
		
		case 57:
			return 18;
		
		case 58:
			return 18;
		
		case 59:
			return 18;
		
		case 60:
			return 19;
		
		case 53:
			return 19;
		
		case 51:
			return 19;
		
		case 54:
			return 20;
		
		case 55:
			return 20;
		
		case 56:
			return 20;
		
		case 85:
			return 21;
		
		case 86:
			return 21;
		
		case 87:
			return 21;
		
		case 88:
			return 22;
		
		case 89:
			return 22;
		
		case 90:
			return 22;
		
		case 91:
			return 23;
		
		case 92:
			return 23;
		
		case 93:
			return 23;
		
		case 94:
			return 24;
		
		case 95:
			return 24;
		
		case 96:
			return 24;
		
		case 97:
			return 25;
		
		case 98:
			return 25;
		
		case 99:
			return 25;
		
		case 100:
			return 26;
		
		case 101:
			return 26;
		
		case 102:
			return 26;
		
		case 103:
			return 27;
		
		case 104:
			return 27;
		
		case 105:
			return 27;
		
		case 106:
			return 28;
		
		case 107:
			return 28;
		
		case 108:
			return 28;
		
		case 64:
			return 29;
		
		case 62:
			return 29;
		
		case 61:
			return 29;
		
		case 69:
			return 30;
		
		case 70:
			return 30;
		
		case 71:
			return 30;
		
		case 72:
			return 31;
		
		case 65:
			return 31;
		
		case 63:
			return 31;
		
		case 66:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 109:
			return 33;
		
		case 110:
			return 33;
		
		case 111:
			return 33;
		
		case 112:
			return 34;
		
		case 113:
			return 34;
		
		case 114:
			return 34;
		
		case 115:
			return 35;
		
		case 116:
			return 35;
		
		case 117:
			return 35;
		
		case 118:
			return 36;
		
		case 119:
			return 36;
		
		case 120:
			return 36;
		
		case 121:
			return 37;
		
		case 122:
			return 37;
		
		case 123:
			return 37;
		
		case 124:
			return 38;
		
		case 125:
			return 38;
		
		case 126:
			return 38;
		
		case 127:
			return 39;
		
		case 128:
			return 39;
		
		case 129:
			return 39;
		
		case 131:
			return 40;
		
		case 130:
			return 40;
		
		case 132:
			return 40;
		
		case 76:
			return 41;
		
		case 74:
			return 41;
		
		case 73:
			return 41;
		
		case 81:
			return 42;
		
		case 82:
			return 42;
		
		case 83:
			return 42;
		
		case 84:
			return 43;
		
		case 77:
			return 43;
		
		case 75:
			return 43;
		
		case 78:
			return 44;
		
		case 79:
			return 44;
		
		case 80:
			return 44;
		
		default:
	}
	return -1;
}

bool func_466(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x2121F
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	iVar0 = func_467(iParam0);
	*uParam3 = 0;
	if (iParam1 == 11)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 1;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 25;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 61;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 73;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 2;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 26;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 62;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 74;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 3;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 33;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 63;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 75;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 4;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 27;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 64;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 76;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 5;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 28;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 65;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 77;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 6;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 29;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 66;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 78;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 7;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 30;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 67;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 79;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 8;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 31;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 68;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 80;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 9;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 32;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 69;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 81;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 10;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 34;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 70;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 82;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 11;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 35;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 71;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 83;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 12;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 36;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 72;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 84;
			}
		}
	}
	else if (iParam1 == 18)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 49;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 50;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 51;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 52;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 53;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 54;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 55;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 56;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 57;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 58;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 59;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 60;
			}
		}
	}
	else if (iParam1 == 13)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 37;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 87;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 111;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 38;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 86;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 110;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 39;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 93;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 117;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 40;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 85;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 109;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 41;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 92;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 116;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 42;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 94;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 118;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 43;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 95;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 119;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 44;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 96;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 120;
			}
			else if (iParam2 == 4)
			{
				*uParam3 = 120;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 45;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 88;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 112;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 46;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 89;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 113;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 47;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 90;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 114;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 48;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 91;
			}
			else if (iParam2 == 3 || iParam2 == 4)
			{
				*uParam3 = 115;
			}
		}
	}
	else if (iParam1 == 12)
	{
		if (MISC::IS_BIT_SET(iVar0, 0))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 13;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 99;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 123;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 1))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 14;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 98;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 122;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 2))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 15;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 105;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 129;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 3))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 16;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 97;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 121;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 4))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 17;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 104;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 128;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 18;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 106;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 130;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 6))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 19;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 107;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 131;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 7))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 20;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 108;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 132;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 8))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 21;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 100;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 124;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 9))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 22;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 101;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 125;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 11))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 23;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 102;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 126;
			}
		}
		else if (MISC::IS_BIT_SET(iVar0, 12))
		{
			if (iParam2 == 1)
			{
				*uParam3 = 24;
			}
			else if (iParam2 == 2)
			{
				*uParam3 = 103;
			}
			else if (iParam2 == 3)
			{
				*uParam3 = 127;
			}
		}
	}
	return *uParam3 != 0;
}

var func_467(int iParam0)//Position - 0x21C05
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (func_468(iParam0, iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_468(int iParam0, int iParam1, bool bParam2)//Position - 0x21C36
{
	if (bParam2)
	{
		return 1;
	}
	if (iParam1 == 15 || iParam1 == 16)
	{
		if (func_475(iParam0) || func_474(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 == 17)
	{
		if (func_208(iParam0))
		{
			return 1;
		}
	}
	else if (iParam1 == 18)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	else if (func_470(iParam0, iParam1))
	{
		return 1;
	}
	else if (iParam1 == 14)
	{
	}
	else if (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(iParam0) == func_469(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x21CD4
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 18:
			return 22;
			break;
	}
	return 0;
}

int func_470(int iParam0, int iParam1)//Position - 0x21DAE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_472(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_471(iParam1, iVar1) == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_471(int iParam0, int iParam1)//Position - 0x21DE3
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
				
				case 1:
					return joaat("bullet");
				
				case 2:
					return joaat("cheetah");
				
				case 3:
					return joaat("entityxf");
				
				case 4:
					return joaat("infernus");
				
				case 5:
					return joaat("vacca");
				
				case 6:
					return joaat("voltic");
				
				case 7:
					return joaat("banshee2");
				
				case 8:
					return joaat("fmj");
				
				case 9:
					return joaat("osiris");
				
				case 10:
					return joaat("pfister811");
				
				case 11:
					return joaat("prototipo");
				
				case 12:
					return joaat("reaper");
				
				case 13:
					return joaat("sultanrs");
				
				case 14:
					return joaat("t20");
				
				case 15:
					return joaat("turismor");
				
				case 16:
					return joaat("zentorno");
				
				case 17:
					return joaat("le7b");
				
				case 18:
					return joaat("tyrus");
				
				case 19:
					return joaat("sheava");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
				
				case 1:
					return joaat("banshee");
				
				case 2:
					return joaat("carbonizzare");
				
				case 3:
					return joaat("comet2");
				
				case 4:
					return joaat("coquette");
				
				case 5:
					return joaat("feltzer2");
				
				case 6:
					return joaat("fusilade");
				
				case 7:
					return joaat("rapidgt2");
				
				case 8:
					return joaat("sultan");
				
				case 9:
					return joaat("alpha");
				
				case 10:
					return joaat("bestiagts");
				
				case 11:
					return joaat("blista2");
				
				case 12:
					return joaat("blista3");
				
				case 13:
					return joaat("buffalo");
				
				case 14:
					return joaat("buffalo2");
				
				case 15:
					return joaat("buffalo3");
				
				case 16:
					return joaat("carbonizzare");
				
				case 17:
					return joaat("elegy2");
				
				case 18:
					return joaat("feltzer3");
				
				case 19:
					return joaat("furoregt");
				
				case 20:
					return joaat("futo");
				
				case 21:
					return joaat("jester");
				
				case 22:
					return joaat("jester2");
				
				case 23:
					return joaat("khamelion");
				
				case 24:
					return joaat("kuruma");
				
				case 25:
					return joaat("kuruma2");
				
				case 26:
					return joaat("massacro");
				
				case 27:
					return joaat("massacro2");
				
				case 28:
					return joaat("ninef");
				
				case 29:
					return joaat("penumbra");
				
				case 30:
					return joaat("rapidgt");
				
				case 31:
					return joaat("schwarzer");
				
				case 32:
					return joaat("seven70");
				
				case 33:
					return joaat("surano");
				
				case 34:
					return joaat("verlierer2");
				
				case 35:
					return joaat("tropos");
				
				case 36:
					return joaat("tampa2");
				
				case 37:
					return joaat("omnis");
				
				case 38:
					return joaat("lynx");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
				
				case 1:
					return joaat("exemplar");
				
				case 2:
					return joaat("f620");
				
				case 3:
					return joaat("felon");
				
				case 4:
					return joaat("felon2");
				
				case 5:
					return joaat("jackal");
				
				case 6:
					return joaat("oracle");
				
				case 7:
					return joaat("oracle2");
				
				case 8:
					return joaat("sentinel");
				
				case 9:
					return joaat("sentinel2");
				
				case 10:
					return joaat("windsor");
				
				case 11:
					return joaat("windsor2");
				
				case 12:
					return joaat("zion");
				
				case 13:
					return joaat("zion2");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
				
				case 1:
					return joaat("dominator");
				
				case 2:
					return joaat("gauntlet");
				
				case 3:
					return joaat("phoenix");
				
				case 4:
					return joaat("picador");
				
				case 5:
					return joaat("ruiner");
				
				case 6:
					return joaat("sabregt");
				
				case 7:
					return joaat("vigero");
				
				case 8:
					return joaat("blade");
				
				case 9:
					return joaat("buccaneer2");
				
				case 10:
					return joaat("chino");
				
				case 11:
					return joaat("chino2");
				
				case 12:
					return joaat("coquette3");
				
				case 13:
					return joaat("dominator2");
				
				case 14:
					return joaat("dukes");
				
				case 15:
					return joaat("dukes2");
				
				case 16:
					return joaat("faction");
				
				case 17:
					return joaat("faction2");
				
				case 18:
					return joaat("faction3");
				
				case 19:
					return joaat("gauntlet2");
				
				case 20:
					return joaat("hotknife");
				
				case 21:
					return joaat("lurcher");
				
				case 22:
					return joaat("moonbeam");
				
				case 23:
					return joaat("moonbeam2");
				
				case 24:
					return joaat("nightshade");
				
				case 25:
					return joaat("ratloader");
				
				case 26:
					return joaat("ratloader2");
				
				case 27:
					return joaat("sabregt2");
				
				case 28:
					return joaat("slamvan");
				
				case 29:
					return joaat("slamvan2");
				
				case 30:
					return joaat("slamvan3");
				
				case 31:
					return joaat("stalion");
				
				case 32:
					return joaat("stalion2");
				
				case 33:
					return joaat("tampa");
				
				case 34:
					return joaat("virgo");
				
				case 35:
					return joaat("virgo2");
				
				case 36:
					return joaat("virgo3");
				
				case 37:
					return joaat("voodoo");
				
				case 38:
					return joaat("voodoo2");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
				
				case 1:
					return joaat("monroe");
				
				case 2:
					return joaat("stinger");
				
				case 3:
					return joaat("ztype");
				
				case 4:
					return joaat("btype");
				
				case 5:
					return joaat("btype2");
				
				case 6:
					return joaat("btype3");
				
				case 7:
					return joaat("casco");
				
				case 8:
					return joaat("coquette2");
				
				case 9:
					return joaat("mamba");
				
				case 10:
					return joaat("manana");
				
				case 11:
					return joaat("peyote");
				
				case 12:
					return joaat("pigalle");
				
				case 13:
					return joaat("stinger");
				
				case 14:
					return joaat("stingergt");
				
				case 15:
					return joaat("tornado");
				
				case 16:
					return joaat("tornado2");
				
				case 17:
					return joaat("tornado3");
				
				case 18:
					return joaat("tornado4");
				
				case 19:
					return joaat("tornado5");
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
				
				case 1:
					return joaat("asterope");
				
				case 2:
					return joaat("fugitive");
				
				case 3:
					return joaat("premier");
				
				case 4:
					return joaat("primo");
				
				case 5:
					return joaat("schafter2");
				
				case 6:
					return joaat("stanier");
				
				case 7:
					return joaat("superd");
				
				case 8:
					return joaat("surge");
				
				case 9:
					return joaat("tailgater");
				
				case 10:
					return joaat("washington");
				
				case 11:
					return joaat("cog55");
				
				case 12:
					return joaat("cognoscenti");
				
				case 13:
					return joaat("cognoscenti2");
				
				case 14:
					return joaat("emperor");
				
				case 15:
					return joaat("emperor2");
				
				case 16:
					return joaat("emperor3");
				
				case 17:
					return joaat("glendale");
				
				case 18:
					return joaat("asea2");
				
				case 19:
					return joaat("cog552");
				
				case 20:
					return joaat("ingot");
				
				case 21:
					return joaat("intruder");
				
				case 22:
					return joaat("limo2");
				
				case 23:
					return joaat("primo2");
				
				case 24:
					return joaat("regina");
				
				case 25:
					return joaat("romero");
				
				case 26:
					return joaat("schafter3");
				
				case 27:
					return joaat("schafter4");
				
				case 28:
					return joaat("schafter5");
				
				case 29:
					return joaat("schafter6");
				
				case 30:
					return joaat("stratum");
				
				case 31:
					return joaat("stretch");
				
				case 32:
					return joaat("warrener");
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
				
				case 1:
					return joaat("baller2");
				
				case 2:
					return joaat("bjxl");
				
				case 3:
					return joaat("cavalcade");
				
				case 4:
					return joaat("cavalcade2");
				
				case 5:
					return joaat("crusader");
				
				case 6:
					return joaat("dubsta");
				
				case 7:
					return joaat("granger");
				
				case 8:
					return joaat("gresley");
				
				case 9:
					return joaat("landstalker");
				
				case 10:
					return joaat("mesa");
				
				case 11:
					return joaat("pranger");
				
				case 12:
					return joaat("radi");
				
				case 13:
					return joaat("seminole");
				
				case 14:
					return joaat("serrano");
				
				case 15:
					return joaat("baller3");
				
				case 16:
					return joaat("baller4");
				
				case 17:
					return joaat("baller5");
				
				case 18:
					return joaat("baller6");
				
				case 19:
					return joaat("dubsta2");
				
				case 20:
					return joaat("fq2");
				
				case 21:
					return joaat("habanero");
				
				case 22:
					return joaat("huntley");
				
				case 23:
					return joaat("mesa2");
				
				case 24:
					return joaat("patriot");
				
				case 25:
					return joaat("rocoto");
				
				case 26:
					return joaat("xls");
				
				case 27:
					return joaat("xls2");
				
				case 28:
					return joaat("contender");
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
				
				case 1:
					return joaat("dilettante");
				
				case 2:
					return joaat("issi2");
				
				case 3:
					return joaat("prairie");
				
				case 4:
					return joaat("dilettante2");
				
				case 5:
					return joaat("panto");
				
				case 6:
					return joaat("rhapsody");
				
				case 7:
					return joaat("brioso");
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
				
				case 1:
					return joaat("baller");
				
				case 2:
					return joaat("blazer");
				
				case 3:
					return joaat("dloader");
				
				case 4:
					return joaat("dune");
				
				case 5:
					return joaat("patriot");
				
				case 6:
					return joaat("sanchez");
				
				case 7:
					return joaat("sandking");
				
				case 8:
					return joaat("paradise");
				
				case 9:
					return joaat("sanchez2");
				
				case 10:
					return joaat("guardian");
				
				case 11:
					return joaat("bifta");
				
				case 12:
					return joaat("blazer2");
				
				case 13:
					return joaat("blazer3");
				
				case 14:
					return joaat("bodhi2");
				
				case 15:
					return joaat("brawler");
				
				case 16:
					return joaat("dubsta3");
				
				case 17:
					return joaat("insurgent2");
				
				case 18:
					return joaat("kalahari");
				
				case 19:
					return joaat("marshall");
				
				case 20:
					return joaat("mesa3");
				
				case 21:
					return joaat("monster");
				
				case 22:
					return joaat("rancherxl");
				
				case 23:
					return joaat("rancherxl2");
				
				case 24:
					return joaat("rebel");
				
				case 25:
					return joaat("rebel2");
				
				case 26:
					return joaat("sandking2");
				
				case 28:
					return joaat("trophytruck");
				
				case 29:
					return joaat("trophytruck2");
				
				case 30:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
				
				case 1:
					return joaat("cutter");
				
				case 2:
					return joaat("dump");
				
				case 3:
					return joaat("handler");
				
				case 4:
					return joaat("mixer");
				
				case 5:
					return joaat("flatbed");
				
				case 6:
					return joaat("guardian");
				
				case 7:
					return joaat("mixer2");
				
				case 8:
					return joaat("rubble");
				
				case 9:
					return joaat("tiptruck");
				
				case 10:
					return joaat("tiptruck2");
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
				
				case 1:
					return joaat("caddy");
				
				case 2:
					return joaat("faggio2");
				
				case 3:
					return joaat("tractor2");
				
				case 4:
					return joaat("forklift");
				
				case 5:
					return joaat("mower");
				
				case 6:
					return joaat("ripley");
				
				case 7:
					return joaat("armytanker");
				
				case 8:
					return joaat("sadler");
				
				case 9:
					return joaat("sadler2");
				
				case 10:
					return joaat("scrap");
				
				case 11:
					return joaat("towtruck");
				
				case 12:
					return joaat("towtruck2");
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
				
				case 1:
					return joaat("burrito2");
				
				case 2:
					return joaat("camper");
				
				case 3:
					return joaat("speedo2");
				
				case 4:
					return joaat("journey");
				
				case 5:
					return joaat("pony");
				
				case 6:
					return joaat("rumpo");
				
				case 7:
					return joaat("surfer");
				
				case 8:
					return joaat("taco");
				
				case 9:
					return joaat("youga");
				
				case 10:
					return joaat("bison");
				
				case 11:
					return joaat("bison2");
				
				case 12:
					return joaat("bison3");
				
				case 13:
					return joaat("bobcatxl");
				
				case 14:
					return joaat("boxville2");
				
				case 15:
					return joaat("boxville3");
				
				case 16:
					return joaat("boxville4");
				
				case 17:
					return joaat("burrito");
				
				case 18:
					return joaat("burrito3");
				
				case 19:
					return joaat("burrito4");
				
				case 20:
					return joaat("burrito5");
				
				case 21:
					return joaat("gburrito");
				
				case 22:
					return joaat("gburrito2");
				
				case 23:
					return joaat("minivan");
				
				case 24:
					return joaat("minivan2");
				
				case 25:
					return joaat("paradise");
				
				case 26:
					return joaat("pony2");
				
				case 27:
					return joaat("rumpo2");
				
				case 28:
					return joaat("rumpo3");
				
				case 29:
					return joaat("speedo");
				
				case 30:
					return joaat("surfer2");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
				
				case 1:
					return joaat("bagger");
				
				case 2:
					return joaat("bati");
				
				case 3:
					return joaat("bati2");
				
				case 4:
					return joaat("blazer");
				
				case 5:
					return joaat("daemon");
				
				case 6:
					return joaat("double");
				
				case 7:
					return joaat("nemesis");
				
				case 8:
					return joaat("pcj");
				
				case 9:
					return joaat("ruffian");
				
				case 10:
					return joaat("sanchez");
				
				case 11:
					return joaat("sanchez2");
				
				case 12:
					return joaat("vader");
				
				case 13:
					return joaat("carbonrs");
				
				case 14:
					return joaat("enduro");
				
				case 15:
					return joaat("faggio2");
				
				case 16:
					return joaat("hakuchou");
				
				case 17:
					return joaat("hexer");
				
				case 18:
					return joaat("innovation");
				
				case 19:
					return joaat("lectro");
				
				case 20:
					return joaat("sovereign");
				
				case 21:
					return joaat("thrust");
				
				case 22:
					return joaat("vindicator");
				
				case 23:
					return joaat("gargoyle");
				
				case 24:
					return joaat("cliffhanger");
				
				case 25:
					return joaat("bf400");
				
				default:
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
				
				case 1:
					return joaat("cruiser");
				
				case 2:
					return joaat("scorcher");
				
				case 3:
					return joaat("tribike");
				
				case 4:
					return joaat("tribike2");
				
				case 5:
					return joaat("tribike3");
				
				default:
			}
			break;
	}
	return 0;
}

int func_472(int iParam0)//Position - 0x23043
{
	switch (iParam0)
	{
		case 7:
			return 20;
		
		case 6:
			return 39;
		
		case 3:
			return 14;
		
		case 4:
			return 39;
		
		case 5:
			return 20;
		
		case 1:
			return 32;
		
		case 2:
			return 29;
		
		case 0:
			return 8;
		
		case 9:
			return 31;
		
		case 10:
			return 11;
		
		case 11:
			return 13;
		
		case 12:
			return 31;
		
		case 8:
			return 26;
		
		case 13:
			return 6;
		
		default:
	}
	return 39;
}

int func_473(int iParam0)//Position - 0x230ED
{
	switch (iParam0)
	{
		case 340154634:
		case -1960756985:
			return 1;
		
		default:
	}
	return 0;
}

int func_474(int iParam0)//Position - 0x2310D
{
	switch (iParam0)
	{
		case 562680400:
		case -32236122:
		case 1897744184:
		case 884483972:
		case -1210451983:
		case -1881846085:
		case 1502869817:
		case 1356124575:
		case -1924433270:
		case 177270108:
		case 159274291:
		case 433954513:
		case 387748548:
		case -769147461:
		case -1242608589:
		case 1489874736:
		case 1483171323:
		case 886810209:
		case -1693015116:
		case -692292317:
		case -212993243:
		case -1435527158:
		case -2118308144:
		case 447548909:
		case 1181327175:
		case 1254014755:
		case 2044532910:
		case -638562243:
		case 2069146067:
		case 1416466158:
			return 1;
		
		default:
	}
	if (func_208(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_475(int iParam0)//Position - 0x231E2
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case -286046740:
			return 1;
		
		default:
	}
	return 0;
}

void func_476(int iParam0, bool bParam1)//Position - 0x23232
{
	int iVar0;
	
	if (bParam1)
	{
		func_483(39, 1, 0);
		func_483(40, 1, 0);
		func_483(41, 1, 0);
		func_483(42, 1, 0);
		func_483(43, 1, 0);
	}
	func_477(1, iParam0, 0);
	func_477(2, iParam0, 1);
	func_477(3, iParam0, 2);
	func_477(4, iParam0, 3);
	func_477(103, iParam0, 3);
	func_477(5, iParam0, 0);
	func_477(6, iParam0, 0);
	func_477(7, iParam0, 0);
	func_477(8, iParam0, 0);
	func_477(9, iParam0, 0);
	func_477(10, iParam0, 0);
	func_477(11, iParam0, 0);
	func_477(12, iParam0, 0);
	func_477(13, iParam0, 0);
	func_477(14, iParam0, 2);
	func_477(15, iParam0, 3);
	func_477(16, iParam0, 3);
	func_477(17, iParam0, 0);
	func_477(18, iParam0, 1);
	func_477(19, iParam0, 2);
	func_477(20, iParam0, 2);
	func_477(101, iParam0, 3);
	func_477(102, iParam0, 3);
	func_477(21, iParam0, 0);
	func_477(22, iParam0, 1);
	func_477(23, iParam0, 2);
	func_477(24, iParam0, 3);
	func_477(25, iParam0, 0);
	func_477(26, iParam0, 1);
	func_477(27, iParam0, 2);
	func_477(28, iParam0, 3);
	func_477(29, iParam0, 0);
	func_477(30, iParam0, 0);
	func_477(31, iParam0, 1);
	func_477(32, iParam0, 2);
	func_477(33, iParam0, 3);
	func_477(34, iParam0, 0);
	func_477(35, iParam0, 0);
	func_477(36, iParam0, 0);
	func_477(37, iParam0, 0);
	func_477(38, iParam0, 0);
	func_477(39, iParam0, 0);
	func_477(40, iParam0, 0);
	func_477(41, iParam0, 0);
	func_477(42, iParam0, 0);
	func_477(43, iParam0, 0);
	func_477(44, iParam0, 2);
	func_477(45, iParam0, 3);
	func_477(99, iParam0, 1);
	func_477(46, iParam0, 1);
	func_477(55, iParam0, 0);
	func_477(60, iParam0, 0);
	func_477(59, iParam0, 1);
	func_477(58, iParam0, 1);
	func_477(56, iParam0, 2);
	func_477(57, iParam0, 3);
	func_477(47, iParam0, 0);
	func_477(48, iParam0, 1);
	func_477(49, iParam0, 2);
	func_477(50, iParam0, 3);
	func_477(51, iParam0, 0);
	func_477(52, iParam0, 1);
	func_477(53, iParam0, 2);
	func_477(54, iParam0, 3);
	func_477(106, iParam0, 3);
	func_477(61, iParam0, 0);
	func_477(62, iParam0, 1);
	func_477(63, iParam0, 1);
	func_477(64, iParam0, 2);
	func_477(65, iParam0, 2);
	func_477(66, iParam0, 0);
	func_477(67, iParam0, 1);
	func_477(68, iParam0, 2);
	func_477(69, iParam0, 3);
	func_477(70, iParam0, 3);
	func_477(71, iParam0, 3);
	func_477(72, iParam0, 0);
	func_477(73, iParam0, 0);
	func_477(74, iParam0, 1);
	func_477(75, iParam0, 2);
	func_477(76, iParam0, 3);
	func_477(77, iParam0, 0);
	func_477(78, iParam0, 1);
	func_477(79, iParam0, 2);
	func_477(80, iParam0, 3);
	func_477(100, iParam0, 3);
	func_477(81, iParam0, 0);
	func_477(82, iParam0, 1);
	func_477(83, iParam0, 2);
	func_477(84, iParam0, 3);
	func_477(105, iParam0, 3);
	func_477(85, iParam0, 0);
	func_477(86, iParam0, 0);
	func_477(87, iParam0, 0);
	func_477(88, iParam0, 0);
	func_477(104, iParam0, 0);
	func_477(91, iParam0, 0);
	func_477(92, iParam0, 1);
	func_477(93, iParam0, 2);
	func_477(94, iParam0, 3);
	func_477(95, iParam0, 0);
	func_477(96, iParam0, 1);
	func_477(97, iParam0, 2);
	func_477(98, iParam0, 3);
	if (iParam0 >= 3)
	{
		iVar0 = 0;
		while (iVar0 < 90)
		{
			func_477(iVar0, iParam0, 3);
			iVar0++;
		}
	}
}

void func_477(int iParam0, int iParam1, int iParam2)//Position - 0x2362A
{
	int iVar0;
	
	if (iParam1 >= iParam2)
	{
		if (!MISC::IS_BIT_SET(Global_111560.f_2358.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32)))
		{
			iVar0 = 0;
			while (iVar0 < Global_111560.f_20113)
			{
				Global_111560.f_20113[iVar0 /*43*/].f_42 = 1;
				iVar0++;
			}
			MISC::SET_BIT(&(Global_111560.f_2358.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
			if (iParam2 == 0)
			{
				func_478(0, iParam0, "", 0, 0, 2);
			}
		}
	}
}

void func_478(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x236B0
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
	
	if (func_482(iParam0) && func_404(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
		{
			iParam3 = (iParam3 - 20);
		}
		if (iParam5 == 15 && iParam3 > 21)
		{
			iParam3 = (iParam3 - 21);
		}
		if (iParam0 == 2069146067)
		{
			if (iParam5 == 23)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
		else if (iParam0 == 1692272545)
		{
			if (iParam5 == 18)
			{
				if (iParam3 > 2)
				{
					iParam3 = (iParam3 - 26);
				}
			}
		}
	}
	if (iParam1 == -1)
	{
		if (!func_482(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					iVar0 = 0;
					while (iVar0 < 306)
					{
						iVar1 = iVar0 * 3;
						iVar2 = func_481(MISC::GET_HASH_KEY(sParam2));
						if (iVar2 != -1)
						{
							MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_2683[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
						}
						iVar0++;
					}
				}
				else
				{
					iVar3 = func_480(iParam0);
					if (iVar3 != -1)
					{
						iVar4 = iVar3 * 3;
						iVar5 = func_481(MISC::GET_HASH_KEY(sParam2));
						if (iVar5 != -1)
						{
							MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_2683[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
						}
					}
					iVar6 = func_479(iParam0, iParam3, iParam4, iParam5);
					if (iVar6 > 0)
					{
						MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_3602[(iVar6 / 32)]), (iVar6 % 32));
					}
				}
			}
			return;
		}
		else if (func_404(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			iVar7 = func_479(iParam0, iParam3, iParam4, iParam5);
			if (iVar7 > 0)
			{
				MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_3602[(iVar7 / 32)]), (iVar7 % 32));
			}
		}
	}
	else if (func_482(iParam0) && func_404(iParam1, -1, 0, -1))
	{
		iVar8 = func_479(iParam0, iParam3, iParam4, iParam5);
		if (iVar8 > 0)
		{
			MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_3602[(iVar8 / 32)]), (iVar8 % 32));
		}
	}
	if (iParam0 == 0)
	{
		iVar9 = 0;
		while (iVar9 < 306)
		{
			if (func_404(iParam1, -1, 0, -1))
			{
				iVar10 = (iVar9 * 4 + (iParam1 / 32));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_46[iVar10]), (iParam1 % 32));
				}
				else
				{
					MISC::SET_BIT(&(Global_111560.f_668.f_82[iVar10]), (iParam1 % 32));
				}
			}
			iVar9++;
		}
	}
	else if (func_404(iParam1, -1, 0, -1))
	{
		iVar11 = func_480(iParam0);
		if (iVar11 != -1)
		{
			iVar12 = (iVar11 * 4 + (iParam1 / 32));
			iVar13 = (iParam1 % 32);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((iParam0 == joaat("avarus") || iParam0 == joaat("chimera")) || iParam0 == joaat("esskey")) && iParam1 == 1) || ((iParam1 == 72 || iParam1 == 66) && iParam0 == joaat("esskey")))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == joaat("specter2") && (iParam1 == 21 || iParam1 == 72))
				{
					iVar13 = (iVar13 - 1);
				}
				if (iParam0 == 1502869817 && iParam1 == 85)
				{
					iVar13++;
				}
				if (iParam0 == -32878452 && iParam1 == 21)
				{
					iVar13 = (iVar13 - 1);
				}
				if (iVar13 >= 0)
				{
					MISC::SET_BIT(&(Global_2097152[func_193() /*10828*/].f_6168.f_46[iVar12]), iVar13);
				}
			}
			else
			{
				MISC::SET_BIT(&(Global_111560.f_668.f_82[iVar12]), iVar13);
			}
		}
	}
}

int func_479(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23A5E
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == joaat("btype2"))
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 51;
	}
	if (iParam0 == joaat("lurcher"))
	{
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 49;
	}
	if (iParam0 == joaat("faction2"))
	{
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 268;
	}
	if (iParam0 == joaat("buccaneer2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 75 && iParam1 >= 2) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 319;
	}
	if (iParam0 == joaat("chino2"))
	{
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("moonbeam2"))
	{
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 68 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 69 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 308;
	}
	if (iParam0 == joaat("primo2"))
	{
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 73 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 309;
	}
	if (iParam0 == joaat("voodoo"))
	{
		if ((iParam3 == 79 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 80 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 81 && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 82 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 6 && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if ((iParam3 == 76 && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if ((iParam3 == 77 && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if ((iParam3 == 75 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && (iParam2 == 0 || iParam2 == 2)) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 92 && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if ((iParam3 == 70 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 71 && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 72 && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if ((iParam3 == 85 && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 62 && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if ((iParam3 == 63 && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if ((iParam3 == 74 && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 326;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("buccaneer"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("chino"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("moonbeam"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("primo"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("voodoo2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sultan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("banshee2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == joaat("sultanrs"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 221;
	}
	if (iParam0 == joaat("btype3"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 93 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 94 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("sabregt"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("tornado3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("virgo3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("minivan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("slamvan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
		{
			return (iVar0 + iParam1);
		}
		iVar0++;
	}
	else
	{
		iVar0++;
	}
	if (iParam0 == joaat("faction3"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (iParam3 == 65)
		{
			if (Global_262145.f_11570)
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
			else
			{
				if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
				{
					return (iVar0 + iParam1);
				}
				iVar0 += 46;
			}
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 272;
	}
	if (iParam0 == joaat("minivan2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
	}
	else
	{
		iVar0 += 281;
	}
	if (iParam0 == joaat("sabregt2"))
	{
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && (iParam2 == 0 || iParam2 == 1)) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 234;
	}
	if (iParam0 == joaat("slamvan3"))
	{
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 62 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
	}
	else
	{
		iVar0 += 315;
	}
	if (iParam0 == joaat("tornado5"))
	{
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 91 && iParam2 == 3) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 382;
	}
	if (iParam0 == joaat("virgo2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 75 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (Global_262145.f_11570)
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 45)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		else
		{
			if ((iParam3 == 65 && iParam1 >= 1) && iParam1 <= 21)
			{
				return (iVar0 + iParam1);
			}
			iVar0 += 46;
		}
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 73 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 0) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 290;
	}
	if (iParam0 == joaat("avarus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("chimera"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("daemon2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombiea"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("zombieb"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("sanctus"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("wolfsbane"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("blazer4"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("youga2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("fcr2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == joaat("diablous2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 19;
	}
	if (iParam0 == joaat("nightblade"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio3"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("faggio"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("defiler"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("esskey"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("hakuchou2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("manchez"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == joaat("vortex"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 13;
	}
	if (iParam0 == 562680400)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -32236122)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1897744184)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1210451983)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 433954513)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1881846085)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 884483972)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -1924433270)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1356124575)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 159274291)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("specter2"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 116;
	}
	if (iParam0 == joaat("comet3"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 91 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 200;
	}
	if (iParam0 == joaat("elegy"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if ((iParam3 == 91 && iParam2 == 1) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 91 && iParam2 == 2) && iParam1 >= 0) && iParam1 <= 67)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 68;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if ((iParam3 == 68 && iParam2 == 0) && iParam1 == 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 252;
	}
	if (iParam0 == joaat("italigtb2"))
	{
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 90 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 122;
	}
	if (iParam0 == joaat("nero2"))
	{
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 67 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 68 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 69 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 92 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 48)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 49;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if ((iParam3 == 81 && iParam2 == 0) && iParam1 == 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 76 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 105;
	}
	if (iParam0 == -1700874274)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1036591958)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -975345305)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1565978651)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -32878452)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1043222410)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -42959138)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -392675425)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1523619738)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1984275979)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == 1841130506)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == -1763555241)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -998177792)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 9;
	}
	if (iParam0 == 1561920505)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -212993243)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -2118308144)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 1909189272)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == 1617472902)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == 1046206681)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == -1267543371)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 27;
	}
	if (iParam0 == 931280609)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 114;
	}
	if (iParam0 == 1031562256)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == -1259134696)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 56;
	}
	if (iParam0 == 1254014755)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -988501280)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -986944621)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 19)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 20;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == -376434238)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 12;
	}
	if (iParam0 == -1134706562)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == -2120700196)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 26;
	}
	if (iParam0 == 1115909093)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == -214906006)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == 321186144)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
	}
	else
	{
		iVar0 += 8;
	}
	if (iParam0 == 219613597)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 31;
	}
	if (iParam0 == 1945374990)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == 1653666139)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 35;
	}
	if (iParam0 == 500482303)
	{
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == -420911112)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == 2069146067)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == 2044532910)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 21)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 22;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == -54332285)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == -638562243)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == 1692272545)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 30;
	}
	if (iParam0 == joaat("patriot"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == joaat("prairie"))
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 11;
	}
	if (iParam0 == -1566607184)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 43;
	}
	if (iParam0 == 1591739866)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 48;
	}
	if (iParam0 == 1279262537)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == -2096690334)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -507495760)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -1168952148)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 96;
	}
	if (iParam0 == -49115651)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 67;
	}
	if (iParam0 == 1456744817)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 45;
	}
	if (iParam0 == 1009171724)
	{
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 59 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == -331467772)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
	}
	else
	{
		iVar0 += 77;
	}
	if (iParam0 == -688189648)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == -1146969353)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == -801550069)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == 679453769)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == 668439077)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == 1721676810)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 46;
	}
	if (iParam0 == -2061049099)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == 444994115)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 79;
	}
	if (iParam0 == 540101442)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == 628003514)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 70 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 71 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 74 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 123;
	}
	if (iParam0 == -27326686)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == 2139203625)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == -1106120762)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -1375060657)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == -1812949672)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 40;
	}
	if (iParam0 == 1239571361)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 98;
	}
	if (iParam0 == -1478704292)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 63;
	}
	if (iParam0 == -1293924613)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == -1374500452)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 14;
	}
	if (iParam0 == -286046740)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -715746948)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 55;
	}
	if (iParam0 == 1542143200)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 108;
	}
	if (iParam0 == -1924800695)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 50;
	}
	if (iParam0 == -1744505657)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 63 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == 2038858402)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == 840387324)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 62;
	}
	if (iParam0 == -1694081890)
	{
		if (((iParam3 == 45 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 73;
	}
	if (iParam0 == -2042350822)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
	}
	else
	{
		iVar0 += 75;
	}
	if (iParam0 == 1537277726)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 66 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 129;
	}
	if (iParam0 == 1909700336)
	{
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 76;
	}
	if (iParam0 == 373261600)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
	}
	else
	{
		iVar0 += 66;
	}
	if (iParam0 == 1637620610)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == -755532233)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 69;
	}
	if (iParam0 == -1890996696)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
	}
	else
	{
		iVar0 += 68;
	}
	if (iParam0 == -579747861)
	{
		if (((iParam3 == 18 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 90;
	}
	if (iParam0 == 1742022738)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 72 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 77 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 78 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 79 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 80 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 81 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 82 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
	}
	else
	{
		iVar0 += 59;
	}
	if (iParam0 == -1349095620)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 58;
	}
	if (iParam0 == 686471183)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 310284501)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 722226637)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == 1934384720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 86;
	}
	if (iParam0 == -362150785)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == 1854776567)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 65;
	}
	if (iParam0 == -664141241)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 37;
	}
	if (iParam0 == -941272559)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 70;
	}
	if (iParam0 == -882629065)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 61;
	}
	if (iParam0 == -1620126302)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == -1829436850)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 53;
	}
	if (iParam0 == -324618589)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 32;
	}
	if (iParam0 == 1044193113)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 80;
	}
	if (iParam0 == 1862507111)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 78;
	}
	if (iParam0 == -682108547)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 38;
	}
	if (iParam0 == 1323778901)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 23)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 24;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 72;
	}
	if (iParam0 == -1804415708)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
	}
	else
	{
		iVar0 += 57;
	}
	if (iParam0 == 916547552)
	{
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 16;
	}
	if (iParam0 == -208911803)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 54;
	}
	if (iParam0 == -447711397)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 1416466158)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 83136452)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 94;
	}
	if (iParam0 == -1132721664)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 125;
	}
	if (iParam0 == 1118611807)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 14 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 93;
	}
	if (iParam0 == 987469656)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 100;
	}
	if (iParam0 == -834353991)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 24)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 25;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 115;
	}
	if (iParam0 == 1284356689)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 87;
	}
	if (iParam0 == 1456336509)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 83;
	}
	if (iParam0 == -1756021720)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 22)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 23;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 17)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 18;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 81;
	}
	if (iParam0 == 872704284)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 16)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 17;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 101;
	}
	if (iParam0 == 409049982)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 18)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 19;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 13)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 14;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 15)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 16;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 83 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
	}
	else
	{
		iVar0 += 145;
	}
	if (iParam0 == 408825843)
	{
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 20)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 21;
	}
	else
	{
		iVar0 += 21;
	}
	if (iParam0 == 340154634)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 12)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 13;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 47;
	}
	if (iParam0 == 301304410)
	{
		if (((iParam3 == 36 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 23;
	}
	if (iParam0 == 394110044)
	{
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
	}
	else
	{
		iVar0 += 5;
	}
	if (iParam0 == 740289177)
	{
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 52 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 30)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 31;
	}
	else
	{
		iVar0 += 60;
	}
	if (iParam0 == 2031587082)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 15 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 25 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 64;
	}
	if (iParam0 == 1693751655)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 51 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 11)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 12;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 39 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 95 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 4)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 5;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 71;
	}
	if (iParam0 == 960812448)
	{
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 8 && iParam2 == 2) && iParam1 >= 1) && iParam1 <= 8)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 9;
		if (((iParam3 == 44 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 6)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 7;
		if (((iParam3 == 12 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 9 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 1)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 2;
		if (((iParam3 == 23 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 26 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 14)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 15;
		if (((iParam3 == 32 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 2)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 3;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 84;
	}
	if (iParam0 == -1960756985)
	{
		if (((iParam3 == 46 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 9)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 10;
		if (((iParam3 == 8 && iParam2 == 1) && iParam1 >= 1) && iParam1 <= 7)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 8;
		if (((iParam3 == 6 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 5)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 6;
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 39;
	}
	if (iParam0 == -1254331310)
	{
		if (((iParam3 == 40 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 3)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 4;
		if (((iParam3 == 85 && iParam2 == 0) && iParam1 >= 1) && iParam1 <= 10)
		{
			return (iVar0 + iParam1);
		}
		iVar0 += 11;
	}
	else
	{
		iVar0 += 15;
	}
	if (iVar0 > 13000)
	{
	}
	return 0;
}

int func_480(int iParam0)//Position - 0x368E1
{
	switch (iParam0)
	{
		case joaat("adder"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 1;
			break;
		
		case joaat("asea"):
			return 2;
			break;
		
		case joaat("asterope"):
			return 3;
			break;
		
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 5;
			break;
		
		case joaat("banshee"):
		case joaat("banshee2"):
			return 6;
			break;
		
		case joaat("bati"):
			return 7;
			break;
		
		case joaat("bati2"):
			return 8;
			break;
		
		case joaat("bfinjection"):
			return 9;
			break;
		
		case joaat("bison"):
			return 10;
			break;
		
		case joaat("bison2"):
			return 11;
			break;
		
		case joaat("bison3"):
			return 12;
			break;
		
		case joaat("bjxl"):
			return 13;
			break;
		
		case joaat("btype"):
			return 14;
			break;
		
		case joaat("blazer"):
			return 15;
			break;
		
		case joaat("blazer2"):
			return 15;
			break;
		
		case joaat("blazer3"):
			return 15;
			break;
		
		case joaat("blista"):
			return 16;
			break;
		
		case joaat("bobcatxl"):
			return 17;
			break;
		
		case joaat("bodhi2"):
			return 18;
			break;
		
		case joaat("boxville"):
			return 19;
			break;
		
		case joaat("boxville2"):
			return 20;
			break;
		
		case joaat("boxville3"):
			return 21;
			break;
		
		case joaat("buccaneer"):
		case joaat("buccaneer2"):
			return 22;
			break;
		
		case joaat("buffalo"):
			return 23;
			break;
		
		case joaat("buffalo2"):
			return 24;
			break;
		
		case joaat("bullet"):
			return 25;
			break;
		
		case joaat("burrito"):
			return 26;
			break;
		
		case joaat("paradise"):
			return 27;
			break;
		
		case joaat("bifta"):
			return 28;
			break;
		
		case joaat("kalahari"):
			return 29;
			break;
		
		case joaat("carbonizzare"):
			return 30;
			break;
		
		case joaat("carbonrs"):
			return 31;
			break;
		
		case joaat("cavalcade"):
			return 32;
			break;
		
		case joaat("cavalcade2"):
			return 33;
			break;
		
		case joaat("cheetah"):
			return 34;
			break;
		
		case joaat("cogcabrio"):
			return 35;
			break;
		
		case joaat("comet2"):
			return 36;
			break;
		
		case joaat("coquette"):
		case joaat("coquette2"):
			return 37;
			break;
		
		case joaat("daemon"):
			return 38;
			break;
		
		case joaat("dilettante"):
			return 39;
			break;
		
		case joaat("dominator"):
			return 40;
			break;
		
		case joaat("double"):
			return 41;
			break;
		
		case joaat("dubsta"):
			return 42;
			break;
		
		case joaat("dubsta2"):
			return 43;
			break;
		
		case joaat("elegy2"):
			return 44;
			break;
		
		case joaat("emperor"):
			return 45;
			break;
		
		case joaat("emperor2"):
			return 46;
			break;
		
		case joaat("emperor3"):
			return 47;
			break;
		
		case joaat("entityxf"):
			return 48;
			break;
		
		case joaat("exemplar"):
			return 49;
			break;
		
		case joaat("f620"):
			return 50;
			break;
		
		case joaat("faggio2"):
			return 51;
			break;
		
		case joaat("felon"):
			return 52;
			break;
		
		case joaat("felon2"):
			return 53;
			break;
		
		case joaat("feltzer2"):
			return 54;
			break;
		
		case joaat("fq2"):
			return 55;
			break;
		
		case joaat("fugitive"):
			return 56;
			break;
		
		case joaat("fusilade"):
			return 57;
			break;
		
		case joaat("futo"):
			return 58;
			break;
		
		case joaat("gauntlet"):
			return 59;
			break;
		
		case joaat("gburrito"):
			return 60;
			break;
		
		case joaat("granger"):
			return 61;
			break;
		
		case joaat("gresley"):
			return 62;
			break;
		
		case joaat("habanero"):
			return 63;
			break;
		
		case joaat("hexer"):
			return 64;
			break;
		
		case joaat("hotknife"):
			return 65;
			break;
		
		case joaat("infernus"):
			return 66;
			break;
		
		case joaat("ingot"):
			return 67;
			break;
		
		case joaat("intruder"):
			return 68;
			break;
		
		case joaat("issi2"):
			return 69;
			break;
		
		case joaat("jackal"):
			return 70;
			break;
		
		case joaat("jb700"):
			return 71;
			break;
		
		case joaat("khamelion"):
			return 72;
			break;
		
		case joaat("landstalker"):
			return 73;
			break;
		
		case joaat("lguard"):
			return 74;
			break;
		
		case joaat("manana"):
			return 75;
			break;
		
		case joaat("mesa"):
			return 76;
			break;
		
		case joaat("minivan"):
		case joaat("minivan2"):
			return 77;
			break;
		
		case joaat("monroe"):
			return 78;
			break;
		
		case joaat("nemesis"):
			return 79;
			break;
		
		case joaat("ninef"):
			return 80;
			break;
		
		case joaat("ninef2"):
			return 81;
			break;
		
		case joaat("oracle"):
			return 82;
			break;
		
		case joaat("oracle2"):
			return 83;
			break;
		
		case joaat("patriot"):
			return 84;
			break;
		
		case joaat("pcj"):
			return 85;
			break;
		
		case joaat("penumbra"):
			return 86;
			break;
		
		case joaat("peyote"):
			return 87;
			break;
		
		case joaat("phoenix"):
			return 88;
			break;
		
		case joaat("prairie"):
			return 89;
			break;
		
		case joaat("pranger"):
			return 90;
			break;
		
		case joaat("premier"):
			return 91;
			break;
		
		case joaat("primo"):
		case joaat("primo2"):
			return 92;
			break;
		
		case joaat("radi"):
			return 93;
			break;
		
		case joaat("rancherxl"):
			return 94;
			break;
		
		case joaat("rancherxl2"):
			return 95;
			break;
		
		case joaat("rapidgt"):
			return 96;
			break;
		
		case joaat("rapidgt2"):
			return 97;
			break;
		
		case joaat("ratloader"):
			return 98;
			break;
		
		case joaat("rebel"):
			return 99;
			break;
		
		case joaat("rebel2"):
			return 100;
			break;
		
		case joaat("regina"):
			return 101;
			break;
		
		case joaat("rocoto"):
			return 102;
			break;
		
		case joaat("ruffian"):
			return 103;
			break;
		
		case joaat("ruiner"):
			return 104;
			break;
		
		case joaat("rumpo"):
			return 105;
			break;
		
		case joaat("sabregt"):
		case joaat("sabregt2"):
			return 106;
			break;
		
		case joaat("sadler"):
			return 107;
			break;
		
		case joaat("sanchez"):
			return 108;
			break;
		
		case joaat("sandking"):
			return 109;
			break;
		
		case joaat("sandking2"):
			return 110;
			break;
		
		case joaat("schafter2"):
			return 111;
			break;
		
		case joaat("schwarzer"):
			return 112;
			break;
		
		case joaat("seminole"):
			return 113;
			break;
		
		case joaat("sentinel"):
			return 114;
			break;
		
		case joaat("sentinel2"):
			return 115;
			break;
		
		case joaat("serrano"):
			return 116;
			break;
		
		case joaat("speedo"):
			return 117;
			break;
		
		case joaat("speedo2"):
			return 118;
			break;
		
		case joaat("stanier"):
			return 119;
			break;
		
		case joaat("stinger"):
			return 120;
			break;
		
		case joaat("stingergt"):
			return 121;
			break;
		
		case joaat("stratum"):
			return 122;
			break;
		
		case joaat("stretch"):
			return 123;
			break;
		
		case joaat("sultan"):
		case joaat("sultanrs"):
			return 124;
			break;
		
		case joaat("superd"):
			return 125;
			break;
		
		case joaat("surano"):
			return 126;
			break;
		
		case joaat("surge"):
			return 127;
			break;
		
		case joaat("tailgater"):
			return 128;
			break;
		
		case joaat("jester"):
			return 129;
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("tornado5"):
			return 133;
			break;
		
		case joaat("vacca"):
			return 134;
			break;
		
		case joaat("vader"):
			return 135;
			break;
		
		case joaat("vigero"):
			return 136;
			break;
		
		case joaat("voltic"):
			return 137;
			break;
		
		case joaat("voodoo2"):
		case joaat("voodoo"):
			return 138;
			break;
		
		case joaat("washington"):
			return 139;
			break;
		
		case joaat("youga"):
			return 140;
			break;
		
		case joaat("zion"):
			return 141;
			break;
		
		case joaat("zion2"):
			return 142;
			break;
		
		case joaat("ztype"):
			return 143;
			break;
		
		case joaat("massacro"):
			return 144;
			break;
		
		case joaat("turismor"):
			return 145;
			break;
		
		case joaat("zentorno"):
			return 146;
			break;
		
		case joaat("huntley"):
			return 147;
			break;
		
		case joaat("alpha"):
			return 148;
			break;
		
		case joaat("cruiser"):
			return 149;
			break;
		
		case joaat("surfer"):
			return 150;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
			return 151;
			break;
		
		case joaat("chino"):
		case joaat("chino2"):
			return 152;
			break;
		
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 153;
			break;
		
		case joaat("btype2"):
			return 154;
			break;
		
		case joaat("lurcher"):
			return 155;
			break;
		
		case joaat("btype3"):
			return 156;
			break;
		
		case joaat("faction3"):
			return 157;
			break;
		
		case joaat("slamvan"):
		case joaat("slamvan2"):
		case joaat("slamvan3"):
			return 158;
			break;
		
		case joaat("virgo2"):
			return 159;
			break;
		
		case joaat("virgo3"):
			return 160;
			break;
		
		case joaat("bestiagts"):
			return 161;
			break;
		
		case joaat("brickade"):
			return 162;
			break;
		
		case joaat("fmj"):
			return 163;
			break;
		
		case joaat("nimbus"):
			return 164;
			break;
		
		case joaat("pfister811"):
			return 165;
			break;
		
		case joaat("prototipo"):
			return 166;
			break;
		
		case joaat("rumpo3"):
			return 167;
			break;
		
		case joaat("seven70"):
			return 168;
			break;
		
		case joaat("tug"):
			return 169;
			break;
		
		case joaat("volatus"):
			return 170;
			break;
		
		case joaat("windsor2"):
			return 171;
			break;
		
		case joaat("xls"):
			return 172;
			break;
		
		case joaat("xls2"):
			return 173;
			break;
		
		case joaat("reaper"):
			return 174;
			break;
		
		case joaat("le7b"):
			return 175;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
			return 176;
			break;
		
		case joaat("dominator2"):
			return 177;
			break;
		
		case joaat("gauntlet2"):
			return 178;
			break;
		
		case joaat("stalion2"):
			return 179;
			break;
		
		case joaat("omnis"):
			return 180;
			break;
		
		case joaat("tropos"):
			return 181;
			break;
		
		case joaat("brioso"):
			return 182;
			break;
		
		case joaat("trophytruck"):
			return 183;
			break;
		
		case joaat("trophytruck2"):
			return 184;
			break;
		
		case joaat("contender"):
			return 185;
			break;
		
		case joaat("cliffhanger"):
			return 186;
			break;
		
		case joaat("bf400"):
			return 187;
			break;
		
		case joaat("tyrus"):
			return 188;
			break;
		
		case joaat("rallytruck"):
			return 189;
			break;
		
		case joaat("tampa2"):
			return 190;
			break;
		
		case joaat("gargoyle"):
			return 191;
			break;
		
		case joaat("lynx"):
			return 192;
			break;
		
		case joaat("sheava"):
			return 193;
			break;
		
		case joaat("avarus"):
			return 194;
			break;
		
		case joaat("chimera"):
			return 195;
			break;
		
		case joaat("daemon2"):
			return 196;
			break;
		
		case joaat("defiler"):
			return 197;
			break;
		
		case joaat("esskey"):
			return 198;
			break;
		
		case joaat("nightblade"):
			return 199;
			break;
		
		case joaat("ratbike"):
			return 200;
			break;
		
		case joaat("zombiea"):
			return 202;
			break;
		
		case joaat("zombieb"):
			return 203;
			break;
		
		case joaat("shotaro"):
			return 204;
			break;
		
		case joaat("raptor"):
			return 205;
			break;
		
		case joaat("hakuchou2"):
			return 206;
			break;
		
		case joaat("blazer4"):
			return 207;
			break;
		
		case joaat("sanctus"):
			return 208;
			break;
		
		case joaat("vortex"):
			return 209;
			break;
		
		case joaat("manchez"):
			return 210;
			break;
		
		case joaat("tornado6"):
			return 211;
			break;
		
		case joaat("youga2"):
			return 212;
			break;
		
		case joaat("wolfsbane"):
			return 213;
			break;
		
		case joaat("faggio3"):
			return 214;
			break;
		
		case joaat("faggio"):
			return 215;
			break;
		
		case joaat("dune5"):
			return 216;
			break;
		
		case joaat("phantom2"):
			return 217;
			break;
		
		case joaat("technical2"):
			return 218;
			break;
		
		case joaat("blazer5"):
			return 219;
			break;
		
		case joaat("boxville5"):
			return 220;
			break;
		
		case joaat("wastelander"):
			return 221;
			break;
		
		case joaat("ruiner2"):
			return 222;
			break;
		
		case joaat("voltic2"):
			return 223;
			break;
		
		case joaat("penetrator"):
			return 224;
			break;
		
		case joaat("tempesta"):
			return 225;
			break;
		
		case joaat("italigtb2"):
			return 226;
			break;
		
		case joaat("nero2"):
			return 227;
			break;
		
		case joaat("diablous2"):
			return 228;
			break;
		
		case joaat("fcr2"):
			return 229;
			break;
		
		case joaat("elegy"):
			return 230;
			break;
		
		case joaat("comet3"):
			return 232;
			break;
		
		case joaat("specter2"):
			return 232;
			break;
		
		case joaat("nero"):
			return 233;
			break;
		
		case joaat("italigtb"):
			return 234;
			break;
		
		case joaat("fcr"):
			return 235;
			break;
		
		case joaat("specter"):
			return 236;
			break;
		
		case joaat("diablous"):
			return 237;
			break;
		
		case -1405937764:
			return 238;
			break;
		
		case 1234311532:
			return 239;
			break;
		
		case 719660200:
			return 240;
			break;
		
		case -982130927:
			return 241;
			break;
		
		case 223240013:
			return 242;
			break;
		
		case 1504306544:
			return 243;
			break;
		
		case 1939284556:
			return 244;
			break;
		
		case 917809321:
			return 245;
			break;
		
		case 433954513:
			return 246;
			break;
		
		case 159274291:
			return 247;
			break;
		
		case -1210451983:
			return 248;
			break;
		
		case 562680400:
			return 249;
			break;
		
		case 1897744184:
			return 250;
			break;
		
		case -32236122:
			return 251;
			break;
		
		case 884483972:
			return 252;
			break;
		
		case -1881846085:
			return 253;
			break;
		
		case -1924433270:
			return 254;
			break;
		
		case 1356124575:
			return 255;
			break;
		
		case 387748548:
			return 256;
			break;
		
		case 177270108:
			return 257;
			break;
		
		case 1502869817:
			return 258;
			break;
		
		case joaat("lazer"):
			return 259;
			break;
		
		case -1763555241:
			return 260;
			break;
		
		case -749299473:
			return 261;
			break;
		
		case -975345305:
			return 262;
			break;
		
		case -1700874274:
			return 263;
			break;
		
		case -392675425:
			return 264;
			break;
		
		case 1043222410:
			return 265;
			break;
		
		case -1386191424:
			return 266;
			break;
		
		case 1565978651:
			return 267;
			break;
		
		case 1036591958:
			return 268;
			break;
		
		case -32878452:
			return 269;
			break;
		
		case -42959138:
			return 270;
			break;
		
		case -1984275979:
			return 271;
			break;
		
		case -1007528109:
			return 272;
			break;
		
		case -1523619738:
			return 273;
			break;
		
		case 1392481335:
			return 274;
			break;
		
		case -998177792:
			return 275;
			break;
		
		case -1242608589:
			return 276;
			break;
		
		case 1841130506:
			return 277;
			break;
		
		case 2049897956:
			return 278;
			break;
		
		case 1483171323:
			return 277;
			break;
		
		case 886810209:
			return 278;
			break;
		
		case -1693015116:
			return 279;
			break;
		
		case -692292317:
			return 280;
			break;
		
		case -1435527158:
			return 281;
			break;
		
		case 1181327175:
			return 282;
			break;
		
		case 1489874736:
			return 283;
			break;
		
		case -2118308144:
			return 284;
			break;
		
		case -212993243:
			return 285;
			break;
		
		case 447548909:
			return 286;
			break;
		
		case 1561920505:
			return 287;
			break;
		
		case -1848994066:
			return 288;
			break;
		
		case 1741861769:
			return 289;
			break;
		
		case 1104234922:
			return 290;
			break;
		
		case 1871995513:
			return 291;
			break;
		
		case 600450546:
			return 292;
			break;
		
		case -1532697517:
			return 293;
			break;
		
		case -410205223:
			return 294;
			break;
		
		case 15219735:
			return 295;
			break;
		
		case 661493923:
			return 296;
			break;
		
		case 838982985:
			return 297;
			break;
		
		case -391595372:
			return 298;
			break;
		
		case -121446169:
			return 299;
			break;
		
		case -313185164:
			return 300;
			break;
		
		case 867799010:
			return 301;
			break;
		
		case -1529242755:
			return 302;
			break;
		
		case 1352136073:
			return 303;
			break;
		
		case -2079788230:
			return 304;
			break;
		
		case 903794909:
			return 305;
			break;
	}
	return -1;
}

int func_481(int iParam0)//Position - 0x37A46
{
	switch (iParam0)
	{
		case -1392019810:
		case -288387677:
			return 0;
			break;
		
		case -1598824969:
		case 8630539:
			return 1;
			break;
		
		case 232975537:
		case -2028738140:
			return 2;
			break;
		
		case 462718996:
		case 1489308935:
			return 3;
			break;
		
		case -444556307:
		case -761265985:
			return 4;
			break;
		
		case -213731471:
		case -465001456:
			return 5;
			break;
		
		case -968041086:
			return 6;
			break;
		
		case -694977009:
		case 2001619481:
			return 7;
			break;
		
		case 1523877515:
		case 1076648918:
			return 8;
			break;
		
		case -1518694851:
			return 9;
			break;
		
		case 685937731:
			return 10;
			break;
		
		case 1107182854:
			return 11;
			break;
		
		case 1795528252:
			return 12;
			break;
		
		case 963431690:
			return 13;
			break;
		
		case 7683469:
			return 14;
			break;
		
		case -1485567420:
			return 15;
			break;
		
		case joaat("HORN_CNOTE_C1"):
			return 16;
			break;
		
		case 830480310:
			return 17;
			break;
		
		case -835077886:
		case -2078754765:
			return 18;
			break;
		
		case 1888648625:
		case -1712790573:
			return 19;
			break;
		
		case 1708257079:
			return 20;
			break;
		
		case -1440188433:
			return 22;
			break;
		
		case -1813427343:
			return 22;
			break;
		
		case -1940603832:
			return 23;
			break;
		
		case -665245345:
			return 24;
			break;
		
		case 1049163197:
			return 25;
			break;
		
		case -177872008:
			return 26;
			break;
		
		case -366752524:
			return 27;
			break;
		
		case -952091823:
			return 28;
			break;
		
		case -994541731:
			return 29;
			break;
		
		case 2039769366:
			return 30;
			break;
		
		case 1197540528:
			return 31;
			break;
		
		case 321431759:
			return 32;
			break;
		
		case -453129094:
			return 33;
			break;
		
		case 1548219456:
			return 34;
			break;
		
		case 1207356318:
			return 35;
			break;
		
		case 2061273084:
			return 36;
			break;
		
		case 1076531893:
			return 37;
			break;
		
		case 1388066776:
			return 38;
			break;
	}
	return -1;
}

int func_482(int iParam0)//Position - 0x37CAC
{
	switch (iParam0)
	{
		case 1909189272:
		case 931280609:
		case 1617472902:
		case -1267543371:
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
		case 219613597:
		case 1653666139:
		case 500482303:
		case -420911112:
		case 2069146067:
		case 2044532910:
		case -54332285:
		case 321186144:
		case -638562243:
		case -1988428699:
		case 1692272545:
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
		case -1812949672:
		case -1374500452:
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
		case 540101442:
		case -286046740:
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
		case -208911803:
		case -447711397:
		case 1416466158:
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
		case 301304410:
		case 1938952078:
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case 740289177:
		case -1960756985:
		case 960812448:
		case 1693751655:
		case 2031587082:
		case -1254331310:
			return 1;
			break;
	}
	return 0;
}

void func_483(int iParam0, bool bParam1, int iParam2)//Position - 0x37F9F
{
	if (bParam1)
	{
		if (!func_254(iParam0, 0, 0))
		{
			if (iParam2 && Global_98721.f_18[iParam0])
			{
				if (func_489(iParam0) == 3 && !func_488(iParam0))
				{
					func_487(iParam0);
					func_486(iParam0, 0, 0);
					func_485(iParam0, 1, 0);
					func_484(iParam0);
				}
				else
				{
					func_486(iParam0, 1, 0);
					func_484(iParam0);
				}
			}
			else
			{
				func_486(iParam0, 0, 0);
				func_485(iParam0, 1, 0);
				func_484(iParam0);
			}
		}
		else
		{
			func_485(iParam0, 1, 0);
			func_484(iParam0);
		}
	}
	else if (func_254(iParam0, 0, 0))
	{
		func_485(iParam0, 0, 0);
		func_485(iParam0, 1, 0);
		func_484(iParam0);
	}
}

void func_484(int iParam0)//Position - 0x3805F
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_485(int iParam0, int iParam1, bool bParam2)//Position - 0x38079
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
		if (func_83() == 0)
		{
			iVar0 = func_51(func_255(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_131(func_255(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_486(int iParam0, int iParam1, bool bParam2)//Position - 0x380EB
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
		if (func_83() == 0)
		{
			iVar0 = func_51(func_255(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_131(func_255(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_487(int iParam0)//Position - 0x3815D
{
	if (Global_98721.f_18[iParam0])
	{
		func_486(iParam0, 10, 1);
		func_486(iParam0, 19, 1);
	}
}

bool func_488(int iParam0)//Position - 0x38184
{
	return func_254(iParam0, 5, 1);
}

int func_489(int iParam0)//Position - 0x38194
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

void func_490()//Position - 0x38462
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	char cVar12[16];
	
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bVar0 = false;
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("appdata");
			iVar1 = func_27("playerNameMP");
			if ((iVar1 != 0 && iVar1 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()))) || iLocal_111)
			{
				func_200("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				bVar0 = true;
				func_13(2921, 1, -1, 1);
				func_13(2922, 1, -1, 1);
				func_13(2923, 1, -1, 1);
				func_13(2924, 1, -1, 1);
				func_13(2925, 1, -1, 1);
				iLocal_111 = 0;
			}
			APP::APP_CLOSE_BLOCK();
			if (bVar0)
			{
				iVar2 = 0;
				while (iVar2 < 5)
				{
					StringCopy(&cVar4, "multiplayer", 16);
					StringIntConCat(&cVar4, iVar2, 16);
					APP::APP_SET_BLOCK(&cVar4);
					iVar3 = 0;
					while (iVar3 < 10)
					{
						StringCopy(&cVar4, "vehicle", 16);
						StringIntConCat(&cVar4, iVar3, 16);
						APP::APP_SET_BLOCK(&cVar4);
						func_200("carUnlocked", 0);
						APP::APP_CLOSE_BLOCK();
						iVar3++;
					}
					APP::APP_CLOSE_BLOCK();
					iVar2++;
				}
			}
			APP::APP_CLOSE_APP();
		}
		else
		{
			bVar8 = false;
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("appdata");
			iVar9 = func_27("playerNameSP");
			if ((iVar9 != 0 && iVar9 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()))) || iLocal_110)
			{
				func_200("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				iLocal_132 = 1;
				iLocal_110 = 0;
				bVar8 = true;
			}
			APP::APP_CLOSE_BLOCK();
			if (bVar8)
			{
				iVar10 = 0;
				while (iVar10 < 5)
				{
					StringCopy(&cVar12, "multiplayer", 16);
					StringIntConCat(&cVar12, iVar10, 16);
					APP::APP_SET_BLOCK(&cVar12);
					iVar11 = 0;
					while (iVar11 < 10)
					{
						StringCopy(&cVar12, "vehicle", 16);
						StringIntConCat(&cVar12, iVar11, 16);
						APP::APP_SET_BLOCK(&cVar12);
						func_200("carUnlocked", 0);
						APP::APP_CLOSE_BLOCK();
						iVar11++;
					}
					APP::APP_CLOSE_BLOCK();
					iVar10++;
				}
			}
			APP::APP_CLOSE_APP();
		}
	}
}

void func_491()//Position - 0x3863F
{
	int iVar0;
	char cVar1[16];
	char cVar5[16];
	int iVar9;
	vector3 vVar10;
	int iVar16;
	vector3 vVar17;
	int iVar23;
	
	iVar0 = func_193();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_2097152[iVar0 /*10828*/].f_6080.f_53)
		{
			APP::APP_SET_APP("car");
			StringCopy(&cVar1, "multiplayer", 16);
			StringIntConCat(&cVar1, func_14(), 16);
			APP::APP_SET_BLOCK(&cVar1);
			iVar9 = 0;
			while (iVar9 < 10)
			{
				StringCopy(&cVar1, "vehicle", 16);
				StringIntConCat(&cVar1, iVar9, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_200("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
				iVar9++;
			}
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			StringCopy(&vVar10, "orderCount_mp", 24);
			StringIntConCat(&vVar10, func_14(), 24);
			func_200(&vVar10, 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_133 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			Global_2097152[iVar0 /*10828*/].f_6080.f_53 = 1;
		}
		if (iLocal_108 >= 0 && MISC::IS_BIT_SET(Global_1323611[iLocal_108 /*141*/].f_102, 26))
		{
			iVar16 = 0;
			while (iVar16 < 10)
			{
				if ((Global_2097152[iVar0 /*10828*/].f_6080.f_63[iVar16] - 1) == iLocal_108)
				{
					APP::APP_SET_APP("car");
					StringCopy(&cVar1, "multiplayer", 16);
					StringIntConCat(&cVar1, func_14(), 16);
					APP::APP_SET_BLOCK(&cVar1);
					StringCopy(&cVar1, "vehicle", 16);
					StringIntConCat(&cVar1, iVar16, 16);
					APP::APP_SET_BLOCK(&cVar1);
					func_200("carUnlocked", 0);
					APP::APP_CLOSE_BLOCK();
					iLocal_133 = 1;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					MISC::CLEAR_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 25);
					MISC::CLEAR_BIT(&(Global_1323611[iLocal_108 /*141*/].f_102), 26);
				}
				iVar16++;
			}
		}
		switch (iLocal_114)
		{
			case 0:
				if (Global_2097152[iVar0 /*10828*/].f_6080.f_54)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_113 = true;
					iLocal_114++;
				}
				else
				{
					bLocal_113 = false;
				}
				break;
			
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_2097152[iVar0 /*10828*/].f_6080.f_54 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar5, "mp", 16);
					StringIntConCat(&cVar5, func_14(), 16);
					StringConCat(&cVar5, "_order", 16);
					APP::APP_SET_BLOCK(&cVar5);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					StringCopy(&vVar17, "orderCount_mp", 24);
					StringIntConCat(&vVar17, func_14(), 24);
					func_200(&vVar17, Global_2097152[iVar0 /*10828*/].f_6080.f_61);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_114 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_111560.f_20113.f_260)
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_200("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_200("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			func_200("orderCount_sp0", 0);
			func_200("orderCount_sp1", 0);
			func_200("orderCount_sp2", 0);
			APP::APP_CLOSE_BLOCK();
			iLocal_133 = 1;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_200("chopSafeHouse", 0);
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			Global_111560.f_20113.f_273[0] = 0;
			Global_111560.f_20113.f_273[1] = 0;
			Global_111560.f_20113.f_273[2] = 0;
			Global_111560.f_20113.f_260 = 1;
		}
		iVar23 = 0;
		while (iVar23 < 3)
		{
			if (Global_111560.f_20113[iVar23 /*43*/].f_41)
			{
				APP::APP_SET_APP("car");
				StringCopy(&cVar1, "singleplayer", 16);
				StringIntConCat(&cVar1, iVar23, 16);
				APP::APP_SET_BLOCK(&cVar1);
				func_200("carUnlocked", 0);
				iLocal_133 = 1;
				SYSTEM::SETTIMERA(0);
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Global_111560.f_20113.f_273[iVar23] = 0;
				Global_111560.f_20113[iVar23 /*43*/].f_41 = 0;
				Global_111560.f_20113[iVar23 /*43*/].f_40 = 0;
				Global_111560.f_20113[iVar23 /*43*/] = 0;
				Global_111560.f_20113.f_273[iVar23] = 0;
			}
			iVar23++;
		}
		switch (iLocal_114)
		{
			case 0:
				if (Global_111560.f_20113.f_265)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_113 = true;
					iLocal_114++;
				}
				else
				{
					bLocal_113 = false;
				}
				break;
			
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
					{
						Global_111560.f_20113.f_265 = 0;
					}
					APP::APP_SET_APP("car");
					StringCopy(&cVar5, "sp", 16);
					StringIntConCat(&cVar5, Global_111560.f_20113.f_266, 16);
					StringConCat(&cVar5, "_order", 16);
					APP::APP_SET_BLOCK(&cVar5);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					func_200("orderCount_sp0", Global_111560.f_20113.f_285[0]);
					func_200("orderCount_sp1", Global_111560.f_20113.f_285[1]);
					func_200("orderCount_sp2", Global_111560.f_20113.f_285[2]);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_114 = 0;
				}
				break;
			}
	}
}

int func_492(int iParam0)//Position - 0x38AC3
{
	if (iParam0 != func_97())
	{
		if (func_162(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_447(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

void func_493()//Position - 0x38B0A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() || !APP::APP_HAS_SYNCED_DATA("car"))
	{
		iLocal_112 = 0;
		return;
	}
	else
	{
		if (!iLocal_112)
		{
			iLocal_110 = 1;
			iLocal_111 = 1;
			Global_108259 = 1;
		}
		iLocal_112 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() != 0)
		{
			return;
		}
		if (!func_163())
		{
			return;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iLocal_104 = 1;
		}
		if (!Global_2097152[func_193() /*10828*/].f_6080.f_87)
		{
			iVar0 = 9;
			while (iVar0 >= 0)
			{
				Global_2097152[func_193() /*10828*/].f_6080.f_63[iVar0] = iVar0 + 1;
				Global_2097152[func_193() /*10828*/].f_6080.f_74[iVar0] = iVar0 + 1;
				Global_2097152[func_193() /*10828*/].f_6080.f_41[iVar0] = 0;
				iVar0 = (iVar0 + -1);
			}
			Global_2097152[func_193() /*10828*/].f_6080.f_85 = -1;
			Global_2097152[func_193() /*10828*/].f_6080.f_87 = 1;
		}
	}
	else
	{
		iLocal_104 = 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2097152[func_193() /*10828*/].f_6080.f_36)
		{
			iLocal_355 = 1;
		}
		if (func_102(187, -1))
		{
			iLocal_355 = 1;
			func_56(187, 0, -1, 1);
		}
		if (!Global_262145.f_10123 && !Global_108261)
		{
			iLocal_355 = 1;
		}
	}
	else if ((Global_111560.f_20113.f_130[0 /*41*/].f_36 || Global_111560.f_20113.f_130[1 /*41*/].f_36) || Global_111560.f_20113.f_130[2 /*41*/].f_36)
	{
		iLocal_355 = 1;
	}
	iLocal_114 = 0;
	iLocal_106 = 0;
	iLocal_107 = 0;
	iLocal_108 = 0;
	iLocal_159 = 0;
	bLocal_116 = false;
	iLocal_117 = 0;
	if (!iLocal_160 || Global_108093)
	{
		Global_111560.f_20113.f_264 = 1;
		iLocal_132 = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		iVar1 = func_27("appUID");
		if (iVar1 != Global_111560.f_20113.f_272)
		{
			iLocal_132 = 1;
		}
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		iVar2 = 0;
		while (iVar2 < Global_111560.f_20113.f_130)
		{
			iLocal_138[iVar2] = 0;
			iLocal_142[iVar2] = 0;
			iLocal_146[iVar2] = 0;
			iVar2++;
		}
		iLocal_150 = 0;
	}
	Global_108093 = 0;
	iLocal_160 = 1;
	iLocal_103 = 1;
}

void func_494()//Position - 0x38D3B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_108262)
	{
		NETWORK::NETWORK_BAIL(49, 0, 0);
	}
}

void func_495()//Position - 0x38D5B
{
	func_501();
	switch (iLocal_98)
	{
		case 0:
			func_500();
			break;
		
		case 1:
			func_498();
			break;
		
		case 2:
			func_496();
			break;
	}
}

void func_496()//Position - 0x38D95
{
	func_497(0);
}

void func_497(int iParam0)//Position - 0x38DA2
{
	iLocal_98 = iParam0;
}

void func_498()//Position - 0x38DAE
{
	vector3 vVar0;
	
	switch (iLocal_99)
	{
		case 0:
			iLocal_101 = iLocal_100;
			SCRIPT::REQUEST_SCRIPT("tuneables_processing");
			if (SCRIPT::HAS_SCRIPT_LOADED("tuneables_processing") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(1424) > 0)
			{
				vVar0.x = func_499(iLocal_100);
				vVar0.y = func_499(iLocal_102);
				vVar0.z = iLocal_100 == 1;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &vVar0, 3, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuneables_processing");
				iLocal_99++;
			}
			break;
		
		case 1:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tuneables_processing")) == 0)
			{
				func_497(2);
				iLocal_99 = 0;
			}
			break;
	}
}

int func_499(int iParam0)//Position - 0x38E43
{
	if (iParam0 >= 22)
	{
		return (28 + (iParam0 - 22));
	}
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 9;
		
		case 6:
			return 10;
		
		case 7:
			return 11;
		
		case 8:
			return 12;
		
		case 9:
			return 13;
		
		case 10:
			return 14;
		
		case 11:
			return 17;
		
		case 12:
			return 18;
		
		case 13:
			return 19;
		
		case 18:
			return 26;
		
		case 14:
			return 20;
		
		case 15:
			return 21;
		
		case 16:
			return 22;
		
		case 19:
			return 23;
		
		case 17:
			return 24;
		
		case 20:
			return 25;
		
		case 21:
			return 27;
		
		default:
	}
	return 0;
}

void func_500()//Position - 0x38F54
{
	if (iLocal_100 != iLocal_101 || Global_262144)
	{
		Global_262144 = 0;
		func_497(1);
	}
}

void func_501()//Position - 0x38F78
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_535()) && func_83() == -1)
	{
		iLocal_100 = 0;
		iLocal_102 = 21;
	}
	else
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_534())
		{
			return;
		}
		iLocal_100 = 1;
		iLocal_102 = 21;
		iVar0 = func_533(PLAYER::PLAYER_ID());
		if (iVar0 != -1)
		{
			iVar1 = -1;
			if (func_99(PLAYER::PLAYER_ID()))
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_959568.f_42)));
			}
			if (iVar1 == -1)
			{
				iVar1 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_4456448.f_154647)));
			}
			iLocal_102 = func_532(iVar1);
			if (iVar0 == 0)
			{
				if (func_396(PLAYER::PLAYER_ID(), 0, 0) && func_510(Global_4456448.f_154360, Global_4456448.f_190930))
				{
					iLocal_100 = 20;
				}
				else if (func_509(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 12;
				}
				else if (func_508(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 13;
				}
				else if (func_507(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 14;
				}
				else if (func_506(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 16;
				}
				else if (func_505(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 15;
				}
				else if (func_504(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 19;
				}
				else if (func_503(PLAYER::PLAYER_ID()) || func_502(PLAYER::PLAYER_ID()))
				{
					iLocal_100 = 18;
				}
				else
				{
					iLocal_100 = 3;
				}
			}
			if (iVar0 == 6)
			{
				iLocal_100 = 17;
			}
			if (iVar0 == 3)
			{
				iLocal_100 = 4;
			}
			if (iVar0 == 1 || Global_1574398)
			{
				iLocal_100 = 2;
			}
			if (iVar0 == 2)
			{
				iLocal_100 = 5;
				if (Global_4456448.f_58154 == 0 || Global_4456448.f_58154 == 1)
				{
					iLocal_100 = 5;
				}
				if (((Global_4456448.f_58154 == 6 || Global_4456448.f_58154 == 7) || Global_4456448.f_58154 == 18) || Global_4456448.f_58154 == 19)
				{
					iLocal_100 = 10;
				}
				if (Global_4456448.f_58154 == 2 || Global_4456448.f_58154 == 3)
				{
					iLocal_100 = 9;
				}
				if (Global_4456448.f_58154 == 4 || Global_4456448.f_58154 == 5)
				{
					iLocal_100 = 8;
				}
				if ((Global_4456448.f_58154 == 8 || Global_4456448.f_58154 == 9) || Global_1574424)
				{
					iLocal_100 = 11;
				}
				if (Global_4456448.f_58154 == 12 || Global_4456448.f_58154 == 13)
				{
					if (Global_4456448.f_58157 == 8)
					{
						iLocal_100 = 6;
					}
					else
					{
						iLocal_100 = 7;
					}
				}
			}
			if (iVar0 == 8)
			{
				iLocal_100 = 11;
			}
		}
		if (func_4())
		{
			iLocal_100 = 1;
			iLocal_102 = 21;
		}
		if ((((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_535()) && !func_83() == -1) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_2457271 > 10000)
			{
				CLOCK::GET_POSIX_TIME(&Var2, &(Var2.f_1), &(Var2.f_2), &(Var2.f_3), &(Var2.f_4), &(Var2.f_5));
				if ((Var2 > Global_2457264 || Var2.f_1 > Global_2457264.f_1) || Var2.f_2 > Global_2457264.f_2)
				{
					CLOCK::GET_POSIX_TIME(&Global_2457264, &(Global_2457264.f_1), &(Global_2457264.f_2), &(Global_2457264.f_3), &(Global_2457264.f_4), &(Global_2457264.f_5));
					func_497(1);
					Global_2457271 = 0;
				}
				Global_2457271 = 0;
			}
			else
			{
				Global_2457271++;
			}
		}
	}
}

bool func_502(int iParam0)//Position - 0x39314
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_503(int iParam0)//Position - 0x39329
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_504(int iParam0)//Position - 0x3933E
{
	return Global_2424073[iParam0 /*421*/].f_115 == 8;
}

bool func_505(int iParam0)//Position - 0x39354
{
	return Global_2424073[iParam0 /*421*/].f_115 == 3;
}

bool func_506(int iParam0)//Position - 0x39369
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_507(int iParam0)//Position - 0x3937E
{
	return Global_2424073[iParam0 /*421*/].f_115 == 1;
}

bool func_508(int iParam0)//Position - 0x39393
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

bool func_509(int iParam0)//Position - 0x393A8
{
	return Global_2424073[iParam0 /*421*/].f_115 == 6;
}

int func_510(int iParam0, int iParam1)//Position - 0x393BD
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_531(iParam0) || func_530(iParam0)) || func_529(iParam0)) || func_528(iParam0, 1)) || func_527(iParam0)) || func_526(iParam0)) || func_525(iParam0)) || func_524(iParam0)) || func_523(iParam0)) || func_522(iParam0)) || func_521(iParam0)) || func_520(iParam0)) || func_519(iParam0)) || func_518(iParam0)) || func_517(iParam0)) || func_516(iParam0)) || func_515(iParam0)) || func_514(iParam0)) || func_513(iParam0)) || func_512(iParam1)) || func_511(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_511(int iParam0)//Position - 0x394CE
{
	return iParam0 == 65;
}

bool func_512(int iParam0)//Position - 0x394DB
{
	return iParam0 == 57;
}

int func_513(int iParam0)//Position - 0x394E8
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9221[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_514(int iParam0)//Position - 0x39522
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x3955C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9243[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_516(int iParam0)//Position - 0x39596
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9232[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_517(int iParam0)//Position - 0x395D0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9208[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x3960A
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9197[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x39644
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9186[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_520(int iParam0)//Position - 0x3967E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9175[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x396B8
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9078[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_522(int iParam0)//Position - 0x396F2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9100[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_523(int iParam0)//Position - 0x3972C
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9089[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x39766
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9067[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x397A0
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_526(int iParam0)//Position - 0x397DA
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9045[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_527(int iParam0)//Position - 0x39814
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_528(int iParam0, bool bParam1)//Position - 0x3984D
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

int func_529(int iParam0)//Position - 0x3989E
{
	if ((((iParam0 == Global_262145.f_9006 || iParam0 == Global_262145.f_9007) || iParam0 == Global_262145.f_9008) || iParam0 == Global_262145.f_9009) || iParam0 == Global_262145.f_9010)
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)//Position - 0x398F8
{
	if ((((iParam0 == Global_262145.f_9001 || iParam0 == Global_262145.f_9002) || iParam0 == Global_262145.f_9003) || iParam0 == Global_262145.f_9004) || iParam0 == Global_262145.f_9005)
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)//Position - 0x39952
{
	if ((((((iParam0 == Global_262145.f_8994 || iParam0 == Global_262145.f_8995) || iParam0 == Global_262145.f_8996) || iParam0 == Global_262145.f_8997) || iParam0 == Global_262145.f_8998) || iParam0 == Global_262145.f_8999) || iParam0 == Global_262145.f_9000)
	{
		return 1;
	}
	return 0;
}

int func_532(int iParam0)//Position - 0x399CC
{
	if (iParam0 >= 0)
	{
		return (22 + iParam0);
	}
	return 21;
}

var func_533(int iParam0)//Position - 0x399E4
{
	return Global_1590446[iParam0 /*871*/];
}

bool func_534()//Position - 0x399F5
{
	return MISC::IS_BIT_SET(Global_2448961.f_39.f_4, 0);
}

bool func_535()//Position - 0x39A0A
{
	return Global_2448961.f_592;
}

void func_536()//Position - 0x39A19
{
	if (iLocal_103 != 0 && iLocal_104 != 2)
	{
		if (iLocal_104 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_104 = 2;
			}
		}
		else if (iLocal_104 == 1)
		{
			if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_112()) && !func_537())
			{
				iLocal_104 = 2;
			}
			if (func_83() != 0)
			{
				iLocal_104 = 2;
			}
		}
		if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
		{
			iLocal_104 = 2;
		}
		if (Global_108093)
		{
			iLocal_104 = 2;
		}
		if (iLocal_104 == 2)
		{
			iLocal_103 = 0;
		}
	}
}

int func_537()//Position - 0x39A92
{
	if ((((func_109() || func_108()) || func_112()) || func_539()) || func_538())
	{
		return 1;
	}
	return 0;
}

var func_538()//Position - 0x39ACE
{
	return Global_2448961.f_742;
}

var func_539()//Position - 0x39ADD
{
	return Global_2448961.f_593;
}

int func_540()//Position - 0x39AEC
{
	if (Global_1312808 == 68)
	{
		return 1;
	}
	return 0;
}

