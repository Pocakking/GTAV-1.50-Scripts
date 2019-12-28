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
	struct<284> Local_112 = { 0, 0, 0, 0, 0, 0, 1, 0, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<12> Local_113 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	struct<5> Local_116[32];
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<18> Local_122[32];
	vector3 vLocal_123[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<68> Local_131[1];
	struct<42> Local_132[32];
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
	var uLocal_161 = -1;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 1;
	var uLocal_170 = 0;
	var uLocal_171 = 32;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = 0;
	var uLocal_175 = -1;
	var uLocal_176 = 0;
	var uLocal_177 = -1;
	var uLocal_178 = 0;
	var uLocal_179 = -1;
	var uLocal_180 = 0;
	var uLocal_181 = -1;
	var uLocal_182 = 0;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = -1;
	var uLocal_186 = 0;
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = 0;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = -1;
	var uLocal_210 = 0;
	var uLocal_211 = -1;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = -1;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = -1;
	var uLocal_228 = 0;
	var uLocal_229 = -1;
	var uLocal_230 = 0;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = -1;
	var uLocal_244 = -1;
	var uLocal_245 = -1;
	var uLocal_246 = -1;
	var uLocal_247 = -1;
	var uLocal_248 = 0;
	var uLocal_249 = 32;
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
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
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
	var uLocal_293 = 0;
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
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	var uLocal_678 = 0;
	int iLocal_679 = 0;
	var uLocal_680 = 0;
	struct<21> Local_681 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
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
	iLocal_114 = -1;
	iLocal_675 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_754(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_739(ScriptParam_681);
	}
	else
	{
		func_707();
	}
	while (true)
	{
		func_706();
		if (func_699())
		{
			func_707();
		}
		if (func_696(29))
		{
			func_707();
		}
		if (func_694())
		{
			func_707();
		}
		if (func_693())
		{
			func_707();
		}
		iLocal_675 = -1;
		if (MISC::IS_BIT_SET(iLocal_667, PLAYER::PLAYER_ID()))
		{
			if (MISC::IS_BIT_SET(iLocal_668, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_691(PLAYER::PLAYER_ID()))
				{
					iLocal_675 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (func_690() && !func_689())
				{
					iVar2 = func_687();
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
							iLocal_675 = iVar4;
						}
					}
				}
			}
		}
		func_666();
		if (func_665() < 2)
		{
			if (func_662(2, 0, 1, 0, 0))
			{
				MISC::SET_BIT(&iLocal_117, 24);
				func_620(0, -1);
				func_707();
			}
		}
		iVar0 = 0;
		while (iVar0 < 1)
		{
			func_619(iVar0, -1);
			func_618(iVar0, -1);
			func_617(iVar0, uVar1);
			MISC::CLEAR_BIT(&iLocal_117, 0);
			iVar0++;
		}
		func_568();
		func_536();
		func_533();
		func_513();
		switch (func_512(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_511() == 1)
				{
					func_503(141, func_510(0), 0, 0);
					func_502(1);
				}
				else if (func_511() == 4)
				{
					func_502(4);
				}
				break;
			
			case 1:
				if (func_511() == 1)
				{
					func_20();
				}
				else if (func_511() == 4)
				{
					func_19(&(Local_112.f_211));
					func_502(3);
				}
				break;
			
			case 3:
				if (func_18(&(Local_112.f_211)))
				{
					if (func_17(&(Local_112.f_211)))
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (bVar5)
				{
					func_502(4);
				}
				break;
			
			case 2:
				func_502(4);
			
			case 4:
				func_707();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_511())
			{
				case 0:
					func_16(1);
					break;
				
				case 1:
					func_1();
					break;
				
				case 4:
					break;
				}
		}
	}
}

void func_1()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_12();
	switch (func_665())
	{
		case 0:
			if (MISC::IS_BIT_SET(Local_112.f_213, 0))
			{
				if (!func_18(&(Local_112.f_1.f_3)))
				{
					func_11(&(Local_112.f_1.f_3), 0, 1);
				}
				func_10(1);
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Local_112.f_213, 2))
			{
				iVar2 = Global_262145.f_11188;
				if (func_18(&(Local_112.f_1.f_1)))
				{
					if (func_9(&(Local_112.f_1.f_1), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			else
			{
				iVar2 = Global_262145.f_11189;
				if (func_18(&(Local_112.f_1.f_3)))
				{
					if (func_9(&(Local_112.f_1.f_3), 0, 0) >= iVar2)
					{
						bVar1 = true;
					}
				}
			}
			if (bVar1)
			{
				func_10(2);
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Local_112.f_213, 1))
			{
				func_10(3);
			}
			break;
		
		case 3:
			func_10(4);
			break;
		
		case 4:
			func_16(4);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_2(iVar0);
		iVar0++;
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	iVar0 = func_8(iParam0);
	iVar1 = func_7(iParam0);
	bVar6 = func_18(&(Local_112.f_6[iParam0 /*204*/].f_70));
	if (iVar0 > -1)
	{
		if (MISC::IS_BIT_SET(iLocal_668, iVar0))
		{
			if (MISC::IS_BIT_SET(iLocal_667, iVar1))
			{
				if (!MISC::IS_BIT_SET(iLocal_669, iVar1))
				{
					fVar2 = func_6(iParam0, iVar0);
					if (func_18(&(Local_112.f_1.f_1)))
					{
						if (!func_18(&(Local_112.f_6[iParam0 /*204*/].f_70)))
						{
							func_11(&(Local_112.f_6[iParam0 /*204*/].f_70), 0, 1);
						}
						else if ((func_5(&(Local_112.f_6[iParam0 /*204*/].f_70), 1000, 0) && func_9(&(Local_112.f_1.f_1), 0, 0) <= Global_262145.f_11188) && func_665() != 2)
						{
							iVar7 = func_9(&(Local_112.f_6[iParam0 /*204*/].f_70), 0, 1);
							fVar3 = SYSTEM::TO_FLOAT(iVar7);
							fVar3 = (fVar3 / IntToFloat(Global_262145.f_11192 * 1000));
							fVar4 = (SYSTEM::TO_FLOAT(Global_262145.f_11191) * fVar3);
							fVar2 = (fVar2 + fVar4);
							func_4(iParam0, iVar0, fVar2);
							bVar5 = true;
						}
					}
				}
				else if (bVar6)
				{
					bVar5 = true;
				}
			}
			else if (bVar6)
			{
				bVar5 = true;
			}
		}
		else if (bVar6)
		{
			bVar5 = true;
		}
	}
	else if (bVar6)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bVar6)
		{
			func_3(&(Local_112.f_6[iParam0 /*204*/].f_70));
			if (iVar0 > -1)
			{
				func_11(&(Local_112.f_6[iParam0 /*204*/].f_70), 0, 1);
			}
		}
	}
}

void func_3(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_4(int iParam0, int iParam1, float fParam2)
{
	Local_112.f_6[iParam0 /*204*/].f_3[iParam1] = fParam2;
}

int func_5(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
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

float func_6(int iParam0, int iParam1)
{
	return Local_112.f_6[iParam0 /*204*/].f_3[iParam1];
}

int func_7(int iParam0)
{
	return Local_112.f_6[iParam0 /*204*/].f_2;
}

int func_8(int iParam0)
{
	return Local_112.f_6[iParam0 /*204*/].f_1;
}

int func_9(var uParam0, bool bParam1, bool bParam2)
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

void func_10(int iParam0)
{
	Local_112.f_1 = iParam0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

void func_12()
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (func_15(iVar0))
		{
			case 0:
				if (func_14(iVar0))
				{
					if (!func_18(&(Local_112.f_1.f_1)))
					{
						Local_112.f_1.f_3 = { Var1 };
						func_11(&(Local_112.f_1.f_1), 0, 1);
					}
					if (!func_18(&(Local_112.f_6[iVar0 /*204*/].f_70)))
					{
						func_11(&(Local_112.f_6[iVar0 /*204*/].f_70), 0, 1);
					}
					func_13(iVar0, 1);
					if (!MISC::IS_BIT_SET(Local_112.f_213, 2))
					{
						MISC::SET_BIT(&(Local_112.f_213), 2);
					}
				}
				break;
			
			case 1:
				if (!func_14(iVar0))
				{
					func_13(iVar0, 2);
				}
				break;
			
			case 2:
				if (func_14(iVar0))
				{
					func_13(iVar0, 1);
				}
				break;
		}
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1)
{
	Local_112.f_6[iParam0 /*204*/] = iParam1;
}

bool func_14(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_36;
}

int func_15(int iParam0)
{
	return Local_112.f_6[iParam0 /*204*/];
}

void func_16(int iParam0)
{
	Local_112 = iParam0;
}

int func_17(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

bool func_18(var uParam0)
{
	return uParam0->f_1;
}

void func_19(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_20()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	char* sVar9;
	bool bVar10;
	
	func_484();
	func_483();
	func_481();
	if (func_479())
	{
		func_357(iVar0);
	}
	func_341(141, func_356(0), &uLocal_680, SYSTEM::TO_FLOAT(Global_262145.f_11497), 1148846080, iLocal_679);
	if (func_300(0, 1))
	{
		func_299();
	}
	switch (func_665())
	{
		case 0:
			break;
		
		case 1:
			func_298();
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_264(iVar0);
				func_263(iVar0);
				func_261(iVar0);
				if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (!func_259(1, 0))
					{
						if (func_258(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
						{
							if (func_257(PLAYER::PLAYER_ID()) == 141)
							{
								if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
								{
									MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_238(1);
								}
							}
							if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
							{
								MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
							}
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!MISC::IS_BIT_SET(iLocal_117, 20))
								{
									MISC::SET_BIT(&iLocal_117, 20);
								}
							}
						}
						if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							if (func_8(iVar0) == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
							}
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
						{
							MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						}
						if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 5))
						{
							MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 5);
						}
						if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 4))
						{
							MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 4);
						}
						if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
						{
							MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
						}
						if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
						{
							MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
						}
					}
				}
				if (func_15(iVar0) == 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_117, 8))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_237())
							{
								if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!func_300(0, 0))
									{
										if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
											{
												func_236("KOTC_1STHELP", 30000);
												func_235(0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
												MISC::SET_BIT(&iLocal_117, 8);
											}
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (func_234("KOTC_1STHELP"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (!MISC::IS_BIT_SET(iLocal_117, 8))
					{
						MISC::SET_BIT(&iLocal_117, 8);
					}
				}
				if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_233(iVar0) <= 500f)
					{
						if (!MISC::IS_BIT_SET(iLocal_117, 9))
						{
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
							MISC::SET_BIT(&iLocal_117, 9);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_117, 9))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						MISC::CLEAR_BIT(&iLocal_117, 9);
					}
				}
				if (iLocal_675 != -1)
				{
					if (MISC::IS_BIT_SET(iLocal_117, 14) && func_8(iVar0) != iLocal_675)
					{
						if (!MISC::IS_BIT_SET(iLocal_117, 21))
						{
							func_232(81);
							MISC::SET_BIT(&iLocal_117, 21);
						}
					}
					else if (MISC::IS_BIT_SET(iLocal_117, 21))
					{
						MISC::CLEAR_BIT(&iLocal_117, 21);
					}
				}
				if (func_15(iVar0) != 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_117, 26))
					{
						func_206(141, 0f, 0f, 0, 0, 0, 0);
						MISC::SET_BIT(&iLocal_117, 26);
					}
					if (!MISC::IS_BIT_SET(iLocal_117, 1))
					{
						if (iLocal_675 != -1)
						{
							if (!func_300(0, 0))
							{
								if (MISC::IS_BIT_SET(iLocal_667, Local_122[iLocal_675 /*18*/].f_1))
								{
									if (!MISC::IS_BIT_SET(iLocal_669, Local_122[iLocal_675 /*18*/].f_1))
									{
										if (func_8(iVar0) != -1)
										{
											if (func_8(iVar0) != iLocal_675)
											{
												sVar1 = "KOTC_STRAP2";
												if (func_205(PLAYER::PLAYER_ID(), func_7(iVar0)))
												{
													sVar1 = "KOTC_STRAP2GN";
												}
												func_203(81, sVar1, PLAYER::GET_PLAYER_NAME(func_7(iVar0)), func_204(), -1, "KOTC_START", func_204());
											}
											else
											{
												func_202(81, "KOTC_START2", "KOTC_STRAP1", func_204(), -1, func_204(), 1, 0);
												MISC::SET_BIT(&iLocal_117, 14);
												MISC::SET_BIT(&iLocal_117, 15);
											}
										}
										else
										{
											func_202(81, "KOTC_START", "KOTC_STRAP3", func_204(), -1, func_204(), 1, 0);
										}
										MISC::SET_BIT(&iLocal_117, 1);
									}
								}
							}
						}
					}
					else if (!MISC::IS_BIT_SET(iLocal_117, 2))
					{
						if (func_201(81))
						{
							MISC::SET_BIT(&iLocal_117, 2);
						}
					}
					else if (iLocal_675 != -1)
					{
						if (func_8(iVar0) == iLocal_675)
						{
							if (!MISC::IS_BIT_SET(iLocal_117, 14))
							{
								if (!func_300(0, 0))
								{
									if (MISC::IS_BIT_SET(iLocal_667, Local_122[iLocal_675 /*18*/].f_1))
									{
										if (!MISC::IS_BIT_SET(iLocal_669, Local_122[iLocal_675 /*18*/].f_1))
										{
											func_202(81, "KOTC_START2", "KOTC_STRAP1", 1, -1, 2, 1, 0);
											MISC::SET_BIT(&iLocal_117, 14);
										}
									}
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_117, 15))
							{
								if (func_201(81))
								{
									MISC::SET_BIT(&iLocal_117, 15);
								}
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_117, 14))
							{
								MISC::CLEAR_BIT(&iLocal_117, 14);
							}
							if (MISC::IS_BIT_SET(iLocal_117, 15))
							{
								MISC::CLEAR_BIT(&iLocal_117, 15);
							}
						}
					}
					else
					{
						if (MISC::IS_BIT_SET(iLocal_117, 14))
						{
							MISC::CLEAR_BIT(&iLocal_117, 14);
						}
						if (MISC::IS_BIT_SET(iLocal_117, 15))
						{
							MISC::CLEAR_BIT(&iLocal_117, 15);
						}
					}
				}
				else
				{
					func_200();
				}
				if (func_15(iVar0) == 1)
				{
					if (func_8(iVar0) != -1)
					{
						if (iLocal_675 != -1)
						{
							if (func_8(iVar0) == iLocal_675)
							{
								if (!func_300(1, 0))
								{
									func_197("KOTC_KINGOB1", 0);
								}
								else
								{
									func_200();
								}
								if (MISC::IS_BIT_SET(iLocal_117, 10))
								{
									if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_237())
											{
												if (!func_300(0, 0))
												{
													if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (MISC::IS_BIT_SET(iLocal_117, 2))
															{
																if (!func_205(PLAYER::PLAYER_ID(), func_7(iVar0)))
																{
																	if (!MISC::IS_BIT_SET(iLocal_117, 10))
																	{
																		func_236("KOTC_YOUKNG", 30000);
																		func_235(1);
																		MISC::SET_BIT(&iLocal_117, 6);
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
							else
							{
								if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (!MISC::IS_BIT_SET(iLocal_117, 7))
									{
										if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()))
										{
											if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											{
												if (!func_237())
												{
													if (!func_300(0, 0))
													{
														if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
														{
															if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
															{
																if (MISC::IS_BIT_SET(iLocal_117, 2))
																{
																	if (!func_205(PLAYER::PLAYER_ID(), func_7(iVar0)))
																	{
																		if (!MISC::IS_BIT_SET(iLocal_117, 7))
																		{
																			func_236("KOTC_OTHRKG", 30000);
																			func_235(1);
																			MISC::SET_BIT(&iLocal_117, 7);
																		}
																	}
																	else if (!MISC::IS_BIT_SET(iLocal_117, 11))
																	{
																		func_167("KOTC_OTHRKGGN", func_195(), 1, "KOTC_KINGBLIP", func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0), -1);
																		func_235(1);
																		MISC::SET_BIT(&iLocal_117, 11);
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
								if (((func_196(iLocal_675) || MISC::IS_BIT_SET(Local_116[iLocal_675 /*5*/].f_4, 12)) && MISC::IS_BIT_SET(iLocal_668, func_8(iVar0))) && !func_300(1, 0))
								{
									if (func_205(PLAYER::PLAYER_ID(), func_7(iVar0)))
									{
										func_164("KOTC_PERMKNGb", func_7(iVar0), "KOTC_KINGNAME", 1, func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0), 0);
									}
									else
									{
										func_153("KOTC_PERMKNG", &(Local_122[func_8(iVar0) /*18*/].f_2), 0, 1);
									}
								}
								else
								{
									func_200();
								}
							}
						}
						else
						{
							func_200();
						}
					}
					else if (iLocal_675 != -1)
					{
						if (!func_300(1, 0))
						{
							if (func_258(NETWORK::PARTICIPANT_ID_TO_INT(), iVar0))
							{
								func_197("KOTC_KLLALL", 0);
							}
							else
							{
								func_197("KOTC_ENTER", 0);
							}
						}
						else
						{
							func_200();
						}
						if (!MISC::IS_BIT_SET(iLocal_117, 10))
						{
							if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!func_237())
										{
											if (!func_300(0, 0))
											{
												if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
												{
													if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
													{
														if (func_152(iVar0))
														{
															func_236("KOTC_CONTS", 30000);
															func_235(1);
															MISC::SET_BIT(&iLocal_117, 10);
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
					else
					{
						func_200();
					}
				}
				if (iLocal_675 != -1)
				{
					if (func_15(iVar0) == 2)
					{
						if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_300(1, 0))
						{
							func_197("KOTC_ENTER", 0);
						}
						else
						{
							func_200();
						}
					}
				}
				else
				{
					func_200();
				}
				func_125(iVar0);
				if (func_257(PLAYER::PLAYER_ID()) == 141)
				{
					func_89(iVar0);
				}
				func_88();
				iVar0++;
			}
			break;
		
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				func_86(iVar0);
				func_84(iVar0);
				iVar0++;
			}
			func_200();
			func_299();
			func_80();
			sVar4 = "KOTC_OVER1";
			sVar5 = "KOTC_OVER2";
			iVar7 = -1;
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_675 != -1)
				{
					if (MISC::IS_BIT_SET(iLocal_117, 20))
					{
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (Local_112.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/] == iLocal_675)
							{
								if (Local_112.f_6[iVar0 /*204*/].f_74[iVar2 /*4*/].f_3 > 0f)
								{
									iVar3 = iVar2;
									iVar7 = iVar2;
									switch (iVar2)
									{
										case 0:
											sVar5 = "KOTC1ST_STR";
											sVar4 = "KOTC_WIN1";
											bVar6 = true;
											break;
										
										case 1:
											sVar5 = "KOTC2ND_STR";
											bVar6 = true;
											break;
										
										case 2:
											sVar5 = "KOTC3RD_STR";
											bVar6 = true;
											break;
										}
									}
							}
							iVar2++;
						}
					}
				}
				func_125(iVar0);
				if (Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/] == -1)
				{
					bVar8 = true;
				}
				else if (!MISC::IS_BIT_SET(iLocal_668, Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/]))
				{
					bVar8 = true;
				}
				else if (Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3 <= 0f)
				{
					bVar8 = true;
				}
				iVar0++;
			}
			if (bVar6)
			{
				Local_113.f_5 = 1;
			}
			if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1) && func_79())
			{
				if (!MISC::IS_BIT_SET(iLocal_117, 3))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						if (func_15(iVar0) == 0)
						{
							if (!func_300(0, 0))
							{
								func_78("KOTC_NOENTRY", 1);
							}
						}
						else if (bVar8)
						{
							if (iLocal_675 != -1)
							{
								if (!func_300(0, 0))
								{
									if (!func_300(0, 0))
									{
										if (MISC::IS_BIT_SET(iLocal_667, Local_122[iLocal_675 /*18*/].f_1))
										{
											if (!MISC::IS_BIT_SET(iLocal_669, Local_122[iLocal_675 /*18*/].f_1))
											{
												if (func_196(iLocal_675))
												{
													func_202(68, "KOTC_OVER1", "KOTC_NOWIN", 1, 15000, 2, 1, 0);
												}
												else
												{
													func_78("KOTC_NOWIN", 1);
												}
											}
										}
									}
								}
							}
						}
						else if (bVar6)
						{
							if (iLocal_675 != -1)
							{
								if (!func_300(0, 0))
								{
									if (MISC::IS_BIT_SET(iLocal_667, Local_122[iLocal_675 /*18*/].f_1))
									{
										if (!MISC::IS_BIT_SET(iLocal_669, Local_122[iLocal_675 /*18*/].f_1))
										{
											if (func_196(iLocal_675))
											{
												func_76(64, func_77(Local_112.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), sVar5, sVar4, 1, 15000, -1082130432, 2);
											}
											else
											{
												func_75(sVar5, func_77(Local_112.f_6[iVar0 /*204*/].f_74[iVar7 /*4*/].f_3), 1);
											}
										}
									}
								}
							}
						}
						else if (iLocal_675 != -1)
						{
							if (!func_300(0, 0))
							{
								if (MISC::IS_BIT_SET(iLocal_667, Local_122[iLocal_675 /*18*/].f_1))
								{
									if (!MISC::IS_BIT_SET(iLocal_669, Local_122[iLocal_675 /*18*/].f_1))
									{
										if (func_196(iLocal_675))
										{
											sVar5 = "KOTC_OVER3";
											if (func_73(Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1))
											{
												sVar9 = func_63(Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											else
											{
												sVar9 = PLAYER::GET_PLAYER_NAME(Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1);
											}
											func_44(72, func_77(Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), sVar5, sVar9, sVar4, 1, 15000, 2);
										}
										else
										{
											sVar5 = "KOTC_OVER3";
											func_32(sVar5, Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_1, 1, func_77(Local_112.f_6[iVar0 /*204*/].f_74[0 /*4*/].f_3), 0, 0, 0, 1, 1, 0);
										}
									}
								}
							}
						}
						iVar0++;
					}
					if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
					{
						if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
						{
							MISC::SET_BIT(&iLocal_117, 3);
						}
					}
				}
				if (MISC::IS_BIT_SET(iLocal_117, 3))
				{
					if (!MISC::IS_BIT_SET(iLocal_117, 4))
					{
						if (iLocal_675 != -1)
						{
							if (((((((func_201(64) || func_201(72)) || func_201(68)) || !func_196(iLocal_675)) || func_300(1, 1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || func_15(0) == 0) || iLocal_675 == -1)
							{
								MISC::SET_BIT(&iLocal_117, 4);
							}
						}
						else
						{
							MISC::SET_BIT(&iLocal_117, 4);
						}
					}
				}
				if (MISC::IS_BIT_SET(iLocal_117, 4))
				{
					iVar0 = 0;
					while (iVar0 < 1)
					{
						func_620(iVar0, iVar3);
						iVar0++;
					}
				}
			}
			bVar10 = true;
			if (func_300(0, 0))
			{
				bVar10 = false;
			}
			if (func_15(0) == 0)
			{
				bVar10 = false;
			}
			if (iLocal_675 == -1)
			{
				bVar10 = false;
			}
			if (func_21(&uLocal_124, bVar10) && MISC::IS_BIT_SET(iLocal_117, 4))
			{
				if (!func_237() || HUD::IS_PAUSE_MENU_ACTIVE())
				{
					MISC::SET_BIT(&iLocal_117, 17);
					if (MISC::IS_BIT_SET(iLocal_117, 5))
					{
						MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 1);
						func_502(3);
					}
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_21(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_237()) && !(func_31(PLAYER::PLAYER_ID(), 0) && (func_30(PLAYER::PLAYER_ID()) || func_28(PLAYER::PLAYER_ID())))) && !func_25(PLAYER::PLAYER_ID()))
	{
		func_24();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_18(&(uParam0->f_3)))
			{
				func_11(&(uParam0->f_3), 0, 0);
			}
			else if (func_5(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2531497.f_4588), 0);
					func_11(&(uParam0->f_5), 0, 0);
				}
				func_11(&(uParam0->f_1), 0, 0);
				func_23(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_18(&(uParam0->f_5)))
			{
				if (func_5(&(uParam0->f_5), 3000, 0))
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
				func_22();
				func_23(uParam0, 2);
			}
			break;
		
		case 2:
			func_22();
			if (func_5(&(uParam0->f_1), 15000, 0))
			{
				if (func_234("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_23(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_5(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
				func_23(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 1);
			return 1;
	}
	return 0;
}

void func_22()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_754(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2531497.f_4588), 1);
			func_236("AMEV_LBD_HELP", -1);
			func_235(1);
			MISC::CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_24()
{
	Global_2460541 = 1;
}

int func_25(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)
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

int func_27()
{
	return -1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, 19);
}

bool func_29(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_29(iParam0, 9);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_32(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		if (!bParam6)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_41(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam8)
				{
					if (bParam9)
					{
						Var1 = { func_40(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar2, 0, Global_2507601, &Var1, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(iVar3, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar2, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_33(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_39() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_36(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_34(iParam2);
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

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_35(iVar0);
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

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_36(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

bool func_39()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_40(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_41(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_42(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_43(&cVar0);
}

var func_43(char[4] cParam0)
{
	return cParam0;
}

int func_44(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_62(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_61(uParam0, uParam0->f_17);
	func_59(uParam0);
	if (func_58())
	{
		func_59(uParam0);
	}
	if (func_57(uParam0->f_1))
	{
		func_50();
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
				func_50();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_48(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_48(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
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

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48(var uParam0, int iParam1)
{
	func_49(uParam0, iParam1);
}

void func_49(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_50()
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
	func_51();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_51()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_55(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_52(&(Global_2437549.f_3032.f_1));
}

void func_52(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_54(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_53(0);
}

void func_53(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_54(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76825, 0);
}

void func_55(var uParam0)
{
	func_56(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_56(var uParam0)
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

int func_57(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_58()
{
	return Global_2448961.f_17;
}

void func_59(var uParam0)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_72 = func_204();
	}
}

int func_60(int iParam0)
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

void func_61(var uParam0, int iParam1)
{
	if (func_60(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_27() || !func_754(iParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_168(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_62(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_27();
	uParam1->f_18 = func_27();
	uParam1->f_19 = func_27();
	uParam1->f_20 = func_27();
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

char* func_63(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_72(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_120)
	{
		sVar0 = func_67(iParam0, 0);
		return sVar0;
	}
	if (((func_29(iParam0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_66(iParam0)) && !func_65(iParam0))
	{
		return func_67(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_27())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_27())
	{
		sVar0 = func_72(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_67(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_64(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_27();
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_41(iParam0) };
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

int func_66(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_27())
	{
		Var0 = { func_41(iParam0) };
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

char* func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 1))
		{
			return func_68();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_68()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 1);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_27() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_27())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_27())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

bool func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_74(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_27();
}

int func_74(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_27())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_75(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_33(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_76(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_62(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

int func_77(float fParam0)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR(fParam0);
	iVar0 = (iVar0 / Global_262145.f_11191);
	iVar0 = (iVar0 * Global_262145.f_11191);
	return iVar0;
}

int func_78(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_33(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

bool func_79()
{
	return MISC::IS_BIT_SET(Global_1574647.f_1, 25);
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			func_81(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_510(iParam0);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (MISC::IS_BIT_SET(iLocal_118, iVar0))
	{
		HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 0), 0, func_82(iParam0, 1));
		if (iVar0 == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 1), 0, func_82(iParam0, 1));
		}
		MISC::CLEAR_BIT(&iLocal_118, iVar0);
	}
}

int func_82(int iParam0, bool bParam1)
{
	if (func_8(iParam0) <= -1)
	{
		if (bParam1)
		{
			return 21;
		}
		return 21;
	}
	else if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 9;
	}
	else if (func_205(PLAYER::PLAYER_ID(), func_7(iParam0)))
	{
		return func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
	}
	return 6;
}

int func_83(int iParam0, bool bParam1)
{
	switch (func_510(iParam0))
	{
		case 0:
			return 6;
		
		case 1:
			return 9;
		
		case 2:
			return 8;
		
		case 3:
			return 10;
		
		case 5:
			return 11;
		
		case 6:
			return 12;
		
		case 7:
			return 13;
		
		case 4:
			if (!bParam1)
			{
				return 7;
			}
			else
			{
				return 14;
			}
			break;
	}
	return 6;
}

void func_84(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(func_85(iParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_131[iParam0 /*68*/].f_28));
	}
}

var func_85(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_28;
}

void func_86(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(func_87(iParam0)))
	{
		HUD::REMOVE_BLIP(&(Local_131[iParam0 /*68*/].f_27));
	}
}

var func_87(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_27;
}

void func_88()
{
	bool bVar0;
	
	if (iLocal_675 != -1)
	{
		if (func_196(iLocal_675))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(iLocal_117, 16))
		{
			AUDIO::START_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
			MISC::SET_BIT(&iLocal_117, 16);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_117, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&iLocal_117, 16);
	}
}

void func_89(int iParam0)
{
	if (iParam0 == iParam0)
	{
		iParam0 = iParam0;
	}
	if (((((func_196(NETWORK::PARTICIPANT_ID_TO_INT()) && !func_300(1, 1)) && iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT()) && !func_110(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_109(PLAYER::PLAYER_ID())) && !func_108())
	{
		if (!MISC::IS_BIT_SET(iLocal_117, 18))
		{
			if (iLocal_679 == 0)
			{
				iLocal_679 = 1;
			}
			func_100(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_95();
			MISC::SET_BIT(&iLocal_117, 18);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_117, 18))
	{
		if (iLocal_679)
		{
			iLocal_679 = 0;
		}
		func_90();
		func_100(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		MISC::CLEAR_BIT(&iLocal_117, 18);
	}
}

void func_90()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	func_91();
	Global_2405071.f_704 = 0;
}

void func_91()
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

void func_92()
{
	if (func_93())
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

int func_93()
{
	if ((Global_2405071.f_1742 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if ((Global_2405071.f_1743 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 60)
		{
			func_98(func_510(iVar0), iVar1, &vVar2, &uVar3, &uVar4);
			func_96(vVar2, uVar3, uVar4);
			iVar1++;
		}
		iVar0++;
	}
}

void func_96(vector3 vParam0, var uParam1, var uParam2)
{
	func_97(vParam0, uParam1, uParam2);
}

void func_97(vector3 vParam0, var uParam1, var uParam2)
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
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_3 = uParam1;
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_4 = uParam2;
		Global_2405071.f_704++;
	}
}

void func_98(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1221.708f, -1849.335f, 1.251f };
					*uParam3 = 337.5771f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1237.67f, -1835.705f, 1.2517f };
					*uParam3 = 323.4358f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1249.548f, -1817.355f, 1.2506f };
					*uParam3 = 297.8504f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1248.685f, -1803.257f, 1.3833f };
					*uParam3 = 286.9426f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1248.991f, -1791.148f, 1.6577f };
					*uParam3 = 279.8152f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1255.678f, -1781.741f, 1.5292f };
					*uParam3 = 271.3008f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1245.86f, -1762.165f, 1.7061f };
					*uParam3 = 232.2266f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1245.333f, -1747.114f, 2.0783f };
					*uParam3 = 246.9348f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1231.577f, -1747.278f, 2.2692f };
					*uParam3 = 208.6838f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1220.947f, -1735.378f, 3.3682f };
					*uParam3 = 201.3756f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1210.075f, -1736.36f, 3.2672f };
					*uParam3 = 188.154f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1198.247f, -1731.74f, 3.3204f };
					*uParam3 = 194.4361f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1181.951f, -1730.004f, 3.3951f };
					*uParam3 = 177.6483f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -1170.59f, -1719.653f, 3.3414f };
					*uParam3 = 159.2419f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1159.548f, -1712.506f, 3.327f };
					*uParam3 = 173.1471f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -1164.51f, -1729.84f, 3.2972f };
					*uParam3 = 164.5387f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1153.682f, -1723.684f, 3.2673f };
					*uParam3 = 159.7204f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -1144.7f, -1734.572f, 3.2823f };
					*uParam3 = 132.856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1128.272f, -1755.871f, 3.0265f };
					*uParam3 = 111.5717f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1140.422f, -1768.454f, 3.1609f };
					*uParam3 = 108.3239f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1236.169f, -1851.284f, 1.2074f };
					*uParam3 = 330.7894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1250.026f, -1849.988f, 0.8113f };
					*uParam3 = 315.2169f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1249.307f, -1832.01f, 1.2365f };
					*uParam3 = 308.724f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1262.08f, -1826.342f, 0.88f };
					*uParam3 = 291.1317f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1262.728f, -1810.021f, 1.2095f };
					*uParam3 = 279.2619f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1260.259f, -1797.316f, 1.24f };
					*uParam3 = 266.2758f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1274.153f, -1773.825f, 1.229f };
					*uParam3 = 253.8689f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1260.69f, -1766.211f, 1.6755f };
					*uParam3 = 244.6821f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1266.035f, -1751.414f, 1.7303f };
					*uParam3 = 225.9904f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1208.952f, -1720.76f, 3.4325f };
					*uParam3 = 190.2951f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1195.125f, -1711.339f, 3.4745f };
					*uParam3 = 177.7994f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1186.983f, -1699.157f, 3.4862f };
					*uParam3 = 185.7234f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1174.999f, -1703.776f, 3.4646f };
					*uParam3 = 172.7709f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1163.133f, -1699.905f, 3.4278f };
					*uParam3 = 169.2118f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1150.336f, -1701.652f, 3.3947f };
					*uParam3 = 148.2826f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1144.078f, -1687.13f, 3.4853f };
					*uParam3 = 149.4927f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1138.136f, -1707.854f, 3.387f };
					*uParam3 = 133.8241f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1140.055f, -1722.341f, 3.3376f };
					*uParam3 = 127.5326f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1116.763f, -1746.22f, 3.1299f };
					*uParam3 = 107.5649f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1108.207f, -1735.964f, 3.2643f };
					*uParam3 = 123.7412f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1227.086f, -1873.856f, 4.935f };
					*uParam3 = 337.0957f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1215.905f, -1861.876f, 4.9443f };
					*uParam3 = 346.5332f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1206.479f, -1854.022f, 5.0039f };
					*uParam3 = 346.756f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1234.57f, -1863.302f, 0.4019f };
					*uParam3 = 334.4932f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1261.542f, -1840.843f, 0.429f };
					*uParam3 = 308.3732f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1271.821f, -1799.404f, 0.9933f };
					*uParam3 = 276.274f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1284.195f, -1789.106f, 0.6971f };
					*uParam3 = 266.1992f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1257.971f, -1736.858f, 2.0784f };
					*uParam3 = 227.487f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1247.267f, -1725.901f, 3.2245f };
					*uParam3 = 214.7514f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1234.988f, -1722.898f, 3.5186f };
					*uParam3 = 220.7502f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1235.874f, -1703.238f, 3.0997f };
					*uParam3 = 214.0405f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1231.588f, -1682.849f, 2.571f };
					*uParam3 = 203.4435f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1215.568f, -1695.777f, 3.1209f };
					*uParam3 = 196.5891f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1132.415f, -1669.435f, 3.5755f };
					*uParam3 = 148.2112f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1159.309f, -1677.777f, 3.4694f };
					*uParam3 = 175.6314f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1129.18f, -1690.502f, 3.4678f };
					*uParam3 = 143.3497f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1119.669f, -1702.988f, 3.4241f };
					*uParam3 = 129.3894f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1120.063f, -1717.326f, 3.3807f };
					*uParam3 = 123.5869f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1111.901f, -1758.692f, 4.7663f };
					*uParam3 = 93.7592f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1122.059f, -1769.543f, 4.9921f };
					*uParam3 = 93.2178f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1692.861f, -80.4741f, 174.6247f };
					*uParam3 = 22.7116f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 1699.049f, -73.278f, 175.3116f };
					*uParam3 = 36.6067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 1686.15f, -72.261f, 173.9488f };
					*uParam3 = 33.5969f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 1673.573f, -76.8662f, 172.6441f };
					*uParam3 = 358.3647f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 1668.303f, -68.8711f, 172.6008f };
					*uParam3 = 344.7672f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 1664.004f, -81.4696f, 171.3247f };
					*uParam3 = 335.9399f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 1653.943f, -82.7018f, 170.2733f };
					*uParam3 = 316.5097f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 1642.184f, 16.9022f, 172.8744f };
					*uParam3 = 213.6659f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 1647.117f, 26.0881f, 172.469f };
					*uParam3 = 200.4823f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 1643.251f, 34.2645f, 171.8502f };
					*uParam3 = 198.3856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 1652.155f, 38.4683f, 171.5731f };
					*uParam3 = 167.6548f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 1647.521f, 46.6361f, 171.515f };
					*uParam3 = 173.6852f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 1658.341f, 46.5354f, 171.4155f };
					*uParam3 = 142.775f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 1654.557f, 54.9274f, 171.5186f };
					*uParam3 = 158.0565f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 1679.687f, -62.2895f, 172.8752f };
					*uParam3 = 19.1425f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 1648.26f, -92.0332f, 169.0467f };
					*uParam3 = 320.4252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 1641.12f, -90.8545f, 167.3707f };
					*uParam3 = 340.133f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 1632.839f, -88.4347f, 166.232f };
					*uParam3 = 275.8517f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 1624.526f, -82.0814f, 165.1201f };
					*uParam3 = 268.6114f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 1709.025f, -79.3046f, 176.215f };
					*uParam3 = 47.9711f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 1709.47f, -89.1149f, 176.8704f };
					*uParam3 = 45.0986f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 1719.762f, -89.4824f, 177.2371f };
					*uParam3 = 40.521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 1715.411f, -97.7661f, 177.0435f };
					*uParam3 = 39.9521f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 1725.27f, -101.2808f, 177.3414f };
					*uParam3 = 28.2699f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 1664.762f, 51.6959f, 171.2758f };
					*uParam3 = 125.1599f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 1659.656f, 60.4243f, 171.7457f };
					*uParam3 = 155.8516f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 1671.615f, 58.2652f, 171.0533f };
					*uParam3 = 130.5652f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 1670.401f, 68.8127f, 170.8255f };
					*uParam3 = 142.8485f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 1680.824f, 64.6627f, 170.8684f };
					*uParam3 = 171.7255f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 1686.476f, 72.1055f, 170.6706f };
					*uParam3 = 118.2492f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 1724.498f, 78.3834f, 169.7617f };
					*uParam3 = 122.1907f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 1716.555f, 77.9f, 170.125f };
					*uParam3 = 133.2787f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 1718.658f, 69.3794f, 169.7158f };
					*uParam3 = 123.6501f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 1708.223f, 67.7488f, 170.122f };
					*uParam3 = 125.7215f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 1696.666f, 67.5787f, 170.4112f };
					*uParam3 = 130.5078f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 1688.924f, 64.4787f, 170.5247f };
					*uParam3 = 116.7526f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 1654.409f, 85.3155f, 178.6964f };
					*uParam3 = 185.1295f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 1642.521f, 61.9855f, 183.7891f };
					*uParam3 = 187.6025f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 1663.522f, 37.8715f, 170.7838f };
					*uParam3 = 181.9699f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 1663.431f, 25.7403f, 167.747f };
					*uParam3 = 165.7094f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 1660.156f, 12.794f, 165.1707f };
					*uParam3 = 184.4829f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 1658.881f, -53.3581f, 167.4092f };
					*uParam3 = 340.2356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 1650.805f, -63.341f, 163.7801f };
					*uParam3 = 325.3763f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 1619.019f, -87.1216f, 164.7846f };
					*uParam3 = 285.7851f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 1616.216f, -76.6892f, 164.2788f };
					*uParam3 = 277.6688f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 1611.567f, -84.1719f, 164.6911f };
					*uParam3 = 279.2012f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 1606.564f, -73.1815f, 163.3484f };
					*uParam3 = 256.1666f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 1595.997f, -78.4415f, 162.1879f };
					*uParam3 = 273.5168f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 1596.441f, -69.8807f, 162.1016f };
					*uParam3 = 260.1767f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 1587.161f, -67.6343f, 161.2196f };
					*uParam3 = 253.1009f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 1582.353f, -76.1702f, 160.4171f };
					*uParam3 = 265.3223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 1725.676f, -110.6558f, 177.8831f };
					*uParam3 = 34.6784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 1736.203f, -108.6194f, 179.2085f };
					*uParam3 = 50.2519f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 1746.135f, -106.5357f, 180.7151f };
					*uParam3 = 65.9975f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 1749.594f, -96.7965f, 182.065f };
					*uParam3 = 79.3328f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 1758.513f, -98.7928f, 182.982f };
					*uParam3 = 82.5892f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 1760.473f, -88.7761f, 184.3481f };
					*uParam3 = 83.4158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 1770.153f, -89.9473f, 186.0895f };
					*uParam3 = 69.9826f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 1772.731f, -80.3556f, 187.6041f };
					*uParam3 = 87.3442f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 1782.038f, -81.4923f, 188.8666f };
					*uParam3 = 92.9392f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -358.9362f, 6101.992f, 30.5445f };
					*uParam3 = 124.1256f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -348.5437f, 6102.846f, 30.5442f };
					*uParam3 = 115.8979f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -354.9039f, 6112.223f, 30.5402f };
					*uParam3 = 155.6832f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -341.2615f, 6111.447f, 30.542f };
					*uParam3 = 114.7182f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -347.4731f, 6120.339f, 30.5401f };
					*uParam3 = 161.4131f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -376.9227f, 6129.001f, 30.5322f };
					*uParam3 = 153.5222f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -384.3775f, 6136.947f, 30.4047f };
					*uParam3 = 187.2874f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -389.1951f, 6129.617f, 30.5795f };
					*uParam3 = 181.9189f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -399.0005f, 6127.275f, 30.549f };
					*uParam3 = 204.8398f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -383.5045f, 6120.464f, 30.5795f };
					*uParam3 = 140.9251f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -391.13f, 6120.804f, 30.4824f };
					*uParam3 = 201.1372f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -402.7893f, 6117.366f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -412.6236f, 6114.75f, 30.403f };
					*uParam3 = 226.6899f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -394.3771f, 6111.254f, 30.4438f };
					*uParam3 = 239.3517f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -389.6141f, 6105.142f, 30.5445f };
					*uParam3 = 223.9884f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -393.7008f, 6063.039f, 30.6001f };
					*uParam3 = 307.3006f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { -390.5935f, 6052.42f, 30.6001f };
					*uParam3 = 318.0318f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { -370.7218f, 6062.16f, 30.6001f };
					*uParam3 = 22.496f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { -360.3093f, 6063.834f, 30.6001f };
					*uParam3 = 37.8362f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { -342.4209f, 6079.654f, 30.3972f };
					*uParam3 = 68.9811f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { -341.2047f, 6070.171f, 30.4855f };
					*uParam3 = 63.9301f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -329.9387f, 6066.402f, 30.3113f };
					*uParam3 = 44.5343f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -335.7858f, 6122.277f, 31.2548f };
					*uParam3 = 129.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -342.0471f, 6128.171f, 31.2548f };
					*uParam3 = 142.1917f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -349.7313f, 6135.283f, 31.2548f };
					*uParam3 = 158.8037f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -356.2828f, 6125.203f, 30.5402f };
					*uParam3 = 199.7626f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -359.0895f, 6139.214f, 30.5635f };
					*uParam3 = 124.4663f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -369.4224f, 6152.725f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -375.9839f, 6141.022f, 30.4406f };
					*uParam3 = 161.3973f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -369.7337f, 6134.166f, 30.5525f };
					*uParam3 = 136.8736f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -359.228f, 6073.3f, 30.5975f };
					*uParam3 = 40.8648f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { -350.0499f, 6083.418f, 30.3773f };
					*uParam3 = 81.9925f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { -332.9335f, 6056.562f, 30.218f };
					*uParam3 = 34.6386f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { -319.7262f, 6071.655f, 30.4404f };
					*uParam3 = 98.0741f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { -305.5597f, 6086.671f, 30.3145f };
					*uParam3 = 105.1401f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { -315.9f, 6098.8f, 30.5622f };
					*uParam3 = 68.0701f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { -321.8067f, 6105.211f, 30.5847f };
					*uParam3 = 77.1148f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { -333.3944f, 6102.061f, 30.5452f };
					*uParam3 = 94.9811f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { -328.1533f, 6111.544f, 30.5992f };
					*uParam3 = 112.3565f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { -346.6402f, 6170.479f, 30.5104f };
					*uParam3 = 153.9383f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { -348.4091f, 6161.741f, 30.5903f };
					*uParam3 = 127.3381f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -357.501f, 6164.666f, 30.3218f };
					*uParam3 = 165.9396f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -362.3921f, 6158.998f, 30.4267f };
					*uParam3 = 164.6814f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -299.2778f, 6094.682f, 30.3967f };
					*uParam3 = 97.7633f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -403.1499f, 6144.179f, 30.5344f };
					*uParam3 = 192.2655f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -419.8507f, 6128.894f, 30.3768f };
					*uParam3 = 226.1505f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -403.4776f, 6109.125f, 30.432f };
					*uParam3 = 231.4631f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -418.8898f, 6102.594f, 30.5063f };
					*uParam3 = 250.378f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -423.8823f, 6087.721f, 30.3067f };
					*uParam3 = 249.7169f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -409.3334f, 6087.301f, 30.6001f };
					*uParam3 = 255.2337f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -415.4413f, 6074.564f, 30.6001f };
					*uParam3 = 295.8184f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -424.9092f, 6072.749f, 30.4263f };
					*uParam3 = 283.0375f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -420.9166f, 6060.098f, 30.5557f };
					*uParam3 = 253.9669f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -410.8875f, 6060.549f, 30.6001f };
					*uParam3 = 233.6391f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -401.7228f, 6048.293f, 30.6001f };
					*uParam3 = 316.9792f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -410.8336f, 6049.957f, 30.7181f };
					*uParam3 = 282.7038f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -388.0199f, 6039.768f, 30.5993f };
					*uParam3 = 17.0043f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -395.2367f, 6033.086f, 30.6906f };
					*uParam3 = 344.4481f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -385.8562f, 6026.026f, 30.7199f };
					*uParam3 = 19.855f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -380.7711f, 6033.284f, 30.5989f };
					*uParam3 = 40.8827f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -692.3021f, 5591.033f, 31.803f };
					*uParam3 = 74.8653f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -688.3215f, 5575.978f, 38.7867f };
					*uParam3 = 59.0735f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -697.7473f, 5566.13f, 37.8698f };
					*uParam3 = 50.5049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -707.0853f, 5561.903f, 37.7135f };
					*uParam3 = 46.5953f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -718.0601f, 5562.404f, 35.1231f };
					*uParam3 = 35.9231f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -729.6589f, 5559.356f, 33.8316f };
					*uParam3 = 2.3291f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -723.8281f, 5544.737f, 34.8933f };
					*uParam3 = 18.3278f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -780.6183f, 5563.971f, 32.6778f };
					*uParam3 = 329.6704f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -767.3f, 5569.303f, 35.3f };
					*uParam3 = 331.3245f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -772.2f, 5581.6f, 32.6824f };
					*uParam3 = 301.3555f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -778.3644f, 5588.715f, 32.6826f };
					*uParam3 = 270.8067f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -768.7381f, 5595.103f, 32.6827f };
					*uParam3 = 230.1011f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -782.3171f, 5573.262f, 32.6847f };
					*uParam3 = 294.6598f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -781.341f, 5582.1f, 32.6771f };
					*uParam3 = 336.2302f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -753.9799f, 5627.107f, 27.1403f };
					*uParam3 = 171.4856f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -730.2549f, 5635.994f, 27.8518f };
					*uParam3 = 162.9716f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -723.6004f, 5622.383f, 28.385f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -718.595f, 5631.016f, 27.7666f };
					*uParam3 = 172.2795f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -708.1818f, 5621.512f, 29.6452f };
					*uParam3 = 126.8752f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -696.5601f, 5615.674f, 29.9981f };
					*uParam3 = 125.8635f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -708.3126f, 5550.206f, 36.7429f };
					*uParam3 = 29.6831f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -766.3f, 5544.3f, 32.6826f };
					*uParam3 = 30.2344f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -749.5f, 5527.9f, 33.1f };
					*uParam3 = 346.3935f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -768.97f, 5520.835f, 32.6799f };
					*uParam3 = 340.5899f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -763.8516f, 5533.312f, 32.6785f };
					*uParam3 = 1.7896f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -775.123f, 5542.04f, 32.6934f };
					*uParam3 = 349.4598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -766.6f, 5553.1f, 34.4f };
					*uParam3 = 1.046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -771.2969f, 5556.745f, 32.6834f };
					*uParam3 = 349.9529f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -781.6904f, 5555.604f, 32.6802f };
					*uParam3 = 351.5664f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -769.5516f, 5621.658f, 26.7823f };
					*uParam3 = 235.7381f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -761.2958f, 5636.444f, 25.4519f };
					*uParam3 = 168.4409f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -760.2766f, 5661.296f, 22.954f };
					*uParam3 = 164.5044f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -741.7708f, 5648.583f, 25.8433f };
					*uParam3 = 171.5803f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -731.1522f, 5650.561f, 27.2619f };
					*uParam3 = 172.6602f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -721.4506f, 5664.842f, 26.6086f };
					*uParam3 = 175.8839f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -719.6653f, 5647.082f, 28.1182f };
					*uParam3 = 166.6596f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -708.6494f, 5641.488f, 29.7045f };
					*uParam3 = 139.2498f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -698.6087f, 5635.278f, 31.1732f };
					*uParam3 = 130.991f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -764.6f, 5648.1f, 23.8802f };
					*uParam3 = 183.034f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -750.9f, 5666.5f, 23.3295f };
					*uParam3 = 231.3595f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -719.377f, 5680.363f, 25.3398f };
					*uParam3 = 160.6696f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -698.3569f, 5694.537f, 26.6459f };
					*uParam3 = 147.8193f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -680.2346f, 5676.271f, 30.6741f };
					*uParam3 = 86.9398f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -676.3746f, 5655.031f, 32.0498f };
					*uParam3 = 139.4649f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -680.2036f, 5638.799f, 32.6927f };
					*uParam3 = 134.8275f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -650.3818f, 5653.84f, 33.0871f };
					*uParam3 = 123.0167f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -670.8715f, 5583.509f, 38.7761f };
					*uParam3 = 85.3828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -743.9585f, 5544.044f, 32.6886f };
					*uParam3 = 10.6683f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -786.1422f, 5543.069f, 32.7461f };
					*uParam3 = 320.9388f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -800.3854f, 5544.438f, 32.1822f };
					*uParam3 = 318.5256f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -808.8489f, 5557.178f, 31.0331f };
					*uParam3 = 284.0945f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -804.6185f, 5577.981f, 30.1522f };
					*uParam3 = 312.7694f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -804.7294f, 5593.23f, 28.3762f };
					*uParam3 = 257.0917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -796.4553f, 5614.668f, 26.6406f };
					*uParam3 = 245.4986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -790.2338f, 5632.483f, 25.0732f };
					*uParam3 = 224.0737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -807.922f, 5624.847f, 24.5138f };
					*uParam3 = 240.116f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -778.2f, 5620.3f, 27f };
					*uParam3 = 221.8036f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -820.9523f, 5595.459f, 24.6204f };
					*uParam3 = 248.8524f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -712.2f, 5689.9f, 26f };
					*uParam3 = 156.9858f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -699.6256f, 5678.481f, 29.242f };
					*uParam3 = 137.245f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2504.708f, 3832.864f, 44.2233f };
					*uParam3 = 183.6139f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 2470.234f, 3832.214f, 39.2978f };
					*uParam3 = 221.0469f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 2469.984f, 3815.587f, 39.1223f };
					*uParam3 = 236.1043f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 2472.682f, 3802.595f, 39.5029f };
					*uParam3 = 252.6169f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 2448.337f, 3799.731f, 39.2155f };
					*uParam3 = 245.4931f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 2429.278f, 3803.292f, 38.8134f };
					*uParam3 = 251.2017f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 2461.768f, 3786.931f, 40.1218f };
					*uParam3 = 273.0054f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 2446.433f, 3784.864f, 39.6849f };
					*uParam3 = 253.3649f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 2431.84f, 3775.977f, 39.5771f };
					*uParam3 = 262.8813f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 2426.948f, 3759.106f, 40.5694f };
					*uParam3 = 286.9683f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 2413.091f, 3747.124f, 40.6396f };
					*uParam3 = 291.6124f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 2435.193f, 3749.984f, 41.1655f };
					*uParam3 = 292.603f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 2447.66f, 3752.583f, 41.4906f };
					*uParam3 = 297.6301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 2458.258f, 3758.142f, 41.1153f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 2467.802f, 3750.602f, 41.4918f };
					*uParam3 = 303.2986f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 2473.253f, 3734.285f, 41.4643f };
					*uParam3 = 319.8912f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { 2474.793f, 3718.189f, 43.5229f };
					*uParam3 = 353.5786f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { 2494.569f, 3724.297f, 42.2386f };
					*uParam3 = 354.6885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { 2336.604f, 3786.805f, 35.4554f };
					*uParam3 = 271.7747f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 19:
					*uParam2 = { 2449.885f, 3769.517f, 40.3259f };
					*uParam3 = 284.606f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { 2486.191f, 3708.932f, 42.8584f };
					*uParam3 = 338.9825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 2441.525f, 3726.493f, 49.833f };
					*uParam3 = 305.777f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { 2435.716f, 3718.48f, 50.9846f };
					*uParam3 = 316.2304f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 2414.73f, 3734.144f, 41.656f };
					*uParam3 = 304.645f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 2397.829f, 3753.812f, 38.2667f };
					*uParam3 = 277.5322f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 2413.961f, 3768.889f, 38.9386f };
					*uParam3 = 262.8003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 2418.116f, 3784.66f, 38.7937f };
					*uParam3 = 271.0046f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 2402.416f, 3792.671f, 38.1692f };
					*uParam3 = 252.6272f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 2392.174f, 3800.214f, 37.3174f };
					*uParam3 = 233.5119f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 2379.034f, 3800.104f, 36.6627f };
					*uParam3 = 253.7779f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 2421.42f, 3819.218f, 36.6498f };
					*uParam3 = 240.598f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { 2433.665f, 3833.4f, 36.8711f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { 2446.784f, 3840.43f, 36.9341f };
					*uParam3 = 232.4636f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { 2462.195f, 3846.708f, 37.3552f };
					*uParam3 = 199.2328f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { 2477.133f, 3855.754f, 37.2602f };
					*uParam3 = 202.825f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { 2450.037f, 3811.51f, 39.475f };
					*uParam3 = 250.1392f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { 2485.065f, 3829.442f, 39.1108f };
					*uParam3 = 211.7988f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { 2484.83f, 3814.141f, 39.3918f };
					*uParam3 = 229.5693f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { 2566.085f, 3806.854f, 64.6304f };
					*uParam3 = 105.4003f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { 2585.664f, 3806.854f, 71.7304f };
					*uParam3 = 110.9439f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { 2620.499f, 3798.988f, 78.4414f };
					*uParam3 = 80.1436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 2612.831f, 3816.725f, 77.148f };
					*uParam3 = 105.885f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 2481.003f, 3874.722f, 38.2954f };
					*uParam3 = 168.6165f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 2439.931f, 3869.727f, 36.8359f };
					*uParam3 = 194.6768f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 2415.056f, 3867.74f, 36.4367f };
					*uParam3 = 227.8888f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 2405.057f, 3840.129f, 37.6172f };
					*uParam3 = 237.4134f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 2402.643f, 3831.987f, 37.3666f };
					*uParam3 = 243.847f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 2393.434f, 3820.804f, 37.399f };
					*uParam3 = 274.6625f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 2379.645f, 3814.471f, 37.141f };
					*uParam3 = 261.4475f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 2362.336f, 3795.185f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 2347.031f, 3771.605f, 36.6862f };
					*uParam3 = 270.3616f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 2390.352f, 3771.605f, 37.0186f };
					*uParam3 = 277.3893f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 2376.869f, 3747.89f, 43.6471f };
					*uParam3 = 283.6571f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 2397.29f, 3720.224f, 45.2658f };
					*uParam3 = 309.3541f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 2389.842f, 3708.438f, 48.8025f };
					*uParam3 = 328.7773f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 2414.263f, 3688.072f, 55.1156f };
					*uParam3 = 318.0387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 2425.977f, 3703.052f, 52.2051f };
					*uParam3 = 321.8817f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 2457.983f, 3723.803f, 47.774f };
					*uParam3 = 320.001f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 2467.429f, 3686.109f, 46.7001f };
					*uParam3 = 326.4034f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 2500.671f, 3701.153f, 40.9656f };
					*uParam3 = 343.9347f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -393.9336f, 1106.463f, 324.963f };
					*uParam3 = 3.7402f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -410.0362f, 1109.404f, 324.9667f };
					*uParam3 = 333.049f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -428.784f, 1115.099f, 325.868f };
					*uParam3 = 300.9811f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -447.0386f, 1119.385f, 324.9694f };
					*uParam3 = 291.3791f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -442.3369f, 1130.731f, 324.9604f };
					*uParam3 = 277.1605f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -440.9719f, 1142.607f, 324.9557f };
					*uParam3 = 250.3044f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -446.4467f, 1154.628f, 325.0045f };
					*uParam3 = 248.4445f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -434.5363f, 1160.321f, 324.9632f };
					*uParam3 = 230.0039f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -424.4414f, 1172.293f, 325.0043f };
					*uParam3 = 219.6946f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -421.9871f, 1161.774f, 325.0063f };
					*uParam3 = 219.721f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -427.4456f, 1148.051f, 325.0044f };
					*uParam3 = 230.6394f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -428.7997f, 1136.869f, 325.0044f };
					*uParam3 = 260.5906f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -431.5406f, 1126.397f, 325.0403f };
					*uParam3 = 280.8301f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { -416.0247f, 1120.771f, 324.9593f };
					*uParam3 = 308.4634f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -419.4272f, 1131.455f, 325.0045f };
					*uParam3 = 267.8754f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { -418.7003f, 1142.939f, 324.962f };
					*uParam3 = 234.7959f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -408.7494f, 1158.555f, 325.0084f };
					*uParam3 = 202.298f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 17:
					*uParam2 = { -411.2803f, 1169.951f, 324.9431f };
					*uParam3 = 205.6539f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -398.8847f, 1164.101f, 325.0133f };
					*uParam3 = 184.3107f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -388.1964f, 1173.05f, 324.8147f };
					*uParam3 = 166.4872f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -368.8524f, 1165.414f, 324.8589f };
					*uParam3 = 143.9187f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -378.9884f, 1168.124f, 324.9442f };
					*uParam3 = 138.8804f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -386.2831f, 1186.969f, 324.8583f };
					*uParam3 = 168.679f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -424.0227f, 1207.077f, 324.8583f };
					*uParam3 = 192.8885f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -425.9954f, 1196.52f, 324.8583f };
					*uParam3 = 182.6931f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -400.9391f, 1177.741f, 324.7394f };
					*uParam3 = 183.8522f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -414.3408f, 1178.525f, 324.7417f };
					*uParam3 = 190.7249f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -424.777f, 1183.848f, 324.7417f };
					*uParam3 = 204.1173f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -438.3099f, 1184.969f, 324.9972f };
					*uParam3 = 216.3494f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -440.8298f, 1174.33f, 324.9674f };
					*uParam3 = 236.8431f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -450.9589f, 1165.905f, 324.9547f };
					*uParam3 = 238.6017f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -459.008f, 1156.905f, 324.9622f };
					*uParam3 = 235.1455f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -466.6086f, 1151.548f, 324.9625f };
					*uParam3 = 262.671f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -463.0775f, 1140.172f, 325.0044f };
					*uParam3 = 255.8193f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -453.6404f, 1141.622f, 325.0044f };
					*uParam3 = 270.7759f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -468.3044f, 1126.492f, 324.9643f };
					*uParam3 = 263.469f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -457.6102f, 1126.904f, 324.9546f };
					*uParam3 = 262.384f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -385.6385f, 1102.252f, 324.7293f };
					*uParam3 = 25.2881f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -383.8219f, 1093.566f, 324.3149f };
					*uParam3 = 2.7963f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -390.1671f, 1092.119f, 325.2136f };
					*uParam3 = 20.6423f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -399.5618f, 1081.56f, 326.7102f };
					*uParam3 = 304.4997f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -390.9579f, 1075.828f, 323.3234f };
					*uParam3 = 339.4828f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -386.3601f, 1084.166f, 323.7919f };
					*uParam3 = 354.7784f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -343.6368f, 1155.187f, 324.7273f };
					*uParam3 = 115.9307f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -350.9581f, 1163.98f, 324.5156f };
					*uParam3 = 116.0754f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -359.8979f, 1158.566f, 324.6362f };
					*uParam3 = 120.9973f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -399.4072f, 1196.483f, 324.7383f };
					*uParam3 = 182.8968f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -400.8836f, 1210.983f, 325.0406f };
					*uParam3 = 195.0742f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -381.3676f, 1203.004f, 324.8555f };
					*uParam3 = 162.6808f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -377.298f, 1218.699f, 324.8556f };
					*uParam3 = 161.6516f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -416.3955f, 1238.681f, 324.8614f };
					*uParam3 = 196.7896f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -420.2233f, 1223.627f, 324.8551f };
					*uParam3 = 195.917f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -449.2621f, 1187.425f, 324.988f };
					*uParam3 = 245.0986f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -462.3227f, 1187.615f, 324.7824f };
					*uParam3 = 250.3676f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -472.915f, 1142.98f, 324.9524f };
					*uParam3 = 260.1427f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -476.2405f, 1120.76f, 324.9513f };
					*uParam3 = 281.8387f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -480.6375f, 1107.113f, 324.9517f };
					*uParam3 = 330.5185f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -467.9135f, 1119.13f, 324.975f };
					*uParam3 = 291.4161f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -472.083f, 1186.256f, 324.4922f };
					*uParam3 = 248.7844f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -336.9653f, 1155.261f, 324.8132f };
					*uParam3 = 116.8097f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 457.789f, -1306.329f, 28.3817f };
					*uParam3 = 213.4484f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { 462.9742f, -1315.816f, 28.3365f };
					*uParam3 = 211.6687f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { 491.3282f, -1343.662f, 28.3462f };
					*uParam3 = 29.1021f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { 488.5634f, -1353.807f, 28.365f };
					*uParam3 = 350.4963f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { 489.778f, -1362.178f, 28.3936f };
					*uParam3 = 333.8013f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { 487.9373f, -1371.324f, 28.3937f };
					*uParam3 = 350.2063f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { 491.692f, -1377.681f, 28.4808f };
					*uParam3 = 6.2341f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { 508.4521f, -1332.725f, 28.8217f };
					*uParam3 = 81.6066f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { 482.3437f, -1302.914f, 28.3646f };
					*uParam3 = 185.9192f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { 489.6881f, -1306.12f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { 486.8906f, -1314.552f, 28.3349f };
					*uParam3 = 201.3654f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { 510.3459f, -1328.159f, 28.4041f };
					*uParam3 = 38.9104f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { 503.6635f, -1316.644f, 28.254f };
					*uParam3 = 78.5885f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 13:
					*uParam2 = { 498.5652f, -1306.801f, 28.375f };
					*uParam3 = 181.4375f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { 494.3388f, -1296.788f, 27.8975f };
					*uParam3 = 181.588f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 15:
					*uParam2 = { 445.3724f, -1312.777f, 33.034f };
					*uParam3 = 231.2194f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 16:
					*uParam2 = { 494.6642f, -1289.089f, 28.3994f };
					*uParam3 = 190.9093f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 17:
					*uParam2 = { 512.1788f, -1296.798f, 29.0244f };
					*uParam3 = 127.6323f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 18:
					*uParam2 = { 516.3178f, -1306.591f, 29.0325f };
					*uParam3 = 105.4519f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 19:
					*uParam2 = { 522.4741f, -1315.716f, 28.6153f };
					*uParam3 = 86.1907f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 20:
					*uParam2 = { 530.4f, -1324.764f, 28.611f };
					*uParam3 = 86.0417f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { 512.5676f, -1266.132f, 29.2571f };
					*uParam3 = 138.7522f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 22:
					*uParam2 = { 503.5058f, -1408.527f, 28.4094f };
					*uParam3 = 38.8401f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { 494.4435f, -1405.518f, 28.4094f };
					*uParam3 = 10.3526f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { 480.3399f, -1404.552f, 28.3783f };
					*uParam3 = 327.4608f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { 486.9532f, -1397.729f, 28.4044f };
					*uParam3 = 9.2252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { 478.9936f, -1390.911f, 28.4649f };
					*uParam3 = 301.6067f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { 491.3508f, -1387.024f, 28.4781f };
					*uParam3 = 349.894f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { 423.8583f, -1342.402f, 34.9472f };
					*uParam3 = 261.565f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { 436.9487f, -1354.909f, 32.8767f };
					*uParam3 = 281.1848f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { 418.0431f, -1351.691f, 30.4924f };
					*uParam3 = 242.0479f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 31:
					*uParam2 = { 420.5738f, -1360.155f, 31.3616f };
					*uParam3 = 258.2115f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 32:
					*uParam2 = { 427.6197f, -1367.648f, 32.4927f };
					*uParam3 = 295.2934f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 33:
					*uParam2 = { 464.2118f, -1407.325f, 28.4406f };
					*uParam3 = 264.6266f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 34:
					*uParam2 = { 473.348f, -1411.325f, 28.4462f };
					*uParam3 = 282.62f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 35:
					*uParam2 = { 482.7524f, -1415.458f, 28.2625f };
					*uParam3 = 321.8356f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 36:
					*uParam2 = { 495.2037f, -1418.058f, 28.2691f };
					*uParam3 = 7.1158f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 37:
					*uParam2 = { 503.2256f, -1399.498f, 29.6255f };
					*uParam3 = 163.0629f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 38:
					*uParam2 = { 504.0861f, -1418.874f, 28.399f };
					*uParam3 = 19.1681f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 39:
					*uParam2 = { 515.1004f, -1418.266f, 28.4334f };
					*uParam3 = 70.436f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 40:
					*uParam2 = { 526.7444f, -1417.327f, 28.3217f };
					*uParam3 = 77.2632f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { 537.8759f, -1339.477f, 28.7478f };
					*uParam3 = 32.234f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { 523.1588f, -1342.832f, 28.402f };
					*uParam3 = 44.3382f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { 516.2181f, -1333.808f, 28.4019f };
					*uParam3 = 42.2223f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { 545.4319f, -1321.294f, 28.8519f };
					*uParam3 = 82.4327f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { 543.2325f, -1310.26f, 29.2949f };
					*uParam3 = 90.2737f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { 519.066f, -1293.935f, 27.1144f };
					*uParam3 = 165.5317f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { 526.7755f, -1289.459f, 29.7686f };
					*uParam3 = 143.1124f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { 523.58f, -1272.328f, 30.0824f };
					*uParam3 = 138.49f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { 524.081f, -1260.682f, 29.5842f };
					*uParam3 = 132.1786f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { 517.0681f, -1239.373f, 29.9303f };
					*uParam3 = 154.6133f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { 516.2507f, -1253.02f, 29.6427f };
					*uParam3 = 162.9373f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { 513.244f, -1278.351f, 29.7743f };
					*uParam3 = 150.8734f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { 493.7339f, -1268.213f, 28.392f };
					*uParam3 = 179.546f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { 494.1401f, -1281.491f, 28.394f };
					*uParam3 = 175.0507f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { 555.4178f, -1356.743f, 28.7709f };
					*uParam3 = 50.8085f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { 475.9386f, -1304.794f, 32.0473f };
					*uParam3 = 112.0399f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { 465.516f, -1301.604f, 32.0473f };
					*uParam3 = 189.1235f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { 440.8456f, -1321.148f, 30.3086f };
					*uParam3 = 235.1875f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { 421.228f, -1316.188f, 30.3078f };
					*uParam3 = 236.0292f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1432.451f, 236.9887f, 59.1671f };
					*uParam3 = 127.6804f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 1:
					*uParam2 = { -1434.54f, 243.4075f, 59.3382f };
					*uParam3 = 176.5221f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 2:
					*uParam2 = { -1425.965f, 233.6748f, 58.9327f };
					*uParam3 = 67.1914f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 3:
					*uParam2 = { -1431.833f, 176.7196f, 55.6359f };
					*uParam3 = 115.4533f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 4:
					*uParam2 = { -1436.571f, 168.3388f, 54.8029f };
					*uParam3 = 42.4646f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 5:
					*uParam2 = { -1441.14f, 162.3594f, 54.1846f };
					*uParam3 = 5.2323f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 6:
					*uParam2 = { -1526.297f, 160.2353f, 53.2037f };
					*uParam3 = 277.6807f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 7:
					*uParam2 = { -1518.497f, 145.7663f, 54.7527f };
					*uParam3 = 310.257f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 8:
					*uParam2 = { -1506.654f, 132.8194f, 54.7529f };
					*uParam3 = 324.8665f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 9:
					*uParam2 = { -1495.287f, 118.9496f, 54.7569f };
					*uParam3 = 328.5237f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 10:
					*uParam2 = { -1482.5f, 114.8686f, 54.589f };
					*uParam3 = 341.3174f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 11:
					*uParam2 = { -1465.16f, 114.8327f, 52.2589f };
					*uParam3 = 357.6763f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 12:
					*uParam2 = { -1451.507f, 64.7578f, 51.4041f };
					*uParam3 = 91.7588f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 13:
					*uParam2 = { -1461.18f, 63.8165f, 51.8802f };
					*uParam3 = 26.7651f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 14:
					*uParam2 = { -1502.689f, 44.4251f, 53.8926f };
					*uParam3 = 308.9227f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 15:
					*uParam2 = { -1470.511f, 65.7823f, 52.315f };
					*uParam3 = 20.0152f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 16:
					*uParam2 = { -1485.597f, 73.3039f, 53.7206f };
					*uParam3 = 353.3321f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 17:
					*uParam2 = { -1598.528f, 149.7495f, 58.6949f };
					*uParam3 = 277.3246f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 18:
					*uParam2 = { -1583.425f, 155.9397f, 57.9714f };
					*uParam3 = 236.3493f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 19:
					*uParam2 = { -1561.721f, 153.229f, 56.9434f };
					*uParam3 = 282.9456f;
					*uParam4 = func_99(iParam0, 0);
					break;
				
				case 20:
					*uParam2 = { -1597.874f, 138.8909f, 58.9224f };
					*uParam3 = 291.1977f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 21:
					*uParam2 = { -1624.61f, 118.2495f, 60.9528f };
					*uParam3 = 286.5444f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 22:
					*uParam2 = { -1635.546f, 98.7833f, 61.5816f };
					*uParam3 = 307.8016f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 23:
					*uParam2 = { -1615.593f, 74.5104f, 60.5005f };
					*uParam3 = 358.8846f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 24:
					*uParam2 = { -1623.266f, 72.784f, 60.7418f };
					*uParam3 = 303.1707f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 25:
					*uParam2 = { -1611.091f, 66.0932f, 60.1192f };
					*uParam3 = 8.1702f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 26:
					*uParam2 = { -1485.756f, 49.183f, 53.0408f };
					*uParam3 = 329.1895f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 27:
					*uParam2 = { -1464.841f, 52.066f, 52.0575f };
					*uParam3 = 26.7727f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 28:
					*uParam2 = { -1450.809f, 49.7653f, 51.6797f };
					*uParam3 = 42.6481f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 29:
					*uParam2 = { -1462.326f, 88.4265f, 53.8826f };
					*uParam3 = 353.3917f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 30:
					*uParam2 = { -1491.87f, 95.0945f, 54.1122f };
					*uParam3 = 314.473f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 31:
					*uParam2 = { -1476.808f, 108.3742f, 53.8967f };
					*uParam3 = 348.5514f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 32:
					*uParam2 = { -1443.964f, 153.6641f, 53.4228f };
					*uParam3 = 5.4015f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 33:
					*uParam2 = { -1422.558f, 161.544f, 55.0401f };
					*uParam3 = 41.9873f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 34:
					*uParam2 = { -1425.595f, 187.9517f, 56.689f };
					*uParam3 = 129.5252f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 35:
					*uParam2 = { -1411.395f, 239.4108f, 58.8958f };
					*uParam3 = 94.2972f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 36:
					*uParam2 = { -1415.572f, 249.2832f, 59.1409f };
					*uParam3 = 122.1957f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 37:
					*uParam2 = { -1459.738f, 238.6189f, 58.7949f };
					*uParam3 = 180.7222f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 38:
					*uParam2 = { -1573.812f, 161.2271f, 57.4846f };
					*uParam3 = 134.8161f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 39:
					*uParam2 = { -1589.462f, 172.0972f, 57.9565f };
					*uParam3 = 211.4448f;
					*uParam4 = func_99(iParam0, 1);
					break;
				
				case 40:
					*uParam2 = { -1599.631f, 177.347f, 58.4655f };
					*uParam3 = 218.6622f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 41:
					*uParam2 = { -1605.247f, 166.7319f, 58.6104f };
					*uParam3 = 240.273f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 42:
					*uParam2 = { -1610.489f, 133.2583f, 59.7152f };
					*uParam3 = 286.0001f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 43:
					*uParam2 = { -1609.133f, 118.5496f, 59.985f };
					*uParam3 = 309.8568f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 44:
					*uParam2 = { -1600.147f, 104.7807f, 60.079f };
					*uParam3 = 345.0445f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 45:
					*uParam2 = { -1595.336f, 88.6422f, 59.9101f };
					*uParam3 = 325.4662f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 46:
					*uParam2 = { -1571.039f, 95.7035f, 57.4104f };
					*uParam3 = 320.9921f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 47:
					*uParam2 = { -1528.822f, 60.1519f, 56.3681f };
					*uParam3 = 299.9443f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 48:
					*uParam2 = { -1581.063f, 69.4907f, 59.9072f };
					*uParam3 = 302.81f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 49:
					*uParam2 = { -1502.428f, 75.9977f, 54.5965f };
					*uParam3 = 333.9787f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 50:
					*uParam2 = { -1533.281f, 81.1755f, 55.8724f };
					*uParam3 = 288.1328f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 51:
					*uParam2 = { -1533.984f, 102.1409f, 55.8727f };
					*uParam3 = 232.9465f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 52:
					*uParam2 = { -1598.389f, 49.5038f, 59.7089f };
					*uParam3 = 24.7707f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 53:
					*uParam2 = { -1613.303f, 45.0376f, 60.9909f };
					*uParam3 = 352.9884f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 54:
					*uParam2 = { -1632.785f, 50.5315f, 61.543f };
					*uParam3 = 325.0906f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 55:
					*uParam2 = { -1636.258f, 69.9035f, 61.7993f };
					*uParam3 = 291.5305f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 56:
					*uParam2 = { -1429.691f, 143.2913f, 53.2468f };
					*uParam3 = 17.521f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 57:
					*uParam2 = { -1408.523f, 152.6476f, 54.6591f };
					*uParam3 = 54.2465f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 58:
					*uParam2 = { -1403.501f, 245.4762f, 59.2192f };
					*uParam3 = 112.9726f;
					*uParam4 = func_99(iParam0, 2);
					break;
				
				case 59:
					*uParam2 = { -1417.563f, 260.8751f, 59.5187f };
					*uParam3 = 146.682f;
					*uParam4 = func_99(iParam0, 2);
					break;
			}
			break;
	}
}

float func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11409;
				
				case 1:
					return Global_262145.f_11410;
				
				case 2:
					return Global_262145.f_11411;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11412;
				
				case 1:
					return Global_262145.f_11413;
				
				case 2:
					return Global_262145.f_11414;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11415;
				
				case 1:
					return Global_262145.f_11416;
				
				case 2:
					return Global_262145.f_11417;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11418;
				
				case 1:
					return Global_262145.f_11419;
				
				case 2:
					return Global_262145.f_11420;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11421;
				
				case 1:
					return Global_262145.f_11422;
				
				case 2:
					return Global_262145.f_11423;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11424;
				
				case 1:
					return Global_262145.f_11425;
				
				case 2:
					return Global_262145.f_11426;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11427;
				
				case 1:
					return Global_262145.f_11428;
				
				case 2:
					return Global_262145.f_11429;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_11430;
				
				case 1:
					return Global_262145.f_11431;
				
				case 2:
					return Global_262145.f_11432;
				
				default:
			}
			break;
	}
	return 1f;
}

void func_100(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_94())
		{
			func_92();
		}
		Global_2405071.f_704.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_90();
		func_103(8, 0, 0, 0, 0);
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
		func_101();
	}
}

void func_101()
{
	if (func_94() && !func_93())
	{
		func_92();
	}
	if (func_93())
	{
		func_102();
	}
	else
	{
		func_90();
		func_103(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_102()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_27())
	{
		if (MISC::IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_104())
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

int func_104()
{
	if (((((func_107(PLAYER::PLAYER_ID()) == 229 || func_107(PLAYER::PLAYER_ID()) == 191) || func_106()) || func_108()) || func_105(PLAYER::PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_105(int iParam0)
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

int func_106()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

bool func_108()
{
	return Global_1574402;
}

int func_109(int iParam0)
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

int func_110(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_124(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_25(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_122(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_121(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_119(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_118(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_117(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_116(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_115(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_113(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_112(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_111(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_113(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_27())
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_27())
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != func_27())
	{
		if (func_754(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_26(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_125(int iParam0)
{
	if (func_15(iParam0) != 0)
	{
		func_357(iParam0);
		func_126(iParam0);
	}
}

void func_126(int iParam0)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[3];
	
	if (iLocal_675 == -1)
	{
		return;
	}
	if (func_300(0, 0))
	{
		return;
	}
	iVar3 = (Global_262145.f_11188 + 1000 - func_9(&(Local_112.f_1.f_1), 0, 0));
	if (iVar3 < 0)
	{
		iVar3 = 0;
	}
	if (func_15(iParam0) == 0)
	{
		return;
	}
	if (iVar3 > 30000)
	{
		iVar4 = 1;
	}
	else
	{
		iVar4 = 6;
	}
	if (!MISC::IS_BIT_SET(Local_116[iLocal_675 /*5*/].f_4, 12))
	{
		if (!func_196(iLocal_675))
		{
			func_149(iVar3, iVar4, func_150());
			return;
		}
	}
	func_148(iVar3);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/] = -1;
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = -1;
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = func_27();
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/] = Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 = Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_2 = Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_2;
		Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3 = SYSTEM::TO_FLOAT(func_77(Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uVar1[iVar0] = func_77(Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_3);
		iVar5[iVar0] = 0;
		if (func_147(1))
		{
			if (Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1 != -1)
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1))
				{
					if (func_73(Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, 1))
					{
						iVar5[iVar0] = func_168(Local_131[iParam0 /*68*/].f_53[iVar0 /*4*/].f_1, -2, 0, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
	iVar2 = func_77(func_145(iParam0, iLocal_675));
	func_128(Local_131[iParam0 /*68*/].f_53[0 /*4*/].f_1, Local_131[iParam0 /*68*/].f_53[1 /*4*/].f_1, Local_131[iParam0 /*68*/].f_53[2 /*4*/].f_1, uVar1[0], uVar1[1], uVar1[2], iVar2, iVar3, &uLocal_678, iVar4, func_150(), 1, iVar5[0], iVar5[1], iVar5[2]);
	if (Local_131[iParam0 /*68*/].f_53[0 /*4*/] == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (!MISC::IS_BIT_SET(iLocal_117, 23))
		{
			if (func_127(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			MISC::SET_BIT(&iLocal_117, 23);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_117, 23))
	{
		if (func_127(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		MISC::CLEAR_BIT(&iLocal_117, 23);
	}
}

bool func_127(bool bParam0)
{
	return func_69(PLAYER::PLAYER_ID(), bParam0);
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, char* sParam10, int iParam11, var uParam12, var uParam13, var uParam14)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_142(0) == 0)
	{
		return;
	}
	func_141();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *uParam8)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_140(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_137(iParam3, &(Global_2460072[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam12, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[1] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_140(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_137(iParam4, &(Global_2460072[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[2] != func_27())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_140(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_137(iParam5, &(Global_2460072[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	switch (iParam11)
	{
		case 0:
			if (PLAYER::PLAYER_ID() != func_27())
			{
				if (func_133(PLAYER::PLAYER_ID()) == 0)
				{
					func_137(iParam6, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), -1, 1, 5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_133(PLAYER::PLAYER_ID()) == 0)
			{
				func_137(iParam6, "HUD_USCORE", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_133(PLAYER::PLAYER_ID()) == 0)
			{
				func_137(iParam6, "HUD_UBEST", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_132(sParam10))
	{
		sVar2 = sParam10;
	}
	func_129(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
	*uParam8 = 0;
}

void func_129(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_131(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_130(7, iVar0);
		Global_1375006.f_4453[iVar0] = uParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = uParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = uParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_130(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_131(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

int func_132(char* sParam0)
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

bool func_133(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_136() && !func_135()) || func_134(PLAYER::PLAYER_ID(), 21)) || func_134(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_18(&(Global_1574647.f_13)))
		{
			if (!func_5(&(Global_1574647.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_3(&(Global_1574647.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9);
}

bool func_134(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_135()
{
	return Global_1312417.f_1;
}

bool func_136()
{
	return Global_1312417;
}

void func_137(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_131(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_130(6, iVar0);
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
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
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
		if (iParam15 == 5 && func_139())
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
			if (func_138())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_138()
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

int func_139()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_140(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, HUD::_GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_141()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_142(bool bParam0)
{
	if (func_144())
	{
		return 0;
	}
	if (func_143())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_754(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_143()
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_144()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

float func_145(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_146(iParam0, iParam1);
	fVar1 = func_6(iParam0, iParam1);
	return (fVar0 + fVar1);
}

float func_146(int iParam0, int iParam1)
{
	return Local_112.f_6[iParam0 /*204*/].f_36[iParam1];
}

bool func_147(bool bParam0)
{
	return func_73(PLAYER::PLAYER_ID(), bParam0);
}

void func_148(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (MISC::IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2531497.f_4737)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2531497.f_4737));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2531497.f_4745 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
			Global_2531497.f_4735 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (MISC::IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			if (MISC::IS_BIT_SET(Global_2531497.f_4735, 4))
			{
				if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2531497.f_4737)))
						{
							StringCopy(&(Global_2531497.f_4737), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							MISC::SET_BIT(&(Global_2531497.f_4735), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && MISC::IS_BIT_SET(Global_2531497.f_4735, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2531497.f_4735), 1);
			}
			else if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2531497.f_4737), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						MISC::SET_BIT(&(Global_2531497.f_4735), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 3))
				{
					Global_2531497.f_4745 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2531497.f_4745, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					MISC::SET_BIT(&(Global_2531497.f_4735), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 0))
			{
				Global_2531497.f_4735 = 0;
				Global_2531497.f_4745 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				MISC::SET_BIT(&(Global_2531497.f_4735), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::IS_BIT_SET(Global_2531497.f_4735, 2))
				{
					MISC::SET_BIT(&(Global_2531497.f_4735), 2);
					MISC::SET_BIT(&(Global_2531497.f_4735), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2531497.f_4735), 5);
					MISC::CLEAR_BIT(&(Global_2531497.f_4735), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			Global_2531497.f_4735 = 0;
			Global_2531497.f_4745 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			MISC::SET_BIT(&(Global_2531497.f_4735), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				MISC::SET_BIT(&(Global_2531497.f_4735), 2);
				MISC::SET_BIT(&(Global_2531497.f_4735), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2531497.f_4735), 2);
				MISC::CLEAR_BIT(&(Global_2531497.f_4735), 5);
			}
		}
	}
}

void func_149(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	
	if (func_142(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_COUNTDOWN";
	if (!func_132(sParam2))
	{
		sVar0 = sParam2;
	}
	func_129(iParam0, sVar0, 0, 0, -1, 0, 3, 0, iParam1, 0, 0, 0, iParam1, 0, 0, 0, 0, -1);
}

char* func_150()
{
	return "HUD_COUNTDOWN";
	switch (func_257(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_151())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_151()
{
	if (func_257(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_152(int iParam0)
{
	return Local_112.f_6[iParam0 /*204*/].f_72;
}

int func_153(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
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
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_163(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_157();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_156();
	func_155(bParam2);
	func_154();
	return 1;
}

void func_154()
{
	MISC::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_155(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_156()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_157()
{
	func_159();
	func_158(0);
}

void func_158(bool bParam0)
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

void func_159()
{
	if (!func_162())
	{
	}
	if (func_161())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_160();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_160()
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

int func_161()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_162()
{
	if (!func_161())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_160();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_163(char* sParam0, char* sParam1)
{
	if (!func_161())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_164(char* sParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_165(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = iParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_165(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
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
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_166(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_157();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_156();
	func_155(bParam3);
	func_154();
	return 1;
}

bool func_166(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_161())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1312585.f_32));
}

void func_167(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam5);
}

int func_168(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_691(iParam0) && !bParam4)
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
	if (((func_691(PLAYER::PLAYER_ID()) || (func_194() && func_690())) && !MISC::IS_BIT_SET(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_193();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_754(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_191(iParam1, iParam0, 0);
							}
							else
							{
								return func_181(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_181(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_191(iParam1, iParam0, 0);
				}
				else
				{
					return func_169(0, -1, 0);
				}
			}
			else
			{
				return func_169(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_191(iParam1, iParam0, 0);
		}
		else
		{
			return func_181(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_181(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_169(bool bParam0, int iParam1, bool bParam2)
{
	return func_170(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_170(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_180() || (func_179() && func_177())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_176(iParam2, iVar0);
		}
		else
		{
			return func_176(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_175(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_174(1);
				}
				else
				{
					return func_174(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_171(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_171(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_174(1);
	}
	return func_174(0);
}

int func_171(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_173(iParam0, iParam1, iParam3);
	if (func_172(Global_4456448.f_154360, 1))
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

int func_172(int iParam0, bool bParam1)
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

int func_173(int iParam0, int iParam1, int iParam2)
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
			if (!func_175(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_174(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_175(int iParam0, int iParam1, int iParam2)
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

int func_176(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_173(iParam1, iParam0, 4);
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

bool func_177()
{
	if (func_178())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_178()
{
	return MISC::IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_179()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_180()
{
	if (func_178() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_187())
			{
				iVar3 = func_186(iParam0);
				if (!iVar3 == -1)
				{
					return func_184(iVar3);
				}
			}
			if ((func_183(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_175(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_174(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_182(1);
			}
			else
			{
				return func_170(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_174(1);
			}
			else
			{
				return func_170(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_186(iParam0);
	if (!iVar4 == -1)
	{
		return func_184(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_182(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_183(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_184(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_185(iParam0);
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

var func_185(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_186(int iParam0)
{
	if (!iParam0 == func_27())
	{
		if (func_73(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

int func_187()
{
	if (((func_190() || func_189()) || func_58()) || func_188())
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	return Global_2448961.f_19;
}

var func_189()
{
	return Global_2448961.f_16;
}

var func_190()
{
	return Global_2448961.f_15;
}

int func_191(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_187())
	{
		iVar2 = func_186(iParam1);
		if (!iVar2 == -1)
		{
			return func_184(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_27())
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
			iVar0 = func_170(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_192(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_175(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_182(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_192(int iParam0)
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

var func_193()
{
	return Global_2359302.f_2;
}

bool func_194()
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 14);
}

char* func_195()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (iVar0 != func_27())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_29(iVar0, 28) || func_29(PLAYER::PLAYER_ID(), 28)) || func_66(iVar0)) && !func_65(iVar0))
			{
				return func_67(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_67(iVar0, 0);
			}
		}
		sVar1 = func_72(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_67(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_196(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 2))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 3))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 13))
	{
		return 1;
	}
	return 0;
}

void func_197(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_198(sParam0))
	{
		return;
	}
	func_157();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = MISC::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_156();
	func_155(bParam1);
	func_154();
}

bool func_198(char* sParam0)
{
	if (!func_161())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_199(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_199(char* sParam0)
{
	if (!func_161())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_200()
{
	if (!func_161())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_157();
}

bool func_201(int iParam0)
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

int func_202(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_62(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_48(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_203(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_62(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_45(&Var0);
}

int func_204()
{
	return 21;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_206(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2531497.f_4745 = -1;
	bVar0 = (func_31(PLAYER::PLAYER_ID(), 0) && func_30(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_230(func_231(iParam0), 1);
	}
	else
	{
		func_227(iParam0, -1);
		if (func_226(PLAYER::PLAYER_ID()))
		{
			Global_1574647.f_3 = iParam0;
		}
		else
		{
			func_225(iParam0);
		}
		Global_1574647.f_4 = -1;
		if (func_226(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 5);
		}
		if (((func_136() && !func_135()) || func_134(PLAYER::PLAYER_ID(), 21)) || func_134(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 17);
		MISC::SET_BIT(&(Global_1574647.f_1), 20);
		if (func_224(iParam0))
		{
			func_223();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_219(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_217(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::SET_BIT(&(Global_1574647.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_215(1);
				if (func_212(0))
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_210(1);
			MISC::SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (bParam5)
		{
			func_209();
			MISC::SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_207(iParam0))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 21);
			}
		}
	}
	Global_2507562 = 1;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
			return 1;
		
		default:
	}
	if (func_208())
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	switch (func_151())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_209()
{
	MISC::SET_BIT(&(Global_2531497.f_4736), 0);
}

void func_210(bool bParam0)
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
		func_211(iVar0);
		iVar0++;
	}
}

void func_211(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_214(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

void func_215(int iParam0)
{
	if (func_216() && iParam0)
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

int func_216()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_218(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

void func_219(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_220())
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

int func_220()
{
	switch (func_222())
	{
		case 0:
			return func_221();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_221()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_222()
{
	return Global_30736;
}

void func_223()
{
	Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_200 = 0;
	MISC::CLEAR_BIT(&(Global_2531497.f_4561), 1);
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_225(int iParam0)
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/] = iParam0;
}

bool func_226(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

void func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_229(0) || func_229(func_228(iVar0)))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 2);
		}
	}
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_262145.f_23622;
}

bool func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(2480, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_208), iParam0);
	}
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_48(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

float func_233(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_40;
}

int func_234(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_235(int iParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_237())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_236(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

bool func_237()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_238(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 7))
		{
			if (((!func_256(PLAYER::PLAYER_ID()) && !func_255(PLAYER::PLAYER_ID())) && !func_133(PLAYER::PLAYER_ID())) && !func_105(PLAYER::PLAYER_ID()))
			{
				if (func_136())
				{
					func_247(2, 0, 1);
					func_246();
				}
				if (func_229(0))
				{
					uVar0 = func_213(2480, -1, 0);
					MISC::CLEAR_BIT(&uVar0, 0);
					func_246();
				}
				if (func_229(func_228(func_257(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_213(2480, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_228(func_257(PLAYER::PLAYER_ID())));
					func_246();
				}
				if (func_245())
				{
					func_246();
				}
				if (func_257(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 7);
					if (func_257(PLAYER::PLAYER_ID()) == 236)
					{
						func_244();
					}
					func_241(func_243(func_257(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 7);
		func_239();
	}
}

void func_239()
{
	if (func_240())
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 17);
	}
}

bool func_240()
{
	return MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 17);
}

void func_241(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_242() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_242()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_244()
{
	if (!func_240())
	{
		Global_2531497.f_6305 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 17);
	}
}

int func_245()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_246()
{
	if (func_245())
	{
		Global_2437549.f_1155.f_16 = 1;
	}
}

void func_247(int iParam0, int iParam1, bool bParam2)
{
	if (func_136())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_254(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_254(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_8 = 0;
				func_253(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_8 = 0;
			func_253(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_252()) && !func_248(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(0, -1, -1, iParam0);
	}
}

int func_248(int iParam0)
{
	if (func_249(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_249(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_250(iParam0))
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

bool func_250(int iParam0)
{
	return func_251(iParam0);
}

bool func_251(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_252()
{
	return Global_2448961.f_740;
}

void func_253(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_136())
		{
			if (func_754(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
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
			if (func_754(PLAYER::PLAYER_ID(), 1, 1))
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
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_254(var uParam0, bool bParam1, bool bParam2)
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

bool func_255(int iParam0)
{
	if (func_226(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

bool func_256(int iParam0)
{
	return func_29(iParam0, 20);
}

int func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

bool func_258(int iParam0, int iParam1)
{
	return Local_116[iParam0 /*5*/].f_1[iParam1];
}

int func_259(bool bParam0, bool bParam1)
{
	if (func_255(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (bParam0)
	{
		if (func_133(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (bParam1)
	{
		if (func_260(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

bool func_260(int iParam0)
{
	return func_36(iParam0, 0);
}

void func_261(int iParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_117, 22))
	{
		if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (!func_300(1, 1))
				{
					if (Local_112.f_6[iParam0 /*204*/].f_74[0 /*4*/] != -1)
					{
						if (Local_112.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_3 > 0f)
						{
							if (Local_112.f_6[iParam0 /*204*/].f_74[0 /*4*/] != NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_205(PLAYER::PLAYER_ID(), Local_112.f_6[iParam0 /*204*/].f_74[0 /*4*/].f_1))
								{
									func_262();
									MISC::SET_BIT(&iLocal_117, 22);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_262()
{
	MISC::SET_BIT(&(Global_2531497.f_1734), 19);
}

void func_263(int iParam0)
{
	if (iLocal_114 != func_8(iParam0))
	{
		iLocal_114 = func_8(iParam0);
		if (iLocal_114 > -1)
		{
			iLocal_115++;
			MISC::SET_BIT(&iLocal_117, 25);
		}
	}
}

void func_264(int iParam0)
{
	if (func_665() == 1)
	{
		if (func_8(iParam0) == NETWORK::PARTICIPANT_ID_TO_INT() && !func_259(1, 0))
		{
			if (!func_218(PLAYER::PLAYER_ID()))
			{
				func_265(1);
			}
		}
		else if (func_218(PLAYER::PLAYER_ID()))
		{
			func_265(0);
		}
	}
}

void func_265(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 0))
		{
			Global_2461173 = func_257(PLAYER::PLAYER_ID());
			if (Global_2461173 == -1)
			{
				Global_2461173 = Global_1574647.f_4;
			}
			if (func_297(Global_2461173) == 0)
			{
				if (func_296(1) > 0)
				{
					func_295(26, -1);
				}
			}
			if (func_136())
			{
				func_247(2, 0, 1);
				func_246();
			}
			if (func_229(0))
			{
				uVar1 = func_213(2480, -1, 0);
				MISC::CLEAR_BIT(&uVar1, 0);
				func_246();
			}
			if (func_229(func_228(func_257(PLAYER::PLAYER_ID()))))
			{
				uVar1 = func_213(2480, -1, 0);
				MISC::CLEAR_BIT(&uVar1, func_228(func_257(PLAYER::PLAYER_ID())));
				func_246();
			}
			if (func_245())
			{
				func_246();
			}
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 0))
	{
		if ((!func_294() && !func_293()) && !func_292())
		{
			Global_2461173 = -1;
			func_291(26, -1);
		}
		else if (func_297(Global_2461173) == 0)
		{
			iVar0 = func_277(1);
			if (iVar0 > 0)
			{
				func_272(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_268(1932, 1, -1);
				func_272(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_266(26, -1))
		{
			Global_2461173 = -1;
			func_291(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 0);
	}
}

bool func_266(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = func_267(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

int func_267(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_214(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_271(iParam0))
	{
		func_270(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_269(iParam0, iVar0, iParam2, 1);
	}
}

void func_269(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_214(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_214(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_214(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_214(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_214(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_214(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_214(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_214(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_214(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_214(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_214(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_214(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_214(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_214(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_214(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_214(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_214(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_214(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_214(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_214(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_214(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_214(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_214(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_214(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_214(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_214(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_214(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_214(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_214(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_214(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_214(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_214(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_214(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_214(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_214(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_214(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_214(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_214(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_214(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_214(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_214(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_214(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_214(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_214(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_214(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_214(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_214(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_214(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_214(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_271(int iParam0)
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

void func_272(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_276(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_275(iParam0))
	{
		func_274(iParam0, iVar0);
	}
	else
	{
		func_273(iParam0, iVar0);
	}
}

void func_273(int iParam0, int iParam1)
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

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_275(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_276(int iParam0)
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

int func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2460056 == 0)
	{
		return 0;
	}
	if (func_292())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_290() || func_288()))
		{
			Global_2459003 = 1;
		}
	}
	Global_2460056 = 0;
	if (Global_1315700)
	{
		iVar0 = 1;
	}
	if (Global_2459003)
	{
		iVar0 = 1;
	}
	if (Global_2459002)
	{
		iVar0 = 1;
	}
	if (func_47(Global_110588.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458925)
	{
		iVar0 = 1;
	}
	if (func_287(512))
	{
		iVar0 = 1;
	}
	if (func_286(128))
	{
		iVar0 = 1;
	}
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	if (Global_2459495)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_283())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_282())
	{
		iVar0 = 0;
	}
	if ((Global_2459003 || Global_2459002) || Global_1315700)
	{
		if (func_288())
		{
			iVar0 = 0;
		}
	}
	Global_2459495 = 0;
	Global_2459002 = 0;
	Global_2459003 = 0;
	Global_1315700 = 0;
	Global_2458925 = 0;
	func_280(&(Global_110588.f_1), 32);
	func_279(512);
	func_278(128);
	return iVar0;
}

void func_278(int iParam0)
{
	Global_110645 = (Global_110645 - (Global_110645 && iParam0));
}

void func_279(int iParam0)
{
	Global_110646 = (Global_110646 - (Global_110646 && iParam0));
}

void func_280(var uParam0, int iParam1)
{
	func_281(uParam0, iParam1);
}

void func_281(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_282()
{
	if (((Global_1574425 || Global_1574395) || func_36(PLAYER::PLAYER_ID(), 0)) || func_194())
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	switch (func_284())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_284()
{
	return Global_2449755.f_1.f_2822;
}

bool func_285()
{
	return Global_1312850;
}

bool func_286(int iParam0)
{
	return (Global_110645 && iParam0) != 0;
}

bool func_287(int iParam0)
{
	return (Global_110646 && iParam0) != 0;
}

int func_288()
{
	if (func_297(Global_2461173))
	{
		return 0;
	}
	if (func_289(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_218(iParam0);
	}
	return 0;
}

int func_290()
{
	if (func_297(Global_2461173))
	{
		return 0;
	}
	if (func_218(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_267(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

bool func_292()
{
	return MISC::IS_BIT_SET(Global_1312424, 0);
}

bool func_293()
{
	return Global_1312842;
}

bool func_294()
{
	return Global_1312873;
}

void func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_267(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_285())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_283())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_36(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_282())
	{
		iVar0 = 0;
	}
	Global_2460056 = 1;
	return iVar0;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11391)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11388)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11392)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11393)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11394)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11390)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11395)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

void func_298()
{
	if (func_300(0, 0))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_117, 25))
	{
		if (iLocal_114 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (Local_113.f_11 == 0)
			{
				Local_113.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
		}
		MISC::CLEAR_BIT(&iLocal_117, 25);
	}
}

void func_299()
{
	if (func_234("KOTC_1STHELP"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_234("KOTC_OTHRKG"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_234("KOTC_YOUKNG"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_234("KOTC_CONTS"))
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_300(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
	}
	if (MISC::IS_BIT_SET(iLocal_117, 17))
	{
		return 1;
	}
	if (func_340(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (func_143())
	{
		return 1;
	}
	if (func_229(9))
	{
		return 1;
	}
	if (func_229(0))
	{
		return 1;
	}
	if (!func_315(0, 1, 1))
	{
		return 1;
	}
	if (func_308())
	{
		return 1;
	}
	if (func_303(4))
	{
		return 1;
	}
	if (func_302())
	{
		return 1;
	}
	if (func_259(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1662552)
	{
		return 1;
	}
	if (func_301(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_301(int iParam0)
{
	if (!func_754(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_302()
{
	return Global_98721.f_346 > 0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (func_302())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_307(iVar0) == iParam0)
			{
				if (func_304(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_304(int iParam0)
{
	return func_305(iParam0, 6, 1);
}

int func_305(int iParam0, int iParam1, bool bParam2)
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
		if (func_222() == 0)
		{
			return MISC::IS_BIT_SET(func_213(func_306(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_306(int iParam0)
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

int func_307(int iParam0)
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

int func_308()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_310() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (func_309() && Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574647.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_309()
{
	return MISC::IS_BIT_SET(Global_2448961, 5);
}

int func_310()
{
	if (((func_314() || func_313()) || func_312()) || func_311())
	{
		return 1;
	}
	return 0;
}

bool func_311()
{
	return MISC::IS_BIT_SET(Global_2448961, 1);
}

bool func_312()
{
	return MISC::IS_BIT_SET(Global_2448961, 2);
}

bool func_313()
{
	return MISC::IS_BIT_SET(Global_2448961, 20);
}

bool func_314()
{
	return Global_2448961.f_598;
}

int func_315(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_339(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_134(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_134(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_248(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_337(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_336())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_256(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_327(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_326(PLAYER::PLAYER_ID()) != func_27() && func_326(PLAYER::PLAYER_ID()) == func_64(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_324(func_325()) && func_257(PLAYER::PLAYER_ID()) != 236)
	{
		return 0;
	}
	if (func_294())
	{
		return 0;
	}
	if (func_143())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_322())
	{
		return 0;
	}
	if (func_134(PLAYER::PLAYER_ID(), 0) || func_134(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_134(PLAYER::PLAYER_ID(), 12) || func_134(PLAYER::PLAYER_ID(), 14)) || func_134(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_340(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_321() && !Global_2507941)
		{
			return 0;
		}
	}
	if (func_320(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_302())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_301(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_319())
	{
		return 0;
	}
	if (func_317(PLAYER::PLAYER_ID()) && Global_1590095.f_171)
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (func_105(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2530556)
	{
		return 0;
	}
	if (Global_1694287)
	{
		return 0;
	}
	return 1;
}

bool func_316()
{
	return Global_1676879.f_443;
}

int func_317(int iParam0)
{
	if (func_318(Global_1590446[iParam0 /*871*/].f_273.f_26))
	{
		return 1;
	}
	return 0;
}

int func_318(int iParam0)
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

int func_319()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_320(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11);
}

bool func_321()
{
	return MISC::IS_BIT_SET(Global_1687880, 5);
}

int func_322()
{
	if (func_323() == 0)
	{
		return 1;
	}
	return 0;
}

int func_323()
{
	return Global_1312467.f_18;
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
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

int func_325()
{
	return Global_2437549.f_2708[0 /*80*/].f_1;
}

int func_326(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_327(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_335(iParam0) && !func_226(iParam0)) && !MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_256(iParam0);
	bVar3 = func_136();
	uVar4 = func_329();
	if ((bVar1 && (func_328(iParam0) || func_218(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_30(iParam0)) && !func_28(iParam0)))
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

int func_328(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_329()
{
	if ((func_29(PLAYER::PLAYER_ID(), 21) || func_29(PLAYER::PLAYER_ID(), 22)) || func_333())
	{
		return 1;
	}
	if (func_331())
	{
		func_330(22);
		return 1;
	}
	return 0;
}

void func_330(int iParam0)
{
	MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

int func_331()
{
	if (func_31(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_136() && !func_135()) || func_134(PLAYER::PLAYER_ID(), 21)) || func_134(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_332(27);
		}
	}
	return 0;
}

void func_332(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_4), iParam0);
}

int func_333()
{
	return func_334(356, -1);
}

int func_334(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_214(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_336()
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 5;
}

int func_337(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_338()
{
	return MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_18, 0);
}

bool func_339(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_340(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_27())
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

void func_341(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, var uParam5)
{
	float fVar0;
	int iVar1;
	
	Global_1574647.f_6 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	if (fVar0 < fParam3 && !func_226(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !func_134(PLAYER::PLAYER_ID(), 21)) && !func_134(PLAYER::PLAYER_ID(), 25))
		{
			func_355(vParam1, 1, 0);
		}
		if ((!*uParam2 || MISC::IS_BIT_SET(Global_1574647.f_1, 3)) && func_754(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			func_219(func_354(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_353(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = func_352(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, 1);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 8);
			}
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 3);
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam4) && !func_226(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 3) && func_754(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_351();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11401);
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 3);
			MISC::SET_BIT(&(Global_1574647.f_1), 3);
		}
	}
	else if ((*uParam2 || MISC::IS_BIT_SET(Global_1574647.f_1, 3)) && func_754(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam2 = 0;
		func_351();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 8);
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 3);
		if (iParam0 != 146 && uParam5)
		{
			func_342();
		}
	}
}

void func_342()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_24), &Global_2409324, 2);
	MISC::_COPY_MEMORY(&(Global_2405071.f_26), &Global_2409326, 19);
	func_349();
	func_345(1, 1, 0);
	func_343();
}

void func_343()
{
	func_344(0, 0);
}

void func_344(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_345(bool bParam0, bool bParam1, bool bParam2)
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
		func_348();
	}
	if (!bParam2)
	{
		func_100(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_347(0);
	func_346();
}

void func_346()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_347(bool bParam0)
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

void func_348()
{
	MISC::_COPY_MEMORY(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_349()
{
	func_350();
	Global_2405071.f_2252 = 0;
}

void func_350()
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

void func_351()
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

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0;
		
		case 144:
			return 0;
		
		default:
	}
	return 5;
}

float func_353(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
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
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

float func_354(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 146:
		case 236:
			return 0f;
		
		default:
	}
	return 1f;
}

void func_355(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

Vector3 func_356(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_24;
}

void func_357(int iParam0)
{
	int iVar0;
	
	if (func_300(0, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_132[iVar0 /*42*/] = -1;
		Local_132[iVar0 /*42*/].f_1 = func_27();
		Local_132[iVar0 /*42*/].f_9 = 0;
		Local_132[iVar0 /*42*/].f_31 = -1;
		if (Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/] > -1)
		{
			Local_132[iVar0 /*42*/] = Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/];
			Local_132[iVar0 /*42*/].f_1 = Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_1;
			Local_132[iVar0 /*42*/].f_9 = func_77(Local_112.f_6[iParam0 /*204*/].f_74[iVar0 /*4*/].f_3);
		}
		iVar0++;
	}
	func_358(&Local_132, &(Local_131[iParam0 /*68*/].f_66), 26, &uLocal_133, &uLocal_249, -1, 0, 0);
}

void func_358(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_478(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_476() || iParam2 == 27)
	{
		if (func_429(uParam1, iParam2, uParam3, Global_1574182, 0, func_479(), sParam7))
		{
			func_428(1);
			if ((!func_427() && !func_426()) || MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_425())
				{
					func_423();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_422(1);
						Global_1574182 = 0;
						iVar19 = -1;
						if (Global_1574403 != 1)
						{
							func_421(uParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_754(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_36(iVar3, 0))
									{
										if ((func_420(iVar3) || Global_2424073[iVar3 /*421*/].f_236 != -1) || func_419(iVar3))
										{
											iVar9 = iVar3;
											if (func_74(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_416(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_413(PLAYER::PLAYER_ID(), 0) && func_107(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_412())
							{
								if (func_754(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_27();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_411(iVar3) && func_408(iVar3, iParam2)) && func_754(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
								Var6 = { func_403(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
								iVar5 = func_397(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574182++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_412())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_392(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_391(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_390(iVar3, 0);
								if (bVar2)
								{
									if (func_73(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_389(iParam5))
								{
									func_388(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_388(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_754(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_27();
							}
							if (func_411(iVar3))
							{
								if (func_754(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
									Var6 = { func_403(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_41(iVar3) };
									iVar5 = func_397(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574182++;
									iVar16 = func_390(iVar3, 1);
									if (bVar2)
									{
										if (func_73(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_371(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_368(uParam3, uParam1);
						}
						func_3(&(uParam3->f_21));
						func_367();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_366(uParam3, uParam1);
							func_365(uParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_366(uParam3, uParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_361(uParam3))
						{
							Global_1574403 = 1;
						}
						func_359(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_367();
			func_422(0);
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

void func_359(var uParam0)
{
	if (!func_18(&(uParam0->f_21)))
	{
		func_11(&(uParam0->f_21), 0, 0);
	}
	else if (func_5(&(uParam0->f_21), 250, 0))
	{
		func_3(&(uParam0->f_21));
		func_360(0);
	}
}

void func_360(bool bParam0)
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

int func_361(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_27() && func_754(iVar3, 0, 1))
	{
		Var2 = { func_41(iVar3) };
		iVar1 = func_364(uParam0, uParam0->f_37);
		if (func_363(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_362(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_362(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_362(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_362(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_362(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_362(uParam0, iVar0, 0);
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
	return iVar4;
}

void func_362(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_363(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_364(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_365(var uParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_366(var uParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_367()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_368(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_27())
		{
			if (func_754(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_370(uParam0->f_38[iVar0 /*2*/], 0);
					func_369(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_369(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_370(int iParam0, bool bParam1)
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

void func_371(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_387() && iParam4 < func_386())
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
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_385("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_385(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_385("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_385("");
			if (uParam3->f_108 == 6)
			{
				func_385("");
			}
			else
			{
				func_385(&sParam5);
			}
			func_376(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_375(uParam3))
			{
				func_374("DPAD_FRIEND");
			}
			else if (func_373(uParam3))
			{
				func_374("DPAD_FRIEND");
			}
			else if (func_372(uParam3))
			{
				func_374("DPAD_CREW");
			}
			else
			{
				func_374("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_372(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_373(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_374(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_375(var uParam0)
{
	if (func_373(uParam0) && func_372(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_376(var uParam0, int iParam1)
{
	if (func_384(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_380(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_377())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_377()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_378() || func_190())
		{
			return 1;
		}
	}
	return 0;
}

int func_378()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_190();
	}
	return func_379(Global_4456448.f_154360);
}

int func_379(int iParam0)
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

int func_380(int iParam0)
{
	if ((func_754(iParam0, 0, 1) && func_381()) && func_69(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if (func_335(PLAYER::PLAYER_ID()) || func_383())
	{
		if (!func_382(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_382(int iParam0, int iParam1)
{
	if (func_257(iParam0) == iParam1)
	{
		return func_328(iParam0);
	}
	return 0;
}

int func_383()
{
	switch (func_107(PLAYER::PLAYER_ID()))
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

int func_384(int iParam0)
{
	if (func_377())
	{
		if (func_754(iParam0, 0, 1))
		{
			return func_74(iParam0);
		}
	}
	if ((func_754(iParam0, 0, 1) && func_381()) && func_71(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_385(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_386()
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

int func_387()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_388(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_387() && iParam3 < func_386())
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
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_385("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_374(sParam16);
				}
				else
				{
					func_385(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_385("");
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
				if (func_412())
				{
					func_385("");
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
						func_374(&(uParam2->f_104));
					}
					else
					{
						func_385("");
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
					func_385("");
				}
				if (uParam2->f_108 == 6)
				{
					func_385("");
				}
				else
				{
					func_385(&sParam4);
				}
				func_376(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_385("");
					func_385("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_375(uParam2))
				{
					func_374("DPAD_FRIEND");
				}
				else if (func_373(uParam2))
				{
					func_374("DPAD_FRIEND");
				}
				else if (func_372(uParam2))
				{
					func_374("DPAD_CREW");
				}
				else
				{
					func_374("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_389(int iParam0)
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

int func_390(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_335(iParam0)) && !func_256(iParam0))
	{
		iVar0 = func_204();
	}
	iVar1 = func_186(iParam0);
	if (!iVar1 == -1)
	{
		return func_184(iVar1);
	}
	return iVar0;
}

char* func_391(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_392(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_396(iParam3))
	{
		*fParam1 = (func_393(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_389(iParam3))
	{
		*fParam1 = (func_393(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_393(int iParam0, int iParam1)
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
				return func_395(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_394(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_394(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_395(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_396(int iParam0)
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

int func_397(int iParam0)
{
	int iVar0;
	
	iVar0 = func_400(iParam0);
	if (iVar0 == -1)
	{
		func_398(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_398(int iParam0, bool bParam1)
{
	if (!func_754(iParam0, 0, 1))
	{
		return;
	}
	if (func_400(iParam0) != -1)
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
	if (func_399(iParam0))
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

int func_399(int iParam0)
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

int func_400(int iParam0)
{
	int iVar0;
	
	if (!func_754(iParam0, 0, 1))
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
			func_401(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_401(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1385455)
	{
		Global_1385294[iVar2 /*5*/] = { Global_1385294[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_402(&(Global_1385294[iVar2 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_402(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_27();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_403(int iParam0)
{
	char cVar0[32];
	
	if (func_754(iParam0, 0, 1))
	{
		Global_2507671 = { func_41(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_363(Global_2507671))
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
		if (func_407(&Global_2507671))
		{
			Global_2507601 = { func_405(iParam0) };
			func_404(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_404(var uParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_405(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_406(iParam0))
	{
		return Global_1312905[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_41(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_406(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_407(var uParam0)
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

int func_408(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_226(iParam0) || func_410(iParam0)) || func_255(iParam0))
		{
			return 0;
		}
	}
	if (!func_409(iParam0))
	{
		return 0;
	}
	if ((!func_420(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_419(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_409(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

int func_410(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_411(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_27())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
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

int func_412()
{
	switch (func_107(PLAYER::PLAYER_ID()))
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
	switch (func_257(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_256(PLAYER::PLAYER_ID()))
	{
		switch (func_107(PLAYER::PLAYER_ID()))
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
	if (func_382(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_414(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_414(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_414(int iParam0)
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
	return func_415(iParam0, 0);
	return 0;
}

int func_415(int iParam0, int iParam1)
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

void func_416(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_754(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_420(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_419(iVar1))
				{
					if (func_417(iVar1, iParam1, 0))
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

int func_417(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_27())
	{
		if (!bParam2)
		{
			if (func_418(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_27())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	if (iParam1 != func_27())
	{
		if (iParam0 != func_27())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_27())
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

bool func_419(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_420(int iParam0)
{
	if (func_754(iParam0, 0, 1))
	{
		if (func_754(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_107(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_421(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_422(bool bParam0)
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

void func_423()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_237())
		{
			func_424();
		}
	}
}

void func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_48(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_425()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 0) && func_237())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4588, 1) && func_237())
	{
		return 1;
	}
	return 0;
}

int func_426()
{
	if (func_237())
	{
		if (func_46(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_427()
{
	if (func_237())
	{
		if (func_60(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_428(int iParam0)
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

int func_429(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_475(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_474();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_473())
		{
			if (func_472() > 0 && Global_1574184)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
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
		if (!func_461())
		{
			func_460(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_460(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_18(&(uParam2->f_19)))
	{
		if (func_472() == 1)
		{
			func_459(bVar3, uParam0, 0);
			func_11(&(uParam2->f_19), 0, 0);
			func_460(uParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_18(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_5(&(uParam2->f_19), 10000, 0) || (func_472() == 0 && !bParam5))
		{
			func_460(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_458();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_458();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (func_459(bVar3, uParam0, 0))
				{
					func_421(uParam0, 0, 0);
					sVar1 = func_456(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_454(iParam1) };
					if (bParam4)
					{
						func_451(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_445(uParam0, func_448(uParam2), func_446(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_439(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_437(uParam0, sVar6, func_438(), -1);
					}
					else if (func_377())
					{
						uParam2->f_34 = Global_1574183;
						func_451(uParam0, sVar1, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_430(iParam1);
						uParam2->f_34 = Global_1574183;
						func_451(uParam0, sVar1, "", 0, iVar5, Global_1574183, 1);
					}
					else
					{
						iVar5 = func_430(iParam1);
						func_451(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
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

int func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_436())
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
			if (func_435(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_434(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_433(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_431())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_431()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_58();
	}
	return func_432(Global_4456448.f_154360);
}

int func_432(int iParam0)
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

bool func_433(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_434(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_435(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_436()
{
	return Global_4456448.f_1 == 0;
}

void func_437(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_374(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_374("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_438()
{
	switch (func_107(PLAYER::PLAYER_ID()))
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

char* func_439(var uParam0)
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
	switch (func_107(PLAYER::PLAYER_ID()))
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
			if (func_441())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_127(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_127(1))
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
			if (func_440(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_440(int iParam0)
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

bool func_441()
{
	return (func_444() && func_442(func_443()));
}

int func_442(int iParam0)
{
	return func_71(iParam0, 1);
}

int func_443()
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_444()
{
	return Global_1590446[PLAYER::PLAYER_ID() /*871*/] == 148;
}

void func_445(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_374(sParam1);
		}
		else if (func_257(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_374("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_446(var uParam0)
{
	int iVar0;
	
	iVar0 = func_257(PLAYER::PLAYER_ID());
	if (func_447())
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
			switch (func_151())
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

bool func_447()
{
	return Global_1590319;
}

char* func_448(var uParam0)
{
	int iVar0;
	
	iVar0 = func_257(PLAYER::PLAYER_ID());
	if (func_447())
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
			if (func_450() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_450() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_151())
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
			if (func_449() == 1)
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

int func_449()
{
	return Global_2531497.f_4822;
}

int func_450()
{
	if (func_257(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_451(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_385(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_374(sParam1);
		}
		if (func_473() && iParam6)
		{
			if (func_453())
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
			func_374(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_452(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_58())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_452(int iParam0)
{
	if (func_435(iParam0) || func_434(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_453()
{
	return Global_1574184;
}

struct<4> func_454(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_455(PLAYER::PLAYER_ID()) || func_433(PLAYER::PLAYER_ID()))
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
	if (func_377() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_455(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_456(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_377() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_457();
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
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
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
	return sParam1;
}

char* func_457()
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

void func_458()
{
	Global_42316 = 1;
}

bool func_459(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_460(var uParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_367();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_18(&(uParam1->f_19)))
		{
			func_3(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_461()
{
	if (func_471())
	{
		return 0;
	}
	if (func_336())
	{
		return 0;
	}
	if (!func_469())
	{
		return 0;
	}
	if (!func_322())
	{
		return 0;
	}
	if (func_468(8, -1))
	{
		return 0;
	}
	if (func_472() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_143())
	{
		return 0;
	}
	else if (!func_249(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_467(1) || func_465(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_464() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_691(PLAYER::PLAYER_ID()) && !func_464())
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
	if (func_463(0))
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
	if (func_462(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_462(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_463(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

bool func_464()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1695602, 0));
}

int func_465(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_466(PLAYER::PLAYER_PED_ID()))
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

int func_466(int iParam0)
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

bool func_467(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_468(int iParam0, int iParam1)
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

int func_469()
{
	if (func_470())
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

bool func_470()
{
	return Global_1312439;
}

bool func_471()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_472()
{
	return Global_1373500.f_68;
}

int func_473()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_474()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_475(int iParam0)
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

int func_476()
{
	if (func_479())
	{
		return 1;
	}
	if (func_255(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_447())
	{
		return 1;
	}
	if (func_335(PLAYER::PLAYER_ID()))
	{
		switch (func_257(PLAYER::PLAYER_ID()))
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
				if (!func_477(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_477(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_477(PLAYER::PLAYER_ID()))
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

bool func_477(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_478(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_335(PLAYER::PLAYER_ID()) && !func_256(PLAYER::PLAYER_ID())) && !func_382(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_31(PLAYER::PLAYER_ID(), 0) && func_256(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_327(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_479()
{
	if (func_480(PLAYER::PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_480(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_36(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_481()
{
	if (!func_18(&uLocal_120))
	{
		if (func_482(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_11(&uLocal_120, 0, 1);
		}
	}
}

int func_482(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 5))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 4))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 6))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_116[iParam0 /*5*/].f_4, 7))
	{
		return 1;
	}
	return 0;
}

void func_483()
{
	if (func_300(1, 1))
	{
		if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
		{
			MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
		}
	}
	else if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 8))
	{
		MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 8);
	}
	if (func_300(0, 1))
	{
		if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
		{
			MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 9))
	{
		MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 9);
	}
	if (func_300(1, 0))
	{
		if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
		{
			MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 10))
	{
		MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 10);
	}
	if (func_300(0, 0))
	{
		if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
		{
			MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
		}
	}
	else if (MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 11))
	{
		MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 11);
	}
}

void func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_491(iVar0);
		func_485(iVar0);
		switch (func_15(iVar0))
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_485(int iParam0)
{
	if (func_300(0, 0) || iLocal_675 == -1)
	{
		func_84(iParam0);
		func_86(iParam0);
		func_81(iParam0, -1);
		return;
	}
	if (func_7(iParam0) == -1)
	{
		if (func_258(NETWORK::PARTICIPANT_ID_TO_INT(), iParam0))
		{
			func_86(iParam0);
		}
		else
		{
			func_487(iParam0);
		}
	}
	else
	{
		func_86(iParam0);
	}
	if (iLocal_676 != func_82(iParam0, 1))
	{
		switch (iLocal_677)
		{
			case 0:
				func_81(iParam0, -1);
				iLocal_677++;
				break;
			
			case 1:
				func_486(iParam0);
				iLocal_676 = func_82(iParam0, 1);
				iLocal_677 = 0;
				break;
			}
	}
}

void func_486(int iParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_118, func_510(iParam0)))
	{
		HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 0), 1, func_82(iParam0, 1));
		if (func_510(iParam0) == 4)
		{
			HUD::SET_MINIMAP_COMPONENT(func_83(iParam0, 1), 1, func_82(iParam0, 1));
		}
		MISC::SET_BIT(&iLocal_118, func_510(iParam0));
	}
}

void func_487(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(func_87(iParam0)))
	{
		func_490(iParam0, HUD::ADD_BLIP_FOR_COORD(func_356(iParam0)));
		HUD::SET_BLIP_PRIORITY(func_87(iParam0), 12);
		if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_87(iParam0), "KOTC_AREANAME");
		}
		HUD::SET_BLIP_SPRITE(func_87(iParam0), 438);
		func_488(&(Local_131[iParam0 /*68*/].f_27), func_82(iParam0, 1));
		if (!MISC::IS_BIT_SET(iLocal_117, 13))
		{
			HUD::SET_BLIP_FLASHES(Local_131[iParam0 /*68*/].f_27, 1);
			HUD::SET_BLIP_FLASH_TIMER(Local_131[iParam0 /*68*/].f_27, 7000);
			MISC::SET_BIT(&iLocal_117, 13);
		}
		if (!MISC::IS_BIT_SET(iLocal_117, 12))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
			MISC::SET_BIT(&iLocal_117, 12);
		}
		HUD::SHOW_HEIGHT_ON_BLIP(func_87(iParam0), 1);
		HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(func_87(iParam0), 1);
	}
	else
	{
		func_488(&(Local_131[iParam0 /*68*/].f_27), func_82(iParam0, 0));
		if (HUD::DOES_BLIP_EXIST(func_87(iParam0)))
		{
			if (HUD::DOES_TEXT_LABEL_EXIST("KOTC_AREANAME"))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(func_87(iParam0), "KOTC_AREANAME");
			}
		}
	}
}

void func_488(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_489(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_489(int iParam0)
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

void func_490(int iParam0, int iParam1)
{
	Local_131[iParam0 /*68*/].f_27 = iParam1;
}

void func_491(int iParam0)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar2[3];
	var uVar3[3];
	vector3 vVar4[3];
	var uVar5[3];
	bool bVar6;
	float fVar7;
	float fVar8;
	
	fVar7 = 10f;
	fVar8 = 25f;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_510(iParam0) == 7)
		{
			fVar7 = 5f;
			fVar8 = 9f;
		}
		vVar1[iVar0 /*3*/] = { func_501(iParam0, iVar0) };
		vVar2[iVar0 /*3*/] = { func_500(iParam0, iVar0) };
		uVar3[iVar0] = func_499(iParam0, iVar0);
		func_498(iParam0, iVar0, &(vVar4[iVar0 /*3*/]), &(uVar5[iVar0]));
		if (MISC::IS_BIT_SET(iLocal_668, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (MISC::IS_BIT_SET(iLocal_667, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
			{
				if (!MISC::IS_BIT_SET(iLocal_669, Local_122[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
				{
					if (!func_300(1, 1))
					{
						if (iLocal_675 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
							{
								if ((!func_497(vVar1[iVar0 /*3*/]) && !func_497(vVar2[iVar0 /*3*/])) && uVar3[iVar0] > 0f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(vLocal_123[PLAYER::PLAYER_ID() /*3*/].f_2, vVar1[iVar0 /*3*/], vVar2[iVar0 /*3*/], uVar3[iVar0], 0, 1, 0))
									{
										bVar6 = true;
									}
								}
								if (func_510(iParam0) == 7)
								{
									if (func_496(iParam0) < 0f)
									{
										if (func_496(iParam0) <= fVar7 && func_496(iParam0) >= (fVar7 * -1f))
										{
											if (func_495(iParam0) <= fVar8)
											{
												bVar6 = true;
											}
										}
									}
								}
								else if (!func_497(vVar4[iVar0 /*3*/]))
								{
									if (func_494(iParam0, iVar0) < 0f)
									{
										if (func_494(iParam0, iVar0) >= (uVar5[iVar0] * -1f))
										{
											if (func_493(iParam0, iVar0) <= uVar5[iVar0])
											{
												bVar6 = true;
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
		iVar0++;
	}
	func_492(iParam0, bVar6);
}

void func_492(int iParam0, bool bParam1)
{
	Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1[iParam0] = bParam1;
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), iParam0);
	}
}

float func_493(int iParam0, int iParam1)
{
	return Local_131[iParam0 /*68*/].f_41[iParam1];
}

float func_494(int iParam0, int iParam1)
{
	return Local_131[iParam0 /*68*/].f_45[iParam1];
}

float func_495(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_38;
}

float func_496(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_39;
}

int func_497(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_498(int iParam0, int iParam1, var uParam2, float fParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (func_510(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.966f, 3777.477f, 51.767f };
					*fParam3 = 5.3f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 1:
			switch (func_510(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 2515.315f, 3789.364f, 52.088f };
					*fParam3 = 3.35f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
		
		case 2:
			switch (func_510(iParam0))
			{
				case 0:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 1:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 3:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 5:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 6:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
				
				case 7:
					*uParam2 = { 0f, 0f, 0f };
					*fParam3 = 0f;
					break;
			}
			break;
	}
}

var func_499(int iParam0, int iParam1)
{
	return Local_131[iParam0 /*68*/].f_20[iParam1];
}

Vector3 func_500(int iParam0, int iParam1)
{
	return Local_131[iParam0 /*68*/].f_10[iParam1 /*3*/];
}

Vector3 func_501(int iParam0, int iParam1)
{
	return Local_131[iParam0 /*68*/][iParam1 /*3*/];
}

void func_502(int iParam0)
{
	Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = iParam0;
}

void func_503(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_504("kwUfKUus6EuQyNSL8KpY-w");
					func_504("yMTOFLfO2UKwzKrmgPP7kg");
					func_504("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_504("tP5HSeCA0UiHnkRzakdO2Q");
					func_504("uEkrqoerQEmQ0uZRtp4rkw");
					func_504("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_504("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_504("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_504("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_504("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_504("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_504("uEkrqoerQEmQ0uZRtp4rkw");
					func_504("92t91kL3Wkqvl2Kc82cNSA");
					func_504("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_504("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_504("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_504("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_504("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_504("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_504("fOfm7nzMLkav0ldcSCNAzA");
					func_504("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_504("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_504("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_504("Ma78E44OMkGfYPmCPZXUNA");
					func_504("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_504("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_504("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_504("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_504("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_504("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_504("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_504("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_504("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_504("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_504("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_504("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_504("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_504("fOfm7nzMLkav0ldcSCNAzA");
							func_504("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_504("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_504("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_504("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_504("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_504("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_504("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_504("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_504("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_504("fOfm7nzMLkav0ldcSCNAzA");
							func_504("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_504("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_504("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_504("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_504("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_504("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_504("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_504("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_504("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_504("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_504("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_504("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_504("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_504("aGBjo2rKi0yMDLl3a2ATGA");
									func_504("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_504("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_504("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_504("f2lnL6wZPkGWUowu0yLm1Q");
									func_504("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_504("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_504("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_504("W-OJzHlM-0ym9PsIASYZtw");
									func_504("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_504("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_504("TjGz31AMYE6bGCjAIitu6w");
									func_504("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_504("QmlvLMLCwkOvoZlkAstYxw");
									func_504("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_504("BktATxH9R0Wp2x0kWSbqjw");
									func_504("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_504("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_504("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_504("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_504("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_504("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_504("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_504("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_504("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_504("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_504("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_504(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_505(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
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

int func_505(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_507(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_506(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_506(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_507(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_507(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_509(uParam0->f_1))
	{
		if (func_508(uParam0))
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

int func_508(var uParam0)
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

bool func_509(int iParam0)
{
	return iParam0 == 9999;
}

int func_510(int iParam0)
{
	return Local_112.f_6[iParam0 /*204*/].f_69;
}

int func_511()
{
	return Local_112;
}

int func_512(int iParam0)
{
	return Local_116[iParam0 /*5*/];
}

void func_513()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	
	iVar0 = -1;
	iVar1 = -1;
	if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_510(iVar2) > -1)
			{
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_531(iVar2, iVar3, func_532(iVar2, iVar3));
					func_529(iVar2, iVar3, func_530(iVar2, iVar3));
					func_527(iVar2, func_528(iVar2));
					func_525(iVar2, iVar3, func_526(iVar2, iVar3));
					MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 0);
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_524(iVar2) <= 1)
			{
				func_523(iVar2, 0);
			}
			else
			{
				func_523(iVar2, 1);
			}
		}
		if (func_8(iVar2) == -1)
		{
			if (!func_152(iVar2))
			{
				MISC::SET_BIT(&iLocal_117, 0);
			}
		}
		else if (!func_14(iVar2))
		{
			bVar5 = true;
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_523(iVar2, 0);
			}
		}
		else
		{
			iVar0 = func_8(iVar2);
			iVar1 = func_7(iVar2);
			if (!func_152(iVar2))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (iVar0 > -1)
					{
						if (!MISC::IS_BIT_SET(iLocal_668, iVar0))
						{
							MISC::SET_BIT(&iLocal_117, 0);
						}
						if (!MISC::IS_BIT_SET(iLocal_667, iVar0))
						{
							MISC::SET_BIT(&iLocal_117, 0);
						}
						if (MISC::IS_BIT_SET(iLocal_669, iVar0))
						{
							MISC::SET_BIT(&iLocal_117, 0);
						}
						if (!func_258(iVar0, iVar2))
						{
							MISC::SET_BIT(&iLocal_117, 0);
						}
					}
				}
			}
			else if (iVar0 > -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_668, iVar0))
				{
					bVar5 = true;
				}
				if (!MISC::IS_BIT_SET(iLocal_667, iVar1))
				{
					bVar5 = true;
				}
				if (MISC::IS_BIT_SET(iLocal_669, iVar1))
				{
					bVar5 = true;
				}
				if (!func_258(iVar0, iVar2))
				{
					bVar5 = true;
				}
			}
		}
		if (bVar5)
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_522(iVar2, -1);
				func_521(iVar2, -1);
			}
			func_520(iVar2, uVar4);
		}
		if (MISC::IS_BIT_SET(iLocal_117, 0))
		{
			if (func_519(iVar2) > -1 && func_518(iVar2) > -1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_522(iVar2, func_519(iVar2));
					func_521(iVar2, func_518(iVar2));
					func_520(iVar2, func_517(iVar2));
					if (!MISC::IS_BIT_SET(Local_112.f_6[iVar2 /*204*/].f_203, func_519(iVar2)))
					{
						MISC::SET_BIT(&(Local_112.f_6[iVar2 /*204*/].f_203), func_519(iVar2));
					}
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_514(iVar2);
		}
		iVar2++;
	}
}

void func_514(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 > Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3)
				{
					uVar3 = Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3;
					uVar4 = Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/];
					uVar5 = Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1;
					Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_3 = Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3;
					Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/] = Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
					Local_112.f_6[iParam0 /*204*/].f_74[iVar1 /*4*/].f_1 = Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1;
					Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 = uVar3;
					Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/] = uVar4;
					Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1 = uVar5;
				}
				if ((iVar1 - 1) == 0 && Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_3 > 0f)
				{
					if (!Local_112.f_283 == Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/])
					{
						Local_112.f_283 = Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/];
						Var2.f_2 = 1378704051;
						Var2.f_10 = PLAYER::INT_TO_PLAYERINDEX(Local_112.f_6[iParam0 /*204*/].f_74[(iVar1 - 1) /*4*/].f_1);
						func_515(Var2, func_516(1));
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_515(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_516(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_754(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

var func_517(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_31;
}

int func_518(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_35;
}

int func_519(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_34;
}

void func_520(int iParam0, var uParam1)
{
	Local_131[iParam0 /*68*/].f_30 = uParam1;
}

void func_521(int iParam0, int iParam1)
{
	Local_112.f_6[iParam0 /*204*/].f_2 = iParam1;
}

void func_522(int iParam0, int iParam1)
{
	if (iParam1 != func_8(iParam0))
	{
	}
	Local_112.f_6[iParam0 /*204*/].f_1 = iParam1;
}

void func_523(int iParam0, int iParam1)
{
	Local_112.f_6[iParam0 /*204*/].f_72 = iParam1;
}

int func_524(int iParam0)
{
	return Local_131[iParam0 /*68*/].f_37;
}

void func_525(int iParam0, int iParam1, var uParam2)
{
	Local_131[iParam0 /*68*/].f_20[iParam1] = uParam2;
}

float func_526(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_510(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 6f;
				
				case 4:
					return 7f;
				
				case 1:
					return 8.25f;
				
				case 3:
					return 16.5f;
				
				case 5:
					return 9.65f;
				
				case 6:
					return 9.15f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_510(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 3.5f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_510(iParam0))
			{
				case 0:
					return 23f;
				
				case 2:
					return 0f;
				
				case 4:
					return 0f;
				
				case 1:
					return 0f;
				
				case 3:
					return 0f;
				
				case 5:
					return 0f;
				
				case 6:
					return 0f;
				
				case 7:
					return 0f;
				
				default:
			}
			break;
	}
	return 0f;
}

void func_527(int iParam0, vector3 vParam1)
{
	Local_131[iParam0 /*68*/].f_24 = { vParam1 };
}

Vector3 func_528(int iParam0)
{
	switch (func_510(iParam0))
	{
		case 0:
			return -1195.435f, -1788.217f, 14.6269f;
		
		case 2:
			return -379.8141f, 6087.215f, 43.2552f;
		
		case 4:
			return 2516.59f, 3784.677f, 52.0053f;
		
		case 1:
			return 1667.193f, -27.4697f, 183.774f;
		
		case 3:
			return -746.2f, 5594.6f, 41.7f;
		
		case 5:
			return -389.3f, 1135.7f, 322.6f;
		
		case 6:
			return 473.6f, -1339.1f, 35.2f;
		
		case 7:
			return -1459.651f, 179.275f, 53f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_529(int iParam0, int iParam1, vector3 vParam2)
{
	Local_131[iParam0 /*68*/].f_10[iParam1 /*3*/] = { vParam2 };
}

Vector3 func_530(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_510(iParam0))
			{
				case 0:
					return -1178.575f, -1795.219f, 22.42828f;
				
				case 2:
					return -377.4193f, 6083.058f, 46.63536f;
				
				case 4:
					return 2518.118f, 3772.498f, 58.13546f;
				
				case 1:
					return 1673.975f, -24.62664f, 199.2563f;
				
				case 3:
					return -756.4877f, 5594.868f, 44.17008f;
				
				case 5:
					return -391.5381f, 1125.141f, 325.0288f;
				
				case 6:
					return 470.2388f, -1335.768f, 38.44154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_510(iParam0))
			{
				case 0:
					return -1180.375f, -1777.348f, 22.48125f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1676.203f, -25.81484f, 200.1802f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_510(iParam0))
			{
				case 0:
					return -1194.205f, -1806.82f, 22.48f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_531(int iParam0, int iParam1, vector3 vParam2)
{
	Local_131[iParam0 /*68*/][iParam1 /*3*/] = { vParam2 };
}

Vector3 func_532(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (func_510(iParam0))
			{
				case 0:
					return -1212.381f, -1780.108f, 7.481341f;
				
				case 2:
					return -381.2328f, 6089.681f, 34.37778f;
				
				case 4:
					return 2516.82f, 3795.646f, 49.82948f;
				
				case 1:
					return 1660.532f, -27.94882f, 181.587f;
				
				case 3:
					return -736.0183f, 5595.02f, 40.53122f;
				
				case 5:
					return -386.508f, 1144.122f, 321.5792f;
				
				case 6:
					return 479.0627f, -1343.186f, 34.14154f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 1:
			switch (func_510(iParam0))
			{
				case 0:
					return -1209.83f, -1798.181f, 7.481341f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 1669.613f, -27.26755f, 182.2874f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
		
		case 2:
			switch (func_510(iParam0))
			{
				case 0:
					return -1197.333f, -1769.584f, 7.474364f;
				
				case 2:
					return 0f, 0f, 0f;
				
				case 4:
					return 0f, 0f, 0f;
				
				case 1:
					return 0f, 0f, 0f;
				
				case 3:
					return 0f, 0f, 0f;
				
				case 5:
					return 0f, 0f, 0f;
				
				case 6:
					return 0f, 0f, 0f;
				
				case 7:
					return 0f, 0f, 0f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_533()
{
	func_535();
	iLocal_666++;
	func_534();
}

void func_534()
{
	if (iLocal_666 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		iLocal_666 = 0;
	}
}

void func_535()
{
	if (iLocal_666 == 0)
	{
	}
}

void func_536()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	vector3 vVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_123[iVar1 /*3*/] = func_27();
		vLocal_123[iVar1 /*3*/].f_1 = -1;
		vLocal_123[iVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&iLocal_667, iVar1);
		MISC::CLEAR_BIT(&iLocal_669, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_122[iVar0 /*18*/] = func_567();
		Local_122[iVar0 /*18*/].f_1 = -1;
		MISC::CLEAR_BIT(&iLocal_668, iVar0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar8 = 0;
			while (iVar8 < 1)
			{
				MISC::CLEAR_BIT(&(Local_112.f_6[iVar8 /*204*/].f_73), iVar0);
				iVar8++;
			}
		}
		Local_122[iVar0 /*18*/].f_2 = { Var4 };
		iVar0++;
	}
	iVar8 = 0;
	while (iVar8 < 1)
	{
		func_566(iVar8, 0);
		func_565(iVar8, 0);
		func_564(iVar8, 0f);
		func_563(iVar8, 0f);
		func_562(iVar8, 0f);
		iVar11 = 0;
		while (iVar11 < 3)
		{
			func_561(iVar8, iVar11, 0f);
			func_560(iVar8, iVar11, 0f);
			func_559(iVar8, iVar11, 0f);
			iVar11++;
		}
		iVar8++;
	}
	bVar13 = true;
	bVar14 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_122[iVar0 /*18*/] = iVar0;
			MISC::SET_BIT(&iLocal_668, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_122[iVar0 /*18*/]);
			iVar1 = iVar2;
			if (func_754(iVar2, 0, 1))
			{
				vLocal_123[iVar1 /*3*/] = iVar2;
				Local_122[iVar0 /*18*/].f_1 = iVar1;
				vLocal_123[iVar1 /*3*/].f_1 = iVar0;
				vLocal_123[iVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_122[iVar0 /*18*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				iVar10++;
				if (func_482(iVar0))
				{
					iVar12++;
				}
				MISC::SET_BIT(&iLocal_667, iVar1);
				if ((ENTITY::IS_ENTITY_DEAD(vLocal_123[iVar1 /*3*/].f_2, 0) || PED::IS_PED_INJURED(vLocal_123[iVar1 /*3*/].f_2)) || !PLAYER::IS_PLAYER_PLAYING(vLocal_123[iVar1 /*3*/]))
				{
					MISC::SET_BIT(&iLocal_669, iVar1);
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 0))
					{
						bVar13 = false;
					}
					if (!MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 1))
					{
						bVar14 = false;
					}
				}
				func_557(iVar1, 2);
				if (func_255(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_555(iVar0);
					}
				}
				if (func_133(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_555(iVar0);
					}
				}
				if (func_260(iVar1))
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						func_555(iVar0);
					}
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&iLocal_668, iVar0);
			if (func_665() <= 1)
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_555(iVar0);
				}
			}
		}
		iVar8 = 0;
		while (iVar8 < 1)
		{
			if (!MISC::IS_BIT_SET(Local_112.f_213, 1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_554(iVar0, iVar8);
				}
			}
			if (MISC::IS_BIT_SET(iLocal_668, iVar0))
			{
				if (MISC::IS_BIT_SET(iLocal_667, iVar1))
				{
					if (!MISC::IS_BIT_SET(Local_112.f_213, 1))
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							func_553(iVar0, iVar1, iVar8, func_145(iVar8, iVar0));
						}
					}
					if (!MISC::IS_BIT_SET(iLocal_669, iVar1))
					{
						if (iVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							fVar19 = func_552(vLocal_123[iVar1 /*3*/].f_2, func_356(iVar8), 0);
							fVar20 = func_552(vLocal_123[iVar1 /*3*/].f_2, func_356(iVar8), 1);
							vVar21 = { ENTITY::GET_ENTITY_COORDS(vLocal_123[iVar1 /*3*/].f_2, 1) };
							fVar22 = (Local_131[iVar8 /*68*/].f_24.f_2 - vVar21.z);
							func_564(iVar8, fVar19);
							func_563(iVar8, fVar22);
							func_562(iVar8, fVar20);
							iVar11 = 0;
							while (iVar11 < 3)
							{
								vVar5 = { 0f, 0f, 0f };
								fVar6 = 0f;
								func_498(iVar8, iVar11, &vVar5, &fVar6);
								if (!func_497(vVar5))
								{
									fVar23 = func_552(vLocal_123[iVar1 /*3*/].f_2, vVar5, 0);
									fVar24 = func_552(vLocal_123[iVar1 /*3*/].f_2, vVar5, 1);
									fVar25 = (vVar5.z - vVar21.z);
									func_561(iVar8, iVar11, fVar23);
									func_560(iVar8, iVar11, fVar25);
									func_559(iVar8, iVar11, fVar24);
								}
								iVar11++;
							}
						}
						if (func_258(iVar0, iVar8))
						{
							func_566(iVar8, 1);
							iVar9 = func_524(iVar8);
							iVar9++;
							func_565(iVar8, iVar9);
							if (func_8(iVar8) != iVar0 && func_7(iVar8) != iVar1)
							{
								if (func_519(iVar8) == -1)
								{
									func_619(iVar8, iVar0);
								}
								if (func_518(iVar8) == -1)
								{
									func_618(iVar8, iVar1);
								}
								func_617(iVar8, vLocal_123[iVar1 /*3*/].f_2);
							}
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								MISC::SET_BIT(&(Local_112.f_6[iVar8 /*204*/].f_73), iVar0);
							}
						}
					}
					if (iVar0 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!MISC::IS_BIT_SET(iLocal_669, iVar1))
						{
							if (func_233(iVar8) <= IntToFloat(Global_262145.f_11497))
							{
								if (!MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 12))
								{
									MISC::SET_BIT(&(Local_116[iVar0 /*5*/].f_4), 12);
								}
							}
							else if (func_233(iVar8) >= IntToFloat(Global_262145.f_11498))
							{
								if (MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 12))
								{
									MISC::CLEAR_BIT(&(Local_116[iVar0 /*5*/].f_4), 12);
								}
							}
							if (!func_259(1, 0))
							{
								if (func_233(iVar8) <= IntToFloat(Global_262145.f_11497))
								{
									if (!MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 3))
									{
										MISC::SET_BIT(&(Local_116[iVar0 /*5*/].f_4), 3);
									}
								}
								else if (func_233(iVar8) >= IntToFloat(Global_262145.f_11498))
								{
									if (MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 3))
									{
										MISC::CLEAR_BIT(&(Local_116[iVar0 /*5*/].f_4), 3);
									}
								}
							}
							else if (MISC::IS_BIT_SET(Local_116[iVar0 /*5*/].f_4, 3))
							{
								MISC::CLEAR_BIT(&(Local_116[iVar0 /*5*/].f_4), 3);
							}
						}
					}
				}
				iVar7 = 6;
				if (PLAYER::PLAYER_ID() != vLocal_123[iVar1 /*3*/])
				{
					if (func_205(PLAYER::PLAYER_ID(), vLocal_123[iVar1 /*3*/]))
					{
						iVar7 = func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_669, iVar1))
				{
					if (func_300(0, 0))
					{
						func_551(iVar1);
					}
					else if (func_7(iVar8) != iVar1)
					{
						func_551(iVar1);
					}
					else if (func_665() != 1)
					{
						func_551(iVar1);
					}
					else
					{
						func_546(iVar1);
						if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								HUD::GET_HUD_COLOUR(iVar7, &iVar15, &iVar16, &iVar17, &iVar18);
								iVar18 = 100;
								GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(vLocal_123[iVar1 /*3*/].f_2, 1) + Vector(1.5f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar15, iVar16, iVar17, iVar18, 1, 1, 2, 0, 0, 0, 0);
							}
						}
					}
				}
				if (func_754(vLocal_123[iVar1 /*3*/], 1, 1))
				{
					if (func_544(vLocal_123[iVar1 /*3*/]))
					{
						func_537(vLocal_123[iVar1 /*3*/], func_489(iVar7), func_540(iVar0, iVar1, iVar8), 0);
					}
				}
			}
			iVar8++;
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (bVar13)
		{
			MISC::SET_BIT(&(Local_112.f_213), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_112.f_213), 0);
		}
		if (bVar14)
		{
			MISC::SET_BIT(&(Local_112.f_213), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_112.f_213), 1);
		}
	}
	if (iVar12 > iLocal_119)
	{
		iLocal_119 = iVar12;
	}
	if (iVar10 > iLocal_670)
	{
		iLocal_670 = iVar10;
	}
	else
	{
		Local_112.f_216 = (iLocal_670 - iVar10);
	}
}

void func_537(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_539(iParam0))
	{
		return;
	}
	if (func_538(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_538(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_539(int iParam0)
{
	if (iParam0 == func_27())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_220())
	{
		return 1;
	}
	return 0;
}

int func_540(int iParam0, int iParam1, int iParam2)
{
	if (func_300(0, 0))
	{
		return 0;
	}
	if (iParam0 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0;
	}
	if (func_541(iParam1))
	{
		return 0;
	}
	if (iParam0 == func_8(iParam2))
	{
		return 1;
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != func_8(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_541(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_136();
	}
	return MISC::IS_BIT_SET(Global_1373500.f_241.f_136[func_543(10) /*33*/][iParam0], func_542(10));
}

int func_542(int iParam0)
{
	return (iParam0 % 32);
}

int func_543(int iParam0)
{
	return (iParam0 / 32);
}

bool func_544(int iParam0)
{
	return func_545(&(Global_2416074.f_619[iParam0]));
}

int func_545(var uParam0)
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

void func_546(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (iParam0 > -1)
	{
		if (MISC::IS_BIT_SET(iLocal_667, iParam0))
		{
			if (!MISC::IS_BIT_SET(iLocal_669, iParam0))
			{
				if (func_205(PLAYER::PLAYER_ID(), vLocal_123[iParam0 /*3*/]))
				{
					iVar0 = func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
				}
				func_549(vLocal_123[iParam0 /*3*/], 439, 1, 0);
				if (func_544(vLocal_123[iParam0 /*3*/]))
				{
					func_537(vLocal_123[iParam0 /*3*/], func_489(iVar0), 1, 0);
				}
				func_547(vLocal_123[iParam0 /*3*/], 1, 1, 0);
				MISC::SET_BIT(&iLocal_674, iParam0);
			}
		}
	}
}

void func_547(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_539(iParam0))
	{
		return;
	}
	if (func_538(&(Global_2416074.f_817[iParam0]), &(Global_2416074.f_1180[iParam0]), &(Global_2416074.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_548(iParam0, bParam2);
	}
}

void func_548(int iParam0, bool bParam1)
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
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], 0);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416074[iParam0], 1);
		}
	}
}

void func_549(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_539(iParam0))
	{
		return;
	}
	if (func_538(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_550();
		}
	}
}

void func_550()
{
	Global_2416074.f_1515 = 1;
}

void func_551(int iParam0)
{
	int iVar0;
	
	iVar0 = 6;
	if (MISC::IS_BIT_SET(iLocal_674, iParam0))
	{
		if (iParam0 > -1)
		{
			if (MISC::IS_BIT_SET(iLocal_667, iParam0))
			{
				if (!MISC::IS_BIT_SET(iLocal_669, iParam0))
				{
					if (PLAYER::PLAYER_ID() != vLocal_123[iParam0 /*3*/])
					{
						if (func_205(PLAYER::PLAYER_ID(), vLocal_123[iParam0 /*3*/]))
						{
							iVar0 = func_168(PLAYER::PLAYER_ID(), -2, 0, 0, 0);
						}
					}
					func_549(vLocal_123[iParam0 /*3*/], 439, 0, 0);
					if (func_544(vLocal_123[iParam0 /*3*/]))
					{
						func_537(vLocal_123[iParam0 /*3*/], func_489(iVar0), 0, 0);
					}
					func_547(vLocal_123[iParam0 /*3*/], 0, 0, 0);
					MISC::CLEAR_BIT(&iLocal_674, iParam0);
				}
			}
		}
	}
}

float func_552(int iParam0, vector3 vParam1, int iParam2)
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam2);
}

void func_553(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Local_112.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/] = iParam0;
	Local_112.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_1 = iParam1;
	Local_112.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_2 = iParam1;
	Local_112.f_6[iParam2 /*204*/].f_74[iParam0 /*4*/].f_3 = fParam3;
}

void func_554(int iParam0, int iParam1)
{
	Local_112.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/] = -1;
	Local_112.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_1 = -1;
	Local_112.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_2 = func_27();
	Local_112.f_6[iParam1 /*204*/].f_74[iParam0 /*4*/].f_3 = -1f;
}

void func_555(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_6(iVar0, iParam0) > 0f || func_146(iVar0, iParam0) > 0f)
		{
			func_4(iVar0, iParam0, 0f);
			func_556(iVar0, iParam0, 0f);
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (Local_112.f_217[iVar1] > 0f)
			{
				if (Local_112.f_250[iVar1] == iParam0)
				{
					Local_112.f_217[iVar1] = 0f;
					Local_112.f_250[iVar1] = -1;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_556(int iParam0, int iParam1, float fParam2)
{
	Local_112.f_6[iParam0 /*204*/].f_36[iParam1] = fParam2;
}

void func_557(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 0))
	{
		return;
	}
	if (func_18(&(Global_1574647.f_18)))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1574647.f_2, iParam0))
	{
		if (Global_1574647 < iParam1 && MISC::IS_BIT_SET(Global_1574647.f_1, 1))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 0);
			return;
		}
		if (Global_1574647 != 0)
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 1);
		}
		Global_1574647 = 0;
		Global_1574647.f_2 = 0;
	}
	MISC::SET_BIT(&(Global_1574647.f_2), iParam0);
	bVar0 = true;
	if (func_226(iParam0))
	{
		bVar0 = false;
	}
	if (func_558(iParam0))
	{
		bVar0 = false;
	}
	if (func_36(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_255(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574647++;
	}
}

bool func_558(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10);
}

void func_559(int iParam0, int iParam1, float fParam2)
{
	Local_131[iParam0 /*68*/].f_49[iParam1] = fParam2;
}

void func_560(int iParam0, int iParam1, float fParam2)
{
	Local_131[iParam0 /*68*/].f_45[iParam1] = fParam2;
}

void func_561(int iParam0, int iParam1, float fParam2)
{
	Local_131[iParam0 /*68*/].f_41[iParam1] = fParam2;
}

void func_562(int iParam0, float fParam1)
{
	Local_131[iParam0 /*68*/].f_40 = fParam1;
}

void func_563(int iParam0, float fParam1)
{
	Local_131[iParam0 /*68*/].f_39 = fParam1;
}

void func_564(int iParam0, float fParam1)
{
	Local_131[iParam0 /*68*/].f_38 = fParam1;
}

void func_565(int iParam0, int iParam1)
{
	Local_131[iParam0 /*68*/].f_37 = iParam1;
}

void func_566(int iParam0, int iParam1)
{
	Local_131[iParam0 /*68*/].f_36 = iParam1;
}

int func_567()
{
	return -1;
}

void func_568()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 185)
		{
			func_569(iVar0);
		}
		if (iVar1 == 154)
		{
		}
		iVar0++;
	}
}

void func_569(int iParam0)
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
	struct<4> Var11;
	struct<14> Var12;
	float fVar13;
	
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var11, 11);
	if (ENTITY::DOES_ENTITY_EXIST(Var11))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var11))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var11.f_1))
					{
						if (ENTITY::IS_ENTITY_A_PED(Var11.f_1))
						{
							iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var11.f_1);
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								iVar8 = iVar3;
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
								{
									iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
									if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
									{
										iVar6 = iVar5;
									}
									if (iVar6 != -1)
									{
										if (iVar6 != iVar7)
										{
											iVar9 = 0;
											while (iVar9 < 1)
											{
												if (iVar6 == func_8(iVar9))
												{
													if (!func_259(1, 0))
													{
														if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 7))
															{
																MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 7);
															}
														}
													}
													if (Var11.f_3)
													{
														if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
														{
															if (iLocal_673 < func_616())
															{
																iLocal_673++;
																func_573(0, iVar1, "", -1859646258, 2131309714, func_615(), 1, -1, 0, 0, 0);
																Local_113.f_7 = (Local_113.f_7 + func_615());
															}
															else
															{
																iLocal_673++;
															}
														}
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															fVar13 = func_146(iVar9, iVar6);
															fVar13 = (fVar13 + IntToFloat(Global_262145.f_11193));
															func_556(iVar9, iVar6, fVar13);
														}
													}
												}
												else if (iVar7 == func_8(iVar9))
												{
													if (iVar6 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														if (!func_259(1, 0))
														{
															if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 6))
															{
																MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 6);
															}
															if (!MISC::IS_BIT_SET(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
															{
																MISC::SET_BIT(&(Local_116[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
																func_238(1);
															}
														}
														if (Var11.f_3)
														{
															if (iLocal_671 < func_572())
															{
																iLocal_671++;
																func_573(0, iVar1, "", -1859646258, 2131309714, func_571(), 1, -1, 0, 0, 0);
																Local_113.f_7 = (Local_113.f_7 + func_571());
															}
															else
															{
																iLocal_671++;
															}
														}
													}
													if (iVar7 == NETWORK::PARTICIPANT_ID_TO_INT())
													{
														iLocal_672++;
													}
													if (func_258(iVar6, iVar9))
													{
														if (Var11.f_3)
														{
															if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
															{
																if (func_519(iVar9) == -1)
																{
																	func_619(iVar9, iVar6);
																}
																if (func_518(iVar9) == -1)
																{
																	func_618(iVar9, iVar8);
																}
																MISC::SET_BIT(&iLocal_117, 0);
															}
														}
													}
													else if (Var11.f_3)
													{
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															Var12.f_2 = 14062493;
															Var12.f_10 = iVar3;
															iVar10 = 0;
															while (iVar10 < 32)
															{
																if (MISC::IS_BIT_SET(iLocal_668, iVar10))
																{
																	if (MISC::IS_BIT_SET(iLocal_667, Local_122[iVar10 /*18*/].f_1))
																	{
																		if (!MISC::IS_BIT_SET(Local_116[iVar10 /*5*/].f_4, 9) && !MISC::IS_BIT_SET(Local_116[iVar10 /*5*/].f_4, 10))
																		{
																			if (func_196(iVar10))
																			{
																				func_515(Var12, func_570(Local_122[iVar10 /*18*/].f_1));
																			}
																		}
																	}
																}
																iVar10++;
															}
														}
													}
												}
												iVar9++;
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

int func_570(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_571()
{
	return Global_262145.f_10998;
}

int func_572()
{
	return Global_262145.f_11000;
}

int func_573(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_574(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_574(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_584(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_580(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_575(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_575(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_578(iParam0, 1) };
	if (iParam0 == func_577(PLAYER::PLAYER_PED_ID()))
	{
		func_576(1);
	}
	func_580(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_576(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_577(int iParam0)
{
	return iParam0;
}

Vector3 func_578(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_579(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_579(int iParam0)
{
	return iParam0;
}

void func_580(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_583(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_582();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_581();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_581()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_582()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_583(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_584(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_585(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_585(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_614(PLAYER::PLAYER_ID()) || func_613(PLAYER::PLAYER_ID()))
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
		else if (func_431() || func_611(PLAYER::PLAYER_ID()))
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
		else if (func_188())
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
	if (func_132(sParam2))
	{
	}
	if (func_610())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_608(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_607(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_604(0, &iVar1);
					break;
				
				case 3:
					func_604(1, &iVar1);
					break;
				
				case 1:
					func_601(&iVar1);
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
			func_268(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_592((func_599(PLAYER::PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_268(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_588(iVar1);
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
				func_586((func_587(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_586((func_587(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_586(int iParam0)
{
	if (func_610())
	{
		Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_274(joaat("mpply_globalxp"), iParam0);
	}
}

int func_587(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_754(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_276(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_276(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_588(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_41(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_590(func_591(&Var0));
			if (iVar1 == 0)
			{
				func_589(&Global_1384134, iParam0);
				func_273(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_589(&Global_1384135, iParam0);
				func_273(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_589(&Global_1384136, iParam0);
				func_273(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_589(&Global_1384137, iParam0);
				func_273(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_589(&Global_1384138, iParam0);
				func_273(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_589(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_590(int iParam0)
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

int func_591(var uParam0)
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

void func_592(int iParam0, int iParam1, int iParam2)
{
	if (func_610())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_214(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_214(-1)])
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
		if (func_598(PLAYER::PLAYER_ID()))
		{
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_211.f_6 = func_596(iParam0, 1);
		}
		func_269(639, iParam0, -1, 1);
		func_270(640, func_596(iParam0, 1), -1, 1, 0);
		Global_1384279[func_214(-1)] = iParam0;
		func_593(-1109644434, 7, 0);
	}
}

void func_593(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_595(iParam1, iParam2))
	{
		iVar0 = func_594();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_594()
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

int func_595(int iParam0, var uParam1)
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

int func_596(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_597(iParam0, 0);
}

int func_597(int iParam0, int iParam1)
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

int func_598(int iParam0)
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

int func_599(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_600(iParam0);
}

int func_600(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1384279[func_214(-1)];
			}
			else if (func_598(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_214(-1)];
	}
	return 0;
}

void func_601(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_175(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_603(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_602(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_602(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_602(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_603(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2507671 = { func_41(iParam0) };
		Global_2507684 = { func_41(iParam1) };
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

void func_604(bool bParam0, int iParam1)
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
				if (func_754(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_603(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_754(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_605(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_603(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_602(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_602(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_605(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_606(iParam0), func_606(iParam1));
	return 0f;
}

Vector3 func_606(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_607(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_602(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_608(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_599(PLAYER::PLAYER_ID(), 1))
		{
			iParam0 = -func_599(PLAYER::PLAYER_ID(), 1);
		}
	}
	if (func_609(8000, 0, 0) > 0)
	{
		if (func_609(8000, 0, 0) < (iParam0 + func_599(PLAYER::PLAYER_ID(), 1)))
		{
			iParam0 = (func_609(8000, 0, 0) - func_599(PLAYER::PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_609(int iParam0, bool bParam1, int iParam2)
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

int func_610()
{
	return 1;
}

int func_611(int iParam0)
{
	return func_612(func_107(iParam0));
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_613(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_614(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

int func_615()
{
	return Global_262145.f_10999;
}

int func_616()
{
	return Global_262145.f_11001;
}

void func_617(int iParam0, var uParam1)
{
	Local_131[iParam0 /*68*/].f_31 = uParam1;
}

void func_618(int iParam0, int iParam1)
{
	Local_131[iParam0 /*68*/].f_35 = iParam1;
}

void func_619(int iParam0, int iParam1)
{
	Local_131[iParam0 /*68*/].f_34 = iParam1;
}

void func_620(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!MISC::IS_BIT_SET(iLocal_117, 5))
	{
		if (func_15(iParam0) != 0)
		{
			if (!func_255(PLAYER::PLAYER_ID()))
			{
				if (!func_133(PLAYER::PLAYER_ID()))
				{
					if (func_482(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (iParam1 <= 2)
						{
							if (func_196(NETWORK::PARTICIPANT_ID_TO_INT()) || func_482(NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_647(func_661(iParam1), &iVar0, &iVar1, &iVar2);
							}
						}
						else
						{
							func_646(1);
						}
						if (iVar1 > 0)
						{
							func_645();
							func_573(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
							Local_113.f_7 = (Local_113.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_634(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (func_633())
							{
								func_622(-212607085, iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_KING_OF_THE_HILL", &uVar4);
							}
							Local_113.f_6 = (Local_113.f_6 + iVar0);
							if (!Global_262145.f_11404)
							{
								if (Local_113.f_6 > 0)
								{
									func_621(16, Local_113.f_6);
								}
							}
							Global_2461199 = iVar0;
						}
					}
					else
					{
						func_646(0);
					}
				}
				else
				{
					func_646(0);
				}
			}
			else
			{
				func_646(0);
			}
		}
		else
		{
			func_646(0);
		}
		MISC::SET_BIT(&iLocal_117, 5);
	}
}

void func_621(int iParam0, int iParam1)
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

void func_622(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_633())
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
				func_623(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_623(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_623(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_623(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_623(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_633())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_38()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_630(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_629(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_624(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_624(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2424073[PLAYER::PLAYER_ID() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_625(iParam0);
	}
}

void func_625(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_633())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_628(iParam0))
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
		func_626(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_626(var uParam0)
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
	func_627(&(uParam0->f_13));
	func_627(&(uParam0->f_13.f_13));
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

void func_627(var uParam0)
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

int func_628(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_629(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_630(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_633())
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
				func_631(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_631(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_570(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_632();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_632()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_633()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_634(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_644())
		{
			if (func_147(0))
			{
				if (!func_127(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_643()))
					{
						if (func_642() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_642());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_640(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_639("GB_BCUT_TICK1", func_643(), iVar0, 0, 0, 1, 1);
						}
						func_638(20);
						func_635(func_643(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_635(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_754(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_637(iParam0);
		func_636(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_570(iParam0));
	}
}

void func_636(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_637(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_638(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_639(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_168(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_42(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_33(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_640(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_641(1);
	}
	else
	{
		iVar1 = func_641(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_641(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_642()
{
	return Global_262145.f_12389;
}

int func_643()
{
	return Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_11;
}

bool func_644()
{
	return func_74(PLAYER::PLAYER_ID());
}

void func_645()
{
	Global_2460540 = 1;
}

void func_646(bool bParam0)
{
	if (bParam0)
	{
		if (func_212(1))
		{
			MISC::SET_BIT(&Global_1574672, 1);
		}
	}
	else if (func_212(2))
	{
		MISC::SET_BIT(&Global_1574672, 2);
	}
}

void func_647(float fParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ((func_9(&uLocal_120, 0, 0) / 60) / 1000);
	if (iVar0 > Global_262145.f_11435)
	{
		iVar0 = Global_262145.f_11435;
	}
	else if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	*uParam3 = (func_660() * iVar0);
	*uParam2 = (func_659() * iVar0);
	if (fParam0 > 0f)
	{
		iVar1 = ((Global_262145.f_11188 / 60) / 1000);
		if (iVar1 > func_658())
		{
			iVar1 = func_658();
		}
		iVar2 = iLocal_119;
		if (iVar2 > func_657())
		{
			iVar2 = func_657();
		}
		*uParam1 = SYSTEM::ROUND((IntToFloat(func_650(func_656(), func_655(), iVar1, fParam0, func_654(), func_653(), func_652(), iVar2)) * Global_262145.f_11462));
		*uParam2 = (*uParam2 + SYSTEM::ROUND((IntToFloat(func_650(func_649(), func_648(), iVar1, fParam0, func_654(), func_653(), func_652(), iVar2)) * Global_262145.f_11463)));
	}
}

int func_648()
{
	return Global_262145.f_10995;
}

int func_649()
{
	return Global_262145.f_10997;
}

int func_650(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_651(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_651(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_652()
{
	return Global_262145.f_11004;
}

float func_653()
{
	return Global_262145.f_11003;
}

float func_654()
{
	return Global_262145.f_11002;
}

int func_655()
{
	return Global_262145.f_10994;
}

int func_656()
{
	return Global_262145.f_10996;
}

int func_657()
{
	return Global_262145.f_11347;
}

int func_658()
{
	return Global_262145.f_11346;
}

int func_659()
{
	return Global_262145.f_10993;
}

int func_660()
{
	return Global_262145.f_10992;
}

float func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11005;
		
		case 1:
			return Global_262145.f_11006;
		
		case 2:
			return Global_262145.f_11007;
		
		default:
	}
	return 0f;
}

int func_662(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_31(PLAYER::PLAYER_ID(), 0) || func_413(PLAYER::PLAYER_ID(), 0))
	{
		if (func_30(PLAYER::PLAYER_ID()) || func_256(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 1);
		}
		if (func_266(26, -1))
		{
			func_291(26, -1);
		}
		return 1;
	}
	if (func_18(&(Global_1574647.f_18)))
	{
		if (!func_5(&(Global_1574647.f_18), 7500, 0))
		{
			return 0;
		}
		func_3(&(Global_1574647.f_18));
	}
	if (func_663())
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 0);
		}
		if (func_266(26, -1))
		{
			func_291(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 1);
		}
		if (func_266(26, -1))
		{
			func_291(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_663()
{
	return MISC::IS_BIT_SET(Global_1574647.f_1, 0);
}

void func_664(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574647.f_1, 2) && !func_226(PLAYER::PLAYER_ID())) && !func_255(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_202(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574647.f_1), 2);
	}
}

int func_665()
{
	return Local_112.f_1;
}

void func_666()
{
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 6))
	{
		func_685();
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574647.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 4) || MISC::IS_BIT_SET(Global_1574647.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_754(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 7);
				func_236("FME_PASINT", 30000);
				func_235(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574647.f_1, 17))
		{
			if (func_136() && !func_135())
			{
				MISC::CLEAR_BIT(&(Global_1574647.f_1), 17);
				MISC::SET_BIT(&(Global_1574647.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574647.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2531497.f_795, 2)) && func_754(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73784) && !Global_58652) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_683())
			{
				func_236("AMEV_GA_RP", -1);
				if (func_107(PLAYER::PLAYER_ID()) != 200)
				{
					func_235(1);
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_218(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_754(PLAYER::PLAYER_ID(), 1, 1)) && !func_134(PLAYER::PLAYER_ID(), 21)) && !func_134(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 9);
			func_682(0);
			func_236("FME_TBL00", -1);
			func_235(1);
		}
	}
	if (func_335(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if ((func_134(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574647.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574647.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574647.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_237()) && func_754(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2531497.f_4831)
			{
				MISC::CLEAR_BIT(&(Global_1574647.f_1), 18);
				MISC::SET_BIT(&(Global_1574647.f_1), 19);
				func_236("AMTT_RPAS", -1);
				func_235(1);
			}
		}
	}
	if (((((func_335(PLAYER::PLAYER_ID()) && !func_226(PLAYER::PLAYER_ID())) && func_257(PLAYER::PLAYER_ID()) != 146) && !func_255(PLAYER::PLAYER_ID())) && !func_133(PLAYER::PLAYER_ID())) && !func_676())
	{
		if (func_217(func_257(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574647.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574647.f_1), 22);
		}
		if (func_328(PLAYER::PLAYER_ID()) || func_208())
		{
			if (!MISC::IS_BIT_SET(Global_1574647.f_1, 10))
			{
				if (func_674(func_257(PLAYER::PLAYER_ID())))
				{
					if (func_212(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574647.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_215(1);
						MISC::SET_BIT(&(Global_1574647.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 10);
			}
		}
		if (func_218(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574647.f_1, 11))
			{
				if (!Global_98721.f_8)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 12);
					func_210(1);
				}
				if (!func_673())
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 13);
					func_209();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574647.f_1), 14);
					if (func_212(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574647.f_1), 9);
					}
					func_215(1);
				}
				MISC::SET_BIT(&(Global_1574647.f_1), 11);
			}
		}
		else
		{
			func_671(0);
		}
	}
	else
	{
		func_671(1);
	}
	func_667();
	if (func_207(func_257(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574647.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 21);
	}
	if (((func_136() && !func_135()) || func_134(PLAYER::PLAYER_ID(), 21)) || func_134(PLAYER::PLAYER_ID(), 25))
	{
		if (!MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 10);
	}
}

void func_667()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_237())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_201(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (MISC::IS_BIT_SET(Global_1574647.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1574647.f_1), 26);
				}
				func_668(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574647.f_1, 26))
	{
		func_3(&(Global_1574647.f_22));
		MISC::SET_BIT(&(Global_1574647.f_1), 26);
	}
}

void func_668(int iParam0, int iParam1)
{
	if (!func_18(&(Global_1574647.f_22)))
	{
		func_11(&(Global_1574647.f_22), 0, 0);
	}
	else if (func_5(&(Global_1574647.f_22), iParam1, 0))
	{
		if (func_472() > 0)
		{
			func_232(iParam0);
			if (func_234("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_3(&(Global_1574647.f_22));
		}
	}
	else
	{
		func_670(0);
		func_669();
	}
}

void func_669()
{
	Global_2531497.f_4532 = 0;
}

void func_670(int iParam0)
{
	Global_1373500.f_68 = iParam0;
}

void func_671(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574647.f_1, 11) || (MISC::IS_BIT_SET(Global_1574647.f_1, 10) && iParam0)) || (MISC::IS_BIT_SET(Global_1574647.f_1, 22) && iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 12);
			func_210(0);
		}
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 13);
			func_672();
		}
		if (MISC::IS_BIT_SET(Global_1574647.f_1, 14) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574647.f_1), 14);
			func_215(0);
		}
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 22);
	}
}

void func_672()
{
	MISC::CLEAR_BIT(&(Global_2531497.f_4736), 0);
}

bool func_673()
{
	return MISC::IS_BIT_SET(Global_2531497.f_4736, 0);
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_218(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_208() || func_675(func_151()));
		
		default:
	}
	return 0;
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_676()
{
	if (((((((((func_314() || func_313()) || func_312()) || func_143()) || (func_309() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_679() && !func_678())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_677() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_677()
{
	return Global_968397;
}

bool func_678()
{
	return MISC::IS_BIT_SET(Global_2448961.f_2, 27);
}

int func_679()
{
	if (func_681() || func_680())
	{
		return Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_98 == 8;
	}
	return 0;
}

var func_680()
{
	return Global_2448961.f_635;
}

bool func_681()
{
	return MISC::IS_BIT_SET(Global_2448961.f_2, 11);
}

void func_682(int iParam0)
{
	int iVar0;
	
	iVar0 = func_213(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!MISC::IS_BIT_SET(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!MISC::IS_BIT_SET(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_270(2534, iVar0, -1, 1, 0);
}

int func_683()
{
	int iVar0;
	
	if (!func_18(&(Global_1574647.f_15)))
	{
		func_11(&(Global_1574647.f_15), 0, 0);
		Global_1574647.f_17 = 0;
	}
	else if (func_5(&(Global_1574647.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574647.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574647.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_754(iVar0, 1, 1) && func_684(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_606(PLAYER::PLAYER_ID()), func_606(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574647.f_17++;
		if (Global_1574647.f_17 >= 32)
		{
			Global_1574647.f_17 = 0;
			func_3(&(Global_1574647.f_15));
		}
	}
	return 0;
}

int func_684(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_598(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590446[iVar0 /*871*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_685()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_351();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574647.f_1), 8);
	func_686();
}

void func_686()
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
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, 0, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, 0, 0);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

var func_687()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_688()))
	{
		return func_688();
	}
	return func_193();
}

var func_688()
{
	return Global_2359302.f_3;
}

bool func_689()
{
	return MISC::IS_BIT_SET(Global_2359302, 11);
}

bool func_690()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

int func_691(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_692())
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

bool func_692()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_693()
{
	return Global_1574647.f_24;
}

int func_694()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2531497.f_4733)
	{
		return 0;
	}
	iVar2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_18(&(Local_112.f_1.f_1)))
	{
		iVar0 = func_695(&iVar2, &(Local_112.f_1.f_1));
		iVar1 = Global_262145.f_11188;
	}
	else if (func_18(&(Local_112.f_1.f_3)))
	{
		iVar0 = func_695(&iVar2, &(Local_112.f_1.f_3));
		iVar1 = Global_262145.f_11189;
	}
	else
	{
		return 0;
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_695(int iParam0, var uParam1)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*iParam0, *uParam1));
}

bool func_696(int iParam0)
{
	return !func_697(iParam0);
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 0) || MISC::IS_BIT_SET(Global_1590446[PLAYER::PLAYER_ID() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_698(4))
			{
				return 0;
			}
			if (func_134(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_698(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_754(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2424073[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_699()
{
	var uVar0;
	
	func_703(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_702())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_701())
	{
		return 1;
	}
	if (func_700(159))
	{
		if (!func_314())
		{
			return 1;
		}
	}
	if (func_700(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_220() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_220()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_700(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_701()
{
	return Global_2458999;
}

bool func_702()
{
	return Global_2448961.f_593;
}

void func_703(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
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
					func_704(iVar0);
					break;
				
				case -498955166:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_704(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_754(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_705(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_705(int iParam0, var uParam1)
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

void func_706()
{
	SYSTEM::WAIT(0);
}

void func_707()
{
	int iVar0;
	
	func_200();
	func_738(141);
	func_718(141, 0, MISC::IS_BIT_SET(iLocal_117, 5));
	func_299();
	func_238(0);
	if (MISC::IS_BIT_SET(iLocal_117, 16))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_Deathmatch_Type_Challenge_Scene");
		MISC::CLEAR_BIT(&iLocal_117, 16);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_80();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_715(iVar0);
		iVar0++;
	}
	func_346();
	func_713();
	func_712(0);
	func_230(29, 0);
	if (func_699())
	{
		Local_113.f_5 = 5;
	}
	else if (MISC::IS_BIT_SET(iLocal_117, 24))
	{
		Local_113.f_5 = 6;
	}
	else if (Local_113.f_5 != 1)
	{
		Local_113.f_5 = 2;
	}
	Local_113 = Local_112.f_214;
	Local_113.f_1 = Local_112.f_215;
	Local_113.f_4 = Local_112.f_216;
	Local_113.f_3 = iLocal_119;
	Local_113.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_113.f_9);
	if (!Global_262145.f_11404)
	{
		if (Local_113.f_6 > 0)
		{
			if (Local_113.f_5 == 1)
			{
				func_711();
			}
		}
	}
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_709(Local_113, iLocal_115, iLocal_673, iLocal_672, func_77(func_145(0, NETWORK::PARTICIPANT_ID_TO_INT())), -1, -1);
	}
	func_708();
}

void func_708()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_709(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76577)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_710()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			STATS::_0xBAA2F0490E146BE8(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = uParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			STATS::_0x3DE3AA516FB126A4(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			STATS::_0x6A60E43998228229(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_0x1A7CE7CD3E653485(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			STATS::_0x419615486BBF1956(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			STATS::_0x84DFC579C2FC214C(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			STATS::_0x0A9C7F36E5D7B683(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = uParam4;
			STATS::_0x164C5FF663790845(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			STATS::_0xEDBF6C9B0D2C65C8(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				STATS::_0x8C9D11605E59D955(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				STATS::_0x6551B1F7F6CD46EA(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			STATS::_0x2CD90358F67D0AA8(&Var12);
		}
	}
}

char* func_710()
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_711()
{
	MISC::SET_BIT(&(Global_2531497.f_1734), 18);
}

void func_712(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2531497.f_1734, 9))
		{
			MISC::SET_BIT(&(Global_2531497.f_1734), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2531497.f_1734, 9))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1734), 9);
	}
}

void func_713()
{
	if (Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_714();
	}
}

void func_714()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413894 = { Var0 };
	Global_2413894.f_6 = -1;
}

void func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_717(iParam0))
	{
		func_716(iVar0);
		iVar0++;
	}
	func_346();
	func_713();
	func_355(func_356(iParam0), 0, 0);
}

void func_716(int iParam0)
{
	struct<12> Var0;
	
	if (iParam0 > -1 && iParam0 < 10)
	{
		if (Global_2405071.f_363[iParam0 /*12*/].f_9)
		{
			Global_2405071.f_363[iParam0 /*12*/] = { Var0 };
		}
	}
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		case 1:
			return 3;
		
		case 3:
			return 3;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 4;
		
		default:
	}
	return 0;
}

void func_718(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 13);
		}
		if (MISC::IS_BIT_SET(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1), 14);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574647.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1574647.f_1), 21);
	}
	func_734();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_733(func_257(PLAYER::PLAYER_ID()));
		func_230(func_231(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_732(PLAYER::PLAYER_ID()) >= 12)
		{
			func_731(2546, -1);
			iVar1 = func_213(2546, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1574673, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1574673, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1574673, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1574673, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1574673, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1574673, 5);
			}
		}
		func_730();
		func_729();
		func_728();
		if ((!func_30(PLAYER::PLAYER_ID()) && !func_28(PLAYER::PLAYER_ID())) && !func_108())
		{
			func_342();
		}
		func_727();
		if (!MISC::IS_BIT_SET(Global_1674852.f_3, 0) && !MISC::IS_BIT_SET(Global_1674852.f_3, 1))
		{
			func_685();
		}
		func_726();
		MISC::CLEAR_BIT(&(Global_2531497.f_1746), 2);
		func_725();
		func_724();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_134(PLAYER::PLAYER_ID(), 21)) && !func_134(PLAYER::PLAYER_ID(), 25)) && !func_31(PLAYER::PLAYER_ID(), 0))
		{
			func_215(0);
			func_210(0);
			if (!bParam1)
			{
				func_723();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_266(26, -1))
		{
			Global_2461173 = -1;
			func_291(26, -1);
		}
	}
	if (!func_719())
	{
		Global_2507562 = 1;
	}
}

int func_719()
{
	if ((((((!func_452(PLAYER::PLAYER_ID()) && !func_433(PLAYER::PLAYER_ID())) && func_257(PLAYER::PLAYER_ID()) != 146) && !func_722()) && !func_721()) && !func_720(Global_4456448.f_190930)) && !func_188())
	{
		return 0;
	}
	return 1;
}

bool func_720(int iParam0)
{
	return iParam0 == 57;
}

int func_721()
{
	if (Global_4456448.f_154360 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_722()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_190930 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_723()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_724()
{
	Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_7 = 0;
}

void func_725()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_4735, 1))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_4735), 1);
	}
	if (Global_2531497.f_4735 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2531497.f_4735 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2531497.f_4745 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
		}
	}
}

void func_726()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574647 = { Var0 };
}

void func_727()
{
	var uVar0;
	
	Global_1319097 = uVar0;
}

void func_728()
{
	Global_2531497.f_4736 = 0;
}

void func_729()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1628955[PLAYER::PLAYER_ID() /*614*/].f_1 = 0;
	}
}

void func_730()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628955[iVar0 /*614*/] = -1;
	}
}

void func_731(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, func_214(iParam1), 0);
	iVar0++;
	if (!func_271(iParam0))
	{
		func_270(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_269(iParam0, iVar0, iParam1, 1);
	}
}

int func_732(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

int func_733(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_218(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_734()
{
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 3) || MISC::IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 5))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 5);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 3))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 3);
	}
	if (MISC::IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		MISC::CLEAR_BIT(&(Global_2531497.f_1735), 4);
	}
	func_737(0);
	func_736(0);
	func_735(0);
}

void func_735(int iParam0)
{
	if (Global_2531497.f_4520 != iParam0)
	{
		Global_2531497.f_4520 = iParam0;
	}
}

void func_736(bool bParam0)
{
	if (Global_2531497.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2531497.f_4519 = bParam0;
	}
}

void func_737(int iParam0)
{
	if (Global_2531497.f_4517 != iParam0)
	{
		Global_2531497.f_4517 = iParam0;
	}
}

void func_738(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_739(struct<21> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_753(Param0);
	func_752(iVar3, Param0);
	func_751(0, -1, 0);
	func_749(141);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 284);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_116, 161);
	if (!func_748())
	{
		func_707();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_230(29, 1);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = func_744();
			func_741(func_743(141, iVar0, 0, 0));
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_740(iVar1, iVar0);
				iVar1++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_112.f_214), &(Local_112.f_215));
		}
		Local_113.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_113.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Local_113.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar2 = 0;
		while (iVar2 < 32)
		{
			Local_112.f_250[iVar2] = -1;
			iVar2++;
		}
		func_502(0);
	}
	else
	{
		func_707();
	}
}

void func_740(int iParam0, int iParam1)
{
	Local_112.f_6[iParam0 /*204*/].f_69 = iParam1;
}

void func_741(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 226654995;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	iVar1 = func_742(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_742(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_754(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_36(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_743(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

var func_744()
{
	int iVar0;
	int iVar1[8];
	int iVar2;
	var uVar3;
	
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		if (func_747(iVar2) && !func_745(141, iVar2, 0, 0))
		{
			iVar1[iVar0] = iVar2;
			iVar0++;
		}
		iVar2++;
	}
	uVar3 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0)];
	return uVar3;
}

int func_745(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_746(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2501271.f_130[iVar0 /*2*/] == iVar1 && Global_2501271.f_130[iVar0 /*2*/].f_1 == func_743(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_746(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		default:
	}
	return -1;
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11194)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_262145.f_11195)
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_262145.f_11196)
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_262145.f_11197)
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_262145.f_11198)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_11199)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_11200)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_262145.f_11201)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_748()
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
		if (func_702())
		{
			return 0;
		}
		if (func_700(157))
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

void func_749(int iParam0)
{
	func_726();
	func_750();
	func_728();
	Global_1574647.f_4 = iParam0;
	Global_1574647.f_5 = iParam0;
	func_227(iParam0, -1);
	func_254(&(Global_1574647.f_18), 0, 0);
	Global_2531497.f_4588 = 0;
	Global_2460066[0] = func_27();
	Global_2460066[1] = func_27();
	Global_2460066[2] = func_27();
	Global_2460066[3] = func_27();
	Global_2460066[4] = func_27();
	func_724();
	if (!func_324(func_325()))
	{
		func_424();
	}
	if (func_136() && !func_135())
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574647.f_1), 17);
	}
}

void func_750()
{
	var uVar0;
	
	Global_1574672 = uVar0;
}

int func_751(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_708();
			}
			else
			{
				return 0;
			}
		}
		if (!func_285())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_708();
					}
					else
					{
						return 0;
					}
				}
				if (func_702())
				{
					if (!bParam2)
					{
						func_708();
					}
					else
					{
						return 0;
					}
				}
				if (func_700(157))
				{
					if (!bParam2)
					{
						func_708();
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
					func_708();
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
				func_708();
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
			func_708();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_752(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_708();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_753(int iParam0)
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

int func_754(int iParam0, bool bParam1, bool bParam2)
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

